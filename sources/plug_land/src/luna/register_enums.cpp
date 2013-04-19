#include <plug_common.h>

#include <core/Types.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum BufferUsage

	lua_pushnumber(L,sgt::STREAM_DRAW); lua_setfield(L,-2,"STREAM_DRAW");
	lua_pushnumber(L,sgt::STREAM_READ); lua_setfield(L,-2,"STREAM_READ");
	lua_pushnumber(L,sgt::STREAM_COPY); lua_setfield(L,-2,"STREAM_COPY");
	lua_pushnumber(L,sgt::STATIC_DRAW); lua_setfield(L,-2,"STATIC_DRAW");
	lua_pushnumber(L,sgt::STATIC_READ); lua_setfield(L,-2,"STATIC_READ");
	lua_pushnumber(L,sgt::STATIC_COPY); lua_setfield(L,-2,"STATIC_COPY");
	lua_pushnumber(L,sgt::DYNAMIC_DRAW); lua_setfield(L,-2,"DYNAMIC_DRAW");
	lua_pushnumber(L,sgt::DYNAMIC_READ); lua_setfield(L,-2,"DYNAMIC_READ");
	lua_pushnumber(L,sgt::DYNAMIC_COPY); lua_setfield(L,-2,"DYNAMIC_COPY");

	lua_setfield(L,-2,"BufferUsage");

	lua_pushnumber(L,sgt::STREAM_DRAW); lua_setfield(L,-2,"STREAM_DRAW");
	lua_pushnumber(L,sgt::STREAM_READ); lua_setfield(L,-2,"STREAM_READ");
	lua_pushnumber(L,sgt::STREAM_COPY); lua_setfield(L,-2,"STREAM_COPY");
	lua_pushnumber(L,sgt::STATIC_DRAW); lua_setfield(L,-2,"STATIC_DRAW");
	lua_pushnumber(L,sgt::STATIC_READ); lua_setfield(L,-2,"STATIC_READ");
	lua_pushnumber(L,sgt::STATIC_COPY); lua_setfield(L,-2,"STATIC_COPY");
	lua_pushnumber(L,sgt::DYNAMIC_DRAW); lua_setfield(L,-2,"DYNAMIC_DRAW");
	lua_pushnumber(L,sgt::DYNAMIC_READ); lua_setfield(L,-2,"DYNAMIC_READ");
	lua_pushnumber(L,sgt::DYNAMIC_COPY); lua_setfield(L,-2,"DYNAMIC_COPY");


	lua_newtable(L); // enum BufferAccess

	lua_pushnumber(L,sgt::READ_ONLY); lua_setfield(L,-2,"READ_ONLY");
	lua_pushnumber(L,sgt::WRITE_ONLY); lua_setfield(L,-2,"WRITE_ONLY");
	lua_pushnumber(L,sgt::READ_WRITE); lua_setfield(L,-2,"READ_WRITE");

	lua_setfield(L,-2,"BufferAccess");

	lua_pushnumber(L,sgt::READ_ONLY); lua_setfield(L,-2,"READ_ONLY");
	lua_pushnumber(L,sgt::WRITE_ONLY); lua_setfield(L,-2,"WRITE_ONLY");
	lua_pushnumber(L,sgt::READ_WRITE); lua_setfield(L,-2,"READ_WRITE");


	lua_newtable(L); // enum AttributeType

	lua_pushnumber(L,sgt::A8I); lua_setfield(L,-2,"A8I");
	lua_pushnumber(L,sgt::A8UI); lua_setfield(L,-2,"A8UI");
	lua_pushnumber(L,sgt::A16I); lua_setfield(L,-2,"A16I");
	lua_pushnumber(L,sgt::A16UI); lua_setfield(L,-2,"A16UI");
	lua_pushnumber(L,sgt::A32I); lua_setfield(L,-2,"A32I");
	lua_pushnumber(L,sgt::A32UI); lua_setfield(L,-2,"A32UI");
	lua_pushnumber(L,sgt::A16F); lua_setfield(L,-2,"A16F");
	lua_pushnumber(L,sgt::A32F); lua_setfield(L,-2,"A32F");
	lua_pushnumber(L,sgt::A64F); lua_setfield(L,-2,"A64F");
	lua_pushnumber(L,sgt::A32I_2_10_10_10_REV); lua_setfield(L,-2,"A32I_2_10_10_10_REV");
	lua_pushnumber(L,sgt::A32UI_2_10_10_10_REV); lua_setfield(L,-2,"A32UI_2_10_10_10_REV");
	lua_pushnumber(L,sgt::A32I_FIXED); lua_setfield(L,-2,"A32I_FIXED");

	lua_setfield(L,-2,"AttributeType");

	lua_pushnumber(L,sgt::A8I); lua_setfield(L,-2,"A8I");
	lua_pushnumber(L,sgt::A8UI); lua_setfield(L,-2,"A8UI");
	lua_pushnumber(L,sgt::A16I); lua_setfield(L,-2,"A16I");
	lua_pushnumber(L,sgt::A16UI); lua_setfield(L,-2,"A16UI");
	lua_pushnumber(L,sgt::A32I); lua_setfield(L,-2,"A32I");
	lua_pushnumber(L,sgt::A32UI); lua_setfield(L,-2,"A32UI");
	lua_pushnumber(L,sgt::A16F); lua_setfield(L,-2,"A16F");
	lua_pushnumber(L,sgt::A32F); lua_setfield(L,-2,"A32F");
	lua_pushnumber(L,sgt::A64F); lua_setfield(L,-2,"A64F");
	lua_pushnumber(L,sgt::A32I_2_10_10_10_REV); lua_setfield(L,-2,"A32I_2_10_10_10_REV");
	lua_pushnumber(L,sgt::A32UI_2_10_10_10_REV); lua_setfield(L,-2,"A32UI_2_10_10_10_REV");
	lua_pushnumber(L,sgt::A32I_FIXED); lua_setfield(L,-2,"A32I_FIXED");


	lua_newtable(L); // enum MeshMode

	lua_pushnumber(L,sgt::POINTS); lua_setfield(L,-2,"POINTS");
	lua_pushnumber(L,sgt::LINE_STRIP); lua_setfield(L,-2,"LINE_STRIP");
	lua_pushnumber(L,sgt::LINE_LOOP); lua_setfield(L,-2,"LINE_LOOP");
	lua_pushnumber(L,sgt::LINES); lua_setfield(L,-2,"LINES");
	lua_pushnumber(L,sgt::TRIANGLE_STRIP); lua_setfield(L,-2,"TRIANGLE_STRIP");
	lua_pushnumber(L,sgt::TRIANGLE_FAN); lua_setfield(L,-2,"TRIANGLE_FAN");
	lua_pushnumber(L,sgt::TRIANGLES); lua_setfield(L,-2,"TRIANGLES");
	lua_pushnumber(L,sgt::LINES_ADJACENCY); lua_setfield(L,-2,"LINES_ADJACENCY");
	lua_pushnumber(L,sgt::LINE_STRIP_ADJACENCY); lua_setfield(L,-2,"LINE_STRIP_ADJACENCY");
	lua_pushnumber(L,sgt::TRIANGLES_ADJACENCY); lua_setfield(L,-2,"TRIANGLES_ADJACENCY");
	lua_pushnumber(L,sgt::TRIANGLE_STRIP_ADJACENCY); lua_setfield(L,-2,"TRIANGLE_STRIP_ADJACENCY");
	lua_pushnumber(L,sgt::PATCHES); lua_setfield(L,-2,"PATCHES");

	lua_setfield(L,-2,"MeshMode");

	lua_pushnumber(L,sgt::POINTS); lua_setfield(L,-2,"POINTS");
	lua_pushnumber(L,sgt::LINE_STRIP); lua_setfield(L,-2,"LINE_STRIP");
	lua_pushnumber(L,sgt::LINE_LOOP); lua_setfield(L,-2,"LINE_LOOP");
	lua_pushnumber(L,sgt::LINES); lua_setfield(L,-2,"LINES");
	lua_pushnumber(L,sgt::TRIANGLE_STRIP); lua_setfield(L,-2,"TRIANGLE_STRIP");
	lua_pushnumber(L,sgt::TRIANGLE_FAN); lua_setfield(L,-2,"TRIANGLE_FAN");
	lua_pushnumber(L,sgt::TRIANGLES); lua_setfield(L,-2,"TRIANGLES");
	lua_pushnumber(L,sgt::LINES_ADJACENCY); lua_setfield(L,-2,"LINES_ADJACENCY");
	lua_pushnumber(L,sgt::LINE_STRIP_ADJACENCY); lua_setfield(L,-2,"LINE_STRIP_ADJACENCY");
	lua_pushnumber(L,sgt::TRIANGLES_ADJACENCY); lua_setfield(L,-2,"TRIANGLES_ADJACENCY");
	lua_pushnumber(L,sgt::TRIANGLE_STRIP_ADJACENCY); lua_setfield(L,-2,"TRIANGLE_STRIP_ADJACENCY");
	lua_pushnumber(L,sgt::PATCHES); lua_setfield(L,-2,"PATCHES");


	lua_newtable(L); // enum MeshUsage

	lua_pushnumber(L,sgt::CPU); lua_setfield(L,-2,"CPU");
	lua_pushnumber(L,sgt::GPU_STATIC); lua_setfield(L,-2,"GPU_STATIC");
	lua_pushnumber(L,sgt::GPU_DYNAMIC); lua_setfield(L,-2,"GPU_DYNAMIC");
	lua_pushnumber(L,sgt::GPU_STREAM); lua_setfield(L,-2,"GPU_STREAM");

	lua_setfield(L,-2,"MeshUsage");

	lua_pushnumber(L,sgt::CPU); lua_setfield(L,-2,"CPU");
	lua_pushnumber(L,sgt::GPU_STATIC); lua_setfield(L,-2,"GPU_STATIC");
	lua_pushnumber(L,sgt::GPU_DYNAMIC); lua_setfield(L,-2,"GPU_DYNAMIC");
	lua_pushnumber(L,sgt::GPU_STREAM); lua_setfield(L,-2,"GPU_STREAM");


	lua_newtable(L); // enum CubeFace

	lua_pushnumber(L,sgt::POSITIVE_X); lua_setfield(L,-2,"POSITIVE_X");
	lua_pushnumber(L,sgt::NEGATIVE_X); lua_setfield(L,-2,"NEGATIVE_X");
	lua_pushnumber(L,sgt::POSITIVE_Y); lua_setfield(L,-2,"POSITIVE_Y");
	lua_pushnumber(L,sgt::NEGATIVE_Y); lua_setfield(L,-2,"NEGATIVE_Y");
	lua_pushnumber(L,sgt::POSITIVE_Z); lua_setfield(L,-2,"POSITIVE_Z");
	lua_pushnumber(L,sgt::NEGATIVE_Z); lua_setfield(L,-2,"NEGATIVE_Z");

	lua_setfield(L,-2,"CubeFace");

	lua_pushnumber(L,sgt::POSITIVE_X); lua_setfield(L,-2,"POSITIVE_X");
	lua_pushnumber(L,sgt::NEGATIVE_X); lua_setfield(L,-2,"NEGATIVE_X");
	lua_pushnumber(L,sgt::POSITIVE_Y); lua_setfield(L,-2,"POSITIVE_Y");
	lua_pushnumber(L,sgt::NEGATIVE_Y); lua_setfield(L,-2,"NEGATIVE_Y");
	lua_pushnumber(L,sgt::POSITIVE_Z); lua_setfield(L,-2,"POSITIVE_Z");
	lua_pushnumber(L,sgt::NEGATIVE_Z); lua_setfield(L,-2,"NEGATIVE_Z");


	lua_newtable(L); // enum TextureInternalFormat

	lua_pushnumber(L,sgt::R8); lua_setfield(L,-2,"R8");
	lua_pushnumber(L,sgt::R8_SNORM); lua_setfield(L,-2,"R8_SNORM");
	lua_pushnumber(L,sgt::R16); lua_setfield(L,-2,"R16");
	lua_pushnumber(L,sgt::R16_SNORM); lua_setfield(L,-2,"R16_SNORM");
	lua_pushnumber(L,sgt::RG8); lua_setfield(L,-2,"RG8");
	lua_pushnumber(L,sgt::RG8_SNORM); lua_setfield(L,-2,"RG8_SNORM");
	lua_pushnumber(L,sgt::RG16); lua_setfield(L,-2,"RG16");
	lua_pushnumber(L,sgt::RG16_SNORM); lua_setfield(L,-2,"RG16_SNORM");
	lua_pushnumber(L,sgt::R3_G3_B2); lua_setfield(L,-2,"R3_G3_B2");
	lua_pushnumber(L,sgt::RGB4); lua_setfield(L,-2,"RGB4");
	lua_pushnumber(L,sgt::RGB5); lua_setfield(L,-2,"RGB5");
	lua_pushnumber(L,sgt::RGB8); lua_setfield(L,-2,"RGB8");
	lua_pushnumber(L,sgt::RGB8_SNORM); lua_setfield(L,-2,"RGB8_SNORM");
	lua_pushnumber(L,sgt::RGB10); lua_setfield(L,-2,"RGB10");
	lua_pushnumber(L,sgt::RGB12); lua_setfield(L,-2,"RGB12");
	lua_pushnumber(L,sgt::RGB16); lua_setfield(L,-2,"RGB16");
	lua_pushnumber(L,sgt::RGB16_SNORM); lua_setfield(L,-2,"RGB16_SNORM");
	lua_pushnumber(L,sgt::RGBA2); lua_setfield(L,-2,"RGBA2");
	lua_pushnumber(L,sgt::RGBA4); lua_setfield(L,-2,"RGBA4");
	lua_pushnumber(L,sgt::RGB5_A1); lua_setfield(L,-2,"RGB5_A1");
	lua_pushnumber(L,sgt::RGBA8); lua_setfield(L,-2,"RGBA8");
	lua_pushnumber(L,sgt::RGBA8_SNORM); lua_setfield(L,-2,"RGBA8_SNORM");
	lua_pushnumber(L,sgt::RGB10_A2); lua_setfield(L,-2,"RGB10_A2");
	lua_pushnumber(L,sgt::RGB10_A2UI); lua_setfield(L,-2,"RGB10_A2UI");
	lua_pushnumber(L,sgt::RGBA12); lua_setfield(L,-2,"RGBA12");
	lua_pushnumber(L,sgt::RGBA16); lua_setfield(L,-2,"RGBA16");
	lua_pushnumber(L,sgt::RGBA16_SNORM); lua_setfield(L,-2,"RGBA16_SNORM");
	lua_pushnumber(L,sgt::SRGB8); lua_setfield(L,-2,"SRGB8");
	lua_pushnumber(L,sgt::SRGB8_ALPHA8); lua_setfield(L,-2,"SRGB8_ALPHA8");
	lua_pushnumber(L,sgt::R16F); lua_setfield(L,-2,"R16F");
	lua_pushnumber(L,sgt::RG16F); lua_setfield(L,-2,"RG16F");
	lua_pushnumber(L,sgt::RGB16F); lua_setfield(L,-2,"RGB16F");
	lua_pushnumber(L,sgt::RGBA16F); lua_setfield(L,-2,"RGBA16F");
	lua_pushnumber(L,sgt::R32F); lua_setfield(L,-2,"R32F");
	lua_pushnumber(L,sgt::RG32F); lua_setfield(L,-2,"RG32F");
	lua_pushnumber(L,sgt::RGB32F); lua_setfield(L,-2,"RGB32F");
	lua_pushnumber(L,sgt::RGBA32F); lua_setfield(L,-2,"RGBA32F");
	lua_pushnumber(L,sgt::R11F_G11F_B10F); lua_setfield(L,-2,"R11F_G11F_B10F");
	lua_pushnumber(L,sgt::RGB9_E5); lua_setfield(L,-2,"RGB9_E5");
	lua_pushnumber(L,sgt::R8I); lua_setfield(L,-2,"R8I");
	lua_pushnumber(L,sgt::R8UI); lua_setfield(L,-2,"R8UI");
	lua_pushnumber(L,sgt::R16I); lua_setfield(L,-2,"R16I");
	lua_pushnumber(L,sgt::R16UI); lua_setfield(L,-2,"R16UI");
	lua_pushnumber(L,sgt::R32I); lua_setfield(L,-2,"R32I");
	lua_pushnumber(L,sgt::R32UI); lua_setfield(L,-2,"R32UI");
	lua_pushnumber(L,sgt::RG8I); lua_setfield(L,-2,"RG8I");
	lua_pushnumber(L,sgt::RG8UI); lua_setfield(L,-2,"RG8UI");
	lua_pushnumber(L,sgt::RG16I); lua_setfield(L,-2,"RG16I");
	lua_pushnumber(L,sgt::RG16UI); lua_setfield(L,-2,"RG16UI");
	lua_pushnumber(L,sgt::RG32I); lua_setfield(L,-2,"RG32I");
	lua_pushnumber(L,sgt::RG32UI); lua_setfield(L,-2,"RG32UI");
	lua_pushnumber(L,sgt::RGB8I); lua_setfield(L,-2,"RGB8I");
	lua_pushnumber(L,sgt::RGB8UI); lua_setfield(L,-2,"RGB8UI");
	lua_pushnumber(L,sgt::RGB16I); lua_setfield(L,-2,"RGB16I");
	lua_pushnumber(L,sgt::RGB16UI); lua_setfield(L,-2,"RGB16UI");
	lua_pushnumber(L,sgt::RGB32I); lua_setfield(L,-2,"RGB32I");
	lua_pushnumber(L,sgt::RGB32UI); lua_setfield(L,-2,"RGB32UI");
	lua_pushnumber(L,sgt::RGBA8I); lua_setfield(L,-2,"RGBA8I");
	lua_pushnumber(L,sgt::RGBA8UI); lua_setfield(L,-2,"RGBA8UI");
	lua_pushnumber(L,sgt::RGBA16I); lua_setfield(L,-2,"RGBA16I");
	lua_pushnumber(L,sgt::RGBA16UI); lua_setfield(L,-2,"RGBA16UI");
	lua_pushnumber(L,sgt::RGBA32I); lua_setfield(L,-2,"RGBA32I");
	lua_pushnumber(L,sgt::RGBA32UI); lua_setfield(L,-2,"RGBA32UI");
	lua_pushnumber(L,sgt::DEPTH_COMPONENT16); lua_setfield(L,-2,"DEPTH_COMPONENT16");
	lua_pushnumber(L,sgt::DEPTH_COMPONENT24); lua_setfield(L,-2,"DEPTH_COMPONENT24");
	lua_pushnumber(L,sgt::DEPTH_COMPONENT32F); lua_setfield(L,-2,"DEPTH_COMPONENT32F");
	lua_pushnumber(L,sgt::DEPTH32F_STENCIL8); lua_setfield(L,-2,"DEPTH32F_STENCIL8");
	lua_pushnumber(L,sgt::DEPTH24_STENCIL8); lua_setfield(L,-2,"DEPTH24_STENCIL8");
	lua_pushnumber(L,sgt::COMPRESSED_RED); lua_setfield(L,-2,"COMPRESSED_RED");
	lua_pushnumber(L,sgt::COMPRESSED_RG); lua_setfield(L,-2,"COMPRESSED_RG");
	lua_pushnumber(L,sgt::COMPRESSED_RGB); lua_setfield(L,-2,"COMPRESSED_RGB");
	lua_pushnumber(L,sgt::COMPRESSED_RGBA); lua_setfield(L,-2,"COMPRESSED_RGBA");
	lua_pushnumber(L,sgt::COMPRESSED_SRGB); lua_setfield(L,-2,"COMPRESSED_SRGB");
	lua_pushnumber(L,sgt::COMPRESSED_RED_RGTC1); lua_setfield(L,-2,"COMPRESSED_RED_RGTC1");
	lua_pushnumber(L,sgt::COMPRESSED_SIGNED_RED_RGTC1); lua_setfield(L,-2,"COMPRESSED_SIGNED_RED_RGTC1");
	lua_pushnumber(L,sgt::COMPRESSED_RG_RGTC2); lua_setfield(L,-2,"COMPRESSED_RG_RGTC2");
	lua_pushnumber(L,sgt::COMPRESSED_SIGNED_RG_RGTC2); lua_setfield(L,-2,"COMPRESSED_SIGNED_RG_RGTC2");
	lua_pushnumber(L,sgt::COMPRESSED_RGBA_BPTC_UNORM_ARB); lua_setfield(L,-2,"COMPRESSED_RGBA_BPTC_UNORM_ARB");
	lua_pushnumber(L,sgt::COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB); lua_setfield(L,-2,"COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB");
	lua_pushnumber(L,sgt::COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB); lua_setfield(L,-2,"COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB");
	lua_pushnumber(L,sgt::COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB); lua_setfield(L,-2,"COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB");
	lua_pushnumber(L,sgt::COMPRESSED_RGB_S3TC_DXT1_EXT); lua_setfield(L,-2,"COMPRESSED_RGB_S3TC_DXT1_EXT");
	lua_pushnumber(L,sgt::COMPRESSED_RGBA_S3TC_DXT1_EXT); lua_setfield(L,-2,"COMPRESSED_RGBA_S3TC_DXT1_EXT");
	lua_pushnumber(L,sgt::COMPRESSED_RGBA_S3TC_DXT3_EXT); lua_setfield(L,-2,"COMPRESSED_RGBA_S3TC_DXT3_EXT");
	lua_pushnumber(L,sgt::COMPRESSED_RGBA_S3TC_DXT5_EXT); lua_setfield(L,-2,"COMPRESSED_RGBA_S3TC_DXT5_EXT");

	lua_setfield(L,-2,"TextureInternalFormat");

	lua_pushnumber(L,sgt::R8); lua_setfield(L,-2,"R8");
	lua_pushnumber(L,sgt::R8_SNORM); lua_setfield(L,-2,"R8_SNORM");
	lua_pushnumber(L,sgt::R16); lua_setfield(L,-2,"R16");
	lua_pushnumber(L,sgt::R16_SNORM); lua_setfield(L,-2,"R16_SNORM");
	lua_pushnumber(L,sgt::RG8); lua_setfield(L,-2,"RG8");
	lua_pushnumber(L,sgt::RG8_SNORM); lua_setfield(L,-2,"RG8_SNORM");
	lua_pushnumber(L,sgt::RG16); lua_setfield(L,-2,"RG16");
	lua_pushnumber(L,sgt::RG16_SNORM); lua_setfield(L,-2,"RG16_SNORM");
	lua_pushnumber(L,sgt::R3_G3_B2); lua_setfield(L,-2,"R3_G3_B2");
	lua_pushnumber(L,sgt::RGB4); lua_setfield(L,-2,"RGB4");
	lua_pushnumber(L,sgt::RGB5); lua_setfield(L,-2,"RGB5");
	lua_pushnumber(L,sgt::RGB8); lua_setfield(L,-2,"RGB8");
	lua_pushnumber(L,sgt::RGB8_SNORM); lua_setfield(L,-2,"RGB8_SNORM");
	lua_pushnumber(L,sgt::RGB10); lua_setfield(L,-2,"RGB10");
	lua_pushnumber(L,sgt::RGB12); lua_setfield(L,-2,"RGB12");
	lua_pushnumber(L,sgt::RGB16); lua_setfield(L,-2,"RGB16");
	lua_pushnumber(L,sgt::RGB16_SNORM); lua_setfield(L,-2,"RGB16_SNORM");
	lua_pushnumber(L,sgt::RGBA2); lua_setfield(L,-2,"RGBA2");
	lua_pushnumber(L,sgt::RGBA4); lua_setfield(L,-2,"RGBA4");
	lua_pushnumber(L,sgt::RGB5_A1); lua_setfield(L,-2,"RGB5_A1");
	lua_pushnumber(L,sgt::RGBA8); lua_setfield(L,-2,"RGBA8");
	lua_pushnumber(L,sgt::RGBA8_SNORM); lua_setfield(L,-2,"RGBA8_SNORM");
	lua_pushnumber(L,sgt::RGB10_A2); lua_setfield(L,-2,"RGB10_A2");
	lua_pushnumber(L,sgt::RGB10_A2UI); lua_setfield(L,-2,"RGB10_A2UI");
	lua_pushnumber(L,sgt::RGBA12); lua_setfield(L,-2,"RGBA12");
	lua_pushnumber(L,sgt::RGBA16); lua_setfield(L,-2,"RGBA16");
	lua_pushnumber(L,sgt::RGBA16_SNORM); lua_setfield(L,-2,"RGBA16_SNORM");
	lua_pushnumber(L,sgt::SRGB8); lua_setfield(L,-2,"SRGB8");
	lua_pushnumber(L,sgt::SRGB8_ALPHA8); lua_setfield(L,-2,"SRGB8_ALPHA8");
	lua_pushnumber(L,sgt::R16F); lua_setfield(L,-2,"R16F");
	lua_pushnumber(L,sgt::RG16F); lua_setfield(L,-2,"RG16F");
	lua_pushnumber(L,sgt::RGB16F); lua_setfield(L,-2,"RGB16F");
	lua_pushnumber(L,sgt::RGBA16F); lua_setfield(L,-2,"RGBA16F");
	lua_pushnumber(L,sgt::R32F); lua_setfield(L,-2,"R32F");
	lua_pushnumber(L,sgt::RG32F); lua_setfield(L,-2,"RG32F");
	lua_pushnumber(L,sgt::RGB32F); lua_setfield(L,-2,"RGB32F");
	lua_pushnumber(L,sgt::RGBA32F); lua_setfield(L,-2,"RGBA32F");
	lua_pushnumber(L,sgt::R11F_G11F_B10F); lua_setfield(L,-2,"R11F_G11F_B10F");
	lua_pushnumber(L,sgt::RGB9_E5); lua_setfield(L,-2,"RGB9_E5");
	lua_pushnumber(L,sgt::R8I); lua_setfield(L,-2,"R8I");
	lua_pushnumber(L,sgt::R8UI); lua_setfield(L,-2,"R8UI");
	lua_pushnumber(L,sgt::R16I); lua_setfield(L,-2,"R16I");
	lua_pushnumber(L,sgt::R16UI); lua_setfield(L,-2,"R16UI");
	lua_pushnumber(L,sgt::R32I); lua_setfield(L,-2,"R32I");
	lua_pushnumber(L,sgt::R32UI); lua_setfield(L,-2,"R32UI");
	lua_pushnumber(L,sgt::RG8I); lua_setfield(L,-2,"RG8I");
	lua_pushnumber(L,sgt::RG8UI); lua_setfield(L,-2,"RG8UI");
	lua_pushnumber(L,sgt::RG16I); lua_setfield(L,-2,"RG16I");
	lua_pushnumber(L,sgt::RG16UI); lua_setfield(L,-2,"RG16UI");
	lua_pushnumber(L,sgt::RG32I); lua_setfield(L,-2,"RG32I");
	lua_pushnumber(L,sgt::RG32UI); lua_setfield(L,-2,"RG32UI");
	lua_pushnumber(L,sgt::RGB8I); lua_setfield(L,-2,"RGB8I");
	lua_pushnumber(L,sgt::RGB8UI); lua_setfield(L,-2,"RGB8UI");
	lua_pushnumber(L,sgt::RGB16I); lua_setfield(L,-2,"RGB16I");
	lua_pushnumber(L,sgt::RGB16UI); lua_setfield(L,-2,"RGB16UI");
	lua_pushnumber(L,sgt::RGB32I); lua_setfield(L,-2,"RGB32I");
	lua_pushnumber(L,sgt::RGB32UI); lua_setfield(L,-2,"RGB32UI");
	lua_pushnumber(L,sgt::RGBA8I); lua_setfield(L,-2,"RGBA8I");
	lua_pushnumber(L,sgt::RGBA8UI); lua_setfield(L,-2,"RGBA8UI");
	lua_pushnumber(L,sgt::RGBA16I); lua_setfield(L,-2,"RGBA16I");
	lua_pushnumber(L,sgt::RGBA16UI); lua_setfield(L,-2,"RGBA16UI");
	lua_pushnumber(L,sgt::RGBA32I); lua_setfield(L,-2,"RGBA32I");
	lua_pushnumber(L,sgt::RGBA32UI); lua_setfield(L,-2,"RGBA32UI");
	lua_pushnumber(L,sgt::DEPTH_COMPONENT16); lua_setfield(L,-2,"DEPTH_COMPONENT16");
	lua_pushnumber(L,sgt::DEPTH_COMPONENT24); lua_setfield(L,-2,"DEPTH_COMPONENT24");
	lua_pushnumber(L,sgt::DEPTH_COMPONENT32F); lua_setfield(L,-2,"DEPTH_COMPONENT32F");
	lua_pushnumber(L,sgt::DEPTH32F_STENCIL8); lua_setfield(L,-2,"DEPTH32F_STENCIL8");
	lua_pushnumber(L,sgt::DEPTH24_STENCIL8); lua_setfield(L,-2,"DEPTH24_STENCIL8");
	lua_pushnumber(L,sgt::COMPRESSED_RED); lua_setfield(L,-2,"COMPRESSED_RED");
	lua_pushnumber(L,sgt::COMPRESSED_RG); lua_setfield(L,-2,"COMPRESSED_RG");
	lua_pushnumber(L,sgt::COMPRESSED_RGB); lua_setfield(L,-2,"COMPRESSED_RGB");
	lua_pushnumber(L,sgt::COMPRESSED_RGBA); lua_setfield(L,-2,"COMPRESSED_RGBA");
	lua_pushnumber(L,sgt::COMPRESSED_SRGB); lua_setfield(L,-2,"COMPRESSED_SRGB");
	lua_pushnumber(L,sgt::COMPRESSED_RED_RGTC1); lua_setfield(L,-2,"COMPRESSED_RED_RGTC1");
	lua_pushnumber(L,sgt::COMPRESSED_SIGNED_RED_RGTC1); lua_setfield(L,-2,"COMPRESSED_SIGNED_RED_RGTC1");
	lua_pushnumber(L,sgt::COMPRESSED_RG_RGTC2); lua_setfield(L,-2,"COMPRESSED_RG_RGTC2");
	lua_pushnumber(L,sgt::COMPRESSED_SIGNED_RG_RGTC2); lua_setfield(L,-2,"COMPRESSED_SIGNED_RG_RGTC2");
	lua_pushnumber(L,sgt::COMPRESSED_RGBA_BPTC_UNORM_ARB); lua_setfield(L,-2,"COMPRESSED_RGBA_BPTC_UNORM_ARB");
	lua_pushnumber(L,sgt::COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB); lua_setfield(L,-2,"COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB");
	lua_pushnumber(L,sgt::COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB); lua_setfield(L,-2,"COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB");
	lua_pushnumber(L,sgt::COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB); lua_setfield(L,-2,"COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB");
	lua_pushnumber(L,sgt::COMPRESSED_RGB_S3TC_DXT1_EXT); lua_setfield(L,-2,"COMPRESSED_RGB_S3TC_DXT1_EXT");
	lua_pushnumber(L,sgt::COMPRESSED_RGBA_S3TC_DXT1_EXT); lua_setfield(L,-2,"COMPRESSED_RGBA_S3TC_DXT1_EXT");
	lua_pushnumber(L,sgt::COMPRESSED_RGBA_S3TC_DXT3_EXT); lua_setfield(L,-2,"COMPRESSED_RGBA_S3TC_DXT3_EXT");
	lua_pushnumber(L,sgt::COMPRESSED_RGBA_S3TC_DXT5_EXT); lua_setfield(L,-2,"COMPRESSED_RGBA_S3TC_DXT5_EXT");


	lua_newtable(L); // enum TextureFormat

	lua_pushnumber(L,sgt::STENCIL_INDEX); lua_setfield(L,-2,"STENCIL_INDEX");
	lua_pushnumber(L,sgt::DEPTH_COMPONENT); lua_setfield(L,-2,"DEPTH_COMPONENT");
	lua_pushnumber(L,sgt::DEPTH_STENCIL); lua_setfield(L,-2,"DEPTH_STENCIL");
	lua_pushnumber(L,sgt::RED); lua_setfield(L,-2,"RED");
	lua_pushnumber(L,sgt::GREEN); lua_setfield(L,-2,"GREEN");
	lua_pushnumber(L,sgt::BLUE); lua_setfield(L,-2,"BLUE");
	lua_pushnumber(L,sgt::RG); lua_setfield(L,-2,"RG");
	lua_pushnumber(L,sgt::RGB); lua_setfield(L,-2,"RGB");
	lua_pushnumber(L,sgt::RGBA); lua_setfield(L,-2,"RGBA");
	lua_pushnumber(L,sgt::BGR); lua_setfield(L,-2,"BGR");
	lua_pushnumber(L,sgt::BGRA); lua_setfield(L,-2,"BGRA");
	lua_pushnumber(L,sgt::RED_INTEGER); lua_setfield(L,-2,"RED_INTEGER");
	lua_pushnumber(L,sgt::BLUE_INTEGER); lua_setfield(L,-2,"BLUE_INTEGER");
	lua_pushnumber(L,sgt::GREEN_INTEGER); lua_setfield(L,-2,"GREEN_INTEGER");
	lua_pushnumber(L,sgt::RG_INTEGER); lua_setfield(L,-2,"RG_INTEGER");
	lua_pushnumber(L,sgt::RGB_INTEGER); lua_setfield(L,-2,"RGB_INTEGER");
	lua_pushnumber(L,sgt::RGBA_INTEGER); lua_setfield(L,-2,"RGBA_INTEGER");
	lua_pushnumber(L,sgt::BGR_INTEGER); lua_setfield(L,-2,"BGR_INTEGER");
	lua_pushnumber(L,sgt::BGRA_INTEGER); lua_setfield(L,-2,"BGRA_INTEGER");

	lua_setfield(L,-2,"TextureFormat");

	lua_pushnumber(L,sgt::STENCIL_INDEX); lua_setfield(L,-2,"STENCIL_INDEX");
	lua_pushnumber(L,sgt::DEPTH_COMPONENT); lua_setfield(L,-2,"DEPTH_COMPONENT");
	lua_pushnumber(L,sgt::DEPTH_STENCIL); lua_setfield(L,-2,"DEPTH_STENCIL");
	lua_pushnumber(L,sgt::RED); lua_setfield(L,-2,"RED");
	lua_pushnumber(L,sgt::GREEN); lua_setfield(L,-2,"GREEN");
	lua_pushnumber(L,sgt::BLUE); lua_setfield(L,-2,"BLUE");
	lua_pushnumber(L,sgt::RG); lua_setfield(L,-2,"RG");
	lua_pushnumber(L,sgt::RGB); lua_setfield(L,-2,"RGB");
	lua_pushnumber(L,sgt::RGBA); lua_setfield(L,-2,"RGBA");
	lua_pushnumber(L,sgt::BGR); lua_setfield(L,-2,"BGR");
	lua_pushnumber(L,sgt::BGRA); lua_setfield(L,-2,"BGRA");
	lua_pushnumber(L,sgt::RED_INTEGER); lua_setfield(L,-2,"RED_INTEGER");
	lua_pushnumber(L,sgt::BLUE_INTEGER); lua_setfield(L,-2,"BLUE_INTEGER");
	lua_pushnumber(L,sgt::GREEN_INTEGER); lua_setfield(L,-2,"GREEN_INTEGER");
	lua_pushnumber(L,sgt::RG_INTEGER); lua_setfield(L,-2,"RG_INTEGER");
	lua_pushnumber(L,sgt::RGB_INTEGER); lua_setfield(L,-2,"RGB_INTEGER");
	lua_pushnumber(L,sgt::RGBA_INTEGER); lua_setfield(L,-2,"RGBA_INTEGER");
	lua_pushnumber(L,sgt::BGR_INTEGER); lua_setfield(L,-2,"BGR_INTEGER");
	lua_pushnumber(L,sgt::BGRA_INTEGER); lua_setfield(L,-2,"BGRA_INTEGER");


	lua_newtable(L); // enum PixelType

	lua_pushnumber(L,sgt::UNSIGNED_BYTE); lua_setfield(L,-2,"UNSIGNED_BYTE");
	lua_pushnumber(L,sgt::BYTE); lua_setfield(L,-2,"BYTE");
	lua_pushnumber(L,sgt::UNSIGNED_SHORT); lua_setfield(L,-2,"UNSIGNED_SHORT");
	lua_pushnumber(L,sgt::SHORT); lua_setfield(L,-2,"SHORT");
	lua_pushnumber(L,sgt::UNSIGNED_INT); lua_setfield(L,-2,"UNSIGNED_INT");
	lua_pushnumber(L,sgt::INT); lua_setfield(L,-2,"INT");
	lua_pushnumber(L,sgt::HALF); lua_setfield(L,-2,"HALF");
	lua_pushnumber(L,sgt::FLOAT); lua_setfield(L,-2,"FLOAT");
	lua_pushnumber(L,sgt::UNSIGNED_BYTE_3_3_2); lua_setfield(L,-2,"UNSIGNED_BYTE_3_3_2");
	lua_pushnumber(L,sgt::UNSIGNED_BYTE_2_3_3_REV); lua_setfield(L,-2,"UNSIGNED_BYTE_2_3_3_REV");
	lua_pushnumber(L,sgt::UNSIGNED_SHORT_5_6_5); lua_setfield(L,-2,"UNSIGNED_SHORT_5_6_5");
	lua_pushnumber(L,sgt::UNSIGNED_SHORT_5_6_5_REV); lua_setfield(L,-2,"UNSIGNED_SHORT_5_6_5_REV");
	lua_pushnumber(L,sgt::UNSIGNED_SHORT_4_4_4_4); lua_setfield(L,-2,"UNSIGNED_SHORT_4_4_4_4");
	lua_pushnumber(L,sgt::UNSIGNED_SHORT_4_4_4_4_REV); lua_setfield(L,-2,"UNSIGNED_SHORT_4_4_4_4_REV");
	lua_pushnumber(L,sgt::UNSIGNED_SHORT_5_5_5_1); lua_setfield(L,-2,"UNSIGNED_SHORT_5_5_5_1");
	lua_pushnumber(L,sgt::UNSIGNED_SHORT_1_5_5_5_REV); lua_setfield(L,-2,"UNSIGNED_SHORT_1_5_5_5_REV");
	lua_pushnumber(L,sgt::UNSIGNED_INT_8_8_8_8); lua_setfield(L,-2,"UNSIGNED_INT_8_8_8_8");
	lua_pushnumber(L,sgt::UNSIGNED_INT_8_8_8_8_REV); lua_setfield(L,-2,"UNSIGNED_INT_8_8_8_8_REV");
	lua_pushnumber(L,sgt::UNSIGNED_INT_10_10_10_2); lua_setfield(L,-2,"UNSIGNED_INT_10_10_10_2");
	lua_pushnumber(L,sgt::UNSIGNED_INT_2_10_10_10_REV); lua_setfield(L,-2,"UNSIGNED_INT_2_10_10_10_REV");
	lua_pushnumber(L,sgt::UNSIGNED_INT_24_8); lua_setfield(L,-2,"UNSIGNED_INT_24_8");
	lua_pushnumber(L,sgt::UNSIGNED_INT_10F_11F_11F_REV); lua_setfield(L,-2,"UNSIGNED_INT_10F_11F_11F_REV");
	lua_pushnumber(L,sgt::UNSIGNED_INT_5_9_9_9_REV); lua_setfield(L,-2,"UNSIGNED_INT_5_9_9_9_REV");
	lua_pushnumber(L,sgt::FLOAT_32_UNSIGNED_INT_24_8_REV); lua_setfield(L,-2,"FLOAT_32_UNSIGNED_INT_24_8_REV");

	lua_setfield(L,-2,"PixelType");

	lua_pushnumber(L,sgt::UNSIGNED_BYTE); lua_setfield(L,-2,"UNSIGNED_BYTE");
	lua_pushnumber(L,sgt::BYTE); lua_setfield(L,-2,"BYTE");
	lua_pushnumber(L,sgt::UNSIGNED_SHORT); lua_setfield(L,-2,"UNSIGNED_SHORT");
	lua_pushnumber(L,sgt::SHORT); lua_setfield(L,-2,"SHORT");
	lua_pushnumber(L,sgt::UNSIGNED_INT); lua_setfield(L,-2,"UNSIGNED_INT");
	lua_pushnumber(L,sgt::INT); lua_setfield(L,-2,"INT");
	lua_pushnumber(L,sgt::HALF); lua_setfield(L,-2,"HALF");
	lua_pushnumber(L,sgt::FLOAT); lua_setfield(L,-2,"FLOAT");
	lua_pushnumber(L,sgt::UNSIGNED_BYTE_3_3_2); lua_setfield(L,-2,"UNSIGNED_BYTE_3_3_2");
	lua_pushnumber(L,sgt::UNSIGNED_BYTE_2_3_3_REV); lua_setfield(L,-2,"UNSIGNED_BYTE_2_3_3_REV");
	lua_pushnumber(L,sgt::UNSIGNED_SHORT_5_6_5); lua_setfield(L,-2,"UNSIGNED_SHORT_5_6_5");
	lua_pushnumber(L,sgt::UNSIGNED_SHORT_5_6_5_REV); lua_setfield(L,-2,"UNSIGNED_SHORT_5_6_5_REV");
	lua_pushnumber(L,sgt::UNSIGNED_SHORT_4_4_4_4); lua_setfield(L,-2,"UNSIGNED_SHORT_4_4_4_4");
	lua_pushnumber(L,sgt::UNSIGNED_SHORT_4_4_4_4_REV); lua_setfield(L,-2,"UNSIGNED_SHORT_4_4_4_4_REV");
	lua_pushnumber(L,sgt::UNSIGNED_SHORT_5_5_5_1); lua_setfield(L,-2,"UNSIGNED_SHORT_5_5_5_1");
	lua_pushnumber(L,sgt::UNSIGNED_SHORT_1_5_5_5_REV); lua_setfield(L,-2,"UNSIGNED_SHORT_1_5_5_5_REV");
	lua_pushnumber(L,sgt::UNSIGNED_INT_8_8_8_8); lua_setfield(L,-2,"UNSIGNED_INT_8_8_8_8");
	lua_pushnumber(L,sgt::UNSIGNED_INT_8_8_8_8_REV); lua_setfield(L,-2,"UNSIGNED_INT_8_8_8_8_REV");
	lua_pushnumber(L,sgt::UNSIGNED_INT_10_10_10_2); lua_setfield(L,-2,"UNSIGNED_INT_10_10_10_2");
	lua_pushnumber(L,sgt::UNSIGNED_INT_2_10_10_10_REV); lua_setfield(L,-2,"UNSIGNED_INT_2_10_10_10_REV");
	lua_pushnumber(L,sgt::UNSIGNED_INT_24_8); lua_setfield(L,-2,"UNSIGNED_INT_24_8");
	lua_pushnumber(L,sgt::UNSIGNED_INT_10F_11F_11F_REV); lua_setfield(L,-2,"UNSIGNED_INT_10F_11F_11F_REV");
	lua_pushnumber(L,sgt::UNSIGNED_INT_5_9_9_9_REV); lua_setfield(L,-2,"UNSIGNED_INT_5_9_9_9_REV");
	lua_pushnumber(L,sgt::FLOAT_32_UNSIGNED_INT_24_8_REV); lua_setfield(L,-2,"FLOAT_32_UNSIGNED_INT_24_8_REV");


	lua_newtable(L); // enum TextureWrap

	lua_pushnumber(L,sgt::CLAMP_TO_EDGE); lua_setfield(L,-2,"CLAMP_TO_EDGE");
	lua_pushnumber(L,sgt::CLAMP_TO_BORDER); lua_setfield(L,-2,"CLAMP_TO_BORDER");
	lua_pushnumber(L,sgt::REPEAT); lua_setfield(L,-2,"REPEAT");
	lua_pushnumber(L,sgt::MIRRORED_REPEAT); lua_setfield(L,-2,"MIRRORED_REPEAT");

	lua_setfield(L,-2,"TextureWrap");

	lua_pushnumber(L,sgt::CLAMP_TO_EDGE); lua_setfield(L,-2,"CLAMP_TO_EDGE");
	lua_pushnumber(L,sgt::CLAMP_TO_BORDER); lua_setfield(L,-2,"CLAMP_TO_BORDER");
	lua_pushnumber(L,sgt::REPEAT); lua_setfield(L,-2,"REPEAT");
	lua_pushnumber(L,sgt::MIRRORED_REPEAT); lua_setfield(L,-2,"MIRRORED_REPEAT");


	lua_newtable(L); // enum TextureFilter

	lua_pushnumber(L,sgt::NEAREST); lua_setfield(L,-2,"NEAREST");
	lua_pushnumber(L,sgt::LINEAR); lua_setfield(L,-2,"LINEAR");
	lua_pushnumber(L,sgt::NEAREST_MIPMAP_NEAREST); lua_setfield(L,-2,"NEAREST_MIPMAP_NEAREST");
	lua_pushnumber(L,sgt::NEAREST_MIPMAP_LINEAR); lua_setfield(L,-2,"NEAREST_MIPMAP_LINEAR");
	lua_pushnumber(L,sgt::LINEAR_MIPMAP_NEAREST); lua_setfield(L,-2,"LINEAR_MIPMAP_NEAREST");
	lua_pushnumber(L,sgt::LINEAR_MIPMAP_LINEAR); lua_setfield(L,-2,"LINEAR_MIPMAP_LINEAR");

	lua_setfield(L,-2,"TextureFilter");

	lua_pushnumber(L,sgt::NEAREST); lua_setfield(L,-2,"NEAREST");
	lua_pushnumber(L,sgt::LINEAR); lua_setfield(L,-2,"LINEAR");
	lua_pushnumber(L,sgt::NEAREST_MIPMAP_NEAREST); lua_setfield(L,-2,"NEAREST_MIPMAP_NEAREST");
	lua_pushnumber(L,sgt::NEAREST_MIPMAP_LINEAR); lua_setfield(L,-2,"NEAREST_MIPMAP_LINEAR");
	lua_pushnumber(L,sgt::LINEAR_MIPMAP_NEAREST); lua_setfield(L,-2,"LINEAR_MIPMAP_NEAREST");
	lua_pushnumber(L,sgt::LINEAR_MIPMAP_LINEAR); lua_setfield(L,-2,"LINEAR_MIPMAP_LINEAR");


	lua_newtable(L); // enum Function

	lua_pushnumber(L,sgt::LEQUAL); lua_setfield(L,-2,"LEQUAL");
	lua_pushnumber(L,sgt::GEQUAL); lua_setfield(L,-2,"GEQUAL");
	lua_pushnumber(L,sgt::LESS); lua_setfield(L,-2,"LESS");
	lua_pushnumber(L,sgt::GREATER); lua_setfield(L,-2,"GREATER");
	lua_pushnumber(L,sgt::EQUAL); lua_setfield(L,-2,"EQUAL");
	lua_pushnumber(L,sgt::NOTEQUAL); lua_setfield(L,-2,"NOTEQUAL");
	lua_pushnumber(L,sgt::ALWAYS); lua_setfield(L,-2,"ALWAYS");
	lua_pushnumber(L,sgt::NEVER); lua_setfield(L,-2,"NEVER");

	lua_setfield(L,-2,"Function");

	lua_pushnumber(L,sgt::LEQUAL); lua_setfield(L,-2,"LEQUAL");
	lua_pushnumber(L,sgt::GEQUAL); lua_setfield(L,-2,"GEQUAL");
	lua_pushnumber(L,sgt::LESS); lua_setfield(L,-2,"LESS");
	lua_pushnumber(L,sgt::GREATER); lua_setfield(L,-2,"GREATER");
	lua_pushnumber(L,sgt::EQUAL); lua_setfield(L,-2,"EQUAL");
	lua_pushnumber(L,sgt::NOTEQUAL); lua_setfield(L,-2,"NOTEQUAL");
	lua_pushnumber(L,sgt::ALWAYS); lua_setfield(L,-2,"ALWAYS");
	lua_pushnumber(L,sgt::NEVER); lua_setfield(L,-2,"NEVER");


	lua_newtable(L); // enum BufferId

	lua_pushnumber(L,sgt::COLOR0); lua_setfield(L,-2,"COLOR0");
	lua_pushnumber(L,sgt::COLOR1); lua_setfield(L,-2,"COLOR1");
	lua_pushnumber(L,sgt::COLOR2); lua_setfield(L,-2,"COLOR2");
	lua_pushnumber(L,sgt::COLOR3); lua_setfield(L,-2,"COLOR3");
	lua_pushnumber(L,sgt::COLOR4); lua_setfield(L,-2,"COLOR4");
	lua_pushnumber(L,sgt::COLOR5); lua_setfield(L,-2,"COLOR5");
	lua_pushnumber(L,sgt::COLOR6); lua_setfield(L,-2,"COLOR6");
	lua_pushnumber(L,sgt::COLOR7); lua_setfield(L,-2,"COLOR7");
	lua_pushnumber(L,sgt::STENCIL); lua_setfield(L,-2,"STENCIL");
	lua_pushnumber(L,sgt::DEPTH); lua_setfield(L,-2,"DEPTH");

	lua_setfield(L,-2,"BufferId");

	lua_pushnumber(L,sgt::COLOR0); lua_setfield(L,-2,"COLOR0");
	lua_pushnumber(L,sgt::COLOR1); lua_setfield(L,-2,"COLOR1");
	lua_pushnumber(L,sgt::COLOR2); lua_setfield(L,-2,"COLOR2");
	lua_pushnumber(L,sgt::COLOR3); lua_setfield(L,-2,"COLOR3");
	lua_pushnumber(L,sgt::COLOR4); lua_setfield(L,-2,"COLOR4");
	lua_pushnumber(L,sgt::COLOR5); lua_setfield(L,-2,"COLOR5");
	lua_pushnumber(L,sgt::COLOR6); lua_setfield(L,-2,"COLOR6");
	lua_pushnumber(L,sgt::COLOR7); lua_setfield(L,-2,"COLOR7");
	lua_pushnumber(L,sgt::STENCIL); lua_setfield(L,-2,"STENCIL");
	lua_pushnumber(L,sgt::DEPTH); lua_setfield(L,-2,"DEPTH");


	lua_newtable(L); // enum PolygonMode

	lua_pushnumber(L,sgt::CULL); lua_setfield(L,-2,"CULL");
	lua_pushnumber(L,sgt::POINT); lua_setfield(L,-2,"POINT");
	lua_pushnumber(L,sgt::LINE); lua_setfield(L,-2,"LINE");
	lua_pushnumber(L,sgt::FILL); lua_setfield(L,-2,"FILL");

	lua_setfield(L,-2,"PolygonMode");

	lua_pushnumber(L,sgt::CULL); lua_setfield(L,-2,"CULL");
	lua_pushnumber(L,sgt::POINT); lua_setfield(L,-2,"POINT");
	lua_pushnumber(L,sgt::LINE); lua_setfield(L,-2,"LINE");
	lua_pushnumber(L,sgt::FILL); lua_setfield(L,-2,"FILL");


	lua_newtable(L); // enum StencilOperation

	lua_pushnumber(L,sgt::KEEP); lua_setfield(L,-2,"KEEP");
	lua_pushnumber(L,sgt::RESET); lua_setfield(L,-2,"RESET");
	lua_pushnumber(L,sgt::REPLACE); lua_setfield(L,-2,"REPLACE");
	lua_pushnumber(L,sgt::INCR); lua_setfield(L,-2,"INCR");
	lua_pushnumber(L,sgt::DECR); lua_setfield(L,-2,"DECR");
	lua_pushnumber(L,sgt::INVERT); lua_setfield(L,-2,"INVERT");
	lua_pushnumber(L,sgt::INCR_WRAP); lua_setfield(L,-2,"INCR_WRAP");
	lua_pushnumber(L,sgt::DECR_WRAP); lua_setfield(L,-2,"DECR_WRAP");

	lua_setfield(L,-2,"StencilOperation");

	lua_pushnumber(L,sgt::KEEP); lua_setfield(L,-2,"KEEP");
	lua_pushnumber(L,sgt::RESET); lua_setfield(L,-2,"RESET");
	lua_pushnumber(L,sgt::REPLACE); lua_setfield(L,-2,"REPLACE");
	lua_pushnumber(L,sgt::INCR); lua_setfield(L,-2,"INCR");
	lua_pushnumber(L,sgt::DECR); lua_setfield(L,-2,"DECR");
	lua_pushnumber(L,sgt::INVERT); lua_setfield(L,-2,"INVERT");
	lua_pushnumber(L,sgt::INCR_WRAP); lua_setfield(L,-2,"INCR_WRAP");
	lua_pushnumber(L,sgt::DECR_WRAP); lua_setfield(L,-2,"DECR_WRAP");


	lua_newtable(L); // enum BlendEquation

	lua_pushnumber(L,sgt::ADD); lua_setfield(L,-2,"ADD");
	lua_pushnumber(L,sgt::SUBTRACT); lua_setfield(L,-2,"SUBTRACT");
	lua_pushnumber(L,sgt::REVERSE_SUBTRACT); lua_setfield(L,-2,"REVERSE_SUBTRACT");
	lua_pushnumber(L,sgt::MIN); lua_setfield(L,-2,"MIN");
	lua_pushnumber(L,sgt::MAX); lua_setfield(L,-2,"MAX");

	lua_setfield(L,-2,"BlendEquation");

	lua_pushnumber(L,sgt::ADD); lua_setfield(L,-2,"ADD");
	lua_pushnumber(L,sgt::SUBTRACT); lua_setfield(L,-2,"SUBTRACT");
	lua_pushnumber(L,sgt::REVERSE_SUBTRACT); lua_setfield(L,-2,"REVERSE_SUBTRACT");
	lua_pushnumber(L,sgt::MIN); lua_setfield(L,-2,"MIN");
	lua_pushnumber(L,sgt::MAX); lua_setfield(L,-2,"MAX");


	lua_newtable(L); // enum BlendArgument

	lua_pushnumber(L,sgt::ZERO); lua_setfield(L,-2,"ZERO");
	lua_pushnumber(L,sgt::ONE); lua_setfield(L,-2,"ONE");
	lua_pushnumber(L,sgt::SRC_COLOR); lua_setfield(L,-2,"SRC_COLOR");
	lua_pushnumber(L,sgt::ONE_MINUS_SRC_COLOR); lua_setfield(L,-2,"ONE_MINUS_SRC_COLOR");
	lua_pushnumber(L,sgt::DST_COLOR); lua_setfield(L,-2,"DST_COLOR");
	lua_pushnumber(L,sgt::ONE_MINUS_DST_COLOR); lua_setfield(L,-2,"ONE_MINUS_DST_COLOR");
	lua_pushnumber(L,sgt::SRC_ALPHA); lua_setfield(L,-2,"SRC_ALPHA");
	lua_pushnumber(L,sgt::ONE_MINUS_SRC_ALPHA); lua_setfield(L,-2,"ONE_MINUS_SRC_ALPHA");
	lua_pushnumber(L,sgt::DST_ALPHA); lua_setfield(L,-2,"DST_ALPHA");
	lua_pushnumber(L,sgt::ONE_MINUS_DST_ALPHA); lua_setfield(L,-2,"ONE_MINUS_DST_ALPHA");
	lua_pushnumber(L,sgt::CONSTANT_COLOR); lua_setfield(L,-2,"CONSTANT_COLOR");
	lua_pushnumber(L,sgt::ONE_MINUS_CONSTANT_COLOR); lua_setfield(L,-2,"ONE_MINUS_CONSTANT_COLOR");
	lua_pushnumber(L,sgt::CONSTANT_ALPHA); lua_setfield(L,-2,"CONSTANT_ALPHA");
	lua_pushnumber(L,sgt::ONE_MINUS_CONSTANT_ALPHA); lua_setfield(L,-2,"ONE_MINUS_CONSTANT_ALPHA");

	lua_setfield(L,-2,"BlendArgument");

	lua_pushnumber(L,sgt::ZERO); lua_setfield(L,-2,"ZERO");
	lua_pushnumber(L,sgt::ONE); lua_setfield(L,-2,"ONE");
	lua_pushnumber(L,sgt::SRC_COLOR); lua_setfield(L,-2,"SRC_COLOR");
	lua_pushnumber(L,sgt::ONE_MINUS_SRC_COLOR); lua_setfield(L,-2,"ONE_MINUS_SRC_COLOR");
	lua_pushnumber(L,sgt::DST_COLOR); lua_setfield(L,-2,"DST_COLOR");
	lua_pushnumber(L,sgt::ONE_MINUS_DST_COLOR); lua_setfield(L,-2,"ONE_MINUS_DST_COLOR");
	lua_pushnumber(L,sgt::SRC_ALPHA); lua_setfield(L,-2,"SRC_ALPHA");
	lua_pushnumber(L,sgt::ONE_MINUS_SRC_ALPHA); lua_setfield(L,-2,"ONE_MINUS_SRC_ALPHA");
	lua_pushnumber(L,sgt::DST_ALPHA); lua_setfield(L,-2,"DST_ALPHA");
	lua_pushnumber(L,sgt::ONE_MINUS_DST_ALPHA); lua_setfield(L,-2,"ONE_MINUS_DST_ALPHA");
	lua_pushnumber(L,sgt::CONSTANT_COLOR); lua_setfield(L,-2,"CONSTANT_COLOR");
	lua_pushnumber(L,sgt::ONE_MINUS_CONSTANT_COLOR); lua_setfield(L,-2,"ONE_MINUS_CONSTANT_COLOR");
	lua_pushnumber(L,sgt::CONSTANT_ALPHA); lua_setfield(L,-2,"CONSTANT_ALPHA");
	lua_pushnumber(L,sgt::ONE_MINUS_CONSTANT_ALPHA); lua_setfield(L,-2,"ONE_MINUS_CONSTANT_ALPHA");


	lua_newtable(L); // enum LogicOperation

	lua_pushnumber(L,sgt::CLEAR); lua_setfield(L,-2,"CLEAR");
	lua_pushnumber(L,sgt::AND); lua_setfield(L,-2,"AND");
	lua_pushnumber(L,sgt::AND_REVERSE); lua_setfield(L,-2,"AND_REVERSE");
	lua_pushnumber(L,sgt::COPY); lua_setfield(L,-2,"COPY");
	lua_pushnumber(L,sgt::AND_INVERTED); lua_setfield(L,-2,"AND_INVERTED");
	lua_pushnumber(L,sgt::NOOP); lua_setfield(L,-2,"NOOP");
	lua_pushnumber(L,sgt::XOR); lua_setfield(L,-2,"XOR");
	lua_pushnumber(L,sgt::OR); lua_setfield(L,-2,"OR");
	lua_pushnumber(L,sgt::NOR); lua_setfield(L,-2,"NOR");
	lua_pushnumber(L,sgt::EQUIV); lua_setfield(L,-2,"EQUIV");
	lua_pushnumber(L,sgt::NOT); lua_setfield(L,-2,"NOT");
	lua_pushnumber(L,sgt::OR_REVERSE); lua_setfield(L,-2,"OR_REVERSE");
	lua_pushnumber(L,sgt::COPY_INVERTED); lua_setfield(L,-2,"COPY_INVERTED");
	lua_pushnumber(L,sgt::OR_INVERTED); lua_setfield(L,-2,"OR_INVERTED");
	lua_pushnumber(L,sgt::NAND); lua_setfield(L,-2,"NAND");
	lua_pushnumber(L,sgt::SET); lua_setfield(L,-2,"SET");

	lua_setfield(L,-2,"LogicOperation");

	lua_pushnumber(L,sgt::CLEAR); lua_setfield(L,-2,"CLEAR");
	lua_pushnumber(L,sgt::AND); lua_setfield(L,-2,"AND");
	lua_pushnumber(L,sgt::AND_REVERSE); lua_setfield(L,-2,"AND_REVERSE");
	lua_pushnumber(L,sgt::COPY); lua_setfield(L,-2,"COPY");
	lua_pushnumber(L,sgt::AND_INVERTED); lua_setfield(L,-2,"AND_INVERTED");
	lua_pushnumber(L,sgt::NOOP); lua_setfield(L,-2,"NOOP");
	lua_pushnumber(L,sgt::XOR); lua_setfield(L,-2,"XOR");
	lua_pushnumber(L,sgt::OR); lua_setfield(L,-2,"OR");
	lua_pushnumber(L,sgt::NOR); lua_setfield(L,-2,"NOR");
	lua_pushnumber(L,sgt::EQUIV); lua_setfield(L,-2,"EQUIV");
	lua_pushnumber(L,sgt::NOT); lua_setfield(L,-2,"NOT");
	lua_pushnumber(L,sgt::OR_REVERSE); lua_setfield(L,-2,"OR_REVERSE");
	lua_pushnumber(L,sgt::COPY_INVERTED); lua_setfield(L,-2,"COPY_INVERTED");
	lua_pushnumber(L,sgt::OR_INVERTED); lua_setfield(L,-2,"OR_INVERTED");
	lua_pushnumber(L,sgt::NAND); lua_setfield(L,-2,"NAND");
	lua_pushnumber(L,sgt::SET); lua_setfield(L,-2,"SET");


	lua_newtable(L); // enum Stage

	lua_pushnumber(L,sgt::VERTEX); lua_setfield(L,-2,"VERTEX");
	lua_pushnumber(L,sgt::TESSELATION_CONTROL); lua_setfield(L,-2,"TESSELATION_CONTROL");
	lua_pushnumber(L,sgt::TESSELATION_EVALUATION); lua_setfield(L,-2,"TESSELATION_EVALUATION");
	lua_pushnumber(L,sgt::GEOMETRY); lua_setfield(L,-2,"GEOMETRY");
	lua_pushnumber(L,sgt::FRAGMENT); lua_setfield(L,-2,"FRAGMENT");

	lua_setfield(L,-2,"Stage");

	lua_pushnumber(L,sgt::VERTEX); lua_setfield(L,-2,"VERTEX");
	lua_pushnumber(L,sgt::TESSELATION_CONTROL); lua_setfield(L,-2,"TESSELATION_CONTROL");
	lua_pushnumber(L,sgt::TESSELATION_EVALUATION); lua_setfield(L,-2,"TESSELATION_EVALUATION");
	lua_pushnumber(L,sgt::GEOMETRY); lua_setfield(L,-2,"GEOMETRY");
	lua_pushnumber(L,sgt::FRAGMENT); lua_setfield(L,-2,"FRAGMENT");


	lua_newtable(L); // enum UniformType

	lua_pushnumber(L,sgt::VEC1F); lua_setfield(L,-2,"VEC1F");
	lua_pushnumber(L,sgt::VEC2F); lua_setfield(L,-2,"VEC2F");
	lua_pushnumber(L,sgt::VEC3F); lua_setfield(L,-2,"VEC3F");
	lua_pushnumber(L,sgt::VEC4F); lua_setfield(L,-2,"VEC4F");
	lua_pushnumber(L,sgt::VEC1D); lua_setfield(L,-2,"VEC1D");
	lua_pushnumber(L,sgt::VEC2D); lua_setfield(L,-2,"VEC2D");
	lua_pushnumber(L,sgt::VEC3D); lua_setfield(L,-2,"VEC3D");
	lua_pushnumber(L,sgt::VEC4D); lua_setfield(L,-2,"VEC4D");
	lua_pushnumber(L,sgt::VEC1I); lua_setfield(L,-2,"VEC1I");
	lua_pushnumber(L,sgt::VEC2I); lua_setfield(L,-2,"VEC2I");
	lua_pushnumber(L,sgt::VEC3I); lua_setfield(L,-2,"VEC3I");
	lua_pushnumber(L,sgt::VEC4I); lua_setfield(L,-2,"VEC4I");
	lua_pushnumber(L,sgt::VEC1UI); lua_setfield(L,-2,"VEC1UI");
	lua_pushnumber(L,sgt::VEC2UI); lua_setfield(L,-2,"VEC2UI");
	lua_pushnumber(L,sgt::VEC3UI); lua_setfield(L,-2,"VEC3UI");
	lua_pushnumber(L,sgt::VEC4UI); lua_setfield(L,-2,"VEC4UI");
	lua_pushnumber(L,sgt::VEC1B); lua_setfield(L,-2,"VEC1B");
	lua_pushnumber(L,sgt::VEC2B); lua_setfield(L,-2,"VEC2B");
	lua_pushnumber(L,sgt::VEC3B); lua_setfield(L,-2,"VEC3B");
	lua_pushnumber(L,sgt::VEC4B); lua_setfield(L,-2,"VEC4B");
	lua_pushnumber(L,sgt::MAT2F); lua_setfield(L,-2,"MAT2F");
	lua_pushnumber(L,sgt::MAT3F); lua_setfield(L,-2,"MAT3F");
	lua_pushnumber(L,sgt::MAT4F); lua_setfield(L,-2,"MAT4F");
	lua_pushnumber(L,sgt::MAT2x3F); lua_setfield(L,-2,"MAT2x3F");
	lua_pushnumber(L,sgt::MAT2x4F); lua_setfield(L,-2,"MAT2x4F");
	lua_pushnumber(L,sgt::MAT3x2F); lua_setfield(L,-2,"MAT3x2F");
	lua_pushnumber(L,sgt::MAT3x4F); lua_setfield(L,-2,"MAT3x4F");
	lua_pushnumber(L,sgt::MAT4x2F); lua_setfield(L,-2,"MAT4x2F");
	lua_pushnumber(L,sgt::MAT4x3F); lua_setfield(L,-2,"MAT4x3F");
	lua_pushnumber(L,sgt::MAT2D); lua_setfield(L,-2,"MAT2D");
	lua_pushnumber(L,sgt::MAT3D); lua_setfield(L,-2,"MAT3D");
	lua_pushnumber(L,sgt::MAT4D); lua_setfield(L,-2,"MAT4D");
	lua_pushnumber(L,sgt::MAT2x3D); lua_setfield(L,-2,"MAT2x3D");
	lua_pushnumber(L,sgt::MAT2x4D); lua_setfield(L,-2,"MAT2x4D");
	lua_pushnumber(L,sgt::MAT3x2D); lua_setfield(L,-2,"MAT3x2D");
	lua_pushnumber(L,sgt::MAT3x4D); lua_setfield(L,-2,"MAT3x4D");
	lua_pushnumber(L,sgt::MAT4x2D); lua_setfield(L,-2,"MAT4x2D");
	lua_pushnumber(L,sgt::MAT4x3D); lua_setfield(L,-2,"MAT4x3D");
	lua_pushnumber(L,sgt::SAMPLER_1D); lua_setfield(L,-2,"SAMPLER_1D");
	lua_pushnumber(L,sgt::SAMPLER_2D); lua_setfield(L,-2,"SAMPLER_2D");
	lua_pushnumber(L,sgt::SAMPLER_3D); lua_setfield(L,-2,"SAMPLER_3D");
	lua_pushnumber(L,sgt::SAMPLER_CUBE); lua_setfield(L,-2,"SAMPLER_CUBE");
	lua_pushnumber(L,sgt::SAMPLER_1D_ARRAY); lua_setfield(L,-2,"SAMPLER_1D_ARRAY");
	lua_pushnumber(L,sgt::SAMPLER_2D_ARRAY); lua_setfield(L,-2,"SAMPLER_2D_ARRAY");
	lua_pushnumber(L,sgt::SAMPLER_CUBE_MAP_ARRAY); lua_setfield(L,-2,"SAMPLER_CUBE_MAP_ARRAY");
	lua_pushnumber(L,sgt::SAMPLER_2D_MULTISAMPLE); lua_setfield(L,-2,"SAMPLER_2D_MULTISAMPLE");
	lua_pushnumber(L,sgt::SAMPLER_2D_MULTISAMPLE_ARRAY); lua_setfield(L,-2,"SAMPLER_2D_MULTISAMPLE_ARRAY");
	lua_pushnumber(L,sgt::SAMPLER_BUFFER); lua_setfield(L,-2,"SAMPLER_BUFFER");
	lua_pushnumber(L,sgt::SAMPLER_2D_RECT); lua_setfield(L,-2,"SAMPLER_2D_RECT");
	lua_pushnumber(L,sgt::INT_SAMPLER_1D); lua_setfield(L,-2,"INT_SAMPLER_1D");
	lua_pushnumber(L,sgt::INT_SAMPLER_2D); lua_setfield(L,-2,"INT_SAMPLER_2D");
	lua_pushnumber(L,sgt::INT_SAMPLER_3D); lua_setfield(L,-2,"INT_SAMPLER_3D");
	lua_pushnumber(L,sgt::INT_SAMPLER_CUBE); lua_setfield(L,-2,"INT_SAMPLER_CUBE");
	lua_pushnumber(L,sgt::INT_SAMPLER_1D_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_1D_ARRAY");
	lua_pushnumber(L,sgt::INT_SAMPLER_2D_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_2D_ARRAY");
	lua_pushnumber(L,sgt::INT_SAMPLER_CUBE_MAP_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_CUBE_MAP_ARRAY");
	lua_pushnumber(L,sgt::INT_SAMPLER_2D_MULTISAMPLE); lua_setfield(L,-2,"INT_SAMPLER_2D_MULTISAMPLE");
	lua_pushnumber(L,sgt::INT_SAMPLER_2D_MULTISAMPLE_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_2D_MULTISAMPLE_ARRAY");
	lua_pushnumber(L,sgt::INT_SAMPLER_BUFFER); lua_setfield(L,-2,"INT_SAMPLER_BUFFER");
	lua_pushnumber(L,sgt::INT_SAMPLER_2D_RECT); lua_setfield(L,-2,"INT_SAMPLER_2D_RECT");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_1D); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_1D");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_2D); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_3D); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_3D");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_CUBE); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_CUBE");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_1D_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_1D_ARRAY");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_2D_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_ARRAY");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_BUFFER); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_BUFFER");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_2D_RECT); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_RECT");
	lua_pushnumber(L,sgt::SUBROUTINE); lua_setfield(L,-2,"SUBROUTINE");

	lua_setfield(L,-2,"UniformType");

	lua_pushnumber(L,sgt::VEC1F); lua_setfield(L,-2,"VEC1F");
	lua_pushnumber(L,sgt::VEC2F); lua_setfield(L,-2,"VEC2F");
	lua_pushnumber(L,sgt::VEC3F); lua_setfield(L,-2,"VEC3F");
	lua_pushnumber(L,sgt::VEC4F); lua_setfield(L,-2,"VEC4F");
	lua_pushnumber(L,sgt::VEC1D); lua_setfield(L,-2,"VEC1D");
	lua_pushnumber(L,sgt::VEC2D); lua_setfield(L,-2,"VEC2D");
	lua_pushnumber(L,sgt::VEC3D); lua_setfield(L,-2,"VEC3D");
	lua_pushnumber(L,sgt::VEC4D); lua_setfield(L,-2,"VEC4D");
	lua_pushnumber(L,sgt::VEC1I); lua_setfield(L,-2,"VEC1I");
	lua_pushnumber(L,sgt::VEC2I); lua_setfield(L,-2,"VEC2I");
	lua_pushnumber(L,sgt::VEC3I); lua_setfield(L,-2,"VEC3I");
	lua_pushnumber(L,sgt::VEC4I); lua_setfield(L,-2,"VEC4I");
	lua_pushnumber(L,sgt::VEC1UI); lua_setfield(L,-2,"VEC1UI");
	lua_pushnumber(L,sgt::VEC2UI); lua_setfield(L,-2,"VEC2UI");
	lua_pushnumber(L,sgt::VEC3UI); lua_setfield(L,-2,"VEC3UI");
	lua_pushnumber(L,sgt::VEC4UI); lua_setfield(L,-2,"VEC4UI");
	lua_pushnumber(L,sgt::VEC1B); lua_setfield(L,-2,"VEC1B");
	lua_pushnumber(L,sgt::VEC2B); lua_setfield(L,-2,"VEC2B");
	lua_pushnumber(L,sgt::VEC3B); lua_setfield(L,-2,"VEC3B");
	lua_pushnumber(L,sgt::VEC4B); lua_setfield(L,-2,"VEC4B");
	lua_pushnumber(L,sgt::MAT2F); lua_setfield(L,-2,"MAT2F");
	lua_pushnumber(L,sgt::MAT3F); lua_setfield(L,-2,"MAT3F");
	lua_pushnumber(L,sgt::MAT4F); lua_setfield(L,-2,"MAT4F");
	lua_pushnumber(L,sgt::MAT2x3F); lua_setfield(L,-2,"MAT2x3F");
	lua_pushnumber(L,sgt::MAT2x4F); lua_setfield(L,-2,"MAT2x4F");
	lua_pushnumber(L,sgt::MAT3x2F); lua_setfield(L,-2,"MAT3x2F");
	lua_pushnumber(L,sgt::MAT3x4F); lua_setfield(L,-2,"MAT3x4F");
	lua_pushnumber(L,sgt::MAT4x2F); lua_setfield(L,-2,"MAT4x2F");
	lua_pushnumber(L,sgt::MAT4x3F); lua_setfield(L,-2,"MAT4x3F");
	lua_pushnumber(L,sgt::MAT2D); lua_setfield(L,-2,"MAT2D");
	lua_pushnumber(L,sgt::MAT3D); lua_setfield(L,-2,"MAT3D");
	lua_pushnumber(L,sgt::MAT4D); lua_setfield(L,-2,"MAT4D");
	lua_pushnumber(L,sgt::MAT2x3D); lua_setfield(L,-2,"MAT2x3D");
	lua_pushnumber(L,sgt::MAT2x4D); lua_setfield(L,-2,"MAT2x4D");
	lua_pushnumber(L,sgt::MAT3x2D); lua_setfield(L,-2,"MAT3x2D");
	lua_pushnumber(L,sgt::MAT3x4D); lua_setfield(L,-2,"MAT3x4D");
	lua_pushnumber(L,sgt::MAT4x2D); lua_setfield(L,-2,"MAT4x2D");
	lua_pushnumber(L,sgt::MAT4x3D); lua_setfield(L,-2,"MAT4x3D");
	lua_pushnumber(L,sgt::SAMPLER_1D); lua_setfield(L,-2,"SAMPLER_1D");
	lua_pushnumber(L,sgt::SAMPLER_2D); lua_setfield(L,-2,"SAMPLER_2D");
	lua_pushnumber(L,sgt::SAMPLER_3D); lua_setfield(L,-2,"SAMPLER_3D");
	lua_pushnumber(L,sgt::SAMPLER_CUBE); lua_setfield(L,-2,"SAMPLER_CUBE");
	lua_pushnumber(L,sgt::SAMPLER_1D_ARRAY); lua_setfield(L,-2,"SAMPLER_1D_ARRAY");
	lua_pushnumber(L,sgt::SAMPLER_2D_ARRAY); lua_setfield(L,-2,"SAMPLER_2D_ARRAY");
	lua_pushnumber(L,sgt::SAMPLER_CUBE_MAP_ARRAY); lua_setfield(L,-2,"SAMPLER_CUBE_MAP_ARRAY");
	lua_pushnumber(L,sgt::SAMPLER_2D_MULTISAMPLE); lua_setfield(L,-2,"SAMPLER_2D_MULTISAMPLE");
	lua_pushnumber(L,sgt::SAMPLER_2D_MULTISAMPLE_ARRAY); lua_setfield(L,-2,"SAMPLER_2D_MULTISAMPLE_ARRAY");
	lua_pushnumber(L,sgt::SAMPLER_BUFFER); lua_setfield(L,-2,"SAMPLER_BUFFER");
	lua_pushnumber(L,sgt::SAMPLER_2D_RECT); lua_setfield(L,-2,"SAMPLER_2D_RECT");
	lua_pushnumber(L,sgt::INT_SAMPLER_1D); lua_setfield(L,-2,"INT_SAMPLER_1D");
	lua_pushnumber(L,sgt::INT_SAMPLER_2D); lua_setfield(L,-2,"INT_SAMPLER_2D");
	lua_pushnumber(L,sgt::INT_SAMPLER_3D); lua_setfield(L,-2,"INT_SAMPLER_3D");
	lua_pushnumber(L,sgt::INT_SAMPLER_CUBE); lua_setfield(L,-2,"INT_SAMPLER_CUBE");
	lua_pushnumber(L,sgt::INT_SAMPLER_1D_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_1D_ARRAY");
	lua_pushnumber(L,sgt::INT_SAMPLER_2D_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_2D_ARRAY");
	lua_pushnumber(L,sgt::INT_SAMPLER_CUBE_MAP_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_CUBE_MAP_ARRAY");
	lua_pushnumber(L,sgt::INT_SAMPLER_2D_MULTISAMPLE); lua_setfield(L,-2,"INT_SAMPLER_2D_MULTISAMPLE");
	lua_pushnumber(L,sgt::INT_SAMPLER_2D_MULTISAMPLE_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_2D_MULTISAMPLE_ARRAY");
	lua_pushnumber(L,sgt::INT_SAMPLER_BUFFER); lua_setfield(L,-2,"INT_SAMPLER_BUFFER");
	lua_pushnumber(L,sgt::INT_SAMPLER_2D_RECT); lua_setfield(L,-2,"INT_SAMPLER_2D_RECT");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_1D); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_1D");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_2D); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_3D); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_3D");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_CUBE); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_CUBE");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_1D_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_1D_ARRAY");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_2D_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_ARRAY");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_BUFFER); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_BUFFER");
	lua_pushnumber(L,sgt::UNSIGNED_INT_SAMPLER_2D_RECT); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_RECT");
	lua_pushnumber(L,sgt::SUBROUTINE); lua_setfield(L,-2,"SUBROUTINE");


	lua_newtable(L); // enum QueryType

	lua_pushnumber(L,sgt::PRIMITIVES_GENERATED); lua_setfield(L,-2,"PRIMITIVES_GENERATED");
	lua_pushnumber(L,sgt::TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN); lua_setfield(L,-2,"TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN");
	lua_pushnumber(L,sgt::SAMPLES_PASSED); lua_setfield(L,-2,"SAMPLES_PASSED");
	lua_pushnumber(L,sgt::ANY_SAMPLES_PASSED); lua_setfield(L,-2,"ANY_SAMPLES_PASSED");
	lua_pushnumber(L,sgt::TIME_STAMP); lua_setfield(L,-2,"TIME_STAMP");

	lua_setfield(L,-2,"QueryType");

	lua_pushnumber(L,sgt::PRIMITIVES_GENERATED); lua_setfield(L,-2,"PRIMITIVES_GENERATED");
	lua_pushnumber(L,sgt::TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN); lua_setfield(L,-2,"TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN");
	lua_pushnumber(L,sgt::SAMPLES_PASSED); lua_setfield(L,-2,"SAMPLES_PASSED");
	lua_pushnumber(L,sgt::ANY_SAMPLES_PASSED); lua_setfield(L,-2,"ANY_SAMPLES_PASSED");
	lua_pushnumber(L,sgt::TIME_STAMP); lua_setfield(L,-2,"TIME_STAMP");


	lua_newtable(L); // enum QueryMode

	lua_pushnumber(L,sgt::WAIT); lua_setfield(L,-2,"WAIT");
	lua_pushnumber(L,sgt::NO_WAIT); lua_setfield(L,-2,"NO_WAIT");
	lua_pushnumber(L,sgt::REGION_WAIT); lua_setfield(L,-2,"REGION_WAIT");
	lua_pushnumber(L,sgt::REGION_NO_WAIT); lua_setfield(L,-2,"REGION_NO_WAIT");

	lua_setfield(L,-2,"QueryMode");

	lua_pushnumber(L,sgt::WAIT); lua_setfield(L,-2,"WAIT");
	lua_pushnumber(L,sgt::NO_WAIT); lua_setfield(L,-2,"NO_WAIT");
	lua_pushnumber(L,sgt::REGION_WAIT); lua_setfield(L,-2,"REGION_WAIT");
	lua_pushnumber(L,sgt::REGION_NO_WAIT); lua_setfield(L,-2,"REGION_NO_WAIT");


}

#ifdef __cplusplus
}
#endif


