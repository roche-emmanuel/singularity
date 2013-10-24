#include <plug_common.h>

class luna_wrapper_mglDrawDat {
public:
	typedef Luna< mglDrawDat > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11921091) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglDrawDat*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mglDrawDat* rhs =(Luna< mglDrawDat >::check(L,2));
		mglDrawDat* self=(Luna< mglDrawDat >::check(L,1));
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

		mglDrawDat* self= (mglDrawDat*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglDrawDat >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11921091) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< mglDrawDat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		mglDrawDat* self=(Luna< mglDrawDat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglDrawDat");
		
		return luna_dynamicCast(L,converters,"mglDrawDat",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getPnt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPtx(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGlf(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTxt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPnt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,43804529) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPrm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61379625) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPtx(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,64344026) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGlf(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58395729) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTxt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52583290) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// std::vector< mglPnt > mglDrawDat::Pnt()
	static int _bind_getPnt(lua_State *L) {
		if (!_lg_typecheck_getPnt(L)) {
			luaL_error(L, "luna typecheck failed in std::vector< mglPnt > mglDrawDat::Pnt() function, expected prototype:\nstd::vector< mglPnt > mglDrawDat::Pnt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglDrawDat* self=(Luna< mglDrawDat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::vector< mglPnt > mglDrawDat::Pnt(). Got : '%s'\n%s",typeid(Luna< mglDrawDat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::vector< mglPnt >* lret = &self->Pnt;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::vector< mglPnt > >::push(L,lret,false);

		return 1;
	}

	// std::vector< mglPrim > mglDrawDat::Prm()
	static int _bind_getPrm(lua_State *L) {
		if (!_lg_typecheck_getPrm(L)) {
			luaL_error(L, "luna typecheck failed in std::vector< mglPrim > mglDrawDat::Prm() function, expected prototype:\nstd::vector< mglPrim > mglDrawDat::Prm()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglDrawDat* self=(Luna< mglDrawDat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::vector< mglPrim > mglDrawDat::Prm(). Got : '%s'\n%s",typeid(Luna< mglDrawDat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::vector< mglPrim >* lret = &self->Prm;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::vector< mglPrim > >::push(L,lret,false);

		return 1;
	}

	// std::vector< mglText > mglDrawDat::Ptx()
	static int _bind_getPtx(lua_State *L) {
		if (!_lg_typecheck_getPtx(L)) {
			luaL_error(L, "luna typecheck failed in std::vector< mglText > mglDrawDat::Ptx() function, expected prototype:\nstd::vector< mglText > mglDrawDat::Ptx()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglDrawDat* self=(Luna< mglDrawDat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::vector< mglText > mglDrawDat::Ptx(). Got : '%s'\n%s",typeid(Luna< mglDrawDat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::vector< mglText >* lret = &self->Ptx;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::vector< mglText > >::push(L,lret,false);

		return 1;
	}

	// std::vector< mglGlyph > mglDrawDat::Glf()
	static int _bind_getGlf(lua_State *L) {
		if (!_lg_typecheck_getGlf(L)) {
			luaL_error(L, "luna typecheck failed in std::vector< mglGlyph > mglDrawDat::Glf() function, expected prototype:\nstd::vector< mglGlyph > mglDrawDat::Glf()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglDrawDat* self=(Luna< mglDrawDat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::vector< mglGlyph > mglDrawDat::Glf(). Got : '%s'\n%s",typeid(Luna< mglDrawDat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::vector< mglGlyph >* lret = &self->Glf;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::vector< mglGlyph > >::push(L,lret,false);

		return 1;
	}

	// std::vector< mglTexture > mglDrawDat::Txt()
	static int _bind_getTxt(lua_State *L) {
		if (!_lg_typecheck_getTxt(L)) {
			luaL_error(L, "luna typecheck failed in std::vector< mglTexture > mglDrawDat::Txt() function, expected prototype:\nstd::vector< mglTexture > mglDrawDat::Txt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglDrawDat* self=(Luna< mglDrawDat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::vector< mglTexture > mglDrawDat::Txt(). Got : '%s'\n%s",typeid(Luna< mglDrawDat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::vector< mglTexture >* lret = &self->Txt;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::vector< mglTexture > >::push(L,lret,false);

		return 1;
	}

	// void mglDrawDat::Pnt(std::vector< mglPnt > value)
	static int _bind_setPnt(lua_State *L) {
		if (!_lg_typecheck_setPnt(L)) {
			luaL_error(L, "luna typecheck failed in void mglDrawDat::Pnt(std::vector< mglPnt > value) function, expected prototype:\nvoid mglDrawDat::Pnt(std::vector< mglPnt > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< mglPnt >* value_ptr=(Luna< std::vector< mglPnt > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglDrawDat::Pnt function");
		}
		std::vector< mglPnt > value=*value_ptr;

		mglDrawDat* self=(Luna< mglDrawDat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglDrawDat::Pnt(std::vector< mglPnt >). Got : '%s'\n%s",typeid(Luna< mglDrawDat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Pnt = value;

		return 0;
	}

	// void mglDrawDat::Prm(std::vector< mglPrim > value)
	static int _bind_setPrm(lua_State *L) {
		if (!_lg_typecheck_setPrm(L)) {
			luaL_error(L, "luna typecheck failed in void mglDrawDat::Prm(std::vector< mglPrim > value) function, expected prototype:\nvoid mglDrawDat::Prm(std::vector< mglPrim > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< mglPrim >* value_ptr=(Luna< std::vector< mglPrim > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglDrawDat::Prm function");
		}
		std::vector< mglPrim > value=*value_ptr;

		mglDrawDat* self=(Luna< mglDrawDat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglDrawDat::Prm(std::vector< mglPrim >). Got : '%s'\n%s",typeid(Luna< mglDrawDat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Prm = value;

		return 0;
	}

	// void mglDrawDat::Ptx(std::vector< mglText > value)
	static int _bind_setPtx(lua_State *L) {
		if (!_lg_typecheck_setPtx(L)) {
			luaL_error(L, "luna typecheck failed in void mglDrawDat::Ptx(std::vector< mglText > value) function, expected prototype:\nvoid mglDrawDat::Ptx(std::vector< mglText > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< mglText >* value_ptr=(Luna< std::vector< mglText > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglDrawDat::Ptx function");
		}
		std::vector< mglText > value=*value_ptr;

		mglDrawDat* self=(Luna< mglDrawDat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglDrawDat::Ptx(std::vector< mglText >). Got : '%s'\n%s",typeid(Luna< mglDrawDat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Ptx = value;

		return 0;
	}

	// void mglDrawDat::Glf(std::vector< mglGlyph > value)
	static int _bind_setGlf(lua_State *L) {
		if (!_lg_typecheck_setGlf(L)) {
			luaL_error(L, "luna typecheck failed in void mglDrawDat::Glf(std::vector< mglGlyph > value) function, expected prototype:\nvoid mglDrawDat::Glf(std::vector< mglGlyph > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< mglGlyph >* value_ptr=(Luna< std::vector< mglGlyph > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglDrawDat::Glf function");
		}
		std::vector< mglGlyph > value=*value_ptr;

		mglDrawDat* self=(Luna< mglDrawDat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglDrawDat::Glf(std::vector< mglGlyph >). Got : '%s'\n%s",typeid(Luna< mglDrawDat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Glf = value;

		return 0;
	}

	// void mglDrawDat::Txt(std::vector< mglTexture > value)
	static int _bind_setTxt(lua_State *L) {
		if (!_lg_typecheck_setTxt(L)) {
			luaL_error(L, "luna typecheck failed in void mglDrawDat::Txt(std::vector< mglTexture > value) function, expected prototype:\nvoid mglDrawDat::Txt(std::vector< mglTexture > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< mglTexture >* value_ptr=(Luna< std::vector< mglTexture > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglDrawDat::Txt function");
		}
		std::vector< mglTexture > value=*value_ptr;

		mglDrawDat* self=(Luna< mglDrawDat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglDrawDat::Txt(std::vector< mglTexture >). Got : '%s'\n%s",typeid(Luna< mglDrawDat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Txt = value;

		return 0;
	}


	// Operator binds:

};

mglDrawDat* LunaTraits< mglDrawDat >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< mglDrawDat >::_bind_dtor(mglDrawDat* obj) {
	delete obj;
}

const char LunaTraits< mglDrawDat >::className[] = "mglDrawDat";
const char LunaTraits< mglDrawDat >::fullName[] = "mglDrawDat";
const char LunaTraits< mglDrawDat >::moduleName[] = "mathgl";
const char* LunaTraits< mglDrawDat >::parents[] = {0};
const int LunaTraits< mglDrawDat >::hash = 11921091;
const int LunaTraits< mglDrawDat >::uniqueIDs[] = {11921091,0};

luna_RegType LunaTraits< mglDrawDat >::methods[] = {
	{"getPnt", &luna_wrapper_mglDrawDat::_bind_getPnt},
	{"getPrm", &luna_wrapper_mglDrawDat::_bind_getPrm},
	{"getPtx", &luna_wrapper_mglDrawDat::_bind_getPtx},
	{"getGlf", &luna_wrapper_mglDrawDat::_bind_getGlf},
	{"getTxt", &luna_wrapper_mglDrawDat::_bind_getTxt},
	{"setPnt", &luna_wrapper_mglDrawDat::_bind_setPnt},
	{"setPrm", &luna_wrapper_mglDrawDat::_bind_setPrm},
	{"setPtx", &luna_wrapper_mglDrawDat::_bind_setPtx},
	{"setGlf", &luna_wrapper_mglDrawDat::_bind_setGlf},
	{"setTxt", &luna_wrapper_mglDrawDat::_bind_setTxt},
	{"dynCast", &luna_wrapper_mglDrawDat::_bind_dynCast},
	{"__eq", &luna_wrapper_mglDrawDat::_bind___eq},
	{"fromVoid", &luna_wrapper_mglDrawDat::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglDrawDat::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglDrawDat >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglDrawDat >::enumValues[] = {
	{0,0}
};


