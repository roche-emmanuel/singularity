local Class = require("classBuilder"){name="Holder",bases=
	{"reflection.Scope","reflection.IFunctionHolder",
	 "reflection.IVariableHolder","reflection.IEnumHolder"}};

local Set = require "std.Set"

function Class:initialize(options)

end

return Class
