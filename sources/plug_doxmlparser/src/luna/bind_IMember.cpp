#include <plug_common.h>

class luna_wrapper_IMember {
public:
	typedef Luna< IMember > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_compound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_section(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_kind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_kindString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_protection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_virtualness(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_typeString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readAccessor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_writeAccessor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_definition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_argsstring(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isConst(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isVolatile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isStatic(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isExplicit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isInline(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isMutable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isReadable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isWritable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_parameters(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_templateParameters(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_initializer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_exceptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_references(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_referencedBy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_bodyFile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_bodyStart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_bodyEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_definitionFile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_definitionLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reimplements(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reimplementedBy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_briefDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_detailedDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_inbodyDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_compound(lua_State *L) {
		if (!_lg_typecheck_compound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in compound function, expected prototype:\ncompound()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call compound(...)");
		}
		ICompound * lret = self->compound();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompound >::push(L,lret,false);

		return 1;
	}

	static int _bind_section(lua_State *L) {
		if (!_lg_typecheck_section(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in section function, expected prototype:\nsection()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call section(...)");
		}
		ISection * lret = self->section();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ISection >::push(L,lret,false);

		return 1;
	}

	static int _bind_kind(lua_State *L) {
		if (!_lg_typecheck_kind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in kind function, expected prototype:\nkind()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call kind(...)");
		}
		IMember::MemberKind lret = self->kind();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_kindString(lua_State *L) {
		if (!_lg_typecheck_kindString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in kindString function, expected prototype:\nkindString()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call kindString(...)");
		}
		const IString * lret = self->kindString();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_id(lua_State *L) {
		if (!_lg_typecheck_id(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in id function, expected prototype:\nid()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call id(...)");
		}
		const IString * lret = self->id();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_protection(lua_State *L) {
		if (!_lg_typecheck_protection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in protection function, expected prototype:\nprotection()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call protection(...)");
		}
		const IString * lret = self->protection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_virtualness(lua_State *L) {
		if (!_lg_typecheck_virtualness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in virtualness function, expected prototype:\nvirtualness()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call virtualness(...)");
		}
		const IString * lret = self->virtualness();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_type(lua_State *L) {
		if (!_lg_typecheck_type(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in type function, expected prototype:\ntype()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call type(...)");
		}
		ILinkedTextIterator * lret = self->type();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedTextIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_typeString(lua_State *L) {
		if (!_lg_typecheck_typeString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in typeString function, expected prototype:\ntypeString()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call typeString(...)");
		}
		const IString * lret = self->typeString();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_name(lua_State *L) {
		if (!_lg_typecheck_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in name function, expected prototype:\nname()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call name(...)");
		}
		const IString * lret = self->name();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_readAccessor(lua_State *L) {
		if (!_lg_typecheck_readAccessor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in readAccessor function, expected prototype:\nreadAccessor()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call readAccessor(...)");
		}
		const IString * lret = self->readAccessor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_writeAccessor(lua_State *L) {
		if (!_lg_typecheck_writeAccessor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in writeAccessor function, expected prototype:\nwriteAccessor()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call writeAccessor(...)");
		}
		const IString * lret = self->writeAccessor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_definition(lua_State *L) {
		if (!_lg_typecheck_definition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in definition function, expected prototype:\ndefinition()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call definition(...)");
		}
		const IString * lret = self->definition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_argsstring(lua_State *L) {
		if (!_lg_typecheck_argsstring(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in argsstring function, expected prototype:\nargsstring()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call argsstring(...)");
		}
		const IString * lret = self->argsstring();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_isConst(lua_State *L) {
		if (!_lg_typecheck_isConst(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in isConst function, expected prototype:\nisConst()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call isConst(...)");
		}
		bool lret = self->isConst();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	static int _bind_isVolatile(lua_State *L) {
		if (!_lg_typecheck_isVolatile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in isVolatile function, expected prototype:\nisVolatile()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call isVolatile(...)");
		}
		bool lret = self->isVolatile();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	static int _bind_isStatic(lua_State *L) {
		if (!_lg_typecheck_isStatic(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in isStatic function, expected prototype:\nisStatic()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call isStatic(...)");
		}
		bool lret = self->isStatic();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	static int _bind_isExplicit(lua_State *L) {
		if (!_lg_typecheck_isExplicit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in isExplicit function, expected prototype:\nisExplicit()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call isExplicit(...)");
		}
		bool lret = self->isExplicit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	static int _bind_isInline(lua_State *L) {
		if (!_lg_typecheck_isInline(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in isInline function, expected prototype:\nisInline()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call isInline(...)");
		}
		bool lret = self->isInline();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	static int _bind_isMutable(lua_State *L) {
		if (!_lg_typecheck_isMutable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in isMutable function, expected prototype:\nisMutable()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call isMutable(...)");
		}
		bool lret = self->isMutable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	static int _bind_isReadable(lua_State *L) {
		if (!_lg_typecheck_isReadable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in isReadable function, expected prototype:\nisReadable()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call isReadable(...)");
		}
		bool lret = self->isReadable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	static int _bind_isWritable(lua_State *L) {
		if (!_lg_typecheck_isWritable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in isWritable function, expected prototype:\nisWritable()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call isWritable(...)");
		}
		bool lret = self->isWritable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	static int _bind_parameters(lua_State *L) {
		if (!_lg_typecheck_parameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in parameters function, expected prototype:\nparameters()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call parameters(...)");
		}
		IParamIterator * lret = self->parameters();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IParamIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_templateParameters(lua_State *L) {
		if (!_lg_typecheck_templateParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in templateParameters function, expected prototype:\ntemplateParameters()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call templateParameters(...)");
		}
		IParamIterator * lret = self->templateParameters();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IParamIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_initializer(lua_State *L) {
		if (!_lg_typecheck_initializer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in initializer function, expected prototype:\ninitializer()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call initializer(...)");
		}
		ILinkedTextIterator * lret = self->initializer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedTextIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_exceptions(lua_State *L) {
		if (!_lg_typecheck_exceptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in exceptions function, expected prototype:\nexceptions()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call exceptions(...)");
		}
		ILinkedTextIterator * lret = self->exceptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ILinkedTextIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_references(lua_State *L) {
		if (!_lg_typecheck_references(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in references function, expected prototype:\nreferences()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call references(...)");
		}
		IMemberReferenceIterator * lret = self->references();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberReferenceIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_referencedBy(lua_State *L) {
		if (!_lg_typecheck_referencedBy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in referencedBy function, expected prototype:\nreferencedBy()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call referencedBy(...)");
		}
		IMemberReferenceIterator * lret = self->referencedBy();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberReferenceIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_bodyFile(lua_State *L) {
		if (!_lg_typecheck_bodyFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bodyFile function, expected prototype:\nbodyFile()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bodyFile(...)");
		}
		const IString * lret = self->bodyFile();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_bodyStart(lua_State *L) {
		if (!_lg_typecheck_bodyStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bodyStart function, expected prototype:\nbodyStart()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bodyStart(...)");
		}
		int lret = self->bodyStart();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_bodyEnd(lua_State *L) {
		if (!_lg_typecheck_bodyEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bodyEnd function, expected prototype:\nbodyEnd()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bodyEnd(...)");
		}
		int lret = self->bodyEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_definitionFile(lua_State *L) {
		if (!_lg_typecheck_definitionFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in definitionFile function, expected prototype:\ndefinitionFile()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call definitionFile(...)");
		}
		const IString * lret = self->definitionFile();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_definitionLine(lua_State *L) {
		if (!_lg_typecheck_definitionLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in definitionLine function, expected prototype:\ndefinitionLine()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call definitionLine(...)");
		}
		int lret = self->definitionLine();
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_reimplements(lua_State *L) {
		if (!_lg_typecheck_reimplements(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in reimplements function, expected prototype:\nreimplements()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call reimplements(...)");
		}
		IMemberReference * lret = self->reimplements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberReference >::push(L,lret,false);

		return 1;
	}

	static int _bind_reimplementedBy(lua_State *L) {
		if (!_lg_typecheck_reimplementedBy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in reimplementedBy function, expected prototype:\nreimplementedBy()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call reimplementedBy(...)");
		}
		IMemberReferenceIterator * lret = self->reimplementedBy();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberReferenceIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_briefDescription(lua_State *L) {
		if (!_lg_typecheck_briefDescription(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in briefDescription function, expected prototype:\nbriefDescription()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call briefDescription(...)");
		}
		IDocRoot * lret = self->briefDescription();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocRoot >::push(L,lret,false);

		return 1;
	}

	static int _bind_detailedDescription(lua_State *L) {
		if (!_lg_typecheck_detailedDescription(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in detailedDescription function, expected prototype:\ndetailedDescription()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call detailedDescription(...)");
		}
		IDocRoot * lret = self->detailedDescription();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocRoot >::push(L,lret,false);

		return 1;
	}

	static int _bind_inbodyDescription(lua_State *L) {
		if (!_lg_typecheck_inbodyDescription(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in inbodyDescription function, expected prototype:\ninbodyDescription()");
		}


		IMember* self=(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call inbodyDescription(...)");
		}
		IDocRoot * lret = self->inbodyDescription();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocRoot >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IMember* LunaTraits< IMember >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IMember >::_bind_dtor(IMember* obj) {
	delete obj;
}

const char LunaTraits< IMember >::className[] = "IMember";
const char LunaTraits< IMember >::moduleName[] = "doxmlparser";
const char* LunaTraits< IMember >::parents[] = {0};
const int LunaTraits< IMember >::uniqueIDs[] = {88829564,0};

luna_RegType LunaTraits< IMember >::methods[] = {
	{"compound", &luna_wrapper_IMember::_bind_compound},
	{"section", &luna_wrapper_IMember::_bind_section},
	{"kind", &luna_wrapper_IMember::_bind_kind},
	{"kindString", &luna_wrapper_IMember::_bind_kindString},
	{"id", &luna_wrapper_IMember::_bind_id},
	{"protection", &luna_wrapper_IMember::_bind_protection},
	{"virtualness", &luna_wrapper_IMember::_bind_virtualness},
	{"type", &luna_wrapper_IMember::_bind_type},
	{"typeString", &luna_wrapper_IMember::_bind_typeString},
	{"name", &luna_wrapper_IMember::_bind_name},
	{"readAccessor", &luna_wrapper_IMember::_bind_readAccessor},
	{"writeAccessor", &luna_wrapper_IMember::_bind_writeAccessor},
	{"definition", &luna_wrapper_IMember::_bind_definition},
	{"argsstring", &luna_wrapper_IMember::_bind_argsstring},
	{"isConst", &luna_wrapper_IMember::_bind_isConst},
	{"isVolatile", &luna_wrapper_IMember::_bind_isVolatile},
	{"isStatic", &luna_wrapper_IMember::_bind_isStatic},
	{"isExplicit", &luna_wrapper_IMember::_bind_isExplicit},
	{"isInline", &luna_wrapper_IMember::_bind_isInline},
	{"isMutable", &luna_wrapper_IMember::_bind_isMutable},
	{"isReadable", &luna_wrapper_IMember::_bind_isReadable},
	{"isWritable", &luna_wrapper_IMember::_bind_isWritable},
	{"parameters", &luna_wrapper_IMember::_bind_parameters},
	{"templateParameters", &luna_wrapper_IMember::_bind_templateParameters},
	{"initializer", &luna_wrapper_IMember::_bind_initializer},
	{"exceptions", &luna_wrapper_IMember::_bind_exceptions},
	{"references", &luna_wrapper_IMember::_bind_references},
	{"referencedBy", &luna_wrapper_IMember::_bind_referencedBy},
	{"bodyFile", &luna_wrapper_IMember::_bind_bodyFile},
	{"bodyStart", &luna_wrapper_IMember::_bind_bodyStart},
	{"bodyEnd", &luna_wrapper_IMember::_bind_bodyEnd},
	{"definitionFile", &luna_wrapper_IMember::_bind_definitionFile},
	{"definitionLine", &luna_wrapper_IMember::_bind_definitionLine},
	{"reimplements", &luna_wrapper_IMember::_bind_reimplements},
	{"reimplementedBy", &luna_wrapper_IMember::_bind_reimplementedBy},
	{"briefDescription", &luna_wrapper_IMember::_bind_briefDescription},
	{"detailedDescription", &luna_wrapper_IMember::_bind_detailedDescription},
	{"inbodyDescription", &luna_wrapper_IMember::_bind_inbodyDescription},
	{0,0}
};

luna_RegEnumType LunaTraits< IMember >::enumValues[] = {
	{"Invalid", IMember::Invalid},
	{"Define", IMember::Define},
	{"Property", IMember::Property},
	{"Variable", IMember::Variable},
	{"Typedef", IMember::Typedef},
	{"Enum", IMember::Enum},
	{"Function", IMember::Function},
	{"Signal", IMember::Signal},
	{"Prototype", IMember::Prototype},
	{"Friend", IMember::Friend},
	{"DCOP", IMember::DCOP},
	{"Slot", IMember::Slot},
	{"EnumValue", IMember::EnumValue},
	{0,0}
};


