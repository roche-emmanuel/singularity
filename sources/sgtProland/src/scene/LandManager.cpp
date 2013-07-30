
#include "scene/LandManager.h"
#include "osg/Texture"
#include "osg/Image"
#include "ork/render/Types.h"
#include "ork/render/CPUBuffer.h"
#include "ork/render/Framebuffer.h"

#if defined( _WIN64 ) || defined( _WIN32 )
#include <windows.h>
#else
#include <GL/glx.h>
#endif

namespace proland {

int LandManager::contextId = -1;

SceneManager::visibility LandManager::getVisibility(const osg::Polytope::PlaneList& frustumPlanes, const box3d& b)
{
	CHECK_RET(frustumPlanes.size()>=5,SceneManager::INVISIBLE,"Invalid number of frustum planes.");

	Visibility v0 = getVisibility(frustumPlanes[0].asVec4(), b);
	if (v0 == INVISIBLE) {
		return SceneManager::INVISIBLE;
	}
	
	Visibility v1 = getVisibility(frustumPlanes[1].asVec4(), b);
	if (v1 == INVISIBLE) {
		return SceneManager::INVISIBLE;
	}
	
	Visibility v2 = getVisibility(frustumPlanes[2].asVec4(), b);
	if (v2 == INVISIBLE) {
		return SceneManager::INVISIBLE;
	}
	
	Visibility v3 = getVisibility(frustumPlanes[3].asVec4(), b);
	if (v3 == INVISIBLE) {
		return SceneManager::INVISIBLE;
	}
	
	Visibility v4 = getVisibility(frustumPlanes[4].asVec4(), b);
	if (v4 == INVISIBLE) {
		return SceneManager::INVISIBLE;
	}

	if (v0 == FULLY_VISIBLE && v1 == FULLY_VISIBLE &&
		v2 == FULLY_VISIBLE && v3 == FULLY_VISIBLE &&
		v4 == FULLY_VISIBLE)
	{
		return SceneManager::FULLY_VISIBLE;
	}
	return SceneManager::PARTIALLY_VISIBLE;
}

LandManager::Visibility LandManager::getVisibility(const osg::Vec4d& clip, const box3d& b)
{
	double x0 = b.xmin * clip.x();
	double x1 = b.xmax * clip.x();
	double y0 = b.ymin * clip.y();
	double y1 = b.ymax * clip.y();
	double z0 = b.zmin * clip.z() + clip.w();
	double z1 = b.zmax * clip.z() + clip.w();
	double p1 = x0 + y0 + z0;
	double p2 = x1 + y0 + z0;
	double p3 = x1 + y1 + z0;
	double p4 = x0 + y1 + z0;
	double p5 = x0 + y0 + z1;
	double p6 = x1 + y0 + z1;
	double p7 = x1 + y1 + z1;
	double p8 = x0 + y1 + z1;
	if (p1 <= 0 && p2 <= 0 && p3 <= 0 && p4 <= 0 && p5 <= 0 && p6 <= 0 && p7 <= 0 && p8 <= 0) {
		return INVISIBLE;
	}
	if (p1 > 0 && p2 > 0 && p3 > 0 && p4 > 0 && p5 > 0 && p6 > 0 && p7 > 0 && p8 > 0) {
		return FULLY_VISIBLE;
	}
	return PARTIALLY_VISIBLE;
}

void LandManager::getFrustumPlanes(const mat4d &toScreen, osg::Polytope::PlaneList& planes)
{
	const double *m = toScreen.coefficients();
	planes.clear();

	// Extract the LEFT plane
	planes.push_back(osg::Plane(m[12] + m[0], m[13] + m[1], m[14] + m[2], m[15] + m[3]));

	// Extract the RIGHT plane
	planes.push_back(osg::Plane(m[12] - m[0], m[13] - m[1], m[14] - m[2], m[15] - m[3]));

	// Extract the BOTTOM plane
	planes.push_back(osg::Plane(m[12] + m[4], m[13] + m[5], m[14] + m[6], m[15] + m[7]));

	// Extract the TOP plane
	planes.push_back(osg::Plane(m[12] - m[4], m[13] - m[5], m[14] - m[6], m[15] - m[7]));

	// Extract the NEAR plane
	planes.push_back(osg::Plane(m[12] + m[8], m[13] + m[9], m[14] + m[10], m[15] + m[11]));

	// Extract the FAR plane
	planes.push_back(osg::Plane(m[12] - m[8], m[13] - m[9], m[14] - m[10], m[15] - m[11]));
}

GLenum LandManager::getError()
{
	GLenum error = glGetError();
	if ((error != GL_NO_ERROR)) {
		trERROR("LandManager","OpenGL error " << error << ", returned string '" << gluErrorString(error) << "'";);
	}
	if (error != GL_NO_ERROR) {
		printf("%s\n", gluErrorString(error));
	}
	return error;
}

void LandManager::setCurrentContext(int id) {
	contextId = id;
	static bool initialized = false;
	if(!initialized) {
		initialized = true;
		glewExperimental = GL_TRUE;
		glewInit();
		THROW_IF(ork::FrameBuffer::getError()!=0,"GL Error detected.");
	}
}

void LandManager::setSubImage2D(osg::Texture* tex, int level, int x, int y, int w, int h, TextureFormat f, PixelType t, const Buffer::Parameters &s, const Buffer &pixels)
{
	CHECK(tex,"Invalid Texture argument");
	CHECK(contextId>=0,"Invalid context id.");
	int numMipmapLevels = 1; 

	// retrieve the texture object or create it:
	osg::Texture::TextureObject* obj = tex->getTextureObject(contextId);
	if(!obj) {
		trDEBUG("LandManager","Creating texture object for texture manually with size "<<tex->getTextureWidth()<<"x"<<tex->getTextureHeight()<<"x"<<tex->getTextureDepth());
		obj = osg::Texture::generateTextureObject(tex,contextId,
			tex->getTextureTarget(),numMipmapLevels,tex->getInternalFormat(),
			tex->getTextureWidth(),tex->getTextureHeight(),tex->getTextureDepth(),0);
		tex->setTextureObject(contextId,obj);
		obj->setAllocated(true);

		// first initialization of the texture:
		obj->bind();
		glTexImage2D(tex->getTextureTarget(), level, tex->getInternalFormat(), tex->getTextureWidth(), tex->getTextureHeight(), 0, getTextureFormat(f), getPixelType(t), NULL);
	}

	obj->bind();
	pixels.bind(GL_PIXEL_UNPACK_BUFFER);
	s.set();
	glTexSubImage2D(tex->getTextureTarget(), level, x, y, w, h, getTextureFormat(f), getPixelType(t), pixels.data(0));
	s.unset();
	pixels.unbind(GL_PIXEL_UNPACK_BUFFER);

	CHECK(getError() == GL_NO_ERROR,"Error in setSubImage2D.");
	//trDEBUG("LandManager","Done setting sub image 2D.")
}

void LandManager::setSubImage3D(osg::Texture* tex, int level, int x, int y, int l, int w, int h, int d, TextureFormat f, PixelType t, const Buffer::Parameters &s, const Buffer &pixels)
{
	CHECK(tex,"Invalid Texture argument");
	CHECK(contextId>=0,"Invalid context id.");
	int numMipmapLevels = 1; 

	// retrieve the texture object or create it:
	osg::Texture::TextureObject* obj = tex->getTextureObject(contextId);
	if(!obj) {
		trDEBUG("LandManager","Creating texture object for texture manually with size "<<tex->getTextureWidth()<<"x"<<tex->getTextureHeight()<<"x"<<tex->getTextureDepth());
			obj = osg::Texture::generateTextureObject(tex,contextId,
			tex->getTextureTarget(),numMipmapLevels,tex->getInternalFormat(),
			tex->getTextureWidth(),tex->getTextureHeight(),tex->getTextureDepth(),0);
		tex->setTextureObject(contextId,obj);
		obj->setAllocated(true);

		// first initialization of the texture:
		obj->bind();
		CHECK(getError() == GL_NO_ERROR,"Step 1.");
		glTexImage3D(tex->getTextureTarget(), level, tex->getInternalFormat(), tex->getTextureWidth(), tex->getTextureHeight(), tex->getTextureDepth(), 0, getTextureFormat(f), getPixelType(t), NULL);
		CHECK(getError() == GL_NO_ERROR,"Step 2.");
	}

	obj->bind();
	CHECK(getError() == GL_NO_ERROR,"Error binding Texture 3D.");

	pixels.bind(GL_PIXEL_UNPACK_BUFFER);
	s.set();
	glTexSubImage3D(tex->getTextureTarget(), level, x, y, l, w, h, d, getTextureFormat(f), getPixelType(t), pixels.data(0));
	s.unset();
	pixels.unbind(GL_PIXEL_UNPACK_BUFFER);

	CHECK(getError() == GL_NO_ERROR,"Error in setSubImage3D.");
}

unsigned char randomByte()
{
	return (unsigned char)(rand() % 256);
};

osg::Image* LandManager::createRGBAImage2D(unsigned int ww, unsigned int hh, float red, float green, float blue, float alpha)
{
	unsigned char* buffer = new unsigned char[4*ww*hh];

	unsigned char* ptr = buffer;

	unsigned int num = ww*hh;

	for(unsigned int i = 0; i < num; ++i) {
		*ptr++ = red < 0.0 ? randomByte() : (unsigned char)(red*255.0f);
		*ptr++ = green < 0.0 ? randomByte() : (unsigned char)(green*255.0f);
		*ptr++ = blue < 0.0 ? randomByte() : (unsigned char)(blue*255.0f);
		*ptr++ = alpha < 0.0 ? randomByte() : (unsigned char)(alpha*255.0f);
	}

	// Now create the corresponding image:
	osg::Image* res = new osg::Image();
	res->setImage(ww,hh,1,GL_RGBA,GL_RGBA,GL_UNSIGNED_BYTE,buffer,osg::Image::USE_NEW_DELETE);

	return res;
}

osg::Image* LandManager::createRGBAImage3D(unsigned int ww, unsigned int hh, unsigned int dd, float red, float green, float blue, float alpha)
{
	unsigned char* buffer = new unsigned char[4*ww*hh*dd];

	unsigned char* ptr = buffer;

	unsigned int num = ww*hh*dd;

	for(unsigned int i = 0; i < num; ++i) {
		*ptr++ = red < 0.0 ? randomByte() : (unsigned char)(red*255.0f);
		*ptr++ = green < 0.0 ? randomByte() : (unsigned char)(green*255.0f);
		*ptr++ = blue < 0.0 ? randomByte() : (unsigned char)(blue*255.0f);
		*ptr++ = alpha < 0.0 ? randomByte() : (unsigned char)(alpha*255.0f);
	}

	// Now create the corresponding image:
	osg::Image* res = new osg::Image();
	res->setImage(ww,hh,dd,GL_RGBA,GL_RGBA,GL_UNSIGNED_BYTE,buffer,osg::Image::USE_NEW_DELETE);

	return res;
}

void LandManager::setSubImage2D(osg::Texture* tex, int x, int y, osg::Image* img, TextureFormat f, PixelType t)
{
	setSubImage2D(tex,0,x,y,img->s(),img->t(),f,t,Buffer::Parameters(), CPUBuffer(img->data()));
}

void LandManager::setSubImage3D(osg::Texture* tex, int x, int y, int l, osg::Image* img, TextureFormat f, PixelType t)
{
	setSubImage3D(tex,0,x,y,l,img->s(),img->t(),img->r(),f,t,Buffer::Parameters(), CPUBuffer(img->data()));
}

};