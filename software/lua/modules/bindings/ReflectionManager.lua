local Class = require("classBuilder"){name="ReflectionManager",bases="base.Object"};

function Class:setDefaultModuleName(modname)
	self:checkNonEmptyString(modname,"Invalid default module name argument.");
	self._defaultModuleName = modname
end

function Class:getDefaultModuleName()
	self:check(self._defaultModuleName,"Invalid default module name.");
	return self._defaultModuleName
end

function Class:getDestFolder()
	self:check(self._destFolder,"Invalid dest folder.")
	return self._destFolder
end

function Class:setDestFolder(folder)
	self._destFolder = folder
end


function Class:setDataMap(dmap)
	self._datamap = dmap;
end

function Class:getClasses()
	return self._datamap:getAllClasses(true)
end

function Class:getNamespaces()
	return self._datamap:getAllNamespaces()
end

function Class:getEnums()
	return self._datamap:getAllEnums()
end

function Class:writeHeader(filename,buf)
	local writer = require("io.BufferWriter")()
	
	local def = "_".. filename:gsub("^([^%.]+)%.h","%1"):gsub("%A","_"):gsub("_+","_"):upper().."_H_"
	writer:writeSubLine("#ifndef ${1}",def)
	writer:writeSubLine("#define ${1}",def)
	writer:newLine()
	writer:writeLine("#include <plug_common.h>")
	writer:newLine()
	
	-- write the buffer content:
	writer:appendBuffer(buf)
	
	writer:newLine()
	writer:writeLine("#endif")
	writer:newLine()
	
	self:writeFile("include/luna/" .. filename,writer) 
end

function Class:writeSource(filename,buf)
	local writer = require("io.BufferWriter")()
	
	writer:writeLine("#include <plug_common.h>")
	writer:newLine()
		
	-- write the buffer content:
	writer:appendBuffer(buf)
	
	writer:newLine()
	
	self:writeFile("src/luna/" .. filename,writer) 
end

function Class:writeFile(filename,buf)
	buf:setTargetFolder(self:getDestFolder())
	buf:writeFile(filename) 
end

return Class()