#include <plug_common.h>

// Function checkers:
inline static bool _lg_typecheck_createObjectModel(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_toClass(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,27352831)) ) return false;
	return true;
}

inline static bool _lg_typecheck_toFile(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,27352831)) ) return false;
	return true;
}

inline static bool _lg_typecheck_toEnum(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,88829564)) ) return false;
	return true;
}

inline static bool _lg_typecheck_toNamespace(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,27352831)) ) return false;
	return true;
}

inline static bool _lg_typecheck_toLinkText(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,94836970)) ) return false;
	return true;
}

inline static bool _lg_typecheck_toLinkRef(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,94836970)) ) return false;
	return true;
}

inline static bool _lg_typecheck_toDocText(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,2243631)) ) return false;
	return true;
}

inline static bool _lg_typecheck_toDocPara(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,2243631)) ) return false;
	return true;
}


// Function binds:
static int _bind_createObjectModel(lua_State *L) {
	if (!_lg_typecheck_createObjectModel(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in createObjectModel function, expected prototype:\ncreateObjectModel()");
	}


	IDoxygen * lret = createObjectModel();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< IDoxygen >::push(L,lret,false);

	return 1;
}

static int _bind_toClass(lua_State *L) {
	if (!_lg_typecheck_toClass(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in toClass function, expected prototype:\ntoClass(ICompound *)");
	}

	ICompound* comp=(Luna< ICompound >::check(L,1));

	IClass * lret = toClass(comp);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< IClass >::push(L,lret,false);

	return 1;
}

static int _bind_toFile(lua_State *L) {
	if (!_lg_typecheck_toFile(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in toFile function, expected prototype:\ntoFile(ICompound *)");
	}

	ICompound* comp=(Luna< ICompound >::check(L,1));

	IFile * lret = toFile(comp);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< IFile >::push(L,lret,false);

	return 1;
}

static int _bind_toEnum(lua_State *L) {
	if (!_lg_typecheck_toEnum(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in toEnum function, expected prototype:\ntoEnum(IMember *)");
	}

	IMember* comp=(Luna< IMember >::check(L,1));

	IEnum * lret = toEnum(comp);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< IEnum >::push(L,lret,false);

	return 1;
}

static int _bind_toNamespace(lua_State *L) {
	if (!_lg_typecheck_toNamespace(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in toNamespace function, expected prototype:\ntoNamespace(ICompound *)");
	}

	ICompound* comp=(Luna< ICompound >::check(L,1));

	INamespace * lret = toNamespace(comp);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< INamespace >::push(L,lret,false);

	return 1;
}

static int _bind_toLinkText(lua_State *L) {
	if (!_lg_typecheck_toLinkText(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in toLinkText function, expected prototype:\ntoLinkText(ILinkedText *)");
	}

	ILinkedText* ilt=(Luna< ILinkedText >::check(L,1));

	ILT_Text * lret = toLinkText(ilt);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< ILT_Text >::push(L,lret,false);

	return 1;
}

static int _bind_toLinkRef(lua_State *L) {
	if (!_lg_typecheck_toLinkRef(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in toLinkRef function, expected prototype:\ntoLinkRef(ILinkedText *)");
	}

	ILinkedText* ilt=(Luna< ILinkedText >::check(L,1));

	ILT_Ref * lret = toLinkRef(ilt);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< ILT_Ref >::push(L,lret,false);

	return 1;
}

static int _bind_toDocText(lua_State *L) {
	if (!_lg_typecheck_toDocText(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in toDocText function, expected prototype:\ntoDocText(IDoc *)");
	}

	IDoc* doc=(Luna< IDoc >::check(L,1));

	IDocText * lret = toDocText(doc);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< IDocText >::push(L,lret,false);

	return 1;
}

static int _bind_toDocPara(lua_State *L) {
	if (!_lg_typecheck_toDocPara(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in toDocPara function, expected prototype:\ntoDocPara(IDoc *)");
	}

	IDoc* doc=(Luna< IDoc >::check(L,1));

	IDocPara * lret = toDocPara(doc);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< IDocPara >::push(L,lret,false);

	return 1;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	lua_pushcfunction(L, _bind_createObjectModel); lua_setfield(L,-2,"createObjectModel");
	lua_pushcfunction(L, _bind_toClass); lua_setfield(L,-2,"toClass");
	lua_pushcfunction(L, _bind_toFile); lua_setfield(L,-2,"toFile");
	lua_pushcfunction(L, _bind_toEnum); lua_setfield(L,-2,"toEnum");
	lua_pushcfunction(L, _bind_toNamespace); lua_setfield(L,-2,"toNamespace");
	lua_pushcfunction(L, _bind_toLinkText); lua_setfield(L,-2,"toLinkText");
	lua_pushcfunction(L, _bind_toLinkRef); lua_setfield(L,-2,"toLinkRef");
	lua_pushcfunction(L, _bind_toDocText); lua_setfield(L,-2,"toDocText");
	lua_pushcfunction(L, _bind_toDocPara); lua_setfield(L,-2,"toDocPara");
}

#ifdef __cplusplus
}
#endif

