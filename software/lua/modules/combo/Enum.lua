local Class = require("classBuilder"){name="ComboEnum",bases="combo.Vertex"};

local emap = {}

local all_enums = {}

local bad_enum;

local enumPrefix = "enum:";

local get_id = function(content)
	local id = emap[content]
	if not id then
		id = #emap
		emap[content] = id
	end
	
	return id
end

function Class:initialize(options)
	if type(options)=="string" then
		self._content = options
		self._id = get_id(self._content)
	elseif type(options)=="table" then
		self._content = options.content
		self._id = options.id or get_id(self._content)
	end
	
	if self._id >= 0 then
		table.insert(all_enums,self)
	end
	
	self:check(self._content,"Invalid Enum content")
	self:check(self._id,"Invalid enum Id")
end

function Class:getId()
	return self._id;
end

function Class:getContent()
	return self._content;
end

function Class:__tostring()
	return enumPrefix .. '(' .. self._id ..'):"' .. self._content .. '"'
end

function Class:__eq(rhs)
	return self._id==rhs._id;
end

function Class:__lt(rhs)
	return self._content < rhs._content
end

-- Return some random enum out of the pool of all of them.
function Class.getRandom()
	if #all_enums==0 then
		return
	end
	
	local index = math.random(1,#all_enums)
	-- log:info("Enum: Got random index: ", index)
	
	return all_enums[index]
end

function Class.size()
	return #all_enums
end
	
function Class.invalid()
	return bad_enum
end

bad_enum = Class{content="",id=-1}

return Class 
