#include <plug_common.h>

class luna_wrapper_FANN_neural_net {
public:
	typedef Luna< FANN::neural_net > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71064061) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(FANN::neural_net*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		FANN::neural_net* rhs =(Luna< FANN::neural_net >::check(L,2));
		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		FANN::neural_net* self= (FANN::neural_net*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< FANN::neural_net >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71064061) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("FANN::neural_net");
		
		return luna_dynamicCast(L,converters,"FANN::neural_net",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71064061) ) return false;
		if( (!(Luna< FANN::neural_net >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_destroy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_run_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_run_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,71064061)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< FANN::neural_net >::check(L,1)) ) ) return false;
		if( lua_istable(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_randomize_weights(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_init_weights(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45173508) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_print_connections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_create_from_file(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_save(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_save_to_fixed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_train(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_train_epoch(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45173508) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_train_on_data(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45173508) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_train_on_file(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_test(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_test_data(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45173508) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_MSE(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset_MSE(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_print_parameters(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_training_algorithm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_training_algorithm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_learning_rate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_learning_rate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_activation_function(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_activation_function(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_activation_function_layer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_activation_function_hidden(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_activation_function_output(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_activation_steepness(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_activation_steepness(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_activation_steepness_layer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_activation_steepness_hidden(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_activation_steepness_output(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_train_error_function(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_train_error_function(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_quickprop_decay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_quickprop_decay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_quickprop_mu(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_quickprop_mu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_rprop_increase_factor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_rprop_increase_factor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_rprop_decrease_factor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_rprop_decrease_factor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_rprop_delta_zero(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_rprop_delta_zero(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_rprop_delta_min(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_rprop_delta_min(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_rprop_delta_max(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_rprop_delta_max(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_sarprop_weight_decay_shift(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_sarprop_weight_decay_shift(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_sarprop_step_error_threshold_factor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_sarprop_step_error_threshold_factor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_sarprop_step_error_shift(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_sarprop_step_error_shift(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_sarprop_temperature(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_sarprop_temperature(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_num_input(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_num_output(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_total_neurons(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_total_connections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_network_type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_connection_rate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_num_layers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_layer_array(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_bias_array(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_weight(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_learning_momentum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_learning_momentum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_train_stop_function(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_train_stop_function(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_bit_fail_limit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_bit_fail_limit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_bit_fail(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_cascadetrain_on_data(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45173508) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_cascadetrain_on_file(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_cascade_output_change_fraction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_cascade_output_change_fraction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_cascade_output_stagnation_epochs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_cascade_output_stagnation_epochs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_cascade_candidate_change_fraction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_cascade_candidate_change_fraction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_cascade_candidate_stagnation_epochs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_cascade_candidate_stagnation_epochs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_cascade_weight_multiplier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_cascade_weight_multiplier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_cascade_candidate_limit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_cascade_candidate_limit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_cascade_max_out_epochs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_cascade_max_out_epochs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_cascade_max_cand_epochs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_cascade_max_cand_epochs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_cascade_num_candidates(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_cascade_activation_functions_count(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_cascade_activation_functions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_cascade_activation_functions(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_cascade_activation_steepnesses_count(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_cascade_activation_steepnesses(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_cascade_activation_steepnesses(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_cascade_num_candidate_groups(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_cascade_num_candidate_groups(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_scale_train(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45173508) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_descale_train(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45173508) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_input_scaling_params(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45173508) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_output_scaling_params(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45173508) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_scaling_params(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45173508) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clear_scaling_params(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_scale_input(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_scale_output(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_descale_input(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_descale_output(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_errno(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset_errno(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset_errstr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_errstr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_print_error(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_create_standard(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,71064061)) ) return false;
		if( lua_istable(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// FANN::neural_net::neural_net()
	static FANN::neural_net* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in FANN::neural_net::neural_net() function, expected prototype:\nFANN::neural_net::neural_net()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new FANN::neural_net();
	}

	// FANN::neural_net::neural_net(const FANN::neural_net & other)
	static FANN::neural_net* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in FANN::neural_net::neural_net(const FANN::neural_net & other) function, expected prototype:\nFANN::neural_net::neural_net(const FANN::neural_net & other)\nClass arguments details:\narg 1 ID = 71064061\n\n%s",luna_dumpStack(L).c_str());
		}

		const FANN::neural_net* other_ptr=(Luna< FANN::neural_net >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in FANN::neural_net::neural_net function");
		}
		const FANN::neural_net & other=*other_ptr;

		return new FANN::neural_net(other);
	}

	// Overload binder for FANN::neural_net::neural_net
	static FANN::neural_net* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function neural_net, cannot match any of the overloads for function neural_net:\n  neural_net()\n  neural_net(const FANN::neural_net &)\n");
		return NULL;
	}


	// Function binds:
	// void FANN::neural_net::destroy()
	static int _bind_destroy(lua_State *L) {
		if (!_lg_typecheck_destroy(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::destroy() function, expected prototype:\nvoid FANN::neural_net::destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::destroy(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->destroy();

		return 0;
	}

	// float * FANN::neural_net::run(float * input)
	static int _bind_run_overload_1(lua_State *L) {
		if (!_lg_typecheck_run_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float * FANN::neural_net::run(float * input) function, expected prototype:\nfloat * FANN::neural_net::run(float * input)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float* input=(float*)Luna< void >::check(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float * FANN::neural_net::run(float *). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float * lret = self->run(input);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// int FANN::neural_net::nn_run(FANN::neural_net * nn, lua_Table * dum, lua_State * L)
	static int _bind_run_overload_2(lua_State *L) {
		if (!_lg_typecheck_run_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int FANN::neural_net::nn_run(FANN::neural_net * nn, lua_Table * dum, lua_State * L) function, expected prototype:\nint FANN::neural_net::nn_run(FANN::neural_net * nn, lua_Table * dum, lua_State * L)\nClass arguments details:\narg 1 ID = 71064061\n\n%s",luna_dumpStack(L).c_str());
		}

		FANN::neural_net* nn=(Luna< FANN::neural_net >::check(L,1));

		return nn_run(nn, NULL, L);
	}

	// Overload binder for FANN::neural_net::run
	static int _bind_run(lua_State *L) {
		if (_lg_typecheck_run_overload_1(L)) return _bind_run_overload_1(L);
		if (_lg_typecheck_run_overload_2(L)) return _bind_run_overload_2(L);

		luaL_error(L, "error in function run, cannot match any of the overloads for function run:\n  run(float *)\n  run(FANN::neural_net *, lua_Table *, lua_State *)\n");
		return 0;
	}

	// void FANN::neural_net::randomize_weights(float min_weight, float max_weight)
	static int _bind_randomize_weights(lua_State *L) {
		if (!_lg_typecheck_randomize_weights(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::randomize_weights(float min_weight, float max_weight) function, expected prototype:\nvoid FANN::neural_net::randomize_weights(float min_weight, float max_weight)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float min_weight=(float)lua_tonumber(L,2);
		float max_weight=(float)lua_tonumber(L,3);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::randomize_weights(float, float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->randomize_weights(min_weight, max_weight);

		return 0;
	}

	// void FANN::neural_net::init_weights(const FANN::training_data & data)
	static int _bind_init_weights(lua_State *L) {
		if (!_lg_typecheck_init_weights(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::init_weights(const FANN::training_data & data) function, expected prototype:\nvoid FANN::neural_net::init_weights(const FANN::training_data & data)\nClass arguments details:\narg 1 ID = 45173508\n\n%s",luna_dumpStack(L).c_str());
		}

		const FANN::training_data* data_ptr=(Luna< FANN::training_data >::check(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in FANN::neural_net::init_weights function");
		}
		const FANN::training_data & data=*data_ptr;

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::init_weights(const FANN::training_data &). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->init_weights(data);

		return 0;
	}

	// void FANN::neural_net::print_connections()
	static int _bind_print_connections(lua_State *L) {
		if (!_lg_typecheck_print_connections(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::print_connections() function, expected prototype:\nvoid FANN::neural_net::print_connections()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::print_connections(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->print_connections();

		return 0;
	}

	// bool FANN::neural_net::create_from_file(const std::string & configuration_file)
	static int _bind_create_from_file(lua_State *L) {
		if (!_lg_typecheck_create_from_file(L)) {
			luaL_error(L, "luna typecheck failed in bool FANN::neural_net::create_from_file(const std::string & configuration_file) function, expected prototype:\nbool FANN::neural_net::create_from_file(const std::string & configuration_file)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string configuration_file(lua_tostring(L,2),lua_objlen(L,2));

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool FANN::neural_net::create_from_file(const std::string &). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->create_from_file(configuration_file);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool FANN::neural_net::save(const std::string & configuration_file)
	static int _bind_save(lua_State *L) {
		if (!_lg_typecheck_save(L)) {
			luaL_error(L, "luna typecheck failed in bool FANN::neural_net::save(const std::string & configuration_file) function, expected prototype:\nbool FANN::neural_net::save(const std::string & configuration_file)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string configuration_file(lua_tostring(L,2),lua_objlen(L,2));

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool FANN::neural_net::save(const std::string &). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->save(configuration_file);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int FANN::neural_net::save_to_fixed(const std::string & configuration_file)
	static int _bind_save_to_fixed(lua_State *L) {
		if (!_lg_typecheck_save_to_fixed(L)) {
			luaL_error(L, "luna typecheck failed in int FANN::neural_net::save_to_fixed(const std::string & configuration_file) function, expected prototype:\nint FANN::neural_net::save_to_fixed(const std::string & configuration_file)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string configuration_file(lua_tostring(L,2),lua_objlen(L,2));

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int FANN::neural_net::save_to_fixed(const std::string &). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->save_to_fixed(configuration_file);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::train(float * input, float * desired_output)
	static int _bind_train(lua_State *L) {
		if (!_lg_typecheck_train(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::train(float * input, float * desired_output) function, expected prototype:\nvoid FANN::neural_net::train(float * input, float * desired_output)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float* input=(float*)Luna< void >::check(L,2);
		float* desired_output=(float*)Luna< void >::check(L,3);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::train(float *, float *). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->train(input, desired_output);

		return 0;
	}

	// float FANN::neural_net::train_epoch(const FANN::training_data & data)
	static int _bind_train_epoch(lua_State *L) {
		if (!_lg_typecheck_train_epoch(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::train_epoch(const FANN::training_data & data) function, expected prototype:\nfloat FANN::neural_net::train_epoch(const FANN::training_data & data)\nClass arguments details:\narg 1 ID = 45173508\n\n%s",luna_dumpStack(L).c_str());
		}

		const FANN::training_data* data_ptr=(Luna< FANN::training_data >::check(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in FANN::neural_net::train_epoch function");
		}
		const FANN::training_data & data=*data_ptr;

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::train_epoch(const FANN::training_data &). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->train_epoch(data);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::train_on_data(const FANN::training_data & data, unsigned int max_epochs, unsigned int epochs_between_reports, float desired_error)
	static int _bind_train_on_data(lua_State *L) {
		if (!_lg_typecheck_train_on_data(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::train_on_data(const FANN::training_data & data, unsigned int max_epochs, unsigned int epochs_between_reports, float desired_error) function, expected prototype:\nvoid FANN::neural_net::train_on_data(const FANN::training_data & data, unsigned int max_epochs, unsigned int epochs_between_reports, float desired_error)\nClass arguments details:\narg 1 ID = 45173508\n\n%s",luna_dumpStack(L).c_str());
		}

		const FANN::training_data* data_ptr=(Luna< FANN::training_data >::check(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in FANN::neural_net::train_on_data function");
		}
		const FANN::training_data & data=*data_ptr;
		unsigned int max_epochs=(unsigned int)lua_tointeger(L,3);
		unsigned int epochs_between_reports=(unsigned int)lua_tointeger(L,4);
		float desired_error=(float)lua_tonumber(L,5);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::train_on_data(const FANN::training_data &, unsigned int, unsigned int, float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->train_on_data(data, max_epochs, epochs_between_reports, desired_error);

		return 0;
	}

	// void FANN::neural_net::train_on_file(const std::string & filename, unsigned int max_epochs, unsigned int epochs_between_reports, float desired_error)
	static int _bind_train_on_file(lua_State *L) {
		if (!_lg_typecheck_train_on_file(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::train_on_file(const std::string & filename, unsigned int max_epochs, unsigned int epochs_between_reports, float desired_error) function, expected prototype:\nvoid FANN::neural_net::train_on_file(const std::string & filename, unsigned int max_epochs, unsigned int epochs_between_reports, float desired_error)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int max_epochs=(unsigned int)lua_tointeger(L,3);
		unsigned int epochs_between_reports=(unsigned int)lua_tointeger(L,4);
		float desired_error=(float)lua_tonumber(L,5);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::train_on_file(const std::string &, unsigned int, unsigned int, float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->train_on_file(filename, max_epochs, epochs_between_reports, desired_error);

		return 0;
	}

	// float * FANN::neural_net::test(float * input, float * desired_output)
	static int _bind_test(lua_State *L) {
		if (!_lg_typecheck_test(L)) {
			luaL_error(L, "luna typecheck failed in float * FANN::neural_net::test(float * input, float * desired_output) function, expected prototype:\nfloat * FANN::neural_net::test(float * input, float * desired_output)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float* input=(float*)Luna< void >::check(L,2);
		float* desired_output=(float*)Luna< void >::check(L,3);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float * FANN::neural_net::test(float *, float *). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float * lret = self->test(input, desired_output);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// float FANN::neural_net::test_data(const FANN::training_data & data)
	static int _bind_test_data(lua_State *L) {
		if (!_lg_typecheck_test_data(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::test_data(const FANN::training_data & data) function, expected prototype:\nfloat FANN::neural_net::test_data(const FANN::training_data & data)\nClass arguments details:\narg 1 ID = 45173508\n\n%s",luna_dumpStack(L).c_str());
		}

		const FANN::training_data* data_ptr=(Luna< FANN::training_data >::check(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in FANN::neural_net::test_data function");
		}
		const FANN::training_data & data=*data_ptr;

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::test_data(const FANN::training_data &). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->test_data(data);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float FANN::neural_net::get_MSE()
	static int _bind_get_MSE(lua_State *L) {
		if (!_lg_typecheck_get_MSE(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_MSE() function, expected prototype:\nfloat FANN::neural_net::get_MSE()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_MSE(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_MSE();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::reset_MSE()
	static int _bind_reset_MSE(lua_State *L) {
		if (!_lg_typecheck_reset_MSE(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::reset_MSE() function, expected prototype:\nvoid FANN::neural_net::reset_MSE()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::reset_MSE(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset_MSE();

		return 0;
	}

	// void FANN::neural_net::print_parameters()
	static int _bind_print_parameters(lua_State *L) {
		if (!_lg_typecheck_print_parameters(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::print_parameters() function, expected prototype:\nvoid FANN::neural_net::print_parameters()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::print_parameters(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->print_parameters();

		return 0;
	}

	// FANN::training_algorithm_enum FANN::neural_net::get_training_algorithm()
	static int _bind_get_training_algorithm(lua_State *L) {
		if (!_lg_typecheck_get_training_algorithm(L)) {
			luaL_error(L, "luna typecheck failed in FANN::training_algorithm_enum FANN::neural_net::get_training_algorithm() function, expected prototype:\nFANN::training_algorithm_enum FANN::neural_net::get_training_algorithm()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call FANN::training_algorithm_enum FANN::neural_net::get_training_algorithm(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		FANN::training_algorithm_enum lret = self->get_training_algorithm();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_training_algorithm(FANN::training_algorithm_enum training_algorithm)
	static int _bind_set_training_algorithm(lua_State *L) {
		if (!_lg_typecheck_set_training_algorithm(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_training_algorithm(FANN::training_algorithm_enum training_algorithm) function, expected prototype:\nvoid FANN::neural_net::set_training_algorithm(FANN::training_algorithm_enum training_algorithm)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		FANN::training_algorithm_enum training_algorithm=(FANN::training_algorithm_enum)lua_tointeger(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_training_algorithm(FANN::training_algorithm_enum). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_training_algorithm(training_algorithm);

		return 0;
	}

	// float FANN::neural_net::get_learning_rate()
	static int _bind_get_learning_rate(lua_State *L) {
		if (!_lg_typecheck_get_learning_rate(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_learning_rate() function, expected prototype:\nfloat FANN::neural_net::get_learning_rate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_learning_rate(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_learning_rate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_learning_rate(float learning_rate)
	static int _bind_set_learning_rate(lua_State *L) {
		if (!_lg_typecheck_set_learning_rate(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_learning_rate(float learning_rate) function, expected prototype:\nvoid FANN::neural_net::set_learning_rate(float learning_rate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float learning_rate=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_learning_rate(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_learning_rate(learning_rate);

		return 0;
	}

	// FANN::activation_function_enum FANN::neural_net::get_activation_function(int layer, int neuron)
	static int _bind_get_activation_function(lua_State *L) {
		if (!_lg_typecheck_get_activation_function(L)) {
			luaL_error(L, "luna typecheck failed in FANN::activation_function_enum FANN::neural_net::get_activation_function(int layer, int neuron) function, expected prototype:\nFANN::activation_function_enum FANN::neural_net::get_activation_function(int layer, int neuron)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int layer=(int)lua_tointeger(L,2);
		int neuron=(int)lua_tointeger(L,3);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call FANN::activation_function_enum FANN::neural_net::get_activation_function(int, int). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		FANN::activation_function_enum lret = self->get_activation_function(layer, neuron);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_activation_function(FANN::activation_function_enum activation_function, int layer, int neuron)
	static int _bind_set_activation_function(lua_State *L) {
		if (!_lg_typecheck_set_activation_function(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_activation_function(FANN::activation_function_enum activation_function, int layer, int neuron) function, expected prototype:\nvoid FANN::neural_net::set_activation_function(FANN::activation_function_enum activation_function, int layer, int neuron)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		FANN::activation_function_enum activation_function=(FANN::activation_function_enum)lua_tointeger(L,2);
		int layer=(int)lua_tointeger(L,3);
		int neuron=(int)lua_tointeger(L,4);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_activation_function(FANN::activation_function_enum, int, int). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_activation_function(activation_function, layer, neuron);

		return 0;
	}

	// void FANN::neural_net::set_activation_function_layer(FANN::activation_function_enum activation_function, int layer)
	static int _bind_set_activation_function_layer(lua_State *L) {
		if (!_lg_typecheck_set_activation_function_layer(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_activation_function_layer(FANN::activation_function_enum activation_function, int layer) function, expected prototype:\nvoid FANN::neural_net::set_activation_function_layer(FANN::activation_function_enum activation_function, int layer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		FANN::activation_function_enum activation_function=(FANN::activation_function_enum)lua_tointeger(L,2);
		int layer=(int)lua_tointeger(L,3);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_activation_function_layer(FANN::activation_function_enum, int). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_activation_function_layer(activation_function, layer);

		return 0;
	}

	// void FANN::neural_net::set_activation_function_hidden(FANN::activation_function_enum activation_function)
	static int _bind_set_activation_function_hidden(lua_State *L) {
		if (!_lg_typecheck_set_activation_function_hidden(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_activation_function_hidden(FANN::activation_function_enum activation_function) function, expected prototype:\nvoid FANN::neural_net::set_activation_function_hidden(FANN::activation_function_enum activation_function)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		FANN::activation_function_enum activation_function=(FANN::activation_function_enum)lua_tointeger(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_activation_function_hidden(FANN::activation_function_enum). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_activation_function_hidden(activation_function);

		return 0;
	}

	// void FANN::neural_net::set_activation_function_output(FANN::activation_function_enum activation_function)
	static int _bind_set_activation_function_output(lua_State *L) {
		if (!_lg_typecheck_set_activation_function_output(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_activation_function_output(FANN::activation_function_enum activation_function) function, expected prototype:\nvoid FANN::neural_net::set_activation_function_output(FANN::activation_function_enum activation_function)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		FANN::activation_function_enum activation_function=(FANN::activation_function_enum)lua_tointeger(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_activation_function_output(FANN::activation_function_enum). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_activation_function_output(activation_function);

		return 0;
	}

	// float FANN::neural_net::get_activation_steepness(int layer, int neuron)
	static int _bind_get_activation_steepness(lua_State *L) {
		if (!_lg_typecheck_get_activation_steepness(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_activation_steepness(int layer, int neuron) function, expected prototype:\nfloat FANN::neural_net::get_activation_steepness(int layer, int neuron)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int layer=(int)lua_tointeger(L,2);
		int neuron=(int)lua_tointeger(L,3);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_activation_steepness(int, int). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_activation_steepness(layer, neuron);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_activation_steepness(float steepness, int layer, int neuron)
	static int _bind_set_activation_steepness(lua_State *L) {
		if (!_lg_typecheck_set_activation_steepness(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_activation_steepness(float steepness, int layer, int neuron) function, expected prototype:\nvoid FANN::neural_net::set_activation_steepness(float steepness, int layer, int neuron)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float steepness=(float)lua_tonumber(L,2);
		int layer=(int)lua_tointeger(L,3);
		int neuron=(int)lua_tointeger(L,4);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_activation_steepness(float, int, int). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_activation_steepness(steepness, layer, neuron);

		return 0;
	}

	// void FANN::neural_net::set_activation_steepness_layer(float steepness, int layer)
	static int _bind_set_activation_steepness_layer(lua_State *L) {
		if (!_lg_typecheck_set_activation_steepness_layer(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_activation_steepness_layer(float steepness, int layer) function, expected prototype:\nvoid FANN::neural_net::set_activation_steepness_layer(float steepness, int layer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float steepness=(float)lua_tonumber(L,2);
		int layer=(int)lua_tointeger(L,3);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_activation_steepness_layer(float, int). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_activation_steepness_layer(steepness, layer);

		return 0;
	}

	// void FANN::neural_net::set_activation_steepness_hidden(float steepness)
	static int _bind_set_activation_steepness_hidden(lua_State *L) {
		if (!_lg_typecheck_set_activation_steepness_hidden(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_activation_steepness_hidden(float steepness) function, expected prototype:\nvoid FANN::neural_net::set_activation_steepness_hidden(float steepness)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float steepness=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_activation_steepness_hidden(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_activation_steepness_hidden(steepness);

		return 0;
	}

	// void FANN::neural_net::set_activation_steepness_output(float steepness)
	static int _bind_set_activation_steepness_output(lua_State *L) {
		if (!_lg_typecheck_set_activation_steepness_output(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_activation_steepness_output(float steepness) function, expected prototype:\nvoid FANN::neural_net::set_activation_steepness_output(float steepness)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float steepness=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_activation_steepness_output(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_activation_steepness_output(steepness);

		return 0;
	}

	// FANN::error_function_enum FANN::neural_net::get_train_error_function()
	static int _bind_get_train_error_function(lua_State *L) {
		if (!_lg_typecheck_get_train_error_function(L)) {
			luaL_error(L, "luna typecheck failed in FANN::error_function_enum FANN::neural_net::get_train_error_function() function, expected prototype:\nFANN::error_function_enum FANN::neural_net::get_train_error_function()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call FANN::error_function_enum FANN::neural_net::get_train_error_function(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		FANN::error_function_enum lret = self->get_train_error_function();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_train_error_function(FANN::error_function_enum train_error_function)
	static int _bind_set_train_error_function(lua_State *L) {
		if (!_lg_typecheck_set_train_error_function(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_train_error_function(FANN::error_function_enum train_error_function) function, expected prototype:\nvoid FANN::neural_net::set_train_error_function(FANN::error_function_enum train_error_function)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		FANN::error_function_enum train_error_function=(FANN::error_function_enum)lua_tointeger(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_train_error_function(FANN::error_function_enum). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_train_error_function(train_error_function);

		return 0;
	}

	// float FANN::neural_net::get_quickprop_decay()
	static int _bind_get_quickprop_decay(lua_State *L) {
		if (!_lg_typecheck_get_quickprop_decay(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_quickprop_decay() function, expected prototype:\nfloat FANN::neural_net::get_quickprop_decay()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_quickprop_decay(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_quickprop_decay();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_quickprop_decay(float quickprop_decay)
	static int _bind_set_quickprop_decay(lua_State *L) {
		if (!_lg_typecheck_set_quickprop_decay(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_quickprop_decay(float quickprop_decay) function, expected prototype:\nvoid FANN::neural_net::set_quickprop_decay(float quickprop_decay)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float quickprop_decay=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_quickprop_decay(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_quickprop_decay(quickprop_decay);

		return 0;
	}

	// float FANN::neural_net::get_quickprop_mu()
	static int _bind_get_quickprop_mu(lua_State *L) {
		if (!_lg_typecheck_get_quickprop_mu(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_quickprop_mu() function, expected prototype:\nfloat FANN::neural_net::get_quickprop_mu()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_quickprop_mu(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_quickprop_mu();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_quickprop_mu(float quickprop_mu)
	static int _bind_set_quickprop_mu(lua_State *L) {
		if (!_lg_typecheck_set_quickprop_mu(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_quickprop_mu(float quickprop_mu) function, expected prototype:\nvoid FANN::neural_net::set_quickprop_mu(float quickprop_mu)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float quickprop_mu=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_quickprop_mu(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_quickprop_mu(quickprop_mu);

		return 0;
	}

	// float FANN::neural_net::get_rprop_increase_factor()
	static int _bind_get_rprop_increase_factor(lua_State *L) {
		if (!_lg_typecheck_get_rprop_increase_factor(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_rprop_increase_factor() function, expected prototype:\nfloat FANN::neural_net::get_rprop_increase_factor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_rprop_increase_factor(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_rprop_increase_factor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_rprop_increase_factor(float rprop_increase_factor)
	static int _bind_set_rprop_increase_factor(lua_State *L) {
		if (!_lg_typecheck_set_rprop_increase_factor(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_rprop_increase_factor(float rprop_increase_factor) function, expected prototype:\nvoid FANN::neural_net::set_rprop_increase_factor(float rprop_increase_factor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rprop_increase_factor=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_rprop_increase_factor(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_rprop_increase_factor(rprop_increase_factor);

		return 0;
	}

	// float FANN::neural_net::get_rprop_decrease_factor()
	static int _bind_get_rprop_decrease_factor(lua_State *L) {
		if (!_lg_typecheck_get_rprop_decrease_factor(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_rprop_decrease_factor() function, expected prototype:\nfloat FANN::neural_net::get_rprop_decrease_factor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_rprop_decrease_factor(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_rprop_decrease_factor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_rprop_decrease_factor(float rprop_decrease_factor)
	static int _bind_set_rprop_decrease_factor(lua_State *L) {
		if (!_lg_typecheck_set_rprop_decrease_factor(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_rprop_decrease_factor(float rprop_decrease_factor) function, expected prototype:\nvoid FANN::neural_net::set_rprop_decrease_factor(float rprop_decrease_factor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rprop_decrease_factor=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_rprop_decrease_factor(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_rprop_decrease_factor(rprop_decrease_factor);

		return 0;
	}

	// float FANN::neural_net::get_rprop_delta_zero()
	static int _bind_get_rprop_delta_zero(lua_State *L) {
		if (!_lg_typecheck_get_rprop_delta_zero(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_rprop_delta_zero() function, expected prototype:\nfloat FANN::neural_net::get_rprop_delta_zero()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_rprop_delta_zero(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_rprop_delta_zero();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_rprop_delta_zero(float rprop_delta_zero)
	static int _bind_set_rprop_delta_zero(lua_State *L) {
		if (!_lg_typecheck_set_rprop_delta_zero(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_rprop_delta_zero(float rprop_delta_zero) function, expected prototype:\nvoid FANN::neural_net::set_rprop_delta_zero(float rprop_delta_zero)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rprop_delta_zero=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_rprop_delta_zero(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_rprop_delta_zero(rprop_delta_zero);

		return 0;
	}

	// float FANN::neural_net::get_rprop_delta_min()
	static int _bind_get_rprop_delta_min(lua_State *L) {
		if (!_lg_typecheck_get_rprop_delta_min(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_rprop_delta_min() function, expected prototype:\nfloat FANN::neural_net::get_rprop_delta_min()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_rprop_delta_min(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_rprop_delta_min();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_rprop_delta_min(float rprop_delta_min)
	static int _bind_set_rprop_delta_min(lua_State *L) {
		if (!_lg_typecheck_set_rprop_delta_min(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_rprop_delta_min(float rprop_delta_min) function, expected prototype:\nvoid FANN::neural_net::set_rprop_delta_min(float rprop_delta_min)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rprop_delta_min=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_rprop_delta_min(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_rprop_delta_min(rprop_delta_min);

		return 0;
	}

	// float FANN::neural_net::get_rprop_delta_max()
	static int _bind_get_rprop_delta_max(lua_State *L) {
		if (!_lg_typecheck_get_rprop_delta_max(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_rprop_delta_max() function, expected prototype:\nfloat FANN::neural_net::get_rprop_delta_max()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_rprop_delta_max(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_rprop_delta_max();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_rprop_delta_max(float rprop_delta_max)
	static int _bind_set_rprop_delta_max(lua_State *L) {
		if (!_lg_typecheck_set_rprop_delta_max(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_rprop_delta_max(float rprop_delta_max) function, expected prototype:\nvoid FANN::neural_net::set_rprop_delta_max(float rprop_delta_max)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float rprop_delta_max=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_rprop_delta_max(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_rprop_delta_max(rprop_delta_max);

		return 0;
	}

	// float FANN::neural_net::get_sarprop_weight_decay_shift()
	static int _bind_get_sarprop_weight_decay_shift(lua_State *L) {
		if (!_lg_typecheck_get_sarprop_weight_decay_shift(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_sarprop_weight_decay_shift() function, expected prototype:\nfloat FANN::neural_net::get_sarprop_weight_decay_shift()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_sarprop_weight_decay_shift(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_sarprop_weight_decay_shift();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_sarprop_weight_decay_shift(float sarprop_weight_decay_shift)
	static int _bind_set_sarprop_weight_decay_shift(lua_State *L) {
		if (!_lg_typecheck_set_sarprop_weight_decay_shift(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_sarprop_weight_decay_shift(float sarprop_weight_decay_shift) function, expected prototype:\nvoid FANN::neural_net::set_sarprop_weight_decay_shift(float sarprop_weight_decay_shift)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float sarprop_weight_decay_shift=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_sarprop_weight_decay_shift(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_sarprop_weight_decay_shift(sarprop_weight_decay_shift);

		return 0;
	}

	// float FANN::neural_net::get_sarprop_step_error_threshold_factor()
	static int _bind_get_sarprop_step_error_threshold_factor(lua_State *L) {
		if (!_lg_typecheck_get_sarprop_step_error_threshold_factor(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_sarprop_step_error_threshold_factor() function, expected prototype:\nfloat FANN::neural_net::get_sarprop_step_error_threshold_factor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_sarprop_step_error_threshold_factor(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_sarprop_step_error_threshold_factor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_sarprop_step_error_threshold_factor(float sarprop_step_error_threshold_factor)
	static int _bind_set_sarprop_step_error_threshold_factor(lua_State *L) {
		if (!_lg_typecheck_set_sarprop_step_error_threshold_factor(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_sarprop_step_error_threshold_factor(float sarprop_step_error_threshold_factor) function, expected prototype:\nvoid FANN::neural_net::set_sarprop_step_error_threshold_factor(float sarprop_step_error_threshold_factor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float sarprop_step_error_threshold_factor=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_sarprop_step_error_threshold_factor(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_sarprop_step_error_threshold_factor(sarprop_step_error_threshold_factor);

		return 0;
	}

	// float FANN::neural_net::get_sarprop_step_error_shift()
	static int _bind_get_sarprop_step_error_shift(lua_State *L) {
		if (!_lg_typecheck_get_sarprop_step_error_shift(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_sarprop_step_error_shift() function, expected prototype:\nfloat FANN::neural_net::get_sarprop_step_error_shift()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_sarprop_step_error_shift(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_sarprop_step_error_shift();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_sarprop_step_error_shift(float sarprop_step_error_shift)
	static int _bind_set_sarprop_step_error_shift(lua_State *L) {
		if (!_lg_typecheck_set_sarprop_step_error_shift(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_sarprop_step_error_shift(float sarprop_step_error_shift) function, expected prototype:\nvoid FANN::neural_net::set_sarprop_step_error_shift(float sarprop_step_error_shift)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float sarprop_step_error_shift=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_sarprop_step_error_shift(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_sarprop_step_error_shift(sarprop_step_error_shift);

		return 0;
	}

	// float FANN::neural_net::get_sarprop_temperature()
	static int _bind_get_sarprop_temperature(lua_State *L) {
		if (!_lg_typecheck_get_sarprop_temperature(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_sarprop_temperature() function, expected prototype:\nfloat FANN::neural_net::get_sarprop_temperature()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_sarprop_temperature(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_sarprop_temperature();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_sarprop_temperature(float sarprop_temperature)
	static int _bind_set_sarprop_temperature(lua_State *L) {
		if (!_lg_typecheck_set_sarprop_temperature(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_sarprop_temperature(float sarprop_temperature) function, expected prototype:\nvoid FANN::neural_net::set_sarprop_temperature(float sarprop_temperature)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float sarprop_temperature=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_sarprop_temperature(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_sarprop_temperature(sarprop_temperature);

		return 0;
	}

	// unsigned int FANN::neural_net::get_num_input()
	static int _bind_get_num_input(lua_State *L) {
		if (!_lg_typecheck_get_num_input(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int FANN::neural_net::get_num_input() function, expected prototype:\nunsigned int FANN::neural_net::get_num_input()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int FANN::neural_net::get_num_input(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->get_num_input();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int FANN::neural_net::get_num_output()
	static int _bind_get_num_output(lua_State *L) {
		if (!_lg_typecheck_get_num_output(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int FANN::neural_net::get_num_output() function, expected prototype:\nunsigned int FANN::neural_net::get_num_output()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int FANN::neural_net::get_num_output(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->get_num_output();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int FANN::neural_net::get_total_neurons()
	static int _bind_get_total_neurons(lua_State *L) {
		if (!_lg_typecheck_get_total_neurons(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int FANN::neural_net::get_total_neurons() function, expected prototype:\nunsigned int FANN::neural_net::get_total_neurons()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int FANN::neural_net::get_total_neurons(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->get_total_neurons();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int FANN::neural_net::get_total_connections()
	static int _bind_get_total_connections(lua_State *L) {
		if (!_lg_typecheck_get_total_connections(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int FANN::neural_net::get_total_connections() function, expected prototype:\nunsigned int FANN::neural_net::get_total_connections()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int FANN::neural_net::get_total_connections(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->get_total_connections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// FANN::network_type_enum FANN::neural_net::get_network_type()
	static int _bind_get_network_type(lua_State *L) {
		if (!_lg_typecheck_get_network_type(L)) {
			luaL_error(L, "luna typecheck failed in FANN::network_type_enum FANN::neural_net::get_network_type() function, expected prototype:\nFANN::network_type_enum FANN::neural_net::get_network_type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call FANN::network_type_enum FANN::neural_net::get_network_type(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		FANN::network_type_enum lret = self->get_network_type();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float FANN::neural_net::get_connection_rate()
	static int _bind_get_connection_rate(lua_State *L) {
		if (!_lg_typecheck_get_connection_rate(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_connection_rate() function, expected prototype:\nfloat FANN::neural_net::get_connection_rate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_connection_rate(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_connection_rate();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int FANN::neural_net::get_num_layers()
	static int _bind_get_num_layers(lua_State *L) {
		if (!_lg_typecheck_get_num_layers(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int FANN::neural_net::get_num_layers() function, expected prototype:\nunsigned int FANN::neural_net::get_num_layers()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int FANN::neural_net::get_num_layers(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->get_num_layers();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::get_layer_array(unsigned int * layers)
	static int _bind_get_layer_array(lua_State *L) {
		if (!_lg_typecheck_get_layer_array(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::get_layer_array(unsigned int * layers) function, expected prototype:\nvoid FANN::neural_net::get_layer_array(unsigned int * layers)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int* layers=(unsigned int*)Luna< void >::check(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::get_layer_array(unsigned int *). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->get_layer_array(layers);

		return 0;
	}

	// void FANN::neural_net::get_bias_array(unsigned int * bias)
	static int _bind_get_bias_array(lua_State *L) {
		if (!_lg_typecheck_get_bias_array(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::get_bias_array(unsigned int * bias) function, expected prototype:\nvoid FANN::neural_net::get_bias_array(unsigned int * bias)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int* bias=(unsigned int*)Luna< void >::check(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::get_bias_array(unsigned int *). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->get_bias_array(bias);

		return 0;
	}

	// void FANN::neural_net::set_weight(unsigned int from_neuron, unsigned int to_neuron, float weight)
	static int _bind_set_weight(lua_State *L) {
		if (!_lg_typecheck_set_weight(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_weight(unsigned int from_neuron, unsigned int to_neuron, float weight) function, expected prototype:\nvoid FANN::neural_net::set_weight(unsigned int from_neuron, unsigned int to_neuron, float weight)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int from_neuron=(unsigned int)lua_tointeger(L,2);
		unsigned int to_neuron=(unsigned int)lua_tointeger(L,3);
		float weight=(float)lua_tonumber(L,4);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_weight(unsigned int, unsigned int, float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_weight(from_neuron, to_neuron, weight);

		return 0;
	}

	// float FANN::neural_net::get_learning_momentum()
	static int _bind_get_learning_momentum(lua_State *L) {
		if (!_lg_typecheck_get_learning_momentum(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_learning_momentum() function, expected prototype:\nfloat FANN::neural_net::get_learning_momentum()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_learning_momentum(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_learning_momentum();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_learning_momentum(float learning_momentum)
	static int _bind_set_learning_momentum(lua_State *L) {
		if (!_lg_typecheck_set_learning_momentum(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_learning_momentum(float learning_momentum) function, expected prototype:\nvoid FANN::neural_net::set_learning_momentum(float learning_momentum)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float learning_momentum=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_learning_momentum(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_learning_momentum(learning_momentum);

		return 0;
	}

	// FANN::stop_function_enum FANN::neural_net::get_train_stop_function()
	static int _bind_get_train_stop_function(lua_State *L) {
		if (!_lg_typecheck_get_train_stop_function(L)) {
			luaL_error(L, "luna typecheck failed in FANN::stop_function_enum FANN::neural_net::get_train_stop_function() function, expected prototype:\nFANN::stop_function_enum FANN::neural_net::get_train_stop_function()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call FANN::stop_function_enum FANN::neural_net::get_train_stop_function(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		FANN::stop_function_enum lret = self->get_train_stop_function();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_train_stop_function(FANN::stop_function_enum train_stop_function)
	static int _bind_set_train_stop_function(lua_State *L) {
		if (!_lg_typecheck_set_train_stop_function(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_train_stop_function(FANN::stop_function_enum train_stop_function) function, expected prototype:\nvoid FANN::neural_net::set_train_stop_function(FANN::stop_function_enum train_stop_function)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		FANN::stop_function_enum train_stop_function=(FANN::stop_function_enum)lua_tointeger(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_train_stop_function(FANN::stop_function_enum). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_train_stop_function(train_stop_function);

		return 0;
	}

	// float FANN::neural_net::get_bit_fail_limit()
	static int _bind_get_bit_fail_limit(lua_State *L) {
		if (!_lg_typecheck_get_bit_fail_limit(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_bit_fail_limit() function, expected prototype:\nfloat FANN::neural_net::get_bit_fail_limit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_bit_fail_limit(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_bit_fail_limit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_bit_fail_limit(float bit_fail_limit)
	static int _bind_set_bit_fail_limit(lua_State *L) {
		if (!_lg_typecheck_set_bit_fail_limit(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_bit_fail_limit(float bit_fail_limit) function, expected prototype:\nvoid FANN::neural_net::set_bit_fail_limit(float bit_fail_limit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float bit_fail_limit=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_bit_fail_limit(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_bit_fail_limit(bit_fail_limit);

		return 0;
	}

	// unsigned int FANN::neural_net::get_bit_fail()
	static int _bind_get_bit_fail(lua_State *L) {
		if (!_lg_typecheck_get_bit_fail(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int FANN::neural_net::get_bit_fail() function, expected prototype:\nunsigned int FANN::neural_net::get_bit_fail()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int FANN::neural_net::get_bit_fail(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->get_bit_fail();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::cascadetrain_on_data(const FANN::training_data & data, unsigned int max_neurons, unsigned int neurons_between_reports, float desired_error)
	static int _bind_cascadetrain_on_data(lua_State *L) {
		if (!_lg_typecheck_cascadetrain_on_data(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::cascadetrain_on_data(const FANN::training_data & data, unsigned int max_neurons, unsigned int neurons_between_reports, float desired_error) function, expected prototype:\nvoid FANN::neural_net::cascadetrain_on_data(const FANN::training_data & data, unsigned int max_neurons, unsigned int neurons_between_reports, float desired_error)\nClass arguments details:\narg 1 ID = 45173508\n\n%s",luna_dumpStack(L).c_str());
		}

		const FANN::training_data* data_ptr=(Luna< FANN::training_data >::check(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in FANN::neural_net::cascadetrain_on_data function");
		}
		const FANN::training_data & data=*data_ptr;
		unsigned int max_neurons=(unsigned int)lua_tointeger(L,3);
		unsigned int neurons_between_reports=(unsigned int)lua_tointeger(L,4);
		float desired_error=(float)lua_tonumber(L,5);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::cascadetrain_on_data(const FANN::training_data &, unsigned int, unsigned int, float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cascadetrain_on_data(data, max_neurons, neurons_between_reports, desired_error);

		return 0;
	}

	// void FANN::neural_net::cascadetrain_on_file(const std::string & filename, unsigned int max_neurons, unsigned int neurons_between_reports, float desired_error)
	static int _bind_cascadetrain_on_file(lua_State *L) {
		if (!_lg_typecheck_cascadetrain_on_file(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::cascadetrain_on_file(const std::string & filename, unsigned int max_neurons, unsigned int neurons_between_reports, float desired_error) function, expected prototype:\nvoid FANN::neural_net::cascadetrain_on_file(const std::string & filename, unsigned int max_neurons, unsigned int neurons_between_reports, float desired_error)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int max_neurons=(unsigned int)lua_tointeger(L,3);
		unsigned int neurons_between_reports=(unsigned int)lua_tointeger(L,4);
		float desired_error=(float)lua_tonumber(L,5);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::cascadetrain_on_file(const std::string &, unsigned int, unsigned int, float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cascadetrain_on_file(filename, max_neurons, neurons_between_reports, desired_error);

		return 0;
	}

	// float FANN::neural_net::get_cascade_output_change_fraction()
	static int _bind_get_cascade_output_change_fraction(lua_State *L) {
		if (!_lg_typecheck_get_cascade_output_change_fraction(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_cascade_output_change_fraction() function, expected prototype:\nfloat FANN::neural_net::get_cascade_output_change_fraction()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_cascade_output_change_fraction(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_cascade_output_change_fraction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_cascade_output_change_fraction(float cascade_output_change_fraction)
	static int _bind_set_cascade_output_change_fraction(lua_State *L) {
		if (!_lg_typecheck_set_cascade_output_change_fraction(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_cascade_output_change_fraction(float cascade_output_change_fraction) function, expected prototype:\nvoid FANN::neural_net::set_cascade_output_change_fraction(float cascade_output_change_fraction)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float cascade_output_change_fraction=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_cascade_output_change_fraction(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_cascade_output_change_fraction(cascade_output_change_fraction);

		return 0;
	}

	// unsigned int FANN::neural_net::get_cascade_output_stagnation_epochs()
	static int _bind_get_cascade_output_stagnation_epochs(lua_State *L) {
		if (!_lg_typecheck_get_cascade_output_stagnation_epochs(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int FANN::neural_net::get_cascade_output_stagnation_epochs() function, expected prototype:\nunsigned int FANN::neural_net::get_cascade_output_stagnation_epochs()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int FANN::neural_net::get_cascade_output_stagnation_epochs(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->get_cascade_output_stagnation_epochs();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_cascade_output_stagnation_epochs(unsigned int cascade_output_stagnation_epochs)
	static int _bind_set_cascade_output_stagnation_epochs(lua_State *L) {
		if (!_lg_typecheck_set_cascade_output_stagnation_epochs(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_cascade_output_stagnation_epochs(unsigned int cascade_output_stagnation_epochs) function, expected prototype:\nvoid FANN::neural_net::set_cascade_output_stagnation_epochs(unsigned int cascade_output_stagnation_epochs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int cascade_output_stagnation_epochs=(unsigned int)lua_tointeger(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_cascade_output_stagnation_epochs(unsigned int). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_cascade_output_stagnation_epochs(cascade_output_stagnation_epochs);

		return 0;
	}

	// float FANN::neural_net::get_cascade_candidate_change_fraction()
	static int _bind_get_cascade_candidate_change_fraction(lua_State *L) {
		if (!_lg_typecheck_get_cascade_candidate_change_fraction(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_cascade_candidate_change_fraction() function, expected prototype:\nfloat FANN::neural_net::get_cascade_candidate_change_fraction()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_cascade_candidate_change_fraction(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_cascade_candidate_change_fraction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_cascade_candidate_change_fraction(float cascade_candidate_change_fraction)
	static int _bind_set_cascade_candidate_change_fraction(lua_State *L) {
		if (!_lg_typecheck_set_cascade_candidate_change_fraction(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_cascade_candidate_change_fraction(float cascade_candidate_change_fraction) function, expected prototype:\nvoid FANN::neural_net::set_cascade_candidate_change_fraction(float cascade_candidate_change_fraction)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float cascade_candidate_change_fraction=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_cascade_candidate_change_fraction(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_cascade_candidate_change_fraction(cascade_candidate_change_fraction);

		return 0;
	}

	// unsigned int FANN::neural_net::get_cascade_candidate_stagnation_epochs()
	static int _bind_get_cascade_candidate_stagnation_epochs(lua_State *L) {
		if (!_lg_typecheck_get_cascade_candidate_stagnation_epochs(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int FANN::neural_net::get_cascade_candidate_stagnation_epochs() function, expected prototype:\nunsigned int FANN::neural_net::get_cascade_candidate_stagnation_epochs()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int FANN::neural_net::get_cascade_candidate_stagnation_epochs(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->get_cascade_candidate_stagnation_epochs();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_cascade_candidate_stagnation_epochs(unsigned int cascade_candidate_stagnation_epochs)
	static int _bind_set_cascade_candidate_stagnation_epochs(lua_State *L) {
		if (!_lg_typecheck_set_cascade_candidate_stagnation_epochs(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_cascade_candidate_stagnation_epochs(unsigned int cascade_candidate_stagnation_epochs) function, expected prototype:\nvoid FANN::neural_net::set_cascade_candidate_stagnation_epochs(unsigned int cascade_candidate_stagnation_epochs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int cascade_candidate_stagnation_epochs=(unsigned int)lua_tointeger(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_cascade_candidate_stagnation_epochs(unsigned int). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_cascade_candidate_stagnation_epochs(cascade_candidate_stagnation_epochs);

		return 0;
	}

	// float FANN::neural_net::get_cascade_weight_multiplier()
	static int _bind_get_cascade_weight_multiplier(lua_State *L) {
		if (!_lg_typecheck_get_cascade_weight_multiplier(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_cascade_weight_multiplier() function, expected prototype:\nfloat FANN::neural_net::get_cascade_weight_multiplier()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_cascade_weight_multiplier(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_cascade_weight_multiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_cascade_weight_multiplier(float cascade_weight_multiplier)
	static int _bind_set_cascade_weight_multiplier(lua_State *L) {
		if (!_lg_typecheck_set_cascade_weight_multiplier(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_cascade_weight_multiplier(float cascade_weight_multiplier) function, expected prototype:\nvoid FANN::neural_net::set_cascade_weight_multiplier(float cascade_weight_multiplier)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float cascade_weight_multiplier=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_cascade_weight_multiplier(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_cascade_weight_multiplier(cascade_weight_multiplier);

		return 0;
	}

	// float FANN::neural_net::get_cascade_candidate_limit()
	static int _bind_get_cascade_candidate_limit(lua_State *L) {
		if (!_lg_typecheck_get_cascade_candidate_limit(L)) {
			luaL_error(L, "luna typecheck failed in float FANN::neural_net::get_cascade_candidate_limit() function, expected prototype:\nfloat FANN::neural_net::get_cascade_candidate_limit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float FANN::neural_net::get_cascade_candidate_limit(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->get_cascade_candidate_limit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_cascade_candidate_limit(float cascade_candidate_limit)
	static int _bind_set_cascade_candidate_limit(lua_State *L) {
		if (!_lg_typecheck_set_cascade_candidate_limit(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_cascade_candidate_limit(float cascade_candidate_limit) function, expected prototype:\nvoid FANN::neural_net::set_cascade_candidate_limit(float cascade_candidate_limit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float cascade_candidate_limit=(float)lua_tonumber(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_cascade_candidate_limit(float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_cascade_candidate_limit(cascade_candidate_limit);

		return 0;
	}

	// unsigned int FANN::neural_net::get_cascade_max_out_epochs()
	static int _bind_get_cascade_max_out_epochs(lua_State *L) {
		if (!_lg_typecheck_get_cascade_max_out_epochs(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int FANN::neural_net::get_cascade_max_out_epochs() function, expected prototype:\nunsigned int FANN::neural_net::get_cascade_max_out_epochs()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int FANN::neural_net::get_cascade_max_out_epochs(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->get_cascade_max_out_epochs();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_cascade_max_out_epochs(unsigned int cascade_max_out_epochs)
	static int _bind_set_cascade_max_out_epochs(lua_State *L) {
		if (!_lg_typecheck_set_cascade_max_out_epochs(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_cascade_max_out_epochs(unsigned int cascade_max_out_epochs) function, expected prototype:\nvoid FANN::neural_net::set_cascade_max_out_epochs(unsigned int cascade_max_out_epochs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int cascade_max_out_epochs=(unsigned int)lua_tointeger(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_cascade_max_out_epochs(unsigned int). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_cascade_max_out_epochs(cascade_max_out_epochs);

		return 0;
	}

	// unsigned int FANN::neural_net::get_cascade_max_cand_epochs()
	static int _bind_get_cascade_max_cand_epochs(lua_State *L) {
		if (!_lg_typecheck_get_cascade_max_cand_epochs(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int FANN::neural_net::get_cascade_max_cand_epochs() function, expected prototype:\nunsigned int FANN::neural_net::get_cascade_max_cand_epochs()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int FANN::neural_net::get_cascade_max_cand_epochs(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->get_cascade_max_cand_epochs();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_cascade_max_cand_epochs(unsigned int cascade_max_cand_epochs)
	static int _bind_set_cascade_max_cand_epochs(lua_State *L) {
		if (!_lg_typecheck_set_cascade_max_cand_epochs(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_cascade_max_cand_epochs(unsigned int cascade_max_cand_epochs) function, expected prototype:\nvoid FANN::neural_net::set_cascade_max_cand_epochs(unsigned int cascade_max_cand_epochs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int cascade_max_cand_epochs=(unsigned int)lua_tointeger(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_cascade_max_cand_epochs(unsigned int). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_cascade_max_cand_epochs(cascade_max_cand_epochs);

		return 0;
	}

	// unsigned int FANN::neural_net::get_cascade_num_candidates()
	static int _bind_get_cascade_num_candidates(lua_State *L) {
		if (!_lg_typecheck_get_cascade_num_candidates(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int FANN::neural_net::get_cascade_num_candidates() function, expected prototype:\nunsigned int FANN::neural_net::get_cascade_num_candidates()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int FANN::neural_net::get_cascade_num_candidates(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->get_cascade_num_candidates();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int FANN::neural_net::get_cascade_activation_functions_count()
	static int _bind_get_cascade_activation_functions_count(lua_State *L) {
		if (!_lg_typecheck_get_cascade_activation_functions_count(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int FANN::neural_net::get_cascade_activation_functions_count() function, expected prototype:\nunsigned int FANN::neural_net::get_cascade_activation_functions_count()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int FANN::neural_net::get_cascade_activation_functions_count(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->get_cascade_activation_functions_count();
		lua_pushnumber(L,lret);

		return 1;
	}

	// FANN::activation_function_enum * FANN::neural_net::get_cascade_activation_functions()
	static int _bind_get_cascade_activation_functions(lua_State *L) {
		if (!_lg_typecheck_get_cascade_activation_functions(L)) {
			luaL_error(L, "luna typecheck failed in FANN::activation_function_enum * FANN::neural_net::get_cascade_activation_functions() function, expected prototype:\nFANN::activation_function_enum * FANN::neural_net::get_cascade_activation_functions()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call FANN::activation_function_enum * FANN::neural_net::get_cascade_activation_functions(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		FANN::activation_function_enum * lret = self->get_cascade_activation_functions();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// void FANN::neural_net::set_cascade_activation_functions(FANN::activation_function_enum * cascade_activation_functions, unsigned int cascade_activation_functions_count)
	static int _bind_set_cascade_activation_functions(lua_State *L) {
		if (!_lg_typecheck_set_cascade_activation_functions(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_cascade_activation_functions(FANN::activation_function_enum * cascade_activation_functions, unsigned int cascade_activation_functions_count) function, expected prototype:\nvoid FANN::neural_net::set_cascade_activation_functions(FANN::activation_function_enum * cascade_activation_functions, unsigned int cascade_activation_functions_count)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		FANN::activation_function_enum* cascade_activation_functions=(FANN::activation_function_enum*)Luna< void >::check(L,2);
		unsigned int cascade_activation_functions_count=(unsigned int)lua_tointeger(L,3);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_cascade_activation_functions(FANN::activation_function_enum *, unsigned int). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_cascade_activation_functions(cascade_activation_functions, cascade_activation_functions_count);

		return 0;
	}

	// unsigned int FANN::neural_net::get_cascade_activation_steepnesses_count()
	static int _bind_get_cascade_activation_steepnesses_count(lua_State *L) {
		if (!_lg_typecheck_get_cascade_activation_steepnesses_count(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int FANN::neural_net::get_cascade_activation_steepnesses_count() function, expected prototype:\nunsigned int FANN::neural_net::get_cascade_activation_steepnesses_count()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int FANN::neural_net::get_cascade_activation_steepnesses_count(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->get_cascade_activation_steepnesses_count();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float * FANN::neural_net::get_cascade_activation_steepnesses()
	static int _bind_get_cascade_activation_steepnesses(lua_State *L) {
		if (!_lg_typecheck_get_cascade_activation_steepnesses(L)) {
			luaL_error(L, "luna typecheck failed in float * FANN::neural_net::get_cascade_activation_steepnesses() function, expected prototype:\nfloat * FANN::neural_net::get_cascade_activation_steepnesses()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float * FANN::neural_net::get_cascade_activation_steepnesses(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float * lret = self->get_cascade_activation_steepnesses();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// void FANN::neural_net::set_cascade_activation_steepnesses(float * cascade_activation_steepnesses, unsigned int cascade_activation_steepnesses_count)
	static int _bind_set_cascade_activation_steepnesses(lua_State *L) {
		if (!_lg_typecheck_set_cascade_activation_steepnesses(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_cascade_activation_steepnesses(float * cascade_activation_steepnesses, unsigned int cascade_activation_steepnesses_count) function, expected prototype:\nvoid FANN::neural_net::set_cascade_activation_steepnesses(float * cascade_activation_steepnesses, unsigned int cascade_activation_steepnesses_count)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float* cascade_activation_steepnesses=(float*)Luna< void >::check(L,2);
		unsigned int cascade_activation_steepnesses_count=(unsigned int)lua_tointeger(L,3);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_cascade_activation_steepnesses(float *, unsigned int). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_cascade_activation_steepnesses(cascade_activation_steepnesses, cascade_activation_steepnesses_count);

		return 0;
	}

	// unsigned int FANN::neural_net::get_cascade_num_candidate_groups()
	static int _bind_get_cascade_num_candidate_groups(lua_State *L) {
		if (!_lg_typecheck_get_cascade_num_candidate_groups(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int FANN::neural_net::get_cascade_num_candidate_groups() function, expected prototype:\nunsigned int FANN::neural_net::get_cascade_num_candidate_groups()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int FANN::neural_net::get_cascade_num_candidate_groups(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->get_cascade_num_candidate_groups();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::set_cascade_num_candidate_groups(unsigned int cascade_num_candidate_groups)
	static int _bind_set_cascade_num_candidate_groups(lua_State *L) {
		if (!_lg_typecheck_set_cascade_num_candidate_groups(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::set_cascade_num_candidate_groups(unsigned int cascade_num_candidate_groups) function, expected prototype:\nvoid FANN::neural_net::set_cascade_num_candidate_groups(unsigned int cascade_num_candidate_groups)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int cascade_num_candidate_groups=(unsigned int)lua_tointeger(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::set_cascade_num_candidate_groups(unsigned int). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set_cascade_num_candidate_groups(cascade_num_candidate_groups);

		return 0;
	}

	// void FANN::neural_net::scale_train(FANN::training_data & data)
	static int _bind_scale_train(lua_State *L) {
		if (!_lg_typecheck_scale_train(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::scale_train(FANN::training_data & data) function, expected prototype:\nvoid FANN::neural_net::scale_train(FANN::training_data & data)\nClass arguments details:\narg 1 ID = 45173508\n\n%s",luna_dumpStack(L).c_str());
		}

		FANN::training_data* data_ptr=(Luna< FANN::training_data >::check(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in FANN::neural_net::scale_train function");
		}
		FANN::training_data & data=*data_ptr;

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::scale_train(FANN::training_data &). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->scale_train(data);

		return 0;
	}

	// void FANN::neural_net::descale_train(FANN::training_data & data)
	static int _bind_descale_train(lua_State *L) {
		if (!_lg_typecheck_descale_train(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::descale_train(FANN::training_data & data) function, expected prototype:\nvoid FANN::neural_net::descale_train(FANN::training_data & data)\nClass arguments details:\narg 1 ID = 45173508\n\n%s",luna_dumpStack(L).c_str());
		}

		FANN::training_data* data_ptr=(Luna< FANN::training_data >::check(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in FANN::neural_net::descale_train function");
		}
		FANN::training_data & data=*data_ptr;

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::descale_train(FANN::training_data &). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->descale_train(data);

		return 0;
	}

	// bool FANN::neural_net::set_input_scaling_params(const FANN::training_data & data, float new_input_min, float new_input_max)
	static int _bind_set_input_scaling_params(lua_State *L) {
		if (!_lg_typecheck_set_input_scaling_params(L)) {
			luaL_error(L, "luna typecheck failed in bool FANN::neural_net::set_input_scaling_params(const FANN::training_data & data, float new_input_min, float new_input_max) function, expected prototype:\nbool FANN::neural_net::set_input_scaling_params(const FANN::training_data & data, float new_input_min, float new_input_max)\nClass arguments details:\narg 1 ID = 45173508\n\n%s",luna_dumpStack(L).c_str());
		}

		const FANN::training_data* data_ptr=(Luna< FANN::training_data >::check(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in FANN::neural_net::set_input_scaling_params function");
		}
		const FANN::training_data & data=*data_ptr;
		float new_input_min=(float)lua_tonumber(L,3);
		float new_input_max=(float)lua_tonumber(L,4);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool FANN::neural_net::set_input_scaling_params(const FANN::training_data &, float, float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set_input_scaling_params(data, new_input_min, new_input_max);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool FANN::neural_net::set_output_scaling_params(const FANN::training_data & data, float new_output_min, float new_output_max)
	static int _bind_set_output_scaling_params(lua_State *L) {
		if (!_lg_typecheck_set_output_scaling_params(L)) {
			luaL_error(L, "luna typecheck failed in bool FANN::neural_net::set_output_scaling_params(const FANN::training_data & data, float new_output_min, float new_output_max) function, expected prototype:\nbool FANN::neural_net::set_output_scaling_params(const FANN::training_data & data, float new_output_min, float new_output_max)\nClass arguments details:\narg 1 ID = 45173508\n\n%s",luna_dumpStack(L).c_str());
		}

		const FANN::training_data* data_ptr=(Luna< FANN::training_data >::check(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in FANN::neural_net::set_output_scaling_params function");
		}
		const FANN::training_data & data=*data_ptr;
		float new_output_min=(float)lua_tonumber(L,3);
		float new_output_max=(float)lua_tonumber(L,4);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool FANN::neural_net::set_output_scaling_params(const FANN::training_data &, float, float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set_output_scaling_params(data, new_output_min, new_output_max);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool FANN::neural_net::set_scaling_params(const FANN::training_data & data, float new_input_min, float new_input_max, float new_output_min, float new_output_max)
	static int _bind_set_scaling_params(lua_State *L) {
		if (!_lg_typecheck_set_scaling_params(L)) {
			luaL_error(L, "luna typecheck failed in bool FANN::neural_net::set_scaling_params(const FANN::training_data & data, float new_input_min, float new_input_max, float new_output_min, float new_output_max) function, expected prototype:\nbool FANN::neural_net::set_scaling_params(const FANN::training_data & data, float new_input_min, float new_input_max, float new_output_min, float new_output_max)\nClass arguments details:\narg 1 ID = 45173508\n\n%s",luna_dumpStack(L).c_str());
		}

		const FANN::training_data* data_ptr=(Luna< FANN::training_data >::check(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in FANN::neural_net::set_scaling_params function");
		}
		const FANN::training_data & data=*data_ptr;
		float new_input_min=(float)lua_tonumber(L,3);
		float new_input_max=(float)lua_tonumber(L,4);
		float new_output_min=(float)lua_tonumber(L,5);
		float new_output_max=(float)lua_tonumber(L,6);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool FANN::neural_net::set_scaling_params(const FANN::training_data &, float, float, float, float). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->set_scaling_params(data, new_input_min, new_input_max, new_output_min, new_output_max);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool FANN::neural_net::clear_scaling_params()
	static int _bind_clear_scaling_params(lua_State *L) {
		if (!_lg_typecheck_clear_scaling_params(L)) {
			luaL_error(L, "luna typecheck failed in bool FANN::neural_net::clear_scaling_params() function, expected prototype:\nbool FANN::neural_net::clear_scaling_params()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool FANN::neural_net::clear_scaling_params(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->clear_scaling_params();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void FANN::neural_net::scale_input(float * input_vector)
	static int _bind_scale_input(lua_State *L) {
		if (!_lg_typecheck_scale_input(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::scale_input(float * input_vector) function, expected prototype:\nvoid FANN::neural_net::scale_input(float * input_vector)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float* input_vector=(float*)Luna< void >::check(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::scale_input(float *). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->scale_input(input_vector);

		return 0;
	}

	// void FANN::neural_net::scale_output(float * output_vector)
	static int _bind_scale_output(lua_State *L) {
		if (!_lg_typecheck_scale_output(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::scale_output(float * output_vector) function, expected prototype:\nvoid FANN::neural_net::scale_output(float * output_vector)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float* output_vector=(float*)Luna< void >::check(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::scale_output(float *). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->scale_output(output_vector);

		return 0;
	}

	// void FANN::neural_net::descale_input(float * input_vector)
	static int _bind_descale_input(lua_State *L) {
		if (!_lg_typecheck_descale_input(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::descale_input(float * input_vector) function, expected prototype:\nvoid FANN::neural_net::descale_input(float * input_vector)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float* input_vector=(float*)Luna< void >::check(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::descale_input(float *). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->descale_input(input_vector);

		return 0;
	}

	// void FANN::neural_net::descale_output(float * output_vector)
	static int _bind_descale_output(lua_State *L) {
		if (!_lg_typecheck_descale_output(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::descale_output(float * output_vector) function, expected prototype:\nvoid FANN::neural_net::descale_output(float * output_vector)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float* output_vector=(float*)Luna< void >::check(L,2);

		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::descale_output(float *). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->descale_output(output_vector);

		return 0;
	}

	// unsigned int FANN::neural_net::get_errno()
	static int _bind_get_errno(lua_State *L) {
		if (!_lg_typecheck_get_errno(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int FANN::neural_net::get_errno() function, expected prototype:\nunsigned int FANN::neural_net::get_errno()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int FANN::neural_net::get_errno(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->get_errno();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void FANN::neural_net::reset_errno()
	static int _bind_reset_errno(lua_State *L) {
		if (!_lg_typecheck_reset_errno(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::reset_errno() function, expected prototype:\nvoid FANN::neural_net::reset_errno()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::reset_errno(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset_errno();

		return 0;
	}

	// void FANN::neural_net::reset_errstr()
	static int _bind_reset_errstr(lua_State *L) {
		if (!_lg_typecheck_reset_errstr(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::reset_errstr() function, expected prototype:\nvoid FANN::neural_net::reset_errstr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::reset_errstr(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset_errstr();

		return 0;
	}

	// std::string FANN::neural_net::get_errstr()
	static int _bind_get_errstr(lua_State *L) {
		if (!_lg_typecheck_get_errstr(L)) {
			luaL_error(L, "luna typecheck failed in std::string FANN::neural_net::get_errstr() function, expected prototype:\nstd::string FANN::neural_net::get_errstr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string FANN::neural_net::get_errstr(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->get_errstr();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void FANN::neural_net::print_error()
	static int _bind_print_error(lua_State *L) {
		if (!_lg_typecheck_print_error(L)) {
			luaL_error(L, "luna typecheck failed in void FANN::neural_net::print_error() function, expected prototype:\nvoid FANN::neural_net::print_error()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		FANN::neural_net* self=(Luna< FANN::neural_net >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void FANN::neural_net::print_error(). Got : '%s'\n%s",typeid(Luna< FANN::neural_net >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->print_error();

		return 0;
	}

	// int FANN::neural_net::create_standard(FANN::neural_net * nn, lua_Table * dum, lua_State * L)
	static int _bind_create_standard(lua_State *L) {
		if (!_lg_typecheck_create_standard(L)) {
			luaL_error(L, "luna typecheck failed in int FANN::neural_net::create_standard(FANN::neural_net * nn, lua_Table * dum, lua_State * L) function, expected prototype:\nint FANN::neural_net::create_standard(FANN::neural_net * nn, lua_Table * dum, lua_State * L)\nClass arguments details:\narg 1 ID = 71064061\n\n%s",luna_dumpStack(L).c_str());
		}

		FANN::neural_net* nn=(Luna< FANN::neural_net >::check(L,1));

		return create_standard(nn, NULL, L);
	}


	// Operator binds:

};

FANN::neural_net* LunaTraits< FANN::neural_net >::_bind_ctor(lua_State *L) {
	return luna_wrapper_FANN_neural_net::_bind_ctor(L);
}

void LunaTraits< FANN::neural_net >::_bind_dtor(FANN::neural_net* obj) {
	delete obj;
}

const char LunaTraits< FANN::neural_net >::className[] = "neural_net";
const char LunaTraits< FANN::neural_net >::fullName[] = "FANN::neural_net";
const char LunaTraits< FANN::neural_net >::moduleName[] = "FANN";
const char* LunaTraits< FANN::neural_net >::parents[] = {0};
const int LunaTraits< FANN::neural_net >::hash = 71064061;
const int LunaTraits< FANN::neural_net >::uniqueIDs[] = {71064061,0};

luna_RegType LunaTraits< FANN::neural_net >::methods[] = {
	{"destroy", &luna_wrapper_FANN_neural_net::_bind_destroy},
	{"run", &luna_wrapper_FANN_neural_net::_bind_run},
	{"randomize_weights", &luna_wrapper_FANN_neural_net::_bind_randomize_weights},
	{"init_weights", &luna_wrapper_FANN_neural_net::_bind_init_weights},
	{"print_connections", &luna_wrapper_FANN_neural_net::_bind_print_connections},
	{"create_from_file", &luna_wrapper_FANN_neural_net::_bind_create_from_file},
	{"save", &luna_wrapper_FANN_neural_net::_bind_save},
	{"save_to_fixed", &luna_wrapper_FANN_neural_net::_bind_save_to_fixed},
	{"train", &luna_wrapper_FANN_neural_net::_bind_train},
	{"train_epoch", &luna_wrapper_FANN_neural_net::_bind_train_epoch},
	{"train_on_data", &luna_wrapper_FANN_neural_net::_bind_train_on_data},
	{"train_on_file", &luna_wrapper_FANN_neural_net::_bind_train_on_file},
	{"test", &luna_wrapper_FANN_neural_net::_bind_test},
	{"test_data", &luna_wrapper_FANN_neural_net::_bind_test_data},
	{"get_MSE", &luna_wrapper_FANN_neural_net::_bind_get_MSE},
	{"reset_MSE", &luna_wrapper_FANN_neural_net::_bind_reset_MSE},
	{"print_parameters", &luna_wrapper_FANN_neural_net::_bind_print_parameters},
	{"get_training_algorithm", &luna_wrapper_FANN_neural_net::_bind_get_training_algorithm},
	{"set_training_algorithm", &luna_wrapper_FANN_neural_net::_bind_set_training_algorithm},
	{"get_learning_rate", &luna_wrapper_FANN_neural_net::_bind_get_learning_rate},
	{"set_learning_rate", &luna_wrapper_FANN_neural_net::_bind_set_learning_rate},
	{"get_activation_function", &luna_wrapper_FANN_neural_net::_bind_get_activation_function},
	{"set_activation_function", &luna_wrapper_FANN_neural_net::_bind_set_activation_function},
	{"set_activation_function_layer", &luna_wrapper_FANN_neural_net::_bind_set_activation_function_layer},
	{"set_activation_function_hidden", &luna_wrapper_FANN_neural_net::_bind_set_activation_function_hidden},
	{"set_activation_function_output", &luna_wrapper_FANN_neural_net::_bind_set_activation_function_output},
	{"get_activation_steepness", &luna_wrapper_FANN_neural_net::_bind_get_activation_steepness},
	{"set_activation_steepness", &luna_wrapper_FANN_neural_net::_bind_set_activation_steepness},
	{"set_activation_steepness_layer", &luna_wrapper_FANN_neural_net::_bind_set_activation_steepness_layer},
	{"set_activation_steepness_hidden", &luna_wrapper_FANN_neural_net::_bind_set_activation_steepness_hidden},
	{"set_activation_steepness_output", &luna_wrapper_FANN_neural_net::_bind_set_activation_steepness_output},
	{"get_train_error_function", &luna_wrapper_FANN_neural_net::_bind_get_train_error_function},
	{"set_train_error_function", &luna_wrapper_FANN_neural_net::_bind_set_train_error_function},
	{"get_quickprop_decay", &luna_wrapper_FANN_neural_net::_bind_get_quickprop_decay},
	{"set_quickprop_decay", &luna_wrapper_FANN_neural_net::_bind_set_quickprop_decay},
	{"get_quickprop_mu", &luna_wrapper_FANN_neural_net::_bind_get_quickprop_mu},
	{"set_quickprop_mu", &luna_wrapper_FANN_neural_net::_bind_set_quickprop_mu},
	{"get_rprop_increase_factor", &luna_wrapper_FANN_neural_net::_bind_get_rprop_increase_factor},
	{"set_rprop_increase_factor", &luna_wrapper_FANN_neural_net::_bind_set_rprop_increase_factor},
	{"get_rprop_decrease_factor", &luna_wrapper_FANN_neural_net::_bind_get_rprop_decrease_factor},
	{"set_rprop_decrease_factor", &luna_wrapper_FANN_neural_net::_bind_set_rprop_decrease_factor},
	{"get_rprop_delta_zero", &luna_wrapper_FANN_neural_net::_bind_get_rprop_delta_zero},
	{"set_rprop_delta_zero", &luna_wrapper_FANN_neural_net::_bind_set_rprop_delta_zero},
	{"get_rprop_delta_min", &luna_wrapper_FANN_neural_net::_bind_get_rprop_delta_min},
	{"set_rprop_delta_min", &luna_wrapper_FANN_neural_net::_bind_set_rprop_delta_min},
	{"get_rprop_delta_max", &luna_wrapper_FANN_neural_net::_bind_get_rprop_delta_max},
	{"set_rprop_delta_max", &luna_wrapper_FANN_neural_net::_bind_set_rprop_delta_max},
	{"get_sarprop_weight_decay_shift", &luna_wrapper_FANN_neural_net::_bind_get_sarprop_weight_decay_shift},
	{"set_sarprop_weight_decay_shift", &luna_wrapper_FANN_neural_net::_bind_set_sarprop_weight_decay_shift},
	{"get_sarprop_step_error_threshold_factor", &luna_wrapper_FANN_neural_net::_bind_get_sarprop_step_error_threshold_factor},
	{"set_sarprop_step_error_threshold_factor", &luna_wrapper_FANN_neural_net::_bind_set_sarprop_step_error_threshold_factor},
	{"get_sarprop_step_error_shift", &luna_wrapper_FANN_neural_net::_bind_get_sarprop_step_error_shift},
	{"set_sarprop_step_error_shift", &luna_wrapper_FANN_neural_net::_bind_set_sarprop_step_error_shift},
	{"get_sarprop_temperature", &luna_wrapper_FANN_neural_net::_bind_get_sarprop_temperature},
	{"set_sarprop_temperature", &luna_wrapper_FANN_neural_net::_bind_set_sarprop_temperature},
	{"get_num_input", &luna_wrapper_FANN_neural_net::_bind_get_num_input},
	{"get_num_output", &luna_wrapper_FANN_neural_net::_bind_get_num_output},
	{"get_total_neurons", &luna_wrapper_FANN_neural_net::_bind_get_total_neurons},
	{"get_total_connections", &luna_wrapper_FANN_neural_net::_bind_get_total_connections},
	{"get_network_type", &luna_wrapper_FANN_neural_net::_bind_get_network_type},
	{"get_connection_rate", &luna_wrapper_FANN_neural_net::_bind_get_connection_rate},
	{"get_num_layers", &luna_wrapper_FANN_neural_net::_bind_get_num_layers},
	{"get_layer_array", &luna_wrapper_FANN_neural_net::_bind_get_layer_array},
	{"get_bias_array", &luna_wrapper_FANN_neural_net::_bind_get_bias_array},
	{"set_weight", &luna_wrapper_FANN_neural_net::_bind_set_weight},
	{"get_learning_momentum", &luna_wrapper_FANN_neural_net::_bind_get_learning_momentum},
	{"set_learning_momentum", &luna_wrapper_FANN_neural_net::_bind_set_learning_momentum},
	{"get_train_stop_function", &luna_wrapper_FANN_neural_net::_bind_get_train_stop_function},
	{"set_train_stop_function", &luna_wrapper_FANN_neural_net::_bind_set_train_stop_function},
	{"get_bit_fail_limit", &luna_wrapper_FANN_neural_net::_bind_get_bit_fail_limit},
	{"set_bit_fail_limit", &luna_wrapper_FANN_neural_net::_bind_set_bit_fail_limit},
	{"get_bit_fail", &luna_wrapper_FANN_neural_net::_bind_get_bit_fail},
	{"cascadetrain_on_data", &luna_wrapper_FANN_neural_net::_bind_cascadetrain_on_data},
	{"cascadetrain_on_file", &luna_wrapper_FANN_neural_net::_bind_cascadetrain_on_file},
	{"get_cascade_output_change_fraction", &luna_wrapper_FANN_neural_net::_bind_get_cascade_output_change_fraction},
	{"set_cascade_output_change_fraction", &luna_wrapper_FANN_neural_net::_bind_set_cascade_output_change_fraction},
	{"get_cascade_output_stagnation_epochs", &luna_wrapper_FANN_neural_net::_bind_get_cascade_output_stagnation_epochs},
	{"set_cascade_output_stagnation_epochs", &luna_wrapper_FANN_neural_net::_bind_set_cascade_output_stagnation_epochs},
	{"get_cascade_candidate_change_fraction", &luna_wrapper_FANN_neural_net::_bind_get_cascade_candidate_change_fraction},
	{"set_cascade_candidate_change_fraction", &luna_wrapper_FANN_neural_net::_bind_set_cascade_candidate_change_fraction},
	{"get_cascade_candidate_stagnation_epochs", &luna_wrapper_FANN_neural_net::_bind_get_cascade_candidate_stagnation_epochs},
	{"set_cascade_candidate_stagnation_epochs", &luna_wrapper_FANN_neural_net::_bind_set_cascade_candidate_stagnation_epochs},
	{"get_cascade_weight_multiplier", &luna_wrapper_FANN_neural_net::_bind_get_cascade_weight_multiplier},
	{"set_cascade_weight_multiplier", &luna_wrapper_FANN_neural_net::_bind_set_cascade_weight_multiplier},
	{"get_cascade_candidate_limit", &luna_wrapper_FANN_neural_net::_bind_get_cascade_candidate_limit},
	{"set_cascade_candidate_limit", &luna_wrapper_FANN_neural_net::_bind_set_cascade_candidate_limit},
	{"get_cascade_max_out_epochs", &luna_wrapper_FANN_neural_net::_bind_get_cascade_max_out_epochs},
	{"set_cascade_max_out_epochs", &luna_wrapper_FANN_neural_net::_bind_set_cascade_max_out_epochs},
	{"get_cascade_max_cand_epochs", &luna_wrapper_FANN_neural_net::_bind_get_cascade_max_cand_epochs},
	{"set_cascade_max_cand_epochs", &luna_wrapper_FANN_neural_net::_bind_set_cascade_max_cand_epochs},
	{"get_cascade_num_candidates", &luna_wrapper_FANN_neural_net::_bind_get_cascade_num_candidates},
	{"get_cascade_activation_functions_count", &luna_wrapper_FANN_neural_net::_bind_get_cascade_activation_functions_count},
	{"get_cascade_activation_functions", &luna_wrapper_FANN_neural_net::_bind_get_cascade_activation_functions},
	{"set_cascade_activation_functions", &luna_wrapper_FANN_neural_net::_bind_set_cascade_activation_functions},
	{"get_cascade_activation_steepnesses_count", &luna_wrapper_FANN_neural_net::_bind_get_cascade_activation_steepnesses_count},
	{"get_cascade_activation_steepnesses", &luna_wrapper_FANN_neural_net::_bind_get_cascade_activation_steepnesses},
	{"set_cascade_activation_steepnesses", &luna_wrapper_FANN_neural_net::_bind_set_cascade_activation_steepnesses},
	{"get_cascade_num_candidate_groups", &luna_wrapper_FANN_neural_net::_bind_get_cascade_num_candidate_groups},
	{"set_cascade_num_candidate_groups", &luna_wrapper_FANN_neural_net::_bind_set_cascade_num_candidate_groups},
	{"scale_train", &luna_wrapper_FANN_neural_net::_bind_scale_train},
	{"descale_train", &luna_wrapper_FANN_neural_net::_bind_descale_train},
	{"set_input_scaling_params", &luna_wrapper_FANN_neural_net::_bind_set_input_scaling_params},
	{"set_output_scaling_params", &luna_wrapper_FANN_neural_net::_bind_set_output_scaling_params},
	{"set_scaling_params", &luna_wrapper_FANN_neural_net::_bind_set_scaling_params},
	{"clear_scaling_params", &luna_wrapper_FANN_neural_net::_bind_clear_scaling_params},
	{"scale_input", &luna_wrapper_FANN_neural_net::_bind_scale_input},
	{"scale_output", &luna_wrapper_FANN_neural_net::_bind_scale_output},
	{"descale_input", &luna_wrapper_FANN_neural_net::_bind_descale_input},
	{"descale_output", &luna_wrapper_FANN_neural_net::_bind_descale_output},
	{"get_errno", &luna_wrapper_FANN_neural_net::_bind_get_errno},
	{"reset_errno", &luna_wrapper_FANN_neural_net::_bind_reset_errno},
	{"reset_errstr", &luna_wrapper_FANN_neural_net::_bind_reset_errstr},
	{"get_errstr", &luna_wrapper_FANN_neural_net::_bind_get_errstr},
	{"print_error", &luna_wrapper_FANN_neural_net::_bind_print_error},
	{"create_standard", &luna_wrapper_FANN_neural_net::_bind_create_standard},
	{"dynCast", &luna_wrapper_FANN_neural_net::_bind_dynCast},
	{"__eq", &luna_wrapper_FANN_neural_net::_bind___eq},
	{"fromVoid", &luna_wrapper_FANN_neural_net::_bind_fromVoid},
	{"asVoid", &luna_wrapper_FANN_neural_net::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< FANN::neural_net >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< FANN::neural_net >::enumValues[] = {
	{0,0}
};


