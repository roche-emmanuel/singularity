
local oo = require "loop.base"
 
local BinderBase = oo.class{}

BinderBase.CLASS_NAME = "bindings.BinderBase"

function BinderBase:__init()
    local object = oo.rawnew(self,{})  
	object._TRACE_ = "BinderBase"
    return object
end

function BinderBase:handle(writer,func,name)
	local class = writer:getCurrentScope()
	local cname = func:getParent():getName()
	local fname = func:getParent():getFullName()
	local isconstruct = func:isConstructor()
	--local overloaded = func:isOverloaded()
	
	-- there are no overloads:
	writer:writeSubLine("// " .. func:getPrototype(true,true,true))
	writer:writeSubLine("static ${1} _bind_${2}(lua_State *L) {",isconstruct and fname.."*" or "int",name)
	writer:pushIndent()	
	-- There is no overload for the constructor:
	writer:writeSubLine("if (!_lg_typecheck_${1}(L)) {",name)
	writer:pushIndent()
		-- report error here:
		writer:writeLine("luna_printStack(L);")
		local args = {}
		local params = func:getParameters()
		for k,p in params:sequence() do
			local pt = p:getType()
			if pt:isClass() then
				local cbase = pt:getBase()
				table.insert(args,"arg "..k.." ID = ".. (type(cbase)=="table" and cbase:getAbsoluteBaseHash() or "[unknown]").."\\n")
			end
		end
		
		writer:writeSubLine('luaL_error(L, "luna typecheck failed in ${1} function, expected prototype:\\n${1}\\nClass arguments details:\\n${2}");',func:getPrototype(true,true,true):gsub('\"','\\\"'),table.concat(args))
	writer:popIndent()
	writer:writeLine("}")
	writer:newLine()
	
	-- retrieve the arguments:
	local args = writer:retrieveArguments(func)
	
	-- Call the function:
	if isconstruct then
		writer:writeSubLine("return new ${1}(${2});",fname,args)
	else
		writer:writeFunctionCall(fname,func,args)
	end

	writer:popIndent()
	writer:writeLine("}")
	writer:newLine()
end

return BinderBase
