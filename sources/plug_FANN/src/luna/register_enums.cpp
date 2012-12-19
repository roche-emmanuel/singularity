#include <plug_common.h>

#include <fann_cpp.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum error_function_enum

	lua_pushnumber(L,FANN::ERRORFUNC_LINEAR); lua_setfield(L,-2,"ERRORFUNC_LINEAR");
	lua_pushnumber(L,FANN::ERRORFUNC_TANH); lua_setfield(L,-2,"ERRORFUNC_TANH");

	lua_setfield(L,-2,"error_function_enum");

	lua_pushnumber(L,FANN::ERRORFUNC_LINEAR); lua_setfield(L,-2,"ERRORFUNC_LINEAR");
	lua_pushnumber(L,FANN::ERRORFUNC_TANH); lua_setfield(L,-2,"ERRORFUNC_TANH");


	lua_newtable(L); // enum stop_function_enum

	lua_pushnumber(L,FANN::STOPFUNC_MSE); lua_setfield(L,-2,"STOPFUNC_MSE");
	lua_pushnumber(L,FANN::STOPFUNC_BIT); lua_setfield(L,-2,"STOPFUNC_BIT");

	lua_setfield(L,-2,"stop_function_enum");

	lua_pushnumber(L,FANN::STOPFUNC_MSE); lua_setfield(L,-2,"STOPFUNC_MSE");
	lua_pushnumber(L,FANN::STOPFUNC_BIT); lua_setfield(L,-2,"STOPFUNC_BIT");


	lua_newtable(L); // enum training_algorithm_enum

	lua_pushnumber(L,FANN::TRAIN_INCREMENTAL); lua_setfield(L,-2,"TRAIN_INCREMENTAL");
	lua_pushnumber(L,FANN::TRAIN_BATCH); lua_setfield(L,-2,"TRAIN_BATCH");
	lua_pushnumber(L,FANN::TRAIN_RPROP); lua_setfield(L,-2,"TRAIN_RPROP");
	lua_pushnumber(L,FANN::TRAIN_QUICKPROP); lua_setfield(L,-2,"TRAIN_QUICKPROP");
	lua_pushnumber(L,FANN::TRAIN_SARPROP); lua_setfield(L,-2,"TRAIN_SARPROP");

	lua_setfield(L,-2,"training_algorithm_enum");

	lua_pushnumber(L,FANN::TRAIN_INCREMENTAL); lua_setfield(L,-2,"TRAIN_INCREMENTAL");
	lua_pushnumber(L,FANN::TRAIN_BATCH); lua_setfield(L,-2,"TRAIN_BATCH");
	lua_pushnumber(L,FANN::TRAIN_RPROP); lua_setfield(L,-2,"TRAIN_RPROP");
	lua_pushnumber(L,FANN::TRAIN_QUICKPROP); lua_setfield(L,-2,"TRAIN_QUICKPROP");
	lua_pushnumber(L,FANN::TRAIN_SARPROP); lua_setfield(L,-2,"TRAIN_SARPROP");


	lua_newtable(L); // enum activation_function_enum

	lua_pushnumber(L,FANN::LINEAR); lua_setfield(L,-2,"LINEAR");
	lua_pushnumber(L,FANN::THRESHOLD); lua_setfield(L,-2,"THRESHOLD");
	lua_pushnumber(L,FANN::THRESHOLD_SYMMETRIC); lua_setfield(L,-2,"THRESHOLD_SYMMETRIC");
	lua_pushnumber(L,FANN::SIGMOID); lua_setfield(L,-2,"SIGMOID");
	lua_pushnumber(L,FANN::SIGMOID_STEPWISE); lua_setfield(L,-2,"SIGMOID_STEPWISE");
	lua_pushnumber(L,FANN::SIGMOID_SYMMETRIC); lua_setfield(L,-2,"SIGMOID_SYMMETRIC");
	lua_pushnumber(L,FANN::SIGMOID_SYMMETRIC_STEPWISE); lua_setfield(L,-2,"SIGMOID_SYMMETRIC_STEPWISE");
	lua_pushnumber(L,FANN::GAUSSIAN); lua_setfield(L,-2,"GAUSSIAN");
	lua_pushnumber(L,FANN::GAUSSIAN_SYMMETRIC); lua_setfield(L,-2,"GAUSSIAN_SYMMETRIC");
	lua_pushnumber(L,FANN::GAUSSIAN_STEPWISE); lua_setfield(L,-2,"GAUSSIAN_STEPWISE");
	lua_pushnumber(L,FANN::ELLIOT); lua_setfield(L,-2,"ELLIOT");
	lua_pushnumber(L,FANN::ELLIOT_SYMMETRIC); lua_setfield(L,-2,"ELLIOT_SYMMETRIC");
	lua_pushnumber(L,FANN::LINEAR_PIECE); lua_setfield(L,-2,"LINEAR_PIECE");
	lua_pushnumber(L,FANN::LINEAR_PIECE_SYMMETRIC); lua_setfield(L,-2,"LINEAR_PIECE_SYMMETRIC");
	lua_pushnumber(L,FANN::SIN_SYMMETRIC); lua_setfield(L,-2,"SIN_SYMMETRIC");
	lua_pushnumber(L,FANN::COS_SYMMETRIC); lua_setfield(L,-2,"COS_SYMMETRIC");

	lua_setfield(L,-2,"activation_function_enum");

	lua_pushnumber(L,FANN::LINEAR); lua_setfield(L,-2,"LINEAR");
	lua_pushnumber(L,FANN::THRESHOLD); lua_setfield(L,-2,"THRESHOLD");
	lua_pushnumber(L,FANN::THRESHOLD_SYMMETRIC); lua_setfield(L,-2,"THRESHOLD_SYMMETRIC");
	lua_pushnumber(L,FANN::SIGMOID); lua_setfield(L,-2,"SIGMOID");
	lua_pushnumber(L,FANN::SIGMOID_STEPWISE); lua_setfield(L,-2,"SIGMOID_STEPWISE");
	lua_pushnumber(L,FANN::SIGMOID_SYMMETRIC); lua_setfield(L,-2,"SIGMOID_SYMMETRIC");
	lua_pushnumber(L,FANN::SIGMOID_SYMMETRIC_STEPWISE); lua_setfield(L,-2,"SIGMOID_SYMMETRIC_STEPWISE");
	lua_pushnumber(L,FANN::GAUSSIAN); lua_setfield(L,-2,"GAUSSIAN");
	lua_pushnumber(L,FANN::GAUSSIAN_SYMMETRIC); lua_setfield(L,-2,"GAUSSIAN_SYMMETRIC");
	lua_pushnumber(L,FANN::GAUSSIAN_STEPWISE); lua_setfield(L,-2,"GAUSSIAN_STEPWISE");
	lua_pushnumber(L,FANN::ELLIOT); lua_setfield(L,-2,"ELLIOT");
	lua_pushnumber(L,FANN::ELLIOT_SYMMETRIC); lua_setfield(L,-2,"ELLIOT_SYMMETRIC");
	lua_pushnumber(L,FANN::LINEAR_PIECE); lua_setfield(L,-2,"LINEAR_PIECE");
	lua_pushnumber(L,FANN::LINEAR_PIECE_SYMMETRIC); lua_setfield(L,-2,"LINEAR_PIECE_SYMMETRIC");
	lua_pushnumber(L,FANN::SIN_SYMMETRIC); lua_setfield(L,-2,"SIN_SYMMETRIC");
	lua_pushnumber(L,FANN::COS_SYMMETRIC); lua_setfield(L,-2,"COS_SYMMETRIC");


	lua_newtable(L); // enum network_type_enum

	lua_pushnumber(L,FANN::LAYER); lua_setfield(L,-2,"LAYER");
	lua_pushnumber(L,FANN::SHORTCUT); lua_setfield(L,-2,"SHORTCUT");

	lua_setfield(L,-2,"network_type_enum");

	lua_pushnumber(L,FANN::LAYER); lua_setfield(L,-2,"LAYER");
	lua_pushnumber(L,FANN::SHORTCUT); lua_setfield(L,-2,"SHORTCUT");


}

#ifdef __cplusplus
}
#endif


