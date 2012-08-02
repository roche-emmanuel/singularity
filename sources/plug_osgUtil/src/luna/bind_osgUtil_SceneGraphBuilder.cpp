#include <plug_common.h>

class luna_wrapper_osgUtil_SceneGraphBuilder {
public:
	typedef Luna< osgUtil::SceneGraphBuilder > luna_t;

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

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::SceneGraphBuilder");
		
		return luna_dynamicCast(L,converters,"osgUtil::SceneGraphBuilder",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_PushMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PopMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LoadIdentity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LoadMatrixd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MultMatrixd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Translated(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Scaled(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rotated(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_BlendFunc(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CullFace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DepthFunc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FrontFace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LineStipple(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LineWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PointSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PolygonMode(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PolygonOffset(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PolygonStipple(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShadeModel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Enable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Disable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Color4f(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Color4fv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Vertex3f(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Vertex3fv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Normal3f(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Normal3fv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TexCoord1f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TexCoord1fv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TexCoord2f(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TexCoord2fv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TexCoord3f(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TexCoord3fv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TexCoord4f(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TexCoord4fv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Begin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_End(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_QuadricDrawStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_QuadricNormals(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_QuadricOrientation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_QuadricTexture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Cylinder(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Disk(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PartialDisk(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Sphere(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScene(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_takeScene(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::SceneGraphBuilder::SceneGraphBuilder()
	static osgUtil::SceneGraphBuilder* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::SceneGraphBuilder::SceneGraphBuilder() function, expected prototype:\nosgUtil::SceneGraphBuilder::SceneGraphBuilder()\nClass arguments details:\n");
		}


		return new osgUtil::SceneGraphBuilder();
	}


	// Function binds:
	// void osgUtil::SceneGraphBuilder::PushMatrix()
	static int _bind_PushMatrix(lua_State *L) {
		if (!_lg_typecheck_PushMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::PushMatrix() function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::PushMatrix()\nClass arguments details:\n");
		}


		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::PushMatrix()");
		}
		self->PushMatrix();

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::PopMatrix()
	static int _bind_PopMatrix(lua_State *L) {
		if (!_lg_typecheck_PopMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::PopMatrix() function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::PopMatrix()\nClass arguments details:\n");
		}


		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::PopMatrix()");
		}
		self->PopMatrix();

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::LoadIdentity()
	static int _bind_LoadIdentity(lua_State *L) {
		if (!_lg_typecheck_LoadIdentity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::LoadIdentity() function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::LoadIdentity()\nClass arguments details:\n");
		}


		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::LoadIdentity()");
		}
		self->LoadIdentity();

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::LoadMatrixd(const double * m)
	static int _bind_LoadMatrixd(lua_State *L) {
		if (!_lg_typecheck_LoadMatrixd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::LoadMatrixd(const double * m) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::LoadMatrixd(const double * m)\nClass arguments details:\n");
		}

		double m=(double)lua_tonumber(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::LoadMatrixd(const double *)");
		}
		self->LoadMatrixd(&m);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::MultMatrixd(const double * m)
	static int _bind_MultMatrixd(lua_State *L) {
		if (!_lg_typecheck_MultMatrixd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::MultMatrixd(const double * m) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::MultMatrixd(const double * m)\nClass arguments details:\n");
		}

		double m=(double)lua_tonumber(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::MultMatrixd(const double *)");
		}
		self->MultMatrixd(&m);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::Translated(double x, double y, double z)
	static int _bind_Translated(lua_State *L) {
		if (!_lg_typecheck_Translated(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::Translated(double x, double y, double z) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::Translated(double x, double y, double z)\nClass arguments details:\n");
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double z=(double)lua_tonumber(L,4);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::Translated(double, double, double)");
		}
		self->Translated(x, y, z);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::Scaled(double x, double y, double z)
	static int _bind_Scaled(lua_State *L) {
		if (!_lg_typecheck_Scaled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::Scaled(double x, double y, double z) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::Scaled(double x, double y, double z)\nClass arguments details:\n");
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double z=(double)lua_tonumber(L,4);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::Scaled(double, double, double)");
		}
		self->Scaled(x, y, z);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::Rotated(double angle, double x, double y, double z)
	static int _bind_Rotated(lua_State *L) {
		if (!_lg_typecheck_Rotated(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::Rotated(double angle, double x, double y, double z) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::Rotated(double angle, double x, double y, double z)\nClass arguments details:\n");
		}

		double angle=(double)lua_tonumber(L,2);
		double x=(double)lua_tonumber(L,3);
		double y=(double)lua_tonumber(L,4);
		double z=(double)lua_tonumber(L,5);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::Rotated(double, double, double, double)");
		}
		self->Rotated(angle, x, y, z);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::BlendFunc(unsigned int srcFactor, unsigned int dstFactor)
	static int _bind_BlendFunc(lua_State *L) {
		if (!_lg_typecheck_BlendFunc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::BlendFunc(unsigned int srcFactor, unsigned int dstFactor) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::BlendFunc(unsigned int srcFactor, unsigned int dstFactor)\nClass arguments details:\n");
		}

		unsigned int srcFactor=(unsigned int)lua_tointeger(L,2);
		unsigned int dstFactor=(unsigned int)lua_tointeger(L,3);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::BlendFunc(unsigned int, unsigned int)");
		}
		self->BlendFunc(srcFactor, dstFactor);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::CullFace(unsigned int mode)
	static int _bind_CullFace(lua_State *L) {
		if (!_lg_typecheck_CullFace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::CullFace(unsigned int mode) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::CullFace(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::CullFace(unsigned int)");
		}
		self->CullFace(mode);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::DepthFunc(unsigned int mode)
	static int _bind_DepthFunc(lua_State *L) {
		if (!_lg_typecheck_DepthFunc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::DepthFunc(unsigned int mode) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::DepthFunc(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::DepthFunc(unsigned int)");
		}
		self->DepthFunc(mode);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::FrontFace(unsigned int mode)
	static int _bind_FrontFace(lua_State *L) {
		if (!_lg_typecheck_FrontFace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::FrontFace(unsigned int mode) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::FrontFace(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::FrontFace(unsigned int)");
		}
		self->FrontFace(mode);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::LineStipple(int factor, unsigned short pattern)
	static int _bind_LineStipple(lua_State *L) {
		if (!_lg_typecheck_LineStipple(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::LineStipple(int factor, unsigned short pattern) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::LineStipple(int factor, unsigned short pattern)\nClass arguments details:\n");
		}

		int factor=(int)lua_tointeger(L,2);
		unsigned short pattern=(unsigned short)lua_tointeger(L,3);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::LineStipple(int, unsigned short)");
		}
		self->LineStipple(factor, pattern);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::LineWidth(float lineWidth)
	static int _bind_LineWidth(lua_State *L) {
		if (!_lg_typecheck_LineWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::LineWidth(float lineWidth) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::LineWidth(float lineWidth)\nClass arguments details:\n");
		}

		float lineWidth=(float)lua_tonumber(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::LineWidth(float)");
		}
		self->LineWidth(lineWidth);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::PointSize(float pointSize)
	static int _bind_PointSize(lua_State *L) {
		if (!_lg_typecheck_PointSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::PointSize(float pointSize) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::PointSize(float pointSize)\nClass arguments details:\n");
		}

		float pointSize=(float)lua_tonumber(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::PointSize(float)");
		}
		self->PointSize(pointSize);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::PolygonMode(unsigned int face, unsigned int mode)
	static int _bind_PolygonMode(lua_State *L) {
		if (!_lg_typecheck_PolygonMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::PolygonMode(unsigned int face, unsigned int mode) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::PolygonMode(unsigned int face, unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int face=(unsigned int)lua_tointeger(L,2);
		unsigned int mode=(unsigned int)lua_tointeger(L,3);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::PolygonMode(unsigned int, unsigned int)");
		}
		self->PolygonMode(face, mode);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::PolygonOffset(float factor, float units)
	static int _bind_PolygonOffset(lua_State *L) {
		if (!_lg_typecheck_PolygonOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::PolygonOffset(float factor, float units) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::PolygonOffset(float factor, float units)\nClass arguments details:\n");
		}

		float factor=(float)lua_tonumber(L,2);
		float units=(float)lua_tonumber(L,3);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::PolygonOffset(float, float)");
		}
		self->PolygonOffset(factor, units);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::PolygonStipple(const unsigned char * mask)
	static int _bind_PolygonStipple(lua_State *L) {
		if (!_lg_typecheck_PolygonStipple(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::PolygonStipple(const unsigned char * mask) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::PolygonStipple(const unsigned char * mask)\nClass arguments details:\n");
		}

		unsigned char mask = (unsigned char)(lua_tointeger(L,2));

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::PolygonStipple(const unsigned char *)");
		}
		self->PolygonStipple(&mask);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::ShadeModel(unsigned int mode)
	static int _bind_ShadeModel(lua_State *L) {
		if (!_lg_typecheck_ShadeModel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::ShadeModel(unsigned int mode) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::ShadeModel(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::ShadeModel(unsigned int)");
		}
		self->ShadeModel(mode);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::Enable(unsigned int mode)
	static int _bind_Enable(lua_State *L) {
		if (!_lg_typecheck_Enable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::Enable(unsigned int mode) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::Enable(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::Enable(unsigned int)");
		}
		self->Enable(mode);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::Disable(unsigned int mode)
	static int _bind_Disable(lua_State *L) {
		if (!_lg_typecheck_Disable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::Disable(unsigned int mode) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::Disable(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::Disable(unsigned int)");
		}
		self->Disable(mode);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::Color4f(float red, float green, float blue, float alpha)
	static int _bind_Color4f(lua_State *L) {
		if (!_lg_typecheck_Color4f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::Color4f(float red, float green, float blue, float alpha) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::Color4f(float red, float green, float blue, float alpha)\nClass arguments details:\n");
		}

		float red=(float)lua_tonumber(L,2);
		float green=(float)lua_tonumber(L,3);
		float blue=(float)lua_tonumber(L,4);
		float alpha=(float)lua_tonumber(L,5);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::Color4f(float, float, float, float)");
		}
		self->Color4f(red, green, blue, alpha);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::Color4fv(float * c)
	static int _bind_Color4fv(lua_State *L) {
		if (!_lg_typecheck_Color4fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::Color4fv(float * c) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::Color4fv(float * c)\nClass arguments details:\n");
		}

		float c=(float)lua_tonumber(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::Color4fv(float *)");
		}
		self->Color4fv(&c);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::Vertex3f(float x, float y, float z)
	static int _bind_Vertex3f(lua_State *L) {
		if (!_lg_typecheck_Vertex3f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::Vertex3f(float x, float y, float z) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::Vertex3f(float x, float y, float z)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::Vertex3f(float, float, float)");
		}
		self->Vertex3f(x, y, z);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::Vertex3fv(float * v)
	static int _bind_Vertex3fv(lua_State *L) {
		if (!_lg_typecheck_Vertex3fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::Vertex3fv(float * v) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::Vertex3fv(float * v)\nClass arguments details:\n");
		}

		float v=(float)lua_tonumber(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::Vertex3fv(float *)");
		}
		self->Vertex3fv(&v);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::Normal3f(float x, float y, float z)
	static int _bind_Normal3f(lua_State *L) {
		if (!_lg_typecheck_Normal3f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::Normal3f(float x, float y, float z) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::Normal3f(float x, float y, float z)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::Normal3f(float, float, float)");
		}
		self->Normal3f(x, y, z);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::Normal3fv(float * n)
	static int _bind_Normal3fv(lua_State *L) {
		if (!_lg_typecheck_Normal3fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::Normal3fv(float * n) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::Normal3fv(float * n)\nClass arguments details:\n");
		}

		float n=(float)lua_tonumber(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::Normal3fv(float *)");
		}
		self->Normal3fv(&n);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::TexCoord1f(float x)
	static int _bind_TexCoord1f(lua_State *L) {
		if (!_lg_typecheck_TexCoord1f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::TexCoord1f(float x) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::TexCoord1f(float x)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::TexCoord1f(float)");
		}
		self->TexCoord1f(x);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::TexCoord1fv(float * tc)
	static int _bind_TexCoord1fv(lua_State *L) {
		if (!_lg_typecheck_TexCoord1fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::TexCoord1fv(float * tc) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::TexCoord1fv(float * tc)\nClass arguments details:\n");
		}

		float tc=(float)lua_tonumber(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::TexCoord1fv(float *)");
		}
		self->TexCoord1fv(&tc);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::TexCoord2f(float x, float y)
	static int _bind_TexCoord2f(lua_State *L) {
		if (!_lg_typecheck_TexCoord2f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::TexCoord2f(float x, float y) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::TexCoord2f(float x, float y)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::TexCoord2f(float, float)");
		}
		self->TexCoord2f(x, y);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::TexCoord2fv(float * tc)
	static int _bind_TexCoord2fv(lua_State *L) {
		if (!_lg_typecheck_TexCoord2fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::TexCoord2fv(float * tc) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::TexCoord2fv(float * tc)\nClass arguments details:\n");
		}

		float tc=(float)lua_tonumber(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::TexCoord2fv(float *)");
		}
		self->TexCoord2fv(&tc);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::TexCoord3f(float x, float y, float z)
	static int _bind_TexCoord3f(lua_State *L) {
		if (!_lg_typecheck_TexCoord3f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::TexCoord3f(float x, float y, float z) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::TexCoord3f(float x, float y, float z)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::TexCoord3f(float, float, float)");
		}
		self->TexCoord3f(x, y, z);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::TexCoord3fv(float * tc)
	static int _bind_TexCoord3fv(lua_State *L) {
		if (!_lg_typecheck_TexCoord3fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::TexCoord3fv(float * tc) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::TexCoord3fv(float * tc)\nClass arguments details:\n");
		}

		float tc=(float)lua_tonumber(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::TexCoord3fv(float *)");
		}
		self->TexCoord3fv(&tc);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::TexCoord4f(float x, float y, float z, float w)
	static int _bind_TexCoord4f(lua_State *L) {
		if (!_lg_typecheck_TexCoord4f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::TexCoord4f(float x, float y, float z, float w) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::TexCoord4f(float x, float y, float z, float w)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);
		float w=(float)lua_tonumber(L,5);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::TexCoord4f(float, float, float, float)");
		}
		self->TexCoord4f(x, y, z, w);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::TexCoord4fv(float * tc)
	static int _bind_TexCoord4fv(lua_State *L) {
		if (!_lg_typecheck_TexCoord4fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::TexCoord4fv(float * tc) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::TexCoord4fv(float * tc)\nClass arguments details:\n");
		}

		float tc=(float)lua_tonumber(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::TexCoord4fv(float *)");
		}
		self->TexCoord4fv(&tc);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::Begin(unsigned int mode)
	static int _bind_Begin(lua_State *L) {
		if (!_lg_typecheck_Begin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::Begin(unsigned int mode) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::Begin(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::Begin(unsigned int)");
		}
		self->Begin(mode);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::End()
	static int _bind_End(lua_State *L) {
		if (!_lg_typecheck_End(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::End() function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::End()\nClass arguments details:\n");
		}


		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::End()");
		}
		self->End();

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::QuadricDrawStyle(unsigned int aDrawStyle)
	static int _bind_QuadricDrawStyle(lua_State *L) {
		if (!_lg_typecheck_QuadricDrawStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::QuadricDrawStyle(unsigned int aDrawStyle) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::QuadricDrawStyle(unsigned int aDrawStyle)\nClass arguments details:\n");
		}

		unsigned int aDrawStyle=(unsigned int)lua_tointeger(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::QuadricDrawStyle(unsigned int)");
		}
		self->QuadricDrawStyle(aDrawStyle);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::QuadricNormals(unsigned int aNormals)
	static int _bind_QuadricNormals(lua_State *L) {
		if (!_lg_typecheck_QuadricNormals(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::QuadricNormals(unsigned int aNormals) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::QuadricNormals(unsigned int aNormals)\nClass arguments details:\n");
		}

		unsigned int aNormals=(unsigned int)lua_tointeger(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::QuadricNormals(unsigned int)");
		}
		self->QuadricNormals(aNormals);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::QuadricOrientation(unsigned int aOrientation)
	static int _bind_QuadricOrientation(lua_State *L) {
		if (!_lg_typecheck_QuadricOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::QuadricOrientation(unsigned int aOrientation) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::QuadricOrientation(unsigned int aOrientation)\nClass arguments details:\n");
		}

		unsigned int aOrientation=(unsigned int)lua_tointeger(L,2);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::QuadricOrientation(unsigned int)");
		}
		self->QuadricOrientation(aOrientation);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::QuadricTexture(unsigned char aTexture)
	static int _bind_QuadricTexture(lua_State *L) {
		if (!_lg_typecheck_QuadricTexture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::QuadricTexture(unsigned char aTexture) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::QuadricTexture(unsigned char aTexture)\nClass arguments details:\n");
		}

		unsigned char aTexture = (unsigned char)(lua_tointeger(L,2));

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::QuadricTexture(unsigned char)");
		}
		self->QuadricTexture(aTexture);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::Cylinder(float base, float top, float height, int slices, int stacks)
	static int _bind_Cylinder(lua_State *L) {
		if (!_lg_typecheck_Cylinder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::Cylinder(float base, float top, float height, int slices, int stacks) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::Cylinder(float base, float top, float height, int slices, int stacks)\nClass arguments details:\n");
		}

		float base=(float)lua_tonumber(L,2);
		float top=(float)lua_tonumber(L,3);
		float height=(float)lua_tonumber(L,4);
		int slices=(int)lua_tointeger(L,5);
		int stacks=(int)lua_tointeger(L,6);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::Cylinder(float, float, float, int, int)");
		}
		self->Cylinder(base, top, height, slices, stacks);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::Disk(float inner, float outer, int slices, int loops)
	static int _bind_Disk(lua_State *L) {
		if (!_lg_typecheck_Disk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::Disk(float inner, float outer, int slices, int loops) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::Disk(float inner, float outer, int slices, int loops)\nClass arguments details:\n");
		}

		float inner=(float)lua_tonumber(L,2);
		float outer=(float)lua_tonumber(L,3);
		int slices=(int)lua_tointeger(L,4);
		int loops=(int)lua_tointeger(L,5);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::Disk(float, float, int, int)");
		}
		self->Disk(inner, outer, slices, loops);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::PartialDisk(float inner, float outer, int slices, int loops, float start, float sweep)
	static int _bind_PartialDisk(lua_State *L) {
		if (!_lg_typecheck_PartialDisk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::PartialDisk(float inner, float outer, int slices, int loops, float start, float sweep) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::PartialDisk(float inner, float outer, int slices, int loops, float start, float sweep)\nClass arguments details:\n");
		}

		float inner=(float)lua_tonumber(L,2);
		float outer=(float)lua_tonumber(L,3);
		int slices=(int)lua_tointeger(L,4);
		int loops=(int)lua_tointeger(L,5);
		float start=(float)lua_tonumber(L,6);
		float sweep=(float)lua_tonumber(L,7);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::PartialDisk(float, float, int, int, float, float)");
		}
		self->PartialDisk(inner, outer, slices, loops, start, sweep);

		return 0;
	}

	// void osgUtil::SceneGraphBuilder::Sphere(float radius, int slices, int stacks)
	static int _bind_Sphere(lua_State *L) {
		if (!_lg_typecheck_Sphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneGraphBuilder::Sphere(float radius, int slices, int stacks) function, expected prototype:\nvoid osgUtil::SceneGraphBuilder::Sphere(float radius, int slices, int stacks)\nClass arguments details:\n");
		}

		float radius=(float)lua_tonumber(L,2);
		int slices=(int)lua_tointeger(L,3);
		int stacks=(int)lua_tointeger(L,4);

		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::SceneGraphBuilder::Sphere(float, int, int)");
		}
		self->Sphere(radius, slices, stacks);

		return 0;
	}

	// osg::Node * osgUtil::SceneGraphBuilder::getScene()
	static int _bind_getScene(lua_State *L) {
		if (!_lg_typecheck_getScene(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * osgUtil::SceneGraphBuilder::getScene() function, expected prototype:\nosg::Node * osgUtil::SceneGraphBuilder::getScene()\nClass arguments details:\n");
		}


		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * osgUtil::SceneGraphBuilder::getScene()");
		}
		osg::Node * lret = self->getScene();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgUtil::SceneGraphBuilder::takeScene()
	static int _bind_takeScene(lua_State *L) {
		if (!_lg_typecheck_takeScene(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * osgUtil::SceneGraphBuilder::takeScene() function, expected prototype:\nosg::Node * osgUtil::SceneGraphBuilder::takeScene()\nClass arguments details:\n");
		}


		osgUtil::SceneGraphBuilder* self=(Luna< osgUtil::SceneGraphBuilder >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * osgUtil::SceneGraphBuilder::takeScene()");
		}
		osg::Node * lret = self->takeScene();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgUtil::SceneGraphBuilder* LunaTraits< osgUtil::SceneGraphBuilder >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_SceneGraphBuilder::_bind_ctor(L);
}

void LunaTraits< osgUtil::SceneGraphBuilder >::_bind_dtor(osgUtil::SceneGraphBuilder* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::SceneGraphBuilder >::className[] = "SceneGraphBuilder";
const char LunaTraits< osgUtil::SceneGraphBuilder >::fullName[] = "osgUtil::SceneGraphBuilder";
const char LunaTraits< osgUtil::SceneGraphBuilder >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::SceneGraphBuilder >::parents[] = {0};
const int LunaTraits< osgUtil::SceneGraphBuilder >::hash = 42545431;
const int LunaTraits< osgUtil::SceneGraphBuilder >::uniqueIDs[] = {42545431,0};

luna_RegType LunaTraits< osgUtil::SceneGraphBuilder >::methods[] = {
	{"PushMatrix", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_PushMatrix},
	{"PopMatrix", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_PopMatrix},
	{"LoadIdentity", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_LoadIdentity},
	{"LoadMatrixd", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_LoadMatrixd},
	{"MultMatrixd", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_MultMatrixd},
	{"Translated", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_Translated},
	{"Scaled", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_Scaled},
	{"Rotated", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_Rotated},
	{"BlendFunc", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_BlendFunc},
	{"CullFace", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_CullFace},
	{"DepthFunc", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_DepthFunc},
	{"FrontFace", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_FrontFace},
	{"LineStipple", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_LineStipple},
	{"LineWidth", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_LineWidth},
	{"PointSize", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_PointSize},
	{"PolygonMode", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_PolygonMode},
	{"PolygonOffset", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_PolygonOffset},
	{"PolygonStipple", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_PolygonStipple},
	{"ShadeModel", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_ShadeModel},
	{"Enable", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_Enable},
	{"Disable", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_Disable},
	{"Color4f", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_Color4f},
	{"Color4fv", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_Color4fv},
	{"Vertex3f", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_Vertex3f},
	{"Vertex3fv", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_Vertex3fv},
	{"Normal3f", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_Normal3f},
	{"Normal3fv", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_Normal3fv},
	{"TexCoord1f", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_TexCoord1f},
	{"TexCoord1fv", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_TexCoord1fv},
	{"TexCoord2f", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_TexCoord2f},
	{"TexCoord2fv", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_TexCoord2fv},
	{"TexCoord3f", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_TexCoord3f},
	{"TexCoord3fv", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_TexCoord3fv},
	{"TexCoord4f", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_TexCoord4f},
	{"TexCoord4fv", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_TexCoord4fv},
	{"Begin", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_Begin},
	{"End", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_End},
	{"QuadricDrawStyle", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_QuadricDrawStyle},
	{"QuadricNormals", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_QuadricNormals},
	{"QuadricOrientation", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_QuadricOrientation},
	{"QuadricTexture", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_QuadricTexture},
	{"Cylinder", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_Cylinder},
	{"Disk", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_Disk},
	{"PartialDisk", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_PartialDisk},
	{"Sphere", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_Sphere},
	{"getScene", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_getScene},
	{"takeScene", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_takeScene},
	{"dynCast", &luna_wrapper_osgUtil_SceneGraphBuilder::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::SceneGraphBuilder >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::SceneGraphBuilder >::enumValues[] = {
	{0,0}
};


