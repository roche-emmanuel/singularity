#include <plug_common.h>

class luna_wrapper_wxXmlNode {
public:
	typedef Luna< wxXmlNode > luna_t;

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxXmlNode");
		
		return luna_dynamicCast(L,converters,"wxXmlNode",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,64848530)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,23837631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,64848530)) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,64848530) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddAttribute_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddAttribute_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,23837631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAttribute(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAttribute_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAttribute_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetChildren(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetContent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDepth(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNoConversion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLineNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNodeContent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasAttribute(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertChildAfter(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsWhitespaceOnly(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RemoveChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAttributes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,23837631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetContent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNoConversion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxXmlNode::wxXmlNode(wxXmlNode * parent, wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, wxXmlAttribute * attrs = NULL, wxXmlNode * next = NULL, int lineNo = -1)
	static wxXmlNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxXmlNode::wxXmlNode(wxXmlNode * parent, wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, wxXmlAttribute * attrs = NULL, wxXmlNode * next = NULL, int lineNo = -1) function, expected prototype:\nwxXmlNode::wxXmlNode(wxXmlNode * parent, wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, wxXmlAttribute * attrs = NULL, wxXmlNode * next = NULL, int lineNo = -1)\nClass arguments details:\narg 1 ID = 64848530\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 23837631\narg 6 ID = 64848530\n");
		}

		int luatop = lua_gettop(L);

		wxXmlNode* parent=(Luna< wxXmlNode >::check(L,1));
		wxXmlNodeType type=(wxXmlNodeType)lua_tointeger(L,2);
		wxString name(lua_tostring(L,3),lua_objlen(L,3));
		wxString content(lua_tostring(L,4),lua_objlen(L,4));
		wxXmlAttribute* attrs=luatop>4 ? (Luna< wxXmlAttribute >::check(L,5)) : (wxXmlAttribute*)NULL;
		wxXmlNode* next=luatop>5 ? (Luna< wxXmlNode >::check(L,6)) : (wxXmlNode*)NULL;
		int lineNo=luatop>6 ? (int)lua_tointeger(L,7) : -1;

		return new wxXmlNode(parent, type, name, content, attrs, next, lineNo);
	}

	// wxXmlNode::wxXmlNode(wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, int lineNo = -1)
	static wxXmlNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxXmlNode::wxXmlNode(wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, int lineNo = -1) function, expected prototype:\nwxXmlNode::wxXmlNode(wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, int lineNo = -1)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxXmlNodeType type=(wxXmlNodeType)lua_tointeger(L,1);
		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString content(lua_tostring(L,3),lua_objlen(L,3));
		int lineNo=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		return new wxXmlNode(type, name, content, lineNo);
	}

	// wxXmlNode::wxXmlNode(const wxXmlNode & node)
	static wxXmlNode* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxXmlNode::wxXmlNode(const wxXmlNode & node) function, expected prototype:\nwxXmlNode::wxXmlNode(const wxXmlNode & node)\nClass arguments details:\narg 1 ID = 64848530\n");
		}

		const wxXmlNode* node_ptr=(Luna< wxXmlNode >::check(L,1));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in wxXmlNode::wxXmlNode function");
		}
		const wxXmlNode & node=*node_ptr;

		return new wxXmlNode(node);
	}

	// Overload binder for wxXmlNode::wxXmlNode
	static wxXmlNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxXmlNode, cannot match any of the overloads for function wxXmlNode:\n  wxXmlNode(wxXmlNode *, wxXmlNodeType, const wxString &, const wxString &, wxXmlAttribute *, wxXmlNode *, int)\n  wxXmlNode(wxXmlNodeType, const wxString &, const wxString &, int)\n  wxXmlNode(const wxXmlNode &)\n");
		return NULL;
	}


	// Function binds:
	// void wxXmlNode::AddAttribute(const wxString & name, const wxString & value)
	static int _bind_AddAttribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddAttribute_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxXmlNode::AddAttribute(const wxString & name, const wxString & value) function, expected prototype:\nvoid wxXmlNode::AddAttribute(const wxString & name, const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString value(lua_tostring(L,3),lua_objlen(L,3));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxXmlNode::AddAttribute(const wxString &, const wxString &)");
		}
		self->AddAttribute(name, value);

		return 0;
	}

	// void wxXmlNode::AddAttribute(wxXmlAttribute * attr)
	static int _bind_AddAttribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddAttribute_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxXmlNode::AddAttribute(wxXmlAttribute * attr) function, expected prototype:\nvoid wxXmlNode::AddAttribute(wxXmlAttribute * attr)\nClass arguments details:\narg 1 ID = 23837631\n");
		}

		wxXmlAttribute* attr=(Luna< wxXmlAttribute >::check(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxXmlNode::AddAttribute(wxXmlAttribute *)");
		}
		self->AddAttribute(attr);

		return 0;
	}

	// Overload binder for wxXmlNode::AddAttribute
	static int _bind_AddAttribute(lua_State *L) {
		if (_lg_typecheck_AddAttribute_overload_1(L)) return _bind_AddAttribute_overload_1(L);
		if (_lg_typecheck_AddAttribute_overload_2(L)) return _bind_AddAttribute_overload_2(L);

		luaL_error(L, "error in function AddAttribute, cannot match any of the overloads for function AddAttribute:\n  AddAttribute(const wxString &, const wxString &)\n  AddAttribute(wxXmlAttribute *)\n");
		return 0;
	}

	// void wxXmlNode::AddChild(wxXmlNode * child)
	static int _bind_AddChild(lua_State *L) {
		if (!_lg_typecheck_AddChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxXmlNode::AddChild(wxXmlNode * child) function, expected prototype:\nvoid wxXmlNode::AddChild(wxXmlNode * child)\nClass arguments details:\narg 1 ID = 64848530\n");
		}

		wxXmlNode* child=(Luna< wxXmlNode >::check(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxXmlNode::AddChild(wxXmlNode *)");
		}
		self->AddChild(child);

		return 0;
	}

	// bool wxXmlNode::DeleteAttribute(const wxString & name)
	static int _bind_DeleteAttribute(lua_State *L) {
		if (!_lg_typecheck_DeleteAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::DeleteAttribute(const wxString & name) function, expected prototype:\nbool wxXmlNode::DeleteAttribute(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxXmlNode::DeleteAttribute(const wxString &)");
		}
		bool lret = self->DeleteAttribute(name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxXmlNode::GetAttribute(const wxString & attrName, wxString * value) const
	static int _bind_GetAttribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetAttribute_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::GetAttribute(const wxString & attrName, wxString * value) const function, expected prototype:\nbool wxXmlNode::GetAttribute(const wxString & attrName, wxString * value) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString attrName(lua_tostring(L,2),lua_objlen(L,2));
		wxString value(lua_tostring(L,3),lua_objlen(L,3));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxXmlNode::GetAttribute(const wxString &, wxString *) const");
		}
		bool lret = self->GetAttribute(attrName, &value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxXmlNode::GetAttribute(const wxString & attrName, const wxString & defaultVal = wxEmptyString) const
	static int _bind_GetAttribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetAttribute_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxXmlNode::GetAttribute(const wxString & attrName, const wxString & defaultVal = wxEmptyString) const function, expected prototype:\nwxString wxXmlNode::GetAttribute(const wxString & attrName, const wxString & defaultVal = wxEmptyString) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString attrName(lua_tostring(L,2),lua_objlen(L,2));
		wxString defaultVal(lua_tostring(L,3),lua_objlen(L,3));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxXmlNode::GetAttribute(const wxString &, const wxString &) const");
		}
		wxString lret = self->GetAttribute(attrName, defaultVal);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxXmlNode::GetAttribute
	static int _bind_GetAttribute(lua_State *L) {
		if (_lg_typecheck_GetAttribute_overload_1(L)) return _bind_GetAttribute_overload_1(L);
		if (_lg_typecheck_GetAttribute_overload_2(L)) return _bind_GetAttribute_overload_2(L);

		luaL_error(L, "error in function GetAttribute, cannot match any of the overloads for function GetAttribute:\n  GetAttribute(const wxString &, wxString *)\n  GetAttribute(const wxString &, const wxString &)\n");
		return 0;
	}

	// wxXmlAttribute * wxXmlNode::GetAttributes() const
	static int _bind_GetAttributes(lua_State *L) {
		if (!_lg_typecheck_GetAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxXmlAttribute * wxXmlNode::GetAttributes() const function, expected prototype:\nwxXmlAttribute * wxXmlNode::GetAttributes() const\nClass arguments details:\n");
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxXmlAttribute * wxXmlNode::GetAttributes() const");
		}
		wxXmlAttribute * lret = self->GetAttributes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// wxXmlNode * wxXmlNode::GetChildren() const
	static int _bind_GetChildren(lua_State *L) {
		if (!_lg_typecheck_GetChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxXmlNode * wxXmlNode::GetChildren() const function, expected prototype:\nwxXmlNode * wxXmlNode::GetChildren() const\nClass arguments details:\n");
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxXmlNode * wxXmlNode::GetChildren() const");
		}
		wxXmlNode * lret = self->GetChildren();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxXmlNode >::push(L,lret,false);

		return 1;
	}

	// const wxString & wxXmlNode::GetContent() const
	static int _bind_GetContent(lua_State *L) {
		if (!_lg_typecheck_GetContent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxXmlNode::GetContent() const function, expected prototype:\nconst wxString & wxXmlNode::GetContent() const\nClass arguments details:\n");
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxXmlNode::GetContent() const");
		}
		const wxString & lret = self->GetContent();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxXmlNode::GetDepth(wxXmlNode * grandparent = NULL) const
	static int _bind_GetDepth(lua_State *L) {
		if (!_lg_typecheck_GetDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxXmlNode::GetDepth(wxXmlNode * grandparent = NULL) const function, expected prototype:\nint wxXmlNode::GetDepth(wxXmlNode * grandparent = NULL) const\nClass arguments details:\narg 1 ID = 64848530\n");
		}

		int luatop = lua_gettop(L);

		wxXmlNode* grandparent=luatop>1 ? (Luna< wxXmlNode >::check(L,2)) : (wxXmlNode*)NULL;

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxXmlNode::GetDepth(wxXmlNode *) const");
		}
		int lret = self->GetDepth(grandparent);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxXmlNode::GetNoConversion() const
	static int _bind_GetNoConversion(lua_State *L) {
		if (!_lg_typecheck_GetNoConversion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::GetNoConversion() const function, expected prototype:\nbool wxXmlNode::GetNoConversion() const\nClass arguments details:\n");
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxXmlNode::GetNoConversion() const");
		}
		bool lret = self->GetNoConversion();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxXmlNode::GetLineNumber() const
	static int _bind_GetLineNumber(lua_State *L) {
		if (!_lg_typecheck_GetLineNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxXmlNode::GetLineNumber() const function, expected prototype:\nint wxXmlNode::GetLineNumber() const\nClass arguments details:\n");
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxXmlNode::GetLineNumber() const");
		}
		int lret = self->GetLineNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxXmlNode::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxXmlNode::GetName() const function, expected prototype:\nconst wxString & wxXmlNode::GetName() const\nClass arguments details:\n");
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxXmlNode::GetName() const");
		}
		const wxString & lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxXmlNode * wxXmlNode::GetNext() const
	static int _bind_GetNext(lua_State *L) {
		if (!_lg_typecheck_GetNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxXmlNode * wxXmlNode::GetNext() const function, expected prototype:\nwxXmlNode * wxXmlNode::GetNext() const\nClass arguments details:\n");
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxXmlNode * wxXmlNode::GetNext() const");
		}
		wxXmlNode * lret = self->GetNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxXmlNode >::push(L,lret,false);

		return 1;
	}

	// wxString wxXmlNode::GetNodeContent() const
	static int _bind_GetNodeContent(lua_State *L) {
		if (!_lg_typecheck_GetNodeContent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxXmlNode::GetNodeContent() const function, expected prototype:\nwxString wxXmlNode::GetNodeContent() const\nClass arguments details:\n");
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxXmlNode::GetNodeContent() const");
		}
		wxString lret = self->GetNodeContent();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxXmlNode * wxXmlNode::GetParent() const
	static int _bind_GetParent(lua_State *L) {
		if (!_lg_typecheck_GetParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxXmlNode * wxXmlNode::GetParent() const function, expected prototype:\nwxXmlNode * wxXmlNode::GetParent() const\nClass arguments details:\n");
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxXmlNode * wxXmlNode::GetParent() const");
		}
		wxXmlNode * lret = self->GetParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxXmlNode >::push(L,lret,false);

		return 1;
	}

	// wxXmlNodeType wxXmlNode::GetType() const
	static int _bind_GetType(lua_State *L) {
		if (!_lg_typecheck_GetType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxXmlNodeType wxXmlNode::GetType() const function, expected prototype:\nwxXmlNodeType wxXmlNode::GetType() const\nClass arguments details:\n");
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxXmlNodeType wxXmlNode::GetType() const");
		}
		wxXmlNodeType lret = self->GetType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxXmlNode::HasAttribute(const wxString & attrName) const
	static int _bind_HasAttribute(lua_State *L) {
		if (!_lg_typecheck_HasAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::HasAttribute(const wxString & attrName) const function, expected prototype:\nbool wxXmlNode::HasAttribute(const wxString & attrName) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString attrName(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxXmlNode::HasAttribute(const wxString &) const");
		}
		bool lret = self->HasAttribute(attrName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxXmlNode::InsertChild(wxXmlNode * child, wxXmlNode * followingNode)
	static int _bind_InsertChild(lua_State *L) {
		if (!_lg_typecheck_InsertChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::InsertChild(wxXmlNode * child, wxXmlNode * followingNode) function, expected prototype:\nbool wxXmlNode::InsertChild(wxXmlNode * child, wxXmlNode * followingNode)\nClass arguments details:\narg 1 ID = 64848530\narg 2 ID = 64848530\n");
		}

		wxXmlNode* child=(Luna< wxXmlNode >::check(L,2));
		wxXmlNode* followingNode=(Luna< wxXmlNode >::check(L,3));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxXmlNode::InsertChild(wxXmlNode *, wxXmlNode *)");
		}
		bool lret = self->InsertChild(child, followingNode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxXmlNode::InsertChildAfter(wxXmlNode * child, wxXmlNode * precedingNode)
	static int _bind_InsertChildAfter(lua_State *L) {
		if (!_lg_typecheck_InsertChildAfter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::InsertChildAfter(wxXmlNode * child, wxXmlNode * precedingNode) function, expected prototype:\nbool wxXmlNode::InsertChildAfter(wxXmlNode * child, wxXmlNode * precedingNode)\nClass arguments details:\narg 1 ID = 64848530\narg 2 ID = 64848530\n");
		}

		wxXmlNode* child=(Luna< wxXmlNode >::check(L,2));
		wxXmlNode* precedingNode=(Luna< wxXmlNode >::check(L,3));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxXmlNode::InsertChildAfter(wxXmlNode *, wxXmlNode *)");
		}
		bool lret = self->InsertChildAfter(child, precedingNode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxXmlNode::IsWhitespaceOnly() const
	static int _bind_IsWhitespaceOnly(lua_State *L) {
		if (!_lg_typecheck_IsWhitespaceOnly(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::IsWhitespaceOnly() const function, expected prototype:\nbool wxXmlNode::IsWhitespaceOnly() const\nClass arguments details:\n");
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxXmlNode::IsWhitespaceOnly() const");
		}
		bool lret = self->IsWhitespaceOnly();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxXmlNode::RemoveChild(wxXmlNode * child)
	static int _bind_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_RemoveChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::RemoveChild(wxXmlNode * child) function, expected prototype:\nbool wxXmlNode::RemoveChild(wxXmlNode * child)\nClass arguments details:\narg 1 ID = 64848530\n");
		}

		wxXmlNode* child=(Luna< wxXmlNode >::check(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxXmlNode::RemoveChild(wxXmlNode *)");
		}
		bool lret = self->RemoveChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxXmlNode::SetAttributes(wxXmlAttribute * attr)
	static int _bind_SetAttributes(lua_State *L) {
		if (!_lg_typecheck_SetAttributes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxXmlNode::SetAttributes(wxXmlAttribute * attr) function, expected prototype:\nvoid wxXmlNode::SetAttributes(wxXmlAttribute * attr)\nClass arguments details:\narg 1 ID = 23837631\n");
		}

		wxXmlAttribute* attr=(Luna< wxXmlAttribute >::check(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxXmlNode::SetAttributes(wxXmlAttribute *)");
		}
		self->SetAttributes(attr);

		return 0;
	}

	// void wxXmlNode::SetChildren(wxXmlNode * child)
	static int _bind_SetChildren(lua_State *L) {
		if (!_lg_typecheck_SetChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxXmlNode::SetChildren(wxXmlNode * child) function, expected prototype:\nvoid wxXmlNode::SetChildren(wxXmlNode * child)\nClass arguments details:\narg 1 ID = 64848530\n");
		}

		wxXmlNode* child=(Luna< wxXmlNode >::check(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxXmlNode::SetChildren(wxXmlNode *)");
		}
		self->SetChildren(child);

		return 0;
	}

	// void wxXmlNode::SetContent(const wxString & con)
	static int _bind_SetContent(lua_State *L) {
		if (!_lg_typecheck_SetContent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxXmlNode::SetContent(const wxString & con) function, expected prototype:\nvoid wxXmlNode::SetContent(const wxString & con)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString con(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxXmlNode::SetContent(const wxString &)");
		}
		self->SetContent(con);

		return 0;
	}

	// void wxXmlNode::SetName(const wxString & name)
	static int _bind_SetName(lua_State *L) {
		if (!_lg_typecheck_SetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxXmlNode::SetName(const wxString & name) function, expected prototype:\nvoid wxXmlNode::SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxXmlNode::SetName(const wxString &)");
		}
		self->SetName(name);

		return 0;
	}

	// void wxXmlNode::SetNext(wxXmlNode * next)
	static int _bind_SetNext(lua_State *L) {
		if (!_lg_typecheck_SetNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxXmlNode::SetNext(wxXmlNode * next) function, expected prototype:\nvoid wxXmlNode::SetNext(wxXmlNode * next)\nClass arguments details:\narg 1 ID = 64848530\n");
		}

		wxXmlNode* next=(Luna< wxXmlNode >::check(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxXmlNode::SetNext(wxXmlNode *)");
		}
		self->SetNext(next);

		return 0;
	}

	// void wxXmlNode::SetNoConversion(bool noconversion)
	static int _bind_SetNoConversion(lua_State *L) {
		if (!_lg_typecheck_SetNoConversion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxXmlNode::SetNoConversion(bool noconversion) function, expected prototype:\nvoid wxXmlNode::SetNoConversion(bool noconversion)\nClass arguments details:\n");
		}

		bool noconversion=(bool)(lua_toboolean(L,2)==1);

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxXmlNode::SetNoConversion(bool)");
		}
		self->SetNoConversion(noconversion);

		return 0;
	}

	// void wxXmlNode::SetParent(wxXmlNode * parent)
	static int _bind_SetParent(lua_State *L) {
		if (!_lg_typecheck_SetParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxXmlNode::SetParent(wxXmlNode * parent) function, expected prototype:\nvoid wxXmlNode::SetParent(wxXmlNode * parent)\nClass arguments details:\narg 1 ID = 64848530\n");
		}

		wxXmlNode* parent=(Luna< wxXmlNode >::check(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxXmlNode::SetParent(wxXmlNode *)");
		}
		self->SetParent(parent);

		return 0;
	}

	// void wxXmlNode::SetType(wxXmlNodeType type)
	static int _bind_SetType(lua_State *L) {
		if (!_lg_typecheck_SetType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxXmlNode::SetType(wxXmlNodeType type) function, expected prototype:\nvoid wxXmlNode::SetType(wxXmlNodeType type)\nClass arguments details:\n");
		}

		wxXmlNodeType type=(wxXmlNodeType)lua_tointeger(L,2);

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxXmlNode::SetType(wxXmlNodeType)");
		}
		self->SetType(type);

		return 0;
	}


	// Operator binds:

};

wxXmlNode* LunaTraits< wxXmlNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxXmlNode::_bind_ctor(L);
}

void LunaTraits< wxXmlNode >::_bind_dtor(wxXmlNode* obj) {
	delete obj;
}

const char LunaTraits< wxXmlNode >::className[] = "wxXmlNode";
const char LunaTraits< wxXmlNode >::fullName[] = "wxXmlNode";
const char LunaTraits< wxXmlNode >::moduleName[] = "wx";
const char* LunaTraits< wxXmlNode >::parents[] = {0};
const int LunaTraits< wxXmlNode >::hash = 64848530;
const int LunaTraits< wxXmlNode >::uniqueIDs[] = {64848530,0};

luna_RegType LunaTraits< wxXmlNode >::methods[] = {
	{"AddAttribute", &luna_wrapper_wxXmlNode::_bind_AddAttribute},
	{"AddChild", &luna_wrapper_wxXmlNode::_bind_AddChild},
	{"DeleteAttribute", &luna_wrapper_wxXmlNode::_bind_DeleteAttribute},
	{"GetAttribute", &luna_wrapper_wxXmlNode::_bind_GetAttribute},
	{"GetAttributes", &luna_wrapper_wxXmlNode::_bind_GetAttributes},
	{"GetChildren", &luna_wrapper_wxXmlNode::_bind_GetChildren},
	{"GetContent", &luna_wrapper_wxXmlNode::_bind_GetContent},
	{"GetDepth", &luna_wrapper_wxXmlNode::_bind_GetDepth},
	{"GetNoConversion", &luna_wrapper_wxXmlNode::_bind_GetNoConversion},
	{"GetLineNumber", &luna_wrapper_wxXmlNode::_bind_GetLineNumber},
	{"GetName", &luna_wrapper_wxXmlNode::_bind_GetName},
	{"GetNext", &luna_wrapper_wxXmlNode::_bind_GetNext},
	{"GetNodeContent", &luna_wrapper_wxXmlNode::_bind_GetNodeContent},
	{"GetParent", &luna_wrapper_wxXmlNode::_bind_GetParent},
	{"GetType", &luna_wrapper_wxXmlNode::_bind_GetType},
	{"HasAttribute", &luna_wrapper_wxXmlNode::_bind_HasAttribute},
	{"InsertChild", &luna_wrapper_wxXmlNode::_bind_InsertChild},
	{"InsertChildAfter", &luna_wrapper_wxXmlNode::_bind_InsertChildAfter},
	{"IsWhitespaceOnly", &luna_wrapper_wxXmlNode::_bind_IsWhitespaceOnly},
	{"RemoveChild", &luna_wrapper_wxXmlNode::_bind_RemoveChild},
	{"SetAttributes", &luna_wrapper_wxXmlNode::_bind_SetAttributes},
	{"SetChildren", &luna_wrapper_wxXmlNode::_bind_SetChildren},
	{"SetContent", &luna_wrapper_wxXmlNode::_bind_SetContent},
	{"SetName", &luna_wrapper_wxXmlNode::_bind_SetName},
	{"SetNext", &luna_wrapper_wxXmlNode::_bind_SetNext},
	{"SetNoConversion", &luna_wrapper_wxXmlNode::_bind_SetNoConversion},
	{"SetParent", &luna_wrapper_wxXmlNode::_bind_SetParent},
	{"SetType", &luna_wrapper_wxXmlNode::_bind_SetType},
	{"dynCast", &luna_wrapper_wxXmlNode::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxXmlNode >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxXmlNode >::enumValues[] = {
	{0,0}
};

