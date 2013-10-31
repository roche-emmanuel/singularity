#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"
#include <osg/Timer>

/** LUNA_CLASS_EXTENSION */
ID3DXBuffer* compileShaderFromFile(IDirect3DDevice9* device, const std::string& filename, const std::string& func, const std::string& profile);

/** LUNA_CLASS_EXTENSION */
IDirect3DVertexShader9* createVertexShader(IDirect3DDevice9* device, ID3DXBuffer* code);

/** LUNA_CLASS_EXTENSION */
IDirect3DPixelShader9* createPixelShader(IDirect3DDevice9* device, ID3DXBuffer* code);

/** LUNA_CLASS_EXTENSION */
inline IDirect3DVertexDeclaration9* createVec3Declaration(IDirect3DDevice9* device) {
	D3DVERTEXELEMENT9 decl[] = {
		{0, 0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
		D3DDECL_END()
	};
	
	IDirect3DVertexDeclaration9* vertexDecl = NULL;

	HRESULT result = device->CreateVertexDeclaration(decl, &vertexDecl);
	CHECK_RESULT_RET(result,NULL,"Cannot create Vertex declaration.");
	
	return vertexDecl;
}

/** LUNA_CLASS_EXTENSION */
inline IDirect3DVertexDeclaration9* createVec4Declaration(IDirect3DDevice9* device) {
	D3DVERTEXELEMENT9 decl[] = {
		{0, 0, D3DDECLTYPE_FLOAT4, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
		D3DDECL_END()
	};
	
	IDirect3DVertexDeclaration9* vertexDecl = NULL;

	HRESULT result = device->CreateVertexDeclaration(decl, &vertexDecl);
	CHECK_RESULT_RET(result,NULL,"Cannot create Vertex declaration.");
	
	return vertexDecl;
}

/** LUNA_CLASS_EXTENSION */
inline IDirect3DVertexBuffer9* createVertexBuffer(IDirect3DDevice9* device, const osg::Vec3Array& vertices) {
	IDirect3DVertexBuffer9* vbuffer = NULL;

	unsigned int nbytes = sizeof(osg::Vec3f)*vertices.size();
	
	HRESULT result = device->CreateVertexBuffer(nbytes,D3DUSAGE_WRITEONLY,0,D3DPOOL_DEFAULT,&vbuffer,NULL);
	CHECK_RESULT_RET(result,NULL,"Cannot create vertex buffer");
	
	osg::Vec3f *ptr = NULL;

	trDEBUG2_V("Mesh","Copying " << nbytes << " bytes in vertex buffer.");
	vbuffer->Lock(0, 0, (void**)&ptr, 0);	
	//std::copy(_vertices_3D.begin(),_vertices_3D.end(),ptr);
	memcpy((void*)ptr, &vertices[0], nbytes);
	vbuffer->Unlock();
		
	return vbuffer;
}

/** LUNA_CLASS_EXTENSION */
inline IDirect3DVertexBuffer9* createVertexBuffer(IDirect3DDevice9* device, const osg::Vec4Array& vertices) {
	IDirect3DVertexBuffer9* vbuffer = NULL;

	unsigned int nbytes = sizeof(osg::Vec4f)*vertices.size();
	
	HRESULT result = device->CreateVertexBuffer(nbytes,D3DUSAGE_WRITEONLY,0,D3DPOOL_DEFAULT,&vbuffer,NULL);
	CHECK_RESULT_RET(result,NULL,"Cannot create vertex buffer");
	
	osg::Vec4f *ptr = NULL;

	trDEBUG2_V("Mesh","Copying " << nbytes << " bytes in vertex buffer.");
	vbuffer->Lock(0, 0, (void**)&ptr, 0);	
	//std::copy(_vertices_3D.begin(),_vertices_3D.end(),ptr);
	memcpy((void*)ptr, &vertices[0], nbytes);
	vbuffer->Unlock();
		
	return vbuffer;
}

/** LUNA_CLASS_EXTENSION */
inline IDirect3DTexture9* createTextureFromFile(IDirect3DDevice9* device, const std::string& filename)
{
	IDirect3DTexture9* tex = NULL;
	HRESULT result = D3DXCreateTextureFromFile(device, filename.c_str(), &tex); //,"Cannot read texture file "<<path);
	CHECK_RESULT_RET(result,NULL,"Could not create texture from file "<<filename)

	return tex;
}

/** LUNA_CLASS_EXTENSION */
inline IDirect3DTexture9* createTexture(IDirect3DDevice9* device, unsigned int width, unsigned int height, D3DFORMAT fmt = D3DFMT_A8R8G8B8, int usage = D3DUSAGE_RENDERTARGET, D3DPOOL pool = D3DPOOL_DEFAULT )
{
	IDirect3DTexture9* tex = NULL;

	HRESULT result = device->CreateTexture(width, height, 1, usage, fmt, pool, &tex, NULL);
	CHECK_RESULT_RET(result,NULL,"Error while calling CreateTexture()");

	return tex;
}

/** LUNA_CLASS_EXTENSION */
inline IDirect3DSurface9* createDepthSurface(IDirect3DDevice9* device, unsigned int width, unsigned int height, D3DFORMAT fmt = D3DFMT_D24S8)
{
	IDirect3DSurface9* tex = NULL;
	HRESULT result = device->CreateDepthStencilSurface(width, height, fmt,
													   D3DMULTISAMPLE_NONE, 0, FALSE, &tex, NULL);
	CHECK_RESULT_RET(result,NULL,"Error while calling CreateDepthStencilSurface()");

	return tex;
}

/** LUNA_CLASS_EXTENSION */
inline void updateTexture(IDirect3DDevice9* device, IDirect3DTexture9* src, IDirect3DTexture9* dest)
{
	CHECK(src,"Invalid source texture")
	CHECK(dest,"Invalid dest texture");
	
	// osg::Timer_t startTick = osg::Timer::instance()->tick();
	HRESULT result = device->UpdateTexture(src,dest);
	// double elapsed = osg::Timer::instance()->delta_s(startTick,osg::Timer::instance()->tick());
	
	CHECK_RESULT(result,"Error while calling UpdateTexture()");
	// logINFO("Texture updated in " << elapsed*1000 << " ms");
}

/** LUNA_CLASS_EXTENSION */
inline IDirect3DSurface9* getSurface(IDirect3DTexture9* texture, unsigned int level = 0)
{
	IDirect3DSurface9* surface = NULL;
	HRESULT result = texture->GetSurfaceLevel(level,&surface);
	CHECK_RESULT_RET(result,NULL,"Cannot retrieve surface from texture");

	return surface;
}

/** LUNA_CLASS_EXTENSION */
inline IDirect3DBaseTexture9* asBaseTexture(IDirect3DTexture9* tex) {
	return tex;
}

/** LUNA_CLASS_EXTENSION */
inline ID3DXFont* createFont(IDirect3DDevice9* device, int width, int height, bool bold, bool italic, const std::string& faceName)
{
	ID3DXFont* font = NULL;
	HRESULT result = D3DXCreateFont(device, height, width, bold ? FW_BOLD : FW_NORMAL, 1, italic ? TRUE : FALSE, DEFAULT_CHARSET,
		OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, faceName.c_str(), &font );

	CHECK_RESULT_RET(result,NULL,"Cannot create DirectX Font object.");

	return font;
};

/** LUNA_CLASS_EXTENSION */
inline void drawText(ID3DXFont* font, const std::string& text, osg::Vec4f rect, osg::Vec4f color, unsigned int flags)
{
	RECT rr;
	rr.left = rect.x();
	rr.top = rect.y();
	rr.right = rect.z();
	rr.bottom = rect.w();

	D3DCOLOR col =  D3DCOLOR_ARGB((int)(color.w()*255.0f), (int)(color.x()*255.0f), (int)(color.y()*255.0f), (int)(color.z()*255.0f));
	HRESULT result = font->DrawText(NULL, text.c_str(), text.length(), &rr, flags, col);
	
	CHECK_RESULT(result,"Error in DrawText()");
}

#endif
