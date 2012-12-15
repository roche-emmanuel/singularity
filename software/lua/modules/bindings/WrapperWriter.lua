local Class = require("classBuilder"){name="WrapperWriter",bases="io.BufferWriter"};

local rm = require "bindings.ReflectionManager"
local corr = require "bindings.TextCorrector"
local snippets = require "bindings.SnippetManager"

local utils = require "utils"

local Set = require "std.Set"

function Class:initialize(options)
	self._class = options and options.class;
	self:check(self._class,"Invalid class object.")
end

function Class:writeConstructor(cons)
	local buf = self;
	local class = self._class;
	local cname = class:getFullName()
	local wname = corr:correct("filename",cname)
	
	if cons:getNumParameters()>0 then
		buf:writeSubLine("wrapper_${1}(lua_State* L, lua_Table* dum, ${3}) : ${2}(${4}), _obj(L,-1) {};",wname,cname,cons:getArgumentsPrototype(true),cons:getArgumentNames())
	else
		buf:writeSubLine("wrapper_${1}(lua_State* L, lua_Table* dum) : ${2}(), _obj(L,-1) {};",wname,cname)			
	end	
end

function Class:pushParam(param,k)
	local rt = param:getType()
	local name = param:getName()
	name = name=="" and "arg"..k or name
	local rtname = rt:getName()
	if rt:isString() then
		-- do nothing.
	elseif rtname == "unsigned char *" 
		or rtname == "const unsigned char *" 
		or rtname == "const unsigned short *" 
		or rtname == "const unsigned int *" 
		then
		name = "(void*)"..name
	elseif rtname:find("osg::ref_ptr") then
		-- do nothing.
	else
		name = (rt:isReference() and rt:isClass() and not rt:isPointer() and "&" or "") .. name
	end
	
	self:writeSubLine("_obj.pushArg(${1});",name)
end

function Class:writeFunctionCall(func)
	local params = func:getParameters()
	
	for k,param in params:sequence() do
		self:pushParam(param,k)
	end
	
	local rt = func:getReturnType()
	self:check(rt,"Invalid return type for function: ",func:getFullName())
	
	local rtype = rt:getBaseName() .. ((rt:isPointer() or rt:isClass()) and "*" or "")
	local conv = (rt:isEnum() or rtype=="char") and "("..rtype..")" or ""
	
	rtype = rt:isConst() and rtype=="char*" and "const "..rtype or rtype
	
	-- specific conversions:
	rtype = rt:isEnum() and "int" or rtype
	rtype = rtype=="char" and "int" or rtype
	
	self:writeSubLine("return ${3}${2}(_obj.callFunction<${1}>());",rtype,(rt:isClass() and not rt:isPointer()) and "*" or "",conv);
end

function Class:writeFunctionBody(func)
	local buf = self;
	local class = self._class;
	local cname = class:getFullName()
	local wname = corr:correct("filename",cname)

	if func:isAbstract() then
		buf:writeSubLine('THROW_IF(!_obj.pushFunction("${1}"),"No implementation for abstract function ${2}");',func:getName(),func:getFullName())
		self:writeFunctionCall(func)
	else
		buf:writeSubLine('if(_obj.pushFunction("${1}")) {',func:getName())
		buf:pushIndent()
		self:writeFunctionCall(func)
		buf:popIndent()
		buf:writeLine("}")
		buf:newLine()
		buf:writeSubLine("return ${3}::${1}(${2});",func:getName(),func:getArgumentNames(),class:getName());
	end
end

function Class:writeFunction(func)
	local buf = self;
	
	buf:writeLine(func:getPrototype(true,false,true).." {");
	buf:pushIndent()
	self:writeFunctionBody(func)
	buf:popIndent();
	buf:writeLine("};")
	buf:newLine()
end

function Class:writeHeader()
	local buf = self;
	local class = self._class;
	local cname = class:getFullName()
	local wname = corr:correct("filename",cname)
	
	buf:clearContent();
	
	local funcs = self._class:getVirtualFunctions():filterItems({"ValidWrapper"},{self._class})
	local allConstructors = self._class:getFunctions{"Constructor","Public"} + self._class:getFunctions{"Constructor","Protected"}
	
	local constructors = allConstructors:filterItems{"Valid"}
	
	-- buf:writeLine("// virtual functions:")
	-- buf:newLine();
	
	buf:writeLine(snippets:getWrapperStartCode(self._class))
	
	buf:pushIndent()
	
	--[[if constructors:empty() then
		-- write the default constructor:
		if allConstructors:empty() then
			buf:writeSubLine("wrapper_${1}(lua_State* L, lua_Table* dum) : ${2}(), _obj(L,-1) {};",wname,cname)
		end
	else
	]]
		for _,cons in constructors:sequence() do
			if not cons:isWrapper() then
				self:writeConstructor(cons)
			end
		end
	--end
	buf:newLine();
	
	local publicFuncs = funcs:filterItems{"Public"}
	local protectedFuncs = funcs:filterItems{"Protected"}
	
	-- buf:writeLine("public:")
	
	for _,func in publicFuncs:sequence() do
		buf:writeLine("// "..func:getPrototype(true,true,true))
		self:writeFunction(func)
	end
	buf:popIndent()
	buf:newLine();
	
	buf:writeLine(protectedFuncs:empty() and "" or "protected:") -- not needed if empty.
	buf:pushIndent()
	for _,func in protectedFuncs:sequence() do
		buf:writeLine("// "..func:getPrototype(true,true,true))
		self:writeFunction(func)
	end
	buf:popIndent()

	buf:newLine();

	buf:writeLine(snippets:getWrapperEndCode())
	
	buf:newLine();
	
	-- get the proper filename:
	local cname = class:getFullName()
	local filename = corr:correct("filename",cname)
	self:debug0_v("Writing file ","wrapper_".. filename ..".h")
	rm:writeHeader("wrappers/wrapper_".. filename ..".h",self)
end

function Class:writeSource()
	local buf = self;
	local class = self._class;
	
	buf:clearContent();
	
	local wname = corr:correct("filename",class:getFullName())
	buf:writeLine("#include <luna/wrappers/wrapper_".. wname ..".h>")
	buf:newLine();
	
	local funcs = self._class:getVirtualFunctions():filterItems{"Valid"}
	
	for _,func in funcs:sequence() do
		buf:writeLine("// "..func:getPrototype(true,true,true))
	end
	
	-- get the proper filename:
	local cname = class:getFullName()
	local filename = corr:correct("filename",cname)
	self:debug0_v("Writing file ","wrapper_".. filename ..".cpp")
	rm:writeSource("wrappers/wrapper_".. filename ..".cpp",self)
end

function Class:writeFile()
	self:writeHeader()
	-- self:writeSource() -- no need to write any source file.
end

return Class