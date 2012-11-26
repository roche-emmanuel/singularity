local Class = require("classBuilder"){name="Class",bases="base.Object"};
local utils = require "utils"
local im = require "bindings.IgnoreManager"

function Class:getLunaTraitsCode(className,absoluteBaseName,addition)
	local str = [[template<>
class LunaTraits< ${1} > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ${1}* _bind_ctor(lua_State *L);
	static void _bind_dtor(${1}* obj);
	typedef ${2} parent_t;
	typedef ${1} base_t;${3}
};
]]
	
	return utils.subLine(str,className,absoluteBaseName,addition);
end

function Class:getLunaTypeCode(hash,name)
	local str = [[template<>
class LunaType< ${1} > {
public:
	typedef ${2} type;
	
};
]]
	return utils.subLine(str,hash,name);
end

function Class:getConverterCode(class,bclass)
	local str = [[static int _cast_from_${3}(lua_State *L) {
		// all checked are already performed before reaching this point.
		${2}* ptr= ${4}_cast< ${2}* >(Luna< ${1} >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ${2} >::push(L,ptr,false);
		return 1;
	};
]]

	return utils.subLine(str,bclass:getFullName(),class:getFullName(),bclass:getName(),im:ignoreConverter(bclass) and "static" or "dynamic")
end

return Class()
