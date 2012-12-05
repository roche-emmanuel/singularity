/*
 * LuaRef.h
 *
 *  Created on: 30 nov. 2012
 *      Author: kenshin
 */

#ifndef LUAREF_H_
#define LUAREF_H_

#include "sgtCommon.h"
#include "lua/LuaBase.h"

namespace sgt {

class SGTCORE_EXPORT LuaRef : public sgt::LuaBase {
protected:
	 int _ref;

public:
	LuaRef(lua_State* L, int index) : LuaBase(L) {
		refLuaItem(index);
	}

	virtual ~LuaRef() {
		unrefLuaItem();
	};

protected:
	void refLuaItem(int index);
	void unrefLuaItem();
	bool pushLuaItem() const;
};

};


#endif /* LUAREF_H_ */
