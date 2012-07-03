
local oo = require "loop.cached"

local IScopeStack = require "reflection.IScopeStack"

local ReflectionMap = require "bindings.ReflectionMap"
local Scope = require "reflection.Scope"
local Class = require "reflection.Class"
local Function = require "reflection.Function"
local Namespace = require "reflection.Namespace"
local Enum = require "reflection.Enum"
local EnumValue = require "reflection.EnumValue"
local Variable = require "reflection.Variable"
local Parameter = require "reflection.Parameter"
local Type = require "reflection.Type"
local Value = require "reflection.Value"
local Define = require "reflection.Define"
local ItemLink = require "reflection.ItemLink"
local Map = require "std.Map"
local Set = require "std.Set"
local Vector = require "std.Vector"

local dbg = require "debugger"
local log = require "logger"

require "doxmlparser" -- The xml parser.

local dxp = doxmlparser

local ReflectionGenerator = oo.class({},IScopeStack)

ReflectionGenerator.CLASS_NAME = "bindings.ReflectionGenerator"


function ReflectionGenerator:__init(datamap)
    local object = IScopeStack:__init({})
    object = oo.rawnew(self,object)
    object.reflectionMap = datamap
    object.currentScope = Vector();
    object.compoundMap = Map();
    object.ignoreGlobalFuncsPatterns = Set();
    object.ignoreClassFunctionsPatterns = Map()       
    
    
    return object
end

--- used to create a single copy of each compound class.
function ReflectionGenerator:getOrCreateObject(comp,objectClass,...)
    --log:info("Get or create class for id=",comp:id():latin1())
    local id = comp:id():latin1()
    --local id = comp:name():latin1()
    
    local obj = self.compoundMap:get(id)
    if not obj then
        obj = objectClass(...)
        obj:setName(comp:name():latin1())
        self.compoundMap:set(id,obj)
    end
    
    --log:info("Done get or create class for ",comp:name():latin1())
    --log:info("Done get or create class for ",obj:getName())
    return obj;
end

function ReflectionGenerator:processFile(comp)
    -- assume the given compound is a class.
    comp = comp:dynamicCast("IFile")
    
    self:pushScope(self.reflectionMap:getGlobalNamespace())
    self:processSections(comp)
    --self:processChildren(comp) --processing nested compounds in IFile seems to mess everything ??
    self:popScope()
end

function ReflectionGenerator:processNamespace(comp)
    -- assume the given compound is a class.
    comp = comp:dynamicCast("INamespace")
    
    -- create a new class scope in the current scope:    
    local scope = self:getOrCreateObject(comp,Namespace)
    
    local parent = self:getCurrentScope()
    --log:warn("Adding namesapce ".. scope:getFullName() .. " to parent ".. parent:getFullName())
    
    parent:addChild(scope)
    
    dbg:assert(parent:getChildren():contains(scope),"parent doesn't contain child!")
    
    -- now push this class as current scope:
    self:pushScope(scope)
    
    self:processSections(comp)
    self:processChildren(comp)
    
    self:popScope()
end

function ReflectionGenerator:readParameter(param)
	local pname = param:declarationName():latin1() 
    
    local links = self:generateItemLinks(param:defaultValue())
    local pdef = nil
    if links then
    	pdef = Value(links)
    end
    links = self:generateItemLinks(param:type())
	local ptype = Type(links)
	
	return Parameter(ptype,pname,pdef);
end

function ReflectionGenerator:processClass(comp)
    -- assume the given compound is a class.
    -- create a new class scope in the current scope:    
    local comp = comp:dynamicCast("IClass")
        
    local class = self:getOrCreateObject(comp,Class)
    
    if class:isIgnored() then
        log:notice("Ignoring class ".. class:getName() .. " on user request.")
        return;
    end

    local parent = self:getCurrentScope()
    
	parent:addChild(class)

    -- now push this class as current scope:
    self:pushScope(class)

    local name = comp:name():latin1()
    --class:setName(name) -- this is already called in getOrCreateObject().
            
    local bli = comp:baseCompounds();
    bli:toFirst();
    local bcomp = bli:current()
    while(bcomp) do
        -- bcom is an IRelatedCompounf
        if bcomp:protection() == dxp.IRelatedCompound.Public then
            local base = self:getOrCreateObject(bcomp:compound(),Class)
            if base:isIgnored() then
                log:info_v("Ignoring base class ".. base:getName() .. " on user request.")
            else
                class:addBase(base)
                log:info_v("Found base ".. base:getName() .. " for class ".. class:getName())            
            end
        end
        
        bli:toNext();
        bcomp = bli:current();
    end
    
    bli:release();
    
    --[[
    -- process the template parameters:
    local pi = comp:templateParameters()
    if pi then
        pi:toFirst();
        local param = pi:current()
        
        while(param) do
			local p = self:readParameter(param)
            class:addTemplateParameter(p)
            
            pi:toNext()
            param=pi:current()
        end
        
        pi:release()
    end
	]]
	
    self:processSections(comp)
    self:processChildren(comp)
    
    self:popScope()
end

function ReflectionGenerator:ignoreFunction(scope,fname)
    if scope:getScopeType() == Scope.CLASS then
        -- check if we should ignore the member function:
        local ignored = self.ignoreClassFunctionsPatterns:get(scope:getName())
        if ignored then
            for _,v in ignored:sequence() do
                if fname:find(v) then
                    return true
                end
            end
        end
    elseif scope:getScopeType() == Scope.NAMESPACE then
        local ignored = self.ignoreGlobalFuncsPatterns
        for _,v in ignored:sequence() do
            if fname:find(v) then
                return true
            end
        end
    end
    
    return false;
end

function ReflectionGenerator:getOrCreateCompound(comp)
    if (comp:kind()==dxp.ICompound.Class or comp:kind()==dxp.ICompound.Struct or comp:kind()==dxp.ICompound.Interface) then 
        return self:getOrCreateObject(comp,Class)
    elseif (comp:kind()==dxp.ICompound.Namespace) then
        return self:getOrCreateObject(comp,Namespace)
    elseif (comp:kind()==dxp.ICompound.Union) then
    	return self:getOrCreateObject(comp,Class)
    	---log:error("Ignoring Union " .. comp:name():latin1())
    else
        log:error("Cannot create component mapping for kind: " .. comp:kind())
    end
end

function ReflectionGenerator:getOrCreateMember(mem)
    if (mem:kind()==dxp.IMember.Enum) then 
        return self:getOrCreateObject(mem,Enum)
    elseif (mem:kind()==dxp.IMember.Variable) then
        return self:getOrCreateObject(mem,Variable)
    elseif (mem:kind()==dxp.IMember.EnumValue) then
        return self:getOrCreateObject(mem,EnumValue)
    elseif (mem:kind()==dxp.IMember.Define) then
        return nil -- just consider Define values as plain text!    
    elseif (mem:kind()==dxp.IMember.Friend) then
    	log:notice("Ignoring Friend relationship member for ".. mem:name():latin1())
        return nil -- just consider Define values as plain text!
    elseif (mem:kind()==dxp.IMember.Function) then
    	log:notice("Ignoring Function member for ".. mem:name():latin1())
        return nil -- just consider Define values as plain text!
    
        --return self:getOrCreateObject(mem,Define)
    --elseif (mem:kind()==dxp.IMember.Typedef) then
    --    return self:getOrCreateObject(mem,Type)
    else
        log:error("Cannot create member mapping for kind: " .. mem:kind())
    end
end

function ReflectionGenerator:generateItemLinks(lti)
    lti:toFirst()
    local item = lti:current()
    if not item then
        lti:release()
        return
    end
    
    local result = Vector()
    
    while(item) do
        if item:kind() == dxp.ILinkedText.Kind_Text then
            item = item:dynamicCast("ILT_Text")
            local name = item:text():latin1()
            local link = ItemLink(ItemLink.STRING,name)
            result:push_back(link)
        elseif item:kind() == dxp.ILinkedText.Kind_Ref then
            item = item:dynamicCast("ILT_Ref")
            local id = item:id():latin1()
            local target = item:targetKind() -- TargetKind { Member, Compound };
            
            local object = nil;
            local subtypes = nil;
            
            if target==dxp.ILT_Ref.Compound then
                local comp = self.doxygen:compoundById(id) 
                object = self:getOrCreateCompound(comp)
            else
                local comp = self.doxygen:memberById(id)
                local mem = comp:memberById(id)
	            
	            local name = item:text():latin1()
	            
	            if not mem then
                	-- try retrieving the parent enum if applicable:
                	local enumId = id:sub(1,#id-33)
                	
                	local enum = comp:memberById(enumId)
                	if enum then
                		--log:warn("Found enum parent for member ".. name .." with id="..id)
                		-- iterate on the enumvalues:
                		local list = enum:enumValues()
                		list:toFirst()
        		        local eval = list:current()
        
				        while(eval) do
				        	if(eval:id():latin1() == id) then
				        		mem = eval; -- assign the member value.
				        		break;
				        	end
				            
				            list:toNext()
				            eval=list:current()
				        end
				        
				        list:release()
                	else
                		log:warn("Could NOT find enum parent for member ".. name .." with id="..id)
                		log:warn("Component is: " .. (comp and (comp:name():latin1() .. " with cid=" .. comp:id():latin1()) or "NIL"))
                	end
                	
                	
				end
				
				--[[if not mem then
		            log:warn("Trying to retrieve member by name for ".. name .. " with id="..id)
                	local list = comp:memberByName(name)
                	if list then
	                	list:toFirst()
	    				mem = list:current()
	    				list:release()
    				end
	            end]]
	            
                if not mem then    				
                    log:warn("Cannot retrieve the member corresponding to link ref ".. name .." with id="..id)
                else
                	--[[local memid = mem:id():latin1()
                	if id == memid then
                		-- this is the same member! a typedef cannot reference itself. so this must be a 
                		-- doxygen parsing error, and we just return the name of that member instead:
                		subtypes = Vector()
                		log:warn("using link object name: ".. mem:name():latin1())
                		subtypes:push_back(ItemLink(ItemLink.STRING,mem:name():latin1()))
                	else
                	]]
                	if mem:kind()==dxp.IMember.Typedef then
                		log:info("Reading sub item links for member ".. mem:name():latin1() .. " in compound " .. comp:name():latin1())
                		subtypes = self:generateItemLinks(mem:type());
                	else
                    	object = self:getOrCreateMember(mem)
                    end
                end
            end
            
            if object then
                result:push_back(ItemLink(ItemLink.OBJECT,object))
            elseif subtypes then
            	for _,v in subtypes:sequence() do
            		result:push_back(v)
            	end
            else
                log:info("Could not create the member corresponding to link ref ".. item:text():latin1())
                result:push_back(ItemLink(ItemLink.STRING,item:text():latin1()));
            end
        end
        
        lti:toNext()
        item = lti:current()
    end
    
    lti:release()
    return result;
end

function ReflectionGenerator:addScopeFunction(scope,mem)
    local fname = mem:name():latin1()
    local ignoreThisFunc = self:ignoreFunction(scope,fname);
                
    if ignoreThisFunc then
        log:info ("- Ignoring public method ".. fname .. " on user request.")
    else
        log:debug0 ("- public method ".. fname)
        
        local func = self:getOrCreateObject(mem,Function)
        --func:setName(fname)                

        -- retrieve the details concerning the function:
        local rtype = self:generateItemLinks(mem:type())
        if rtype then
            func:setReturnType(Type(rtype))
        else
            log:info_v("Invalid return type for function ".. fname .. " in scope ".. scope:getName())
            --func:setReturnType()
        end
        
        func:setConstness(mem:isConst())
        func:setStatic(mem:isStatic())
        func:setAbstract(mem:argsstring():latin1():find("=0$")~=nil)
        func:setProtectionFromString(mem:protection():latin1())
        func:setArgsString(mem:argsstring():latin1())
        
        func:getParameters():clear();
        
        -- retrieve the parameters:
        local pi = mem:parameters()
        pi:toFirst();
        local param = pi:current()
        
        while(param) do
        	local p = self:readParameter(param)
            func:addParameter(p)
            
            pi:toNext()
            param=pi:current()
        end
        
        pi:release()
        
        -- retrieve the template parameters:
        local pi = mem:templateParameters()
        if pi then
            pi:toFirst();
            local param = pi:current()
            
            while(param) do
            	local p = self:readParameter(param)
                func:addTemplateParameter(p)
                
                pi:toNext()
                param=pi:current()
            end
            
            pi:release()
        end

        scope:addFunction(func)

        --local sig = func:getSignature(true)
        --log:debug0 ("Function prototype is: ".. sig)
        
    end
end

function ReflectionGenerator:isPublic(mem)
    if mem then
        return mem:protection():latin1() == "public"
    end 
    return false;
end

function ReflectionGenerator:processMembers(sec)
    local scope = self:getCurrentScope()
    local sname = scope:getName()
    
    local mli = sec:members();
    mli:toFirst()
    local mem = mli:current();
    
    while(mem) do
    
        if (mem:kind()==dxp.IMember.Function or
                mem:kind()==dxp.IMember.Prototype or
                mem:kind()==dxp.IMember.Signal or
                mem:kind()==dxp.IMember.Slot or
                mem:kind()==dxp.IMember.DCOP) then -- is a "method"
            self:addScopeFunction(scope,mem)
        elseif(mem:kind()==dxp.IMember.Define and self:isPublic(mem)) then
            local def = self:getOrCreateObject(mem,Define)
            def:setName(mem:name():latin1())            
            self.reflectionMap:addDefine(def)
        	
        elseif(mem:kind()==dxp.IMember.Variable or mem:kind()==dxp.IMember.Property) and self:isPublic(mem) then
            -- is an attribute
            -- only add public attributes:
            local var = self:getOrCreateObject(mem,Variable)
            var:setName(mem:name():latin1())
            scope:addVariable(var)
        elseif(mem:kind()==dxp.IMember.Enum) and self:isPublic(mem) then
            log:debug0 ("   - public enum ".. mem:name():latin1());
			--log:warn("Creating enum in scope ".. mem:name():latin1())
			
            local enum = self:getOrCreateObject(mem,Enum)
            
            -- manually add this enum to the current scope:
            enum:setName(mem:name():latin1())

            local mit = mem:enumValues()
            local enumvals = {}
            mit:toFirst();
            local enumvals = {}
            local val = mit:current();
            while(val) do
            	local vname = val:name():latin1()
            	local item = self:getOrCreateObject(val,EnumValue,vname)
                
                log:debug0 (" -enum value: ".. vname)
                enum:addValue(item)
                
                mit:toNext()
                val = mit:current()
            end
            
            mit:release()
            
            scope:addEnum(enum)
        end
        
        mli:toNext()
        mem = mli:current()
    end     
end

function ReflectionGenerator:processSections(comp)    
    local sli = comp:sections();
    sli:toFirst();
    local sec = sli:current();
    while(sec) do
        --if(sec:isPublic()) then
            self:processMembers(sec)
        --end
        
        sli:toNext();
        sec = sli:current();
    end
    
    sli:release();           
end

--- Process the sub scopes of a given scope.
function ReflectionGenerator:processChildren(comp)
    local cli = comp:nestedCompounds();
    cli:toFirst();
    local ccomp = cli:current();
    while(ccomp) do
        
        self:processCompound(ccomp)
         
        ccomp:release();
        cli:toNext();
        ccomp = cli:current();
    end
    
    cli:release();
end

--- Function to dispatch the processing of a single compound:
function ReflectionGenerator:processCompound(comp)
    if not comp then
        return
    end
    
    log:info ("Processing compound " .. comp:name():latin1())

    if (comp:kind()==dxp.ICompound.Class or comp:kind()==dxp.ICompound.Struct or comp:kind()==dxp.ICompound.Interface) then 
        self:processClass(comp)
    elseif(comp:kind()==dxp.ICompound.File) then
        self:processFile(comp)
    elseif (comp:kind()==dxp.ICompound.Namespace) then
        self:processNamespace(comp)
    end
end

--- function called to generate the reflection.
function ReflectionGenerator:generateReflection(folder)
    local dox = dxp.createObjectModel();
    
    self.doxygen = dox
    
    dox:setDebugLevel(0);

    if not dox:readXMLDir(folder) then
        log:error("Error reading file ".. folder .."/index.xml")
        return
    end
 
    local scope = self.reflectionMap:getGlobalNamespace()
    --scope:setName("global")
    
    self:pushScope(scope)
    
    local cli = dox:compounds();
    cli:toFirst();
    local comp = cli:current();
    local index = 0;
    --log:notice ("First Compound id is: "..  comp:id():latin1())
    
    while(comp) do
        
        --log:notice("Iterating on component ".. index)
        --index = index+1
        log:info ("Compound id is: "..  comp:id():latin1())
        
        self:processCompound(comp)
         
         --if index > 10000 then
         --	break;
         --end
         
        comp:release();
        cli:toNext();
        comp = cli:current();
    end
    
    cli:release();
    self.doxygen = nil
    
    dox:release();
    
    self:popScope()
end

--- return the ignored class patterns.
function ReflectionGenerator:getIgnoreGlobalFunctionsPatterns()
    return self.ignoreGlobalFuncsPatterns
end

function ReflectionGenerator:getIgnoreClassFunctionsPatterns()
    return self.ignoreClassFunctionsPatterns
end

function ReflectionGenerator.generate(options)
    local ReflectionMap = require "bindings.ReflectionMap"
    local LunaWriter = require "bindings.LunaWriter"
	local im = require "bindings.IgnoreManager"
	
    local datamap = ReflectionMap()
    local rg = ReflectionGenerator(datamap)
    rg:getIgnoreGlobalFunctionsPatterns():fromTable(options.ignoreGlobalFuncs or {})

	if options.ignoreClasses then
    	im:getIgnoreClassesPatterns():fromTable(options.ignoreClasses)
    end
    if options.ignoreConverter then
    	im:getIgnoreConvertersPatterns():fromTable(options.ignoreConverter)
	end
	
    local map = rg:getIgnoreClassFunctionsPatterns()

    for k,v in pairs(options.ignoreClassFuncs or {}) do
        local set = Set(v)
        map:set(k,set)
    end

    rg:generateReflection(options.xmlpath)

    datamap:setModuleName(options.modName)

    datamap:getUserHeaders():fromTable(options.headers or {})
    datamap:getUserContents():fromTable(options.userContent or {})

	local writer = LunaWriter(datamap)
    writer:writeBindings(options.destpath)
end

return ReflectionGenerator

