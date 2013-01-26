local Class = require("classBuilder"){name="Container",bases="base.Object"};

local cfg = require "config"
local utils = require "utils"

-- By default a container will create its own table as data Holder 
-- if not provided another value in its constructor
function Class:initialize(options)
	options = options or {}
	self._separator = cfg.default_separator or "."
	self._dataHolder = options.dataHolder or {}
	--self:info("Created container with dataHolder=",self._dataHolder)
end

function Class:setDataHolder(holder)
	self._dataHolder = holder
end

function Class:getDataHolder()
	return self._dataHolder;
end

function Class:setSeparator(sep)
	self._separator = sep
end

function Class:getSeparator()
	return self._separator;
end

function Class:getLocalSubContainer(key)
	self:checkNonEmptyString(key,"Invalid key.")
	self:check(self._dataHolder,"Invalid data holder.")
	self:check(key:find(self._separator,1,true)==nil,"The key '",key,"' should not contain a separator '",self._separator,"'")
	
	-- assume the data holder ins a table for now:
	local holderType = utils.typeEx(self._dataHolder)
	if holderType == "table" then
		local val = self._dataHolder[key] 
		if type(val)~="table" then
			if val then
				self:warn("overriding key='",key,"' with prev_value=",val," to create a new sub table.")
			end
			self._dataHolder[key] = {}
		end
		
		-- Return a new instance of this container class encapsulating the sub table:
		return Class{dataHolder=self._dataHolder[key]};
	else
		self:throw("Unsupported data holder type: ",holderType)
	end	
end

-- Compute and retrieve the sub container chain as extracted from the fully qualified
-- container name passed as argument.
function Class:getSubContainer(contName)	
	-- convert the entry name in a string and parse it with the proper separator
	local names = utils.splitString(contName,self._separator)
	local num = #names -- number of parent containers.
			
	local cont = self
	for i=1,num do
		cont:info("Retrieving subcontainer '",names[i],"'");
		cont = cont:getLocalSubContainer(names[i])
		self:check(cont,"Invalid sub container for '",names[i],"' in key '",contName,"'")
	end 

	return cont
end

-- Compute and retrieve the real container name as extracted from the entry
-- name using the local separator.
function Class:getSubContainerForEntry(entryName)	
	-- convert the entry name in a string and parse it with the proper separator
	--self:info("entryName=",entryName,", sep=",self._separator)
	local names = utils.splitString(entryName,self._separator)
	local num = #names-1 -- number of parent containers.
	local lastName = names[num+1]
	
	if num==0 then
		return nil -- we should not send the container if it is self.
	end
	
	local cont = self
	for i=1,num do
		--cont:info("Retrieving subcontainer '",names[i],"'");
		cont = cont:getLocalSubContainer(names[i])
		self:check(cont,"Invalid sub container for '",names[i],"' in key '",entryName,"'")
	end 

	--self:info("last key name is :",lastName)
	return cont, lastName;
end

-- Method to get the value locally from the data holder:
-- the key should never contain a separator symbol at this point.
function Class:getValue(key,defVal)
	self:checkNonEmptyString(key,"Invalid key.")
	self:check(self._dataHolder,"Invalid data holder.")
	self:check(key:find(self._separator,1,true)==nil,"The key '",key,"' should not contain a separator '",self._separator,"'")
	
	-- assume the data holder ins a table for now:
	local holderType = utils.typeEx(self._dataHolder)
	if holderType == "table" then
		if self._dataHolder[key]==nil then
			self._dataHolder[key] = defVal
		end
		
		return self._dataHolder[key] 
	else
		self:error("Unsupported data holder type: ",holderType)
	end
	
	-- return nothing here.
end

-- Method to get the value locally from the data holder:
-- the key should never contain a separator symbol at this point.
function Class:setValue(key,val)
	self:checkNonEmptyString(key,"Invalid key.")
	self:check(self._dataHolder,"Invalid data holder.")
	self:check(key:find(self._separator,1,true)==nil,"The key '",key,"' should not contain a separator '",self._separator,"'")
	
	-- assume the data holder ins a table for now:
	local holderType = utils.typeEx(self._dataHolder)
	if holderType == "table" then
		self._dataHolder[key] = val
	else
		self:throw("Unsupported data holder type: ",holderType)
	end
	
	-- return nothing here.
end

function Class:get(key,defVal)
	local cont, finalKey = self:getSubContainerForEntry(key)
		
	if cont then
		-- cont is the proper container were the value should be retrieved:
		return cont:get(finalKey,defVal)
	end
	
	-- otherwise, retrieve the value locally:
	return self:getValue(key,defVal)        
end

function Class:set(key,val)
	local cont, finalKey = self:getSubContainerForEntry(key)
		
	if cont then
		-- cont is the proper container were the value should be retrieved:
		return cont:set(finalKey,val)
	end
	
	-- otherwise, retrieve the value locally:
	self:setValue(key,val)
	return true      
end

return Class
