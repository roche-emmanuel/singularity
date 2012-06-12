-- Implementation of the locale management system.
local cfg = require "config"

local Class = require("classBuilder"){name="Locale",bases="base.Object"};

local currentLanguage = nil -- the default language as global variable.
local languages = {} -- the language maps.

function Class:initialize(options)
	-- load at least one language here.
	self:info("Loading available languages...")
	
	local fs = require "base.FileSystem"
	local path = fs:getRootPath(true).."languages"
	
	local loader = function(data)
		-- extract language name from filename:
		local lang = data.file:gsub("(.-)%.lua$","%1")
		
		self:debug("Loading language ",lang," from file ",data.fullpath)
		
		local func, msg = loadfile(data.fullpath)
		self:check(func,msg);
		-- run the function:
		local map = func();
		
		self:addLanguageMap(lang,map)
	end
	
	fs:traverse{path=path,func=loader,pattern="%.lua$"}

	self:info("Selecting default language ",cfg.default_language)
	currentLanguage=cfg.default_language
	self:check(languages[currentLanguage],"Invalid current language map")
	self:info("Languages loaded.")
end

function Class:addLanguageMap(lang,map)
	self:checkNonEmptyString(lang,"Invalid language.")
	self:checkTable(map,"Invalid language map")
	
	languages[lang] = languages[map] or {}
	
	local dest = languages[lang]
	for k,v in pairs(map) do
		if dest[k] and dest[k]~=v then
			self:warn("Overriding translation '",dest[k],"' with '",v,"' for index ",k)
		end	
		dest[k]=v
	end
end

function Class:setLanguage(language)
  	self:checkNonEmptyString(language,"Invalid language code");
  	self:check(languages[language],"No language map found for language ",language)

  	currentLanguage = language
end

function Class:translate(id,...)
	self:checkNonEmptyString(id,"Invalid id")
	self:checkNonEmptyString(currentLanguage,"Invalid current language")
  	self:check(languages[currentLanguage],"No language map found for language ",currentLanguage)

	self:debug("Translating id=",id," for language ",currentLanguage)
	
	local result = languages[currentLanguage][id]
	
	if self:isString(result) then
		for id,v in ipairs({...}) do
			result = result:gsub("%${"..id.."}",v)
		end
	else
		result = "Missing translation for "..currentLanguage.."."..id
	end
	
	return result
end

return Class()
