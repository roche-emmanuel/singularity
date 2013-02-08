#ifndef _WRAPPERS_WRAPPER_MGLFORMULAC_H_
#define _WRAPPERS_WRAPPER_MGLFORMULAC_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <mgl2/evalc.h>

class wrapper_mglFormulaC : public mglFormulaC, public luna_wrapper_base {

public:
		

	~wrapper_mglFormulaC() {
		logDEBUG3("Calling delete function for wrapper mglFormulaC");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((mglFormulaC*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_mglFormulaC(lua_State* L, lua_Table* dum, const char * str) 
		: mglFormulaC(str), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglFormulaC*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:
	// dual mglFormulaC::CalcIn(const dual * a1) const
	dual public_CalcIn(const dual * a1) const {
		return mglFormulaC::CalcIn(a1);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_CalcIn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,37931827)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// dual mglFormulaC::public_CalcIn(const dual * a1) const
	static int _bind_public_CalcIn(lua_State *L) {
		if (!_lg_typecheck_public_CalcIn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dual mglFormulaC::public_CalcIn(const dual * a1) const function, expected prototype:\ndual mglFormulaC::public_CalcIn(const dual * a1) const\nClass arguments details:\narg 1 ID = 3094652\n");
		}

		const dual* a1=(Luna< std::complex< double > >::checkSubType< dual >(L,2));

		wrapper_mglFormulaC* self=Luna< mglFormulaC >::checkSubType< wrapper_mglFormulaC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call dual mglFormulaC::public_CalcIn(const dual *) const. Got : '%s'",typeid(Luna< mglFormulaC >::check(L,1)).name());
		}
		dual stack_lret = self->public_CalcIn(a1);
		dual* lret = new dual(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< dual >::push(L,lret,true);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"CalcIn",_bind_public_CalcIn},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

