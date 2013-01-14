#include <plug_common.h>

#include <Box2D/Dynamics/b2Body.h>
#include <Box2D/Collision/b2Collision.h>
#include <Box2D/Dynamics/Joints/b2Joint.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum b2BodyType

	lua_pushnumber(L,::b2_staticBody); lua_setfield(L,-2,"b2_staticBody");
	lua_pushnumber(L,::b2_kinematicBody); lua_setfield(L,-2,"b2_kinematicBody");
	lua_pushnumber(L,::b2_dynamicBody); lua_setfield(L,-2,"b2_dynamicBody");

	lua_setfield(L,-2,"b2BodyType");

	lua_pushnumber(L,::b2_staticBody); lua_setfield(L,-2,"b2_staticBody");
	lua_pushnumber(L,::b2_kinematicBody); lua_setfield(L,-2,"b2_kinematicBody");
	lua_pushnumber(L,::b2_dynamicBody); lua_setfield(L,-2,"b2_dynamicBody");


	lua_newtable(L); // enum b2PointState

	lua_pushnumber(L,::b2_nullState); lua_setfield(L,-2,"b2_nullState");
	lua_pushnumber(L,::b2_addState); lua_setfield(L,-2,"b2_addState");
	lua_pushnumber(L,::b2_persistState); lua_setfield(L,-2,"b2_persistState");
	lua_pushnumber(L,::b2_removeState); lua_setfield(L,-2,"b2_removeState");

	lua_setfield(L,-2,"b2PointState");

	lua_pushnumber(L,::b2_nullState); lua_setfield(L,-2,"b2_nullState");
	lua_pushnumber(L,::b2_addState); lua_setfield(L,-2,"b2_addState");
	lua_pushnumber(L,::b2_persistState); lua_setfield(L,-2,"b2_persistState");
	lua_pushnumber(L,::b2_removeState); lua_setfield(L,-2,"b2_removeState");


	lua_newtable(L); // enum b2JointType

	lua_pushnumber(L,::e_unknownJoint); lua_setfield(L,-2,"e_unknownJoint");
	lua_pushnumber(L,::e_revoluteJoint); lua_setfield(L,-2,"e_revoluteJoint");
	lua_pushnumber(L,::e_prismaticJoint); lua_setfield(L,-2,"e_prismaticJoint");
	lua_pushnumber(L,::e_distanceJoint); lua_setfield(L,-2,"e_distanceJoint");
	lua_pushnumber(L,::e_pulleyJoint); lua_setfield(L,-2,"e_pulleyJoint");
	lua_pushnumber(L,::e_mouseJoint); lua_setfield(L,-2,"e_mouseJoint");
	lua_pushnumber(L,::e_gearJoint); lua_setfield(L,-2,"e_gearJoint");
	lua_pushnumber(L,::e_wheelJoint); lua_setfield(L,-2,"e_wheelJoint");
	lua_pushnumber(L,::e_weldJoint); lua_setfield(L,-2,"e_weldJoint");
	lua_pushnumber(L,::e_frictionJoint); lua_setfield(L,-2,"e_frictionJoint");
	lua_pushnumber(L,::e_ropeJoint); lua_setfield(L,-2,"e_ropeJoint");

	lua_setfield(L,-2,"b2JointType");

	lua_pushnumber(L,::e_unknownJoint); lua_setfield(L,-2,"e_unknownJoint");
	lua_pushnumber(L,::e_revoluteJoint); lua_setfield(L,-2,"e_revoluteJoint");
	lua_pushnumber(L,::e_prismaticJoint); lua_setfield(L,-2,"e_prismaticJoint");
	lua_pushnumber(L,::e_distanceJoint); lua_setfield(L,-2,"e_distanceJoint");
	lua_pushnumber(L,::e_pulleyJoint); lua_setfield(L,-2,"e_pulleyJoint");
	lua_pushnumber(L,::e_mouseJoint); lua_setfield(L,-2,"e_mouseJoint");
	lua_pushnumber(L,::e_gearJoint); lua_setfield(L,-2,"e_gearJoint");
	lua_pushnumber(L,::e_wheelJoint); lua_setfield(L,-2,"e_wheelJoint");
	lua_pushnumber(L,::e_weldJoint); lua_setfield(L,-2,"e_weldJoint");
	lua_pushnumber(L,::e_frictionJoint); lua_setfield(L,-2,"e_frictionJoint");
	lua_pushnumber(L,::e_ropeJoint); lua_setfield(L,-2,"e_ropeJoint");


	lua_newtable(L); // enum b2LimitState

	lua_pushnumber(L,::e_inactiveLimit); lua_setfield(L,-2,"e_inactiveLimit");
	lua_pushnumber(L,::e_atLowerLimit); lua_setfield(L,-2,"e_atLowerLimit");
	lua_pushnumber(L,::e_atUpperLimit); lua_setfield(L,-2,"e_atUpperLimit");
	lua_pushnumber(L,::e_equalLimits); lua_setfield(L,-2,"e_equalLimits");

	lua_setfield(L,-2,"b2LimitState");

	lua_pushnumber(L,::e_inactiveLimit); lua_setfield(L,-2,"e_inactiveLimit");
	lua_pushnumber(L,::e_atLowerLimit); lua_setfield(L,-2,"e_atLowerLimit");
	lua_pushnumber(L,::e_atUpperLimit); lua_setfield(L,-2,"e_atUpperLimit");
	lua_pushnumber(L,::e_equalLimits); lua_setfield(L,-2,"e_equalLimits");


}

#ifdef __cplusplus
}
#endif


