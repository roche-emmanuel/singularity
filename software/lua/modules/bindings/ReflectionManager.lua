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

function Class:writeFile(filename,buf)
	buf:setTargetFolder(self:getDestFolder())
	buf:writeFile(filename) 
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

return Class()