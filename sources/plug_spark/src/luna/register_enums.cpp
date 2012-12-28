#include <plug_common.h>

#include <Core/SPK_DEF.h>
#include <Core/SPK_Interpolator.h>
#include <Core/SPK_Model.h>
#include <Core/SPK_Modifier.h>
#include <Core/SPK_Renderer.h>
#include <Core/SPK_System.h>
#include <Extensions/Modifiers/SPK_LinearForce.h>
#include <Extensions/Renderers/SPK_Oriented2DRendererInterface.h>
#include <Extensions/Renderers/SPK_Oriented3DRendererInterface.h>
#include <Extensions/Renderers/SPK_PointRendererInterface.h>
#include <Extensions/Renderers/SPK_QuadRendererInterface.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum ModelParam

	lua_pushnumber(L,SPK::PARAM_RED); lua_setfield(L,-2,"PARAM_RED");
	lua_pushnumber(L,SPK::PARAM_GREEN); lua_setfield(L,-2,"PARAM_GREEN");
	lua_pushnumber(L,SPK::PARAM_BLUE); lua_setfield(L,-2,"PARAM_BLUE");
	lua_pushnumber(L,SPK::PARAM_ALPHA); lua_setfield(L,-2,"PARAM_ALPHA");
	lua_pushnumber(L,SPK::PARAM_SIZE); lua_setfield(L,-2,"PARAM_SIZE");
	lua_pushnumber(L,SPK::PARAM_MASS); lua_setfield(L,-2,"PARAM_MASS");
	lua_pushnumber(L,SPK::PARAM_ANGLE); lua_setfield(L,-2,"PARAM_ANGLE");
	lua_pushnumber(L,SPK::PARAM_TEXTURE_INDEX); lua_setfield(L,-2,"PARAM_TEXTURE_INDEX");
	lua_pushnumber(L,SPK::PARAM_ROTATION_SPEED); lua_setfield(L,-2,"PARAM_ROTATION_SPEED");
	lua_pushnumber(L,SPK::PARAM_CUSTOM_0); lua_setfield(L,-2,"PARAM_CUSTOM_0");
	lua_pushnumber(L,SPK::PARAM_CUSTOM_1); lua_setfield(L,-2,"PARAM_CUSTOM_1");
	lua_pushnumber(L,SPK::PARAM_CUSTOM_2); lua_setfield(L,-2,"PARAM_CUSTOM_2");

	lua_setfield(L,-2,"ModelParam");

	lua_pushnumber(L,SPK::PARAM_RED); lua_setfield(L,-2,"PARAM_RED");
	lua_pushnumber(L,SPK::PARAM_GREEN); lua_setfield(L,-2,"PARAM_GREEN");
	lua_pushnumber(L,SPK::PARAM_BLUE); lua_setfield(L,-2,"PARAM_BLUE");
	lua_pushnumber(L,SPK::PARAM_ALPHA); lua_setfield(L,-2,"PARAM_ALPHA");
	lua_pushnumber(L,SPK::PARAM_SIZE); lua_setfield(L,-2,"PARAM_SIZE");
	lua_pushnumber(L,SPK::PARAM_MASS); lua_setfield(L,-2,"PARAM_MASS");
	lua_pushnumber(L,SPK::PARAM_ANGLE); lua_setfield(L,-2,"PARAM_ANGLE");
	lua_pushnumber(L,SPK::PARAM_TEXTURE_INDEX); lua_setfield(L,-2,"PARAM_TEXTURE_INDEX");
	lua_pushnumber(L,SPK::PARAM_ROTATION_SPEED); lua_setfield(L,-2,"PARAM_ROTATION_SPEED");
	lua_pushnumber(L,SPK::PARAM_CUSTOM_0); lua_setfield(L,-2,"PARAM_CUSTOM_0");
	lua_pushnumber(L,SPK::PARAM_CUSTOM_1); lua_setfield(L,-2,"PARAM_CUSTOM_1");
	lua_pushnumber(L,SPK::PARAM_CUSTOM_2); lua_setfield(L,-2,"PARAM_CUSTOM_2");


	lua_newtable(L); // enum InterpolationType

	lua_pushnumber(L,SPK::INTERPOLATOR_LIFETIME); lua_setfield(L,-2,"INTERPOLATOR_LIFETIME");
	lua_pushnumber(L,SPK::INTERPOLATOR_AGE); lua_setfield(L,-2,"INTERPOLATOR_AGE");
	lua_pushnumber(L,SPK::INTERPOLATOR_PARAM); lua_setfield(L,-2,"INTERPOLATOR_PARAM");
	lua_pushnumber(L,SPK::INTERPOLATOR_VELOCITY); lua_setfield(L,-2,"INTERPOLATOR_VELOCITY");

	lua_setfield(L,-2,"InterpolationType");

	lua_pushnumber(L,SPK::INTERPOLATOR_LIFETIME); lua_setfield(L,-2,"INTERPOLATOR_LIFETIME");
	lua_pushnumber(L,SPK::INTERPOLATOR_AGE); lua_setfield(L,-2,"INTERPOLATOR_AGE");
	lua_pushnumber(L,SPK::INTERPOLATOR_PARAM); lua_setfield(L,-2,"INTERPOLATOR_PARAM");
	lua_pushnumber(L,SPK::INTERPOLATOR_VELOCITY); lua_setfield(L,-2,"INTERPOLATOR_VELOCITY");


	lua_newtable(L); // enum ModelParamFlag

	lua_pushnumber(L,SPK::FLAG_NONE); lua_setfield(L,-2,"FLAG_NONE");
	lua_pushnumber(L,SPK::FLAG_RED); lua_setfield(L,-2,"FLAG_RED");
	lua_pushnumber(L,SPK::FLAG_GREEN); lua_setfield(L,-2,"FLAG_GREEN");
	lua_pushnumber(L,SPK::FLAG_BLUE); lua_setfield(L,-2,"FLAG_BLUE");
	lua_pushnumber(L,SPK::FLAG_ALPHA); lua_setfield(L,-2,"FLAG_ALPHA");
	lua_pushnumber(L,SPK::FLAG_SIZE); lua_setfield(L,-2,"FLAG_SIZE");
	lua_pushnumber(L,SPK::FLAG_MASS); lua_setfield(L,-2,"FLAG_MASS");
	lua_pushnumber(L,SPK::FLAG_ANGLE); lua_setfield(L,-2,"FLAG_ANGLE");
	lua_pushnumber(L,SPK::FLAG_TEXTURE_INDEX); lua_setfield(L,-2,"FLAG_TEXTURE_INDEX");
	lua_pushnumber(L,SPK::FLAG_ROTATION_SPEED); lua_setfield(L,-2,"FLAG_ROTATION_SPEED");
	lua_pushnumber(L,SPK::FLAG_CUSTOM_0); lua_setfield(L,-2,"FLAG_CUSTOM_0");
	lua_pushnumber(L,SPK::FLAG_CUSTOM_1); lua_setfield(L,-2,"FLAG_CUSTOM_1");
	lua_pushnumber(L,SPK::FLAG_CUSTOM_2); lua_setfield(L,-2,"FLAG_CUSTOM_2");

	lua_setfield(L,-2,"ModelParamFlag");

	lua_pushnumber(L,SPK::FLAG_NONE); lua_setfield(L,-2,"FLAG_NONE");
	lua_pushnumber(L,SPK::FLAG_RED); lua_setfield(L,-2,"FLAG_RED");
	lua_pushnumber(L,SPK::FLAG_GREEN); lua_setfield(L,-2,"FLAG_GREEN");
	lua_pushnumber(L,SPK::FLAG_BLUE); lua_setfield(L,-2,"FLAG_BLUE");
	lua_pushnumber(L,SPK::FLAG_ALPHA); lua_setfield(L,-2,"FLAG_ALPHA");
	lua_pushnumber(L,SPK::FLAG_SIZE); lua_setfield(L,-2,"FLAG_SIZE");
	lua_pushnumber(L,SPK::FLAG_MASS); lua_setfield(L,-2,"FLAG_MASS");
	lua_pushnumber(L,SPK::FLAG_ANGLE); lua_setfield(L,-2,"FLAG_ANGLE");
	lua_pushnumber(L,SPK::FLAG_TEXTURE_INDEX); lua_setfield(L,-2,"FLAG_TEXTURE_INDEX");
	lua_pushnumber(L,SPK::FLAG_ROTATION_SPEED); lua_setfield(L,-2,"FLAG_ROTATION_SPEED");
	lua_pushnumber(L,SPK::FLAG_CUSTOM_0); lua_setfield(L,-2,"FLAG_CUSTOM_0");
	lua_pushnumber(L,SPK::FLAG_CUSTOM_1); lua_setfield(L,-2,"FLAG_CUSTOM_1");
	lua_pushnumber(L,SPK::FLAG_CUSTOM_2); lua_setfield(L,-2,"FLAG_CUSTOM_2");


	lua_newtable(L); // enum ModifierTrigger

	lua_pushnumber(L,SPK::ALWAYS); lua_setfield(L,-2,"ALWAYS");
	lua_pushnumber(L,SPK::INSIDE_ZONE); lua_setfield(L,-2,"INSIDE_ZONE");
	lua_pushnumber(L,SPK::OUTSIDE_ZONE); lua_setfield(L,-2,"OUTSIDE_ZONE");
	lua_pushnumber(L,SPK::INTERSECT_ZONE); lua_setfield(L,-2,"INTERSECT_ZONE");
	lua_pushnumber(L,SPK::ENTER_ZONE); lua_setfield(L,-2,"ENTER_ZONE");
	lua_pushnumber(L,SPK::EXIT_ZONE); lua_setfield(L,-2,"EXIT_ZONE");

	lua_setfield(L,-2,"ModifierTrigger");

	lua_pushnumber(L,SPK::ALWAYS); lua_setfield(L,-2,"ALWAYS");
	lua_pushnumber(L,SPK::INSIDE_ZONE); lua_setfield(L,-2,"INSIDE_ZONE");
	lua_pushnumber(L,SPK::OUTSIDE_ZONE); lua_setfield(L,-2,"OUTSIDE_ZONE");
	lua_pushnumber(L,SPK::INTERSECT_ZONE); lua_setfield(L,-2,"INTERSECT_ZONE");
	lua_pushnumber(L,SPK::ENTER_ZONE); lua_setfield(L,-2,"ENTER_ZONE");
	lua_pushnumber(L,SPK::EXIT_ZONE); lua_setfield(L,-2,"EXIT_ZONE");


	lua_newtable(L); // enum BlendingMode

	lua_pushnumber(L,SPK::BLENDING_NONE); lua_setfield(L,-2,"BLENDING_NONE");
	lua_pushnumber(L,SPK::BLENDING_ADD); lua_setfield(L,-2,"BLENDING_ADD");
	lua_pushnumber(L,SPK::BLENDING_ALPHA); lua_setfield(L,-2,"BLENDING_ALPHA");

	lua_setfield(L,-2,"BlendingMode");

	lua_pushnumber(L,SPK::BLENDING_NONE); lua_setfield(L,-2,"BLENDING_NONE");
	lua_pushnumber(L,SPK::BLENDING_ADD); lua_setfield(L,-2,"BLENDING_ADD");
	lua_pushnumber(L,SPK::BLENDING_ALPHA); lua_setfield(L,-2,"BLENDING_ALPHA");


	lua_newtable(L); // enum RenderingHint

	lua_pushnumber(L,SPK::ALPHA_TEST); lua_setfield(L,-2,"ALPHA_TEST");
	lua_pushnumber(L,SPK::DEPTH_TEST); lua_setfield(L,-2,"DEPTH_TEST");
	lua_pushnumber(L,SPK::DEPTH_WRITE); lua_setfield(L,-2,"DEPTH_WRITE");

	lua_setfield(L,-2,"RenderingHint");

	lua_pushnumber(L,SPK::ALPHA_TEST); lua_setfield(L,-2,"ALPHA_TEST");
	lua_pushnumber(L,SPK::DEPTH_TEST); lua_setfield(L,-2,"DEPTH_TEST");
	lua_pushnumber(L,SPK::DEPTH_WRITE); lua_setfield(L,-2,"DEPTH_WRITE");


	lua_newtable(L); // enum StepMode

	lua_pushnumber(L,SPK::STEP_REAL); lua_setfield(L,-2,"STEP_REAL");
	lua_pushnumber(L,SPK::STEP_CONSTANT); lua_setfield(L,-2,"STEP_CONSTANT");
	lua_pushnumber(L,SPK::STEP_ADAPTIVE); lua_setfield(L,-2,"STEP_ADAPTIVE");

	lua_setfield(L,-2,"StepMode");

	lua_pushnumber(L,SPK::STEP_REAL); lua_setfield(L,-2,"STEP_REAL");
	lua_pushnumber(L,SPK::STEP_CONSTANT); lua_setfield(L,-2,"STEP_CONSTANT");
	lua_pushnumber(L,SPK::STEP_ADAPTIVE); lua_setfield(L,-2,"STEP_ADAPTIVE");


	lua_newtable(L); // enum ForceFactor

	lua_pushnumber(L,SPK::FACTOR_NONE); lua_setfield(L,-2,"FACTOR_NONE");
	lua_pushnumber(L,SPK::FACTOR_LINEAR); lua_setfield(L,-2,"FACTOR_LINEAR");
	lua_pushnumber(L,SPK::FACTOR_SQUARE); lua_setfield(L,-2,"FACTOR_SQUARE");

	lua_setfield(L,-2,"ForceFactor");

	lua_pushnumber(L,SPK::FACTOR_NONE); lua_setfield(L,-2,"FACTOR_NONE");
	lua_pushnumber(L,SPK::FACTOR_LINEAR); lua_setfield(L,-2,"FACTOR_LINEAR");
	lua_pushnumber(L,SPK::FACTOR_SQUARE); lua_setfield(L,-2,"FACTOR_SQUARE");


	lua_newtable(L); // enum Orientation2D

	lua_pushnumber(L,SPK::ORIENTATION2D_UP); lua_setfield(L,-2,"ORIENTATION2D_UP");
	lua_pushnumber(L,SPK::ORIENTATION2D_DIRECTION); lua_setfield(L,-2,"ORIENTATION2D_DIRECTION");
	lua_pushnumber(L,SPK::ORIENTATION2D_POINT); lua_setfield(L,-2,"ORIENTATION2D_POINT");
	lua_pushnumber(L,SPK::ORIENTATION2D_AXIS); lua_setfield(L,-2,"ORIENTATION2D_AXIS");

	lua_setfield(L,-2,"Orientation2D");

	lua_pushnumber(L,SPK::ORIENTATION2D_UP); lua_setfield(L,-2,"ORIENTATION2D_UP");
	lua_pushnumber(L,SPK::ORIENTATION2D_DIRECTION); lua_setfield(L,-2,"ORIENTATION2D_DIRECTION");
	lua_pushnumber(L,SPK::ORIENTATION2D_POINT); lua_setfield(L,-2,"ORIENTATION2D_POINT");
	lua_pushnumber(L,SPK::ORIENTATION2D_AXIS); lua_setfield(L,-2,"ORIENTATION2D_AXIS");


	lua_newtable(L); // enum LookOrientation

	lua_pushnumber(L,SPK::LOOK_CAMERA_PLANE); lua_setfield(L,-2,"LOOK_CAMERA_PLANE");
	lua_pushnumber(L,SPK::LOOK_CAMERA_POINT); lua_setfield(L,-2,"LOOK_CAMERA_POINT");
	lua_pushnumber(L,SPK::LOOK_AXIS); lua_setfield(L,-2,"LOOK_AXIS");
	lua_pushnumber(L,SPK::LOOK_POINT); lua_setfield(L,-2,"LOOK_POINT");

	lua_setfield(L,-2,"LookOrientation");

	lua_pushnumber(L,SPK::LOOK_CAMERA_PLANE); lua_setfield(L,-2,"LOOK_CAMERA_PLANE");
	lua_pushnumber(L,SPK::LOOK_CAMERA_POINT); lua_setfield(L,-2,"LOOK_CAMERA_POINT");
	lua_pushnumber(L,SPK::LOOK_AXIS); lua_setfield(L,-2,"LOOK_AXIS");
	lua_pushnumber(L,SPK::LOOK_POINT); lua_setfield(L,-2,"LOOK_POINT");


	lua_newtable(L); // enum UpOrientation

	lua_pushnumber(L,SPK::UP_CAMERA); lua_setfield(L,-2,"UP_CAMERA");
	lua_pushnumber(L,SPK::UP_DIRECTION); lua_setfield(L,-2,"UP_DIRECTION");
	lua_pushnumber(L,SPK::UP_AXIS); lua_setfield(L,-2,"UP_AXIS");
	lua_pushnumber(L,SPK::UP_POINT); lua_setfield(L,-2,"UP_POINT");

	lua_setfield(L,-2,"UpOrientation");

	lua_pushnumber(L,SPK::UP_CAMERA); lua_setfield(L,-2,"UP_CAMERA");
	lua_pushnumber(L,SPK::UP_DIRECTION); lua_setfield(L,-2,"UP_DIRECTION");
	lua_pushnumber(L,SPK::UP_AXIS); lua_setfield(L,-2,"UP_AXIS");
	lua_pushnumber(L,SPK::UP_POINT); lua_setfield(L,-2,"UP_POINT");


	lua_newtable(L); // enum LockedAxis

	lua_pushnumber(L,SPK::LOCK_LOOK); lua_setfield(L,-2,"LOCK_LOOK");
	lua_pushnumber(L,SPK::LOCK_UP); lua_setfield(L,-2,"LOCK_UP");

	lua_setfield(L,-2,"LockedAxis");

	lua_pushnumber(L,SPK::LOCK_LOOK); lua_setfield(L,-2,"LOCK_LOOK");
	lua_pushnumber(L,SPK::LOCK_UP); lua_setfield(L,-2,"LOCK_UP");


	lua_newtable(L); // enum OrientationPreset

	lua_pushnumber(L,SPK::CAMERA_PLANE_ALIGNED); lua_setfield(L,-2,"CAMERA_PLANE_ALIGNED");
	lua_pushnumber(L,SPK::CAMERA_POINT_ALIGNED); lua_setfield(L,-2,"CAMERA_POINT_ALIGNED");
	lua_pushnumber(L,SPK::DIRECTION_ALIGNED); lua_setfield(L,-2,"DIRECTION_ALIGNED");
	lua_pushnumber(L,SPK::AROUND_AXIS); lua_setfield(L,-2,"AROUND_AXIS");
	lua_pushnumber(L,SPK::TOWARDS_POINT); lua_setfield(L,-2,"TOWARDS_POINT");
	lua_pushnumber(L,SPK::FIXED_ORIENTATION); lua_setfield(L,-2,"FIXED_ORIENTATION");

	lua_setfield(L,-2,"OrientationPreset");

	lua_pushnumber(L,SPK::CAMERA_PLANE_ALIGNED); lua_setfield(L,-2,"CAMERA_PLANE_ALIGNED");
	lua_pushnumber(L,SPK::CAMERA_POINT_ALIGNED); lua_setfield(L,-2,"CAMERA_POINT_ALIGNED");
	lua_pushnumber(L,SPK::DIRECTION_ALIGNED); lua_setfield(L,-2,"DIRECTION_ALIGNED");
	lua_pushnumber(L,SPK::AROUND_AXIS); lua_setfield(L,-2,"AROUND_AXIS");
	lua_pushnumber(L,SPK::TOWARDS_POINT); lua_setfield(L,-2,"TOWARDS_POINT");
	lua_pushnumber(L,SPK::FIXED_ORIENTATION); lua_setfield(L,-2,"FIXED_ORIENTATION");


	lua_newtable(L); // enum PointType

	lua_pushnumber(L,SPK::POINT_SQUARE); lua_setfield(L,-2,"POINT_SQUARE");
	lua_pushnumber(L,SPK::POINT_CIRCLE); lua_setfield(L,-2,"POINT_CIRCLE");
	lua_pushnumber(L,SPK::POINT_SPRITE); lua_setfield(L,-2,"POINT_SPRITE");

	lua_setfield(L,-2,"PointType");

	lua_pushnumber(L,SPK::POINT_SQUARE); lua_setfield(L,-2,"POINT_SQUARE");
	lua_pushnumber(L,SPK::POINT_CIRCLE); lua_setfield(L,-2,"POINT_CIRCLE");
	lua_pushnumber(L,SPK::POINT_SPRITE); lua_setfield(L,-2,"POINT_SPRITE");


	lua_newtable(L); // enum TexturingMode

	lua_pushnumber(L,SPK::TEXTURE_NONE); lua_setfield(L,-2,"TEXTURE_NONE");
	lua_pushnumber(L,SPK::TEXTURE_2D); lua_setfield(L,-2,"TEXTURE_2D");
	lua_pushnumber(L,SPK::TEXTURE_3D); lua_setfield(L,-2,"TEXTURE_3D");

	lua_setfield(L,-2,"TexturingMode");

	lua_pushnumber(L,SPK::TEXTURE_NONE); lua_setfield(L,-2,"TEXTURE_NONE");
	lua_pushnumber(L,SPK::TEXTURE_2D); lua_setfield(L,-2,"TEXTURE_2D");
	lua_pushnumber(L,SPK::TEXTURE_3D); lua_setfield(L,-2,"TEXTURE_3D");


}

#ifdef __cplusplus
}
#endif


