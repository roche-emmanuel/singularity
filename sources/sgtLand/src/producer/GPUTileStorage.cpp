#include "producer/GPUTileStorage.h"
#include "scene/LandManager.h"

namespace sgt
{

const char *mipmapShader = "\
uniform ivec4 bufferLayerLevelWidth;\n\
#ifdef _VERTEX_\n\
layout(location=0) in vec4 vertex;\n\
void main () { gl_Position = vertex; }\n\
#endif\n\
#ifdef _GEOMETRY_\n\
#extension GL_EXT_geometry_shader4 : enable\n\
layout(triangles) in;\n\
layout(triangle_strip,max_vertices=3) out;\n\
void main() { gl_Layer = bufferLayerLevelWidth.y; gl_Position = gl_PositionIn[0]; EmitVertex(); gl_Position = gl_PositionIn[1]; EmitVertex(); gl_Position = gl_PositionIn[2]; EmitVertex(); EndPrimitive(); }\n\
#endif\n\
#ifdef _FRAGMENT_\n\
uniform sampler2DArray input_[8];\n\
layout(location=0) out vec4 output_;\n\
void main() {\n\
    vec2 xy = floor(gl_FragCoord.xy);\n\
    vec4 uv = vec4(xy + vec2(0.25), xy + vec2(0.75)) / float(bufferLayerLevelWidth.w);\n\
    vec4 result;\n\
    switch (bufferLayerLevelWidth.x) {\n\
    case 0:\n\
        result = texture(input_[0], vec3(uv.zw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[0], vec3(uv.xw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[0], vec3(uv.zy, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[0], vec3(uv.zw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        break;\n\
    case 1:\n\
        result = texture(input_[1], vec3(uv.zw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[1], vec3(uv.xw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[1], vec3(uv.zy, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[1], vec3(uv.zw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        break;\n\
    case 2:\n\
        result = texture(input_[2], vec3(uv.zw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[2], vec3(uv.xw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[2], vec3(uv.zy, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[2], vec3(uv.zw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        break;\n\
    case 3:\n\
        result = texture(input_[3], vec3(uv.zw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[3], vec3(uv.xw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[3], vec3(uv.zy, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[3], vec3(uv.zw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        break;\n\
    case 4:\n\
        result = texture(input_[4], vec3(uv.zw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[4], vec3(uv.xw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[4], vec3(uv.zy, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[4], vec3(uv.zw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        break;\n\
    case 5:\n\
        result = texture(input_[5], vec3(uv.zw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[5], vec3(uv.xw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[5], vec3(uv.zy, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[5], vec3(uv.zw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        break;\n\
    case 6:\n\
        result = texture(input_[6], vec3(uv.zw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[6], vec3(uv.xw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[6], vec3(uv.zy, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[6], vec3(uv.zw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        break;\n\
    case 7:\n\
        result = texture(input_[7], vec3(uv.zw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[7], vec3(uv.xw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[7], vec3(uv.zy, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        result += texture(input_[7], vec3(uv.zw, bufferLayerLevelWidth.y), bufferLayerLevelWidth.z);\n\
        break;\n\
    }\n\
    output_ = result * 0.25;\n\
}\n\
#endif\n";

GPUTileStorage::GPUSlot::GPUSlot(TileStorage *owner, int index, osg::Texture2DArray* t, int l) :
    Slot(owner), t(t), l(l), index(index)
{
}

GPUTileStorage::GPUSlot::~GPUSlot()
{
}

/*void GPUTileStorage::GPUSlot::copyPixels(sgtPtr<FrameBuffer> fb, int x, int y, int w, int h)
{
    fb->copyPixels(0, 0, l, x, y, w, h, *t, 0);
}*/

void GPUTileStorage::GPUSlot::setSubImage(int x, int y, int w, int h, TextureFormat f, PixelType t, const Buffer::Parameters &s, const Buffer &pixels)
{
	LandManager::setSubImage3D(this->t,0, x, y, l, w, h, 1, f, t, s, pixels);
}

GPUTileStorage::GPUTileStorage() : TileStorage()
{
}

GPUTileStorage::GPUTileStorage(int tileSize, int nTiles,
    int internalf, int f, int t, bool useTileMap) :
        TileStorage(tileSize, nTiles)
{
    init(tileSize, nTiles, internalf, f, t, useTileMap);
}

void GPUTileStorage::init(int tileSize, int nTiles,
    int internalf, int f, int t, bool useTileMap)
{
    TileStorage::init(tileSize, nTiles);

	int maxLayers = osg::Texture2DArray::getExtensions(0,true)->maxLayerCount();
	trINFO("GPUTileStorage","Max Texture2DArray layer count: "<< maxLayers);

    int nTextures = nTiles / maxLayers + (nTiles % maxLayers == 0 ? 0 : 1);
    needMipmaps = false;

	/*
    for (int i = 0; i < nTextures; ++i) {
        int nLayers = i == nTextures - 1 && nTiles % maxLayers != 0 ? nTiles % maxLayers : maxLayers;
		sgtPtr<osg::Texture2DArray> tex = new osg::Texture2DArray(tileSize, tileSize, nLayers);
        logWARN("Need to apply texture params here!");    
		//internalf, f, t, params, Buffer::Parameters(), CPUBuffer());
        needMipmaps = needMipmaps || (tex->hasMipmaps());
        textures.push_back(tex);
        tex->generateMipMap();
        for (int j = 0; j < nLayers; ++j) {
            freeSlots.push_back(new GPUSlot(this, i, textures[i], j));
        }
    }

    if (needMipmaps) {
        assert(nTextures <= 8);
        dirtySlots = new set<GPUSlot*>[nTextures];
        fbo = new FrameBuffer();
        fbo->setReadBuffer(BufferId(0));
        fbo->setDrawBuffers(BufferId(COLOR0 | COLOR1));
        mipmapProg = new Program(new Module(330, mipmapShader));
        sgtPtr<Sampler> s = new Sampler(Sampler::Parameters().min(NEAREST).mag(NEAREST).wrapS(CLAMP_TO_EDGE).wrapT(CLAMP_TO_EDGE));
        for (int i = 0; i < nTextures; ++i) {
            char buf[256];
            sprintf(buf, "input_[%d]", i);
            mipmapProg->getUniformSampler(string(buf))->set(textures[i]);
            mipmapProg->getUniformSampler(string(buf))->setSampler(s);
        }
        mipmapParams = mipmapProg->getUniform4i("bufferLayerLevelWidth");
    } else {
        dirtySlots = NULL;
    }

    changes = false;
    if (useTileMap) {
        assert(nTextures == 1);
        tileMap = new Texture2D(4096, 8, RG8, RG, UNSIGNED_BYTE,
            Texture::Parameters().wrapS(CLAMP_TO_EDGE).wrapT(CLAMP_TO_EDGE).min(NEAREST).mag(NEAREST),
            Buffer::Parameters(), CPUBuffer());
    }
	*/
}

GPUTileStorage::~GPUTileStorage()
{
    if (dirtySlots != NULL) {
        delete[] dirtySlots;
    }
}

int GPUTileStorage::getTextureCount()
{
    return (int) textures.size();
}

sgtPtr<osg::Texture2DArray> GPUTileStorage::getTexture(int index)
{
    return textures[index];
}

osg::Texture2D* GPUTileStorage::getTileMap()
{
    return tileMap.get();
}

void GPUTileStorage::notifyChange(GPUSlot *s)
{
    if (needMipmaps) {
        dirtySlots[s->index].insert(s);
        changes = true;
    }
}

void GPUTileStorage::generateMipMap()
{
	/*
    if (changes) {
        int level = 1;
        int width = tileSize / 2;
        while (width >= 1) {
            fbo->setViewport(vec4i(0, 0, width, width));
            for (unsigned int n = 0; n < textures.size(); ++n) {
                fbo->setTextureBuffer(BufferId(1 << n), textures[n], level, -1);
            }
            for (unsigned int n = 0; n < textures.size(); ++n) {
                fbo->setDrawBuffer(BufferId(1 << n));
                set<GPUSlot*>::iterator i = dirtySlots[n].begin();
                while (i != dirtySlots[n].end()) {
                    GPUSlot *s = *i;
                    mipmapParams->set(vec4i(s->index, s->l, level - 1, width));
                    fbo->drawQuad(mipmapProg);
                    ++i;
                }
            }
            width /= 2;
            level += 1;
        }
        for (unsigned int n = 0; n < textures.size(); ++n) {
            dirtySlots[n].clear();
        }
        changes = false;
    }
	*/
}

}
