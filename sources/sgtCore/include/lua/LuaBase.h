/*
 * LuaBase.h
 *
 *  Created on: 30 nov. 2012
 *      Author: kenshin
 */

#ifndef LUABASE_H_
#define LUABASE_H_

#include "sgtCommon.h"

namespace sgt {

class SGTCORE_EXPORT LuaBase : public sgt::Referenced {
protected:
	mutable lua_State* _state;

public:
	LuaBase(lua_State* L) : _state(L) {
		THROW_IF(!L,"Invalid lua state.");
	}

	void invalidate() {
		_state = NULL;
	}

	virtual ~LuaBase() {};
};

};

#endif /* LUABASE_H_ */
