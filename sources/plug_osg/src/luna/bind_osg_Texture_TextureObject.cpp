#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Texture_TextureObject.h>

class luna_wrapper_osg_Texture_TextureObject {
public:
	typedef Luna< osg::Texture::TextureObject > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::Texture::TextureObject* ptr= dynamic_cast< osg::Texture::TextureObject* >(Luna< osg::Referenced >::check(L,1));
		osg::Texture::TextureObject* ptr= luna_caster< osg::Referenced, osg::Texture::TextureObject >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Texture::TextureObject >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,69361645) ) return false;
		if( (!dynamic_cast< osg::Texture::TextureProfile* >(Luna< osg::Texture::TextureProfile >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,69361645) ) return false;
		if( (!dynamic_cast< osg::Texture::TextureProfile* >(Luna< osg::Texture::TextureProfile >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_isnumber(L,10)==0 || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_match(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_bind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_target(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTexture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimeStamp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeStamp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAllocated_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAllocated_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isAllocated(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isReusable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Texture::TextureObject::TextureObject(osg::Texture * texture, unsigned int id, unsigned int target)
	static osg::Texture::TextureObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject::TextureObject(osg::Texture * texture, unsigned int id, unsigned int target) function, expected prototype:\nosg::Texture::TextureObject::TextureObject(osg::Texture * texture, unsigned int id, unsigned int target)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,1));
		unsigned int id=(unsigned int)lua_tointeger(L,2);
		unsigned int target=(unsigned int)lua_tointeger(L,3);

		return new osg::Texture::TextureObject(texture, id, target);
	}

	// osg::Texture::TextureObject::TextureObject(osg::Texture * texture, unsigned int id, const osg::Texture::TextureProfile & profile)
	static osg::Texture::TextureObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject::TextureObject(osg::Texture * texture, unsigned int id, const osg::Texture::TextureProfile & profile) function, expected prototype:\nosg::Texture::TextureObject::TextureObject(osg::Texture * texture, unsigned int id, const osg::Texture::TextureProfile & profile)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 69361645\n");
		}

		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,1));
		unsigned int id=(unsigned int)lua_tointeger(L,2);
		const osg::Texture::TextureProfile* profile_ptr=(Luna< osg::Texture::TextureProfile >::check(L,3));
		if( !profile_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg profile in osg::Texture::TextureObject::TextureObject function");
		}
		const osg::Texture::TextureProfile & profile=*profile_ptr;

		return new osg::Texture::TextureObject(texture, id, profile);
	}

	// osg::Texture::TextureObject::TextureObject(osg::Texture * texture, unsigned int id, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)
	static osg::Texture::TextureObject* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject::TextureObject(osg::Texture * texture, unsigned int id, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border) function, expected prototype:\nosg::Texture::TextureObject::TextureObject(osg::Texture * texture, unsigned int id, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,1));
		unsigned int id=(unsigned int)lua_tointeger(L,2);
		unsigned int target=(unsigned int)lua_tointeger(L,3);
		int numMipmapLevels=(int)lua_tointeger(L,4);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,5);
		int width=(int)lua_tointeger(L,6);
		int height=(int)lua_tointeger(L,7);
		int depth=(int)lua_tointeger(L,8);
		int border=(int)lua_tointeger(L,9);

		return new osg::Texture::TextureObject(texture, id, target, numMipmapLevels, internalFormat, width, height, depth, border);
	}

	// osg::Texture::TextureObject::TextureObject(lua_Table * data, osg::Texture * texture, unsigned int id, unsigned int target)
	static osg::Texture::TextureObject* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject::TextureObject(lua_Table * data, osg::Texture * texture, unsigned int id, unsigned int target) function, expected prototype:\nosg::Texture::TextureObject::TextureObject(lua_Table * data, osg::Texture * texture, unsigned int id, unsigned int target)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));
		unsigned int id=(unsigned int)lua_tointeger(L,3);
		unsigned int target=(unsigned int)lua_tointeger(L,4);

		return new wrapper_osg_Texture_TextureObject(L,NULL, texture, id, target);
	}

	// osg::Texture::TextureObject::TextureObject(lua_Table * data, osg::Texture * texture, unsigned int id, const osg::Texture::TextureProfile & profile)
	static osg::Texture::TextureObject* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject::TextureObject(lua_Table * data, osg::Texture * texture, unsigned int id, const osg::Texture::TextureProfile & profile) function, expected prototype:\nosg::Texture::TextureObject::TextureObject(lua_Table * data, osg::Texture * texture, unsigned int id, const osg::Texture::TextureProfile & profile)\nClass arguments details:\narg 2 ID = 50169651\narg 4 ID = 69361645\n");
		}

		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));
		unsigned int id=(unsigned int)lua_tointeger(L,3);
		const osg::Texture::TextureProfile* profile_ptr=(Luna< osg::Texture::TextureProfile >::check(L,4));
		if( !profile_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg profile in osg::Texture::TextureObject::TextureObject function");
		}
		const osg::Texture::TextureProfile & profile=*profile_ptr;

		return new wrapper_osg_Texture_TextureObject(L,NULL, texture, id, profile);
	}

	// osg::Texture::TextureObject::TextureObject(lua_Table * data, osg::Texture * texture, unsigned int id, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)
	static osg::Texture::TextureObject* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject::TextureObject(lua_Table * data, osg::Texture * texture, unsigned int id, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border) function, expected prototype:\nosg::Texture::TextureObject::TextureObject(lua_Table * data, osg::Texture * texture, unsigned int id, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));
		unsigned int id=(unsigned int)lua_tointeger(L,3);
		unsigned int target=(unsigned int)lua_tointeger(L,4);
		int numMipmapLevels=(int)lua_tointeger(L,5);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,6);
		int width=(int)lua_tointeger(L,7);
		int height=(int)lua_tointeger(L,8);
		int depth=(int)lua_tointeger(L,9);
		int border=(int)lua_tointeger(L,10);

		return new wrapper_osg_Texture_TextureObject(L,NULL, texture, id, target, numMipmapLevels, internalFormat, width, height, depth, border);
	}

	// Overload binder for osg::Texture::TextureObject::TextureObject
	static osg::Texture::TextureObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function TextureObject, cannot match any of the overloads for function TextureObject:\n  TextureObject(osg::Texture *, unsigned int, unsigned int)\n  TextureObject(osg::Texture *, unsigned int, const osg::Texture::TextureProfile &)\n  TextureObject(osg::Texture *, unsigned int, unsigned int, int, unsigned int, int, int, int, int)\n  TextureObject(lua_Table *, osg::Texture *, unsigned int, unsigned int)\n  TextureObject(lua_Table *, osg::Texture *, unsigned int, const osg::Texture::TextureProfile &)\n  TextureObject(lua_Table *, osg::Texture *, unsigned int, unsigned int, int, unsigned int, int, int, int, int)\n");
		return NULL;
	}


	// Function binds:
	// bool osg::Texture::TextureObject::match(unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)
	static int _bind_match(lua_State *L) {
		if (!_lg_typecheck_match(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::TextureObject::match(unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border) function, expected prototype:\nbool osg::Texture::TextureObject::match(unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int numMipmapLevels=(int)lua_tointeger(L,3);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,4);
		int width=(int)lua_tointeger(L,5);
		int height=(int)lua_tointeger(L,6);
		int depth=(int)lua_tointeger(L,7);
		int border=(int)lua_tointeger(L,8);

		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::TextureObject::match(unsigned int, int, unsigned int, int, int, int, int)");
		}
		bool lret = self->match(target, numMipmapLevels, internalFormat, width, height, depth, border);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::TextureObject::bind()
	static int _bind_bind(lua_State *L) {
		if (!_lg_typecheck_bind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObject::bind() function, expected prototype:\nvoid osg::Texture::TextureObject::bind()\nClass arguments details:\n");
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObject::bind()");
		}
		self->bind();

		return 0;
	}

	// unsigned int osg::Texture::TextureObject::id() const
	static int _bind_id(lua_State *L) {
		if (!_lg_typecheck_id(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureObject::id() const function, expected prototype:\nunsigned int osg::Texture::TextureObject::id() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureObject::id() const");
		}
		unsigned int lret = self->id();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture::TextureObject::target() const
	static int _bind_target(lua_State *L) {
		if (!_lg_typecheck_target(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureObject::target() const function, expected prototype:\nunsigned int osg::Texture::TextureObject::target() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureObject::target() const");
		}
		unsigned int lret = self->target();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture::TextureObject::size() const
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureObject::size() const function, expected prototype:\nunsigned int osg::Texture::TextureObject::size() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureObject::size() const");
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::TextureObject::setTexture(osg::Texture * texture)
	static int _bind_setTexture(lua_State *L) {
		if (!_lg_typecheck_setTexture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObject::setTexture(osg::Texture * texture) function, expected prototype:\nvoid osg::Texture::TextureObject::setTexture(osg::Texture * texture)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));

		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObject::setTexture(osg::Texture *)");
		}
		self->setTexture(texture);

		return 0;
	}

	// osg::Texture * osg::Texture::TextureObject::getTexture() const
	static int _bind_getTexture(lua_State *L) {
		if (!_lg_typecheck_getTexture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::Texture::TextureObject::getTexture() const function, expected prototype:\nosg::Texture * osg::Texture::TextureObject::getTexture() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture * osg::Texture::TextureObject::getTexture() const");
		}
		osg::Texture * lret = self->getTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// void osg::Texture::TextureObject::setTimeStamp(double timestamp)
	static int _bind_setTimeStamp(lua_State *L) {
		if (!_lg_typecheck_setTimeStamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObject::setTimeStamp(double timestamp) function, expected prototype:\nvoid osg::Texture::TextureObject::setTimeStamp(double timestamp)\nClass arguments details:\n");
		}

		double timestamp=(double)lua_tonumber(L,2);

		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObject::setTimeStamp(double)");
		}
		self->setTimeStamp(timestamp);

		return 0;
	}

	// double osg::Texture::TextureObject::getTimeStamp() const
	static int _bind_getTimeStamp(lua_State *L) {
		if (!_lg_typecheck_getTimeStamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::Texture::TextureObject::getTimeStamp() const function, expected prototype:\ndouble osg::Texture::TextureObject::getTimeStamp() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::Texture::TextureObject::getTimeStamp() const");
		}
		double lret = self->getTimeStamp();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::TextureObject::setAllocated(bool allocated = true)
	static int _bind_setAllocated_overload_1(lua_State *L) {
		if (!_lg_typecheck_setAllocated_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObject::setAllocated(bool allocated = true) function, expected prototype:\nvoid osg::Texture::TextureObject::setAllocated(bool allocated = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool allocated=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObject::setAllocated(bool)");
		}
		self->setAllocated(allocated);

		return 0;
	}

	// void osg::Texture::TextureObject::setAllocated(int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)
	static int _bind_setAllocated_overload_2(lua_State *L) {
		if (!_lg_typecheck_setAllocated_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObject::setAllocated(int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border) function, expected prototype:\nvoid osg::Texture::TextureObject::setAllocated(int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)\nClass arguments details:\n");
		}

		int numMipmapLevels=(int)lua_tointeger(L,2);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		int depth=(int)lua_tointeger(L,6);
		int border=(int)lua_tointeger(L,7);

		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObject::setAllocated(int, unsigned int, int, int, int, int)");
		}
		self->setAllocated(numMipmapLevels, internalFormat, width, height, depth, border);

		return 0;
	}

	// Overload binder for osg::Texture::TextureObject::setAllocated
	static int _bind_setAllocated(lua_State *L) {
		if (_lg_typecheck_setAllocated_overload_1(L)) return _bind_setAllocated_overload_1(L);
		if (_lg_typecheck_setAllocated_overload_2(L)) return _bind_setAllocated_overload_2(L);

		luaL_error(L, "error in function setAllocated, cannot match any of the overloads for function setAllocated:\n  setAllocated(bool)\n  setAllocated(int, unsigned int, int, int, int, int)\n");
		return 0;
	}

	// bool osg::Texture::TextureObject::isAllocated() const
	static int _bind_isAllocated(lua_State *L) {
		if (!_lg_typecheck_isAllocated(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::TextureObject::isAllocated() const function, expected prototype:\nbool osg::Texture::TextureObject::isAllocated() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::TextureObject::isAllocated() const");
		}
		bool lret = self->isAllocated();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Texture::TextureObject::isReusable() const
	static int _bind_isReusable(lua_State *L) {
		if (!_lg_typecheck_isReusable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Texture::TextureObject::isReusable() const function, expected prototype:\nbool osg::Texture::TextureObject::isReusable() const\nClass arguments details:\n");
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Texture::TextureObject::isReusable() const");
		}
		bool lret = self->isReusable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::Texture::TextureObject* LunaTraits< osg::Texture::TextureObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Texture_TextureObject::_bind_ctor(L);
}

void LunaTraits< osg::Texture::TextureObject >::_bind_dtor(osg::Texture::TextureObject* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Texture::TextureObject >::className[] = "TextureObject";
const char LunaTraits< osg::Texture::TextureObject >::fullName[] = "osg::Texture::TextureObject";
const char LunaTraits< osg::Texture::TextureObject >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture::TextureObject >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Texture::TextureObject >::hash = 84488374;
const int LunaTraits< osg::Texture::TextureObject >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Texture::TextureObject >::methods[] = {
	{"match", &luna_wrapper_osg_Texture_TextureObject::_bind_match},
	{"bind", &luna_wrapper_osg_Texture_TextureObject::_bind_bind},
	{"id", &luna_wrapper_osg_Texture_TextureObject::_bind_id},
	{"target", &luna_wrapper_osg_Texture_TextureObject::_bind_target},
	{"size", &luna_wrapper_osg_Texture_TextureObject::_bind_size},
	{"setTexture", &luna_wrapper_osg_Texture_TextureObject::_bind_setTexture},
	{"getTexture", &luna_wrapper_osg_Texture_TextureObject::_bind_getTexture},
	{"setTimeStamp", &luna_wrapper_osg_Texture_TextureObject::_bind_setTimeStamp},
	{"getTimeStamp", &luna_wrapper_osg_Texture_TextureObject::_bind_getTimeStamp},
	{"setAllocated", &luna_wrapper_osg_Texture_TextureObject::_bind_setAllocated},
	{"isAllocated", &luna_wrapper_osg_Texture_TextureObject::_bind_isAllocated},
	{"isReusable", &luna_wrapper_osg_Texture_TextureObject::_bind_isReusable},
	{"__eq", &luna_wrapper_osg_Texture_TextureObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture::TextureObject >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Texture_TextureObject::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture::TextureObject >::enumValues[] = {
	{0,0}
};


