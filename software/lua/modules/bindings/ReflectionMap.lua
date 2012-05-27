
local oo = require "loop.base"
local utils = require "utils"
local Namespace = require "reflection.Namespace"
local Scope = require "reflection.Scope"
local Set = require "std.Set"
local OrderedMap = require "std.OrderedMap"
local Map = require "std.Map"
local dbg = require "debugger"

local tm = require "bindings.TypeManager"

local log = require "logger"

-- This module contains the mapping of the relfection details read with doxmlparser.
module("bindings.ReflectionMap", oo.class)

function __init(class,object)
    object = oo.rawnew(class,object or {})
    object.globalNamespace = Namespace() -- the global namespace holding everything.
    object.classes = Set()
    object.namespaces = Set()
    object.enums = Set()
    object.baseClasses = Set()
    object.derivedClassesMap = OrderedMap()
    object.userHeaders = Set() -- Set of user provided headers.
    object.userContent = Set() -- Set of user provided content.
    object.defines = Set()
    object.codeAdditions = Map()
	object._initialized = false;
    return object
end

function setCodeAddition(self,name,content)
	self.codeAdditions:set(name,content)
end

function getCodeAddition(self,name)
	return self.codeAdditions:get(name)
end

function isInitialized(self)
	return self._initialized;
end

--- Retrieve the global namespace:
function getGlobalNamespace(self)
    return self.globalNamespace;
end

-- helper function to retrieve all the classes.
function collectClasses(self,scope,visited)
	--log:warn("Class collector entering scope: ".. scope:getFullName())
	
    if not visited:contains(scope) then
        if(scope:getScopeType() == Scope.CLASS) and not scope:isIgnored() then
            self.classes:push_back(scope)
        end
        
        visited:push_back(scope)
       
        local children = scope:getChildren()

        for k,v in children:sequence() do
			--log:warn("Visiting child ".. v:getName() .. " in parent ".. scope:getName())
            self:collectClasses(v,visited)
        end
    else
        log:error ("The scope ",scope:getName(), " was already visited! Parent is: ", scope:getParent():getFullName())
    end
end

-- helper function to retrieve all the classes.
function collectEnums(self,scope,visited)
	--log:warn("Class collector entering scope: ".. scope:getFullName())
	
    if not visited:contains(scope) then
    	local enums = scope:getEnums()
    	
    	for _,v in enums:sequence() do
    		self.enums:push_back(v)
    	end
        
        visited:push_back(scope)
        local children = scope:getChildren()

        for k,v in children:sequence() do
			--log:warn("Visiting child ".. v:getName() .. " in parent ".. scope:getName())
            self:collectEnums(v,visited)
        end
    else
        log:error ("The scope ",scope:getName(), " was already visited! Parent is: ", scope:getParent():getFullName())
    end
end

-- helper function to retrieve all the namespaces.
function collectNamespaces(self,scope,visited)
    if not visited:contains(scope) then
        if(scope:getScopeType() == Scope.NAMESPACE) then
            -- only add the namespace if it contains something:
            if not scope:getFunctions():empty() or not scope:getEnums():empty() or not scope:getVariables():empty() then
                self.namespaces:push_back(scope)
            end
        end
        
        visited:push_back(scope)
        local children = scope:getChildren()
        for k,v in children:sequence() do
            self:collectNamespaces(v,visited)
        end
    else
        log:error ("The scope ",scope:getName(), " was already visited!")
    end
end

--- Use to collect all the classes in the reflectin map.
function collectAllClasses(self)
    log:notice ("Collecting all classes...")
    -- iterate on all the scopes to find the classes:
    self.classes:clear()
    local visited = Set() -- use this set to avoid cyclic dependencies.
    self:collectClasses(self.globalNamespace,visited)
end

--- Use to collect all the classes in the reflectin map.
function collectAllEnums(self)
    log:notice ("Collecting all enums...")
    -- iterate on all the scopes to find the classes:
    self.enums:clear()
    local visited = Set() -- use this set to avoid cyclic dependencies.
    self:collectEnums(self.globalNamespace,visited)
end


function collectAllNamespaces(self)
    log:notice ("Collecting all namespaces...")
	--dbg:backtrace(1,true)
	
    -- iterate on all the scopes to find the classes:
    self.namespaces:clear()
    local visited = Set() -- use this set to avoid cyclic dependencies.
    self:collectNamespaces(self.globalNamespace,visited)
end

--- Find the base classes.
-- The "Base classes" are the classes with no parent class in the XML reflection
-- This function will compute the list of all base classes found so far.
function findBaseClasses(self)
    self.baseClasses:clear()
    
    log:info ("Finding base classes...")

    local classes = self.classes
    
    --log:info ("self.classes content is: ",classes)
    
    for k,v in classes:sequence() do
        if v:getBases():empty() then
            self.baseClasses:push_back(v)
        end
    end    
end

--- Find all the derived classes:
function findDerivedClasses(self)
    log:info ("Collecting derived classes...")

    local map = self.derivedClassesMap
    map:clear()
    
    local classes = self.classes;
    local bases = self.baseClasses
    
    for k,v in classes:sequence() do
        --log:info("Checking derivation of ".. v:getName())
        for k1,base in bases:sequence() do
            if(self:isDerivedFrom(v,base)) then
                local set = map[base]
                if not set then
                    set = Set()
                    map:set(base,set)
                end
                set:push_back(v);
                --log:info("Adding derived class ".. v:getName() .. " to base ".. base:getName())
            end
        end
    end        
end

--- Get a class by its name.
function getClass(self,cname)
    local classes = self.classes

    for k,v in classes:sequence() do
        if v:getName() == cname then
            return v;
        end
    end
end

--- Check if class is derived from parent.
function isDerivedFrom(self,class,base)
    -- check if we can find the base class in the parent hierarchy of the class object:
    if not class or not base then
        return false;
    end
    
    local bases = class:getBases()
    for k,v in bases:sequence() do
        if( v == base) then
            return true;
        end
        if self:isDerivedFrom(v,base) then
            return true;
        end
    end
    
    return false;
end

--- Sort all classes by hierarchy.
function sortClassesHierarchy(self)
    log:info ("Sorting classes by hierarchy...")

    -- order all the classes by parent/child hierarchy.
    local sorted = Set()
    local classes = self.classes;
    
    for k,v in classes:sequence() do
        -- check if any of the sorted classes is derived from that class:
        local index = nil
        
        for k,class in sorted:sequence() do
            if(self:isDerivedFrom(class,v)) then
                log:info ("Inserting class ".. v:getName() .. " before derived class ".. class:getName())
                index = k;
                break;
            end
        end
        
        if index then
            sorted:insert(index,v)
        else
            sorted:push_back(v)
        end
    end
    
    self.classes = sorted;
end

--- Function called when done adding classes to the mapping.
function generateClassHierarchy(self)
    self:collectAllClasses()
    self:collectAllNamespaces()
    self:collectAllEnums()
    self:findBaseClasses()
    self:findDerivedClasses()
    self:sortClassesHierarchy()
    self:retrieveConvertableTypes()
    
    log:warn("Parsing all types...")
    tm:parseTypes()
    
	self._initialized = true;
end

--- Assign a specific module name for the bindings.
function setModuleName(self,modname)
    self.moduleName = modname
end

--- Retrieve the module name.
function getModuleName(self)
    return self.moduleName
end


--- Retrieve the set of user headers.
function getUserHeaders(self)
    return self.userHeaders
end

--- Add a new header to the user header list.
function addUserHeader(self,name)
    self.userHeaders:push_back(name)
end

--- Retrieve the set of user headers.
function getUserContents(self)
    return self.userContent
end

--- Add a new header to the user header list.
function addUserContent(self,cont)
    self.userContent:push_back(cont)
end

--- Retrieve the map of derived classes.
function getDerivedClassesMap(self)
    return self.derivedClassesMap
end

--- Retrieve derived classes for a specific base class.
function getDerivedClasses(self,base)
    return self.derivedClassesMap[base]
end

--- Return the list of all classes.
function getAllClasses(self,validOnly)
	if validOnly then
		local result = Set();
		for k,v in self.classes:sequence() do
			if not v:isIgnored() and v:isValidForWrapping() then
				result:push_back(v)
			end
		end
		
		return result;
	else
    	return self.classes
    end
end

--- Return the list of all namespaces.
function getAllNamespaces(self)
    return self.namespaces
end

--- Return the list of available enumerations:
function getAllEnums(self)
	return self.enums;
end

function addDefine(self,def)
	dbg:assert(def,"Invalid define object");
	self.defines:push_back(def)
	log:info("Adding define ",def:getName())
end

function getDefines(self)
	return self.defines;
end

function retrieveConvertableTypes(self)
    -- get the "convertable" types:
    local convertables = OrderedMap();
    
    local derived = self:getDerivedClassesMap()
    
    for k,v in derived:sequence() do
        if not k:isConverterIgnored() then
            convertables:set(k,v)
        end
    end
    
    self.convertableClassesMap = convertables;
end

function getConvertableClassesMap(self)
	return self.convertableClassesMap
end

