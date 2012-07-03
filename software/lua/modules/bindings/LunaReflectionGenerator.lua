
local oo = require "loop.cached"

local Object = require "base.Object"

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
local IteratorHandler = require "bindings.IteratorHandler"
local SectionHandler = require "bindings.SectionHandler"
local MemberWriter = require "bindings.MemberWriter"

local log = require "logger"

local dbg = require "debugger"

require "doxmlparser" -- The xml parser.

local dxp = doxmlparser

local ReflectionGenerator = oo.class({},Object,IScopeStack,IteratorHandler)

ReflectionGenerator.CLASS_NAME = "bindings.ReflectionGenerator"

function ReflectionGenerator:__init(datamap)
    local object = Object:__init({})
    object = IScopeStack:__init(object)
    object = oo.rawnew(self,object)
    object._TRACE_ = "ReflectionGenerator"
    
    object.reflectionMap = datamap
    object.currentScope = Vector();
    object.compoundMap = Map();
    object.ignoreGlobalFuncsPatterns = Set();
    object.ignoreClassFunctionsPatterns = Map()       
    object.locationPrefixes = Set()
    
    return object
end

function ReflectionGenerator:getLocationPrefixes()
	return self.locationPrefixes;
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
    comp = dxp.toFile(comp) --:dynamicCast("IFile")
    
    self:pushScope(self.reflectionMap:getGlobalNamespace())
    self:processSections(comp)
    --self:processChildren(comp) --processing nested compounds in IFile seems to mess everything ??
    self:popScope()
end

function ReflectionGenerator:processNamespace(comp)
    -- assume the given compound is a class.
    comp = dxp.toNamespace(comp) --:dynamicCast("INamespace")
    
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

function ReflectionGenerator:getHeaderFileName(location)
	for k,prefix in self.locationPrefixes:sequence() do
		--log:warn("Checking location against prefix ", prefix)
		if location:find(prefix) then
			location = location:sub(#prefix+1)
		end
	end
	
	return location
end

function ReflectionGenerator:processClass(comp)
    -- assume the given compound is a class.
    -- create a new class scope in the current scope:    
    --log:notice("Before dynamicCast...")
    local comp = dxp.toClass(comp) --:dynamicCast("IClass")
    --log:notice("After dynamicCast...")
        
    local class = self:getOrCreateObject(comp,Class)
    
    if class:isIgnored() then
        log:notice("Ignoring class ".. class:getName() .. " on user request.")
        return;
    end

	-- This is not working yet: no protection status on the class or compound objects.
	--if comp:protection() ~= dxp.IRelatedCompound.Public then
    --    log:notice("Ignoring non public class ".. class:getName() .. ".")
    --    return;	
	--end
	
	
	local desc = comp:detailedDescription()
	
	local extmod = self:extractFromDesc(desc and desc:contents(),"LUNA_EXTERNAL%s+([^%s]+)")
	
	if extmod then
		class:setModule(extmod)
	end
	
    local parent = self:getCurrentScope()
    
	parent:addChild(class)
	
	-- retrieve the location of that class:
	local location = self:getHeaderFileName(comp:locationFile():latin1()) 
	
	class:setHeaderFile(location)
	
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
                log:info("Ignoring base class ".. base:getName() .. " on user request.")
            else
                class:addBase(base)
                log:info("Found base ".. base:getName() .. " for class ".. class:getName())            
            end
        end
        
        bli:toNext();
        bcomp = bli:current();
    end
    
    bli:release();
    
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
    	--log:error("Ignoring Union " .. comp:name():latin1())
		--return nil
    else
        log:error("Cannot create component mapping for kind: " .. comp:kind())
    end
end

function ReflectionGenerator:isClassTypedef(mem)
	if not mem or mem:kind()~=dxp.IMember.Typedef then
		return false;
	end
	
	-- iterate on the items looking for the template symbol "<"
	local lti = mem:type()
	
	lti:toFirst()
    local item = lti:current()
    if not item then
        lti:release()
        return false
    end
    
    
    while(item) do
        if item:kind() == dxp.ILinkedText.Kind_Text then
        	item = dxp.toLinkText(item) 
            local name = item:text():latin1()
			if name:find("<") then
				self:notice("Considering typedef ", mem:name():latin1(), " as class.")
				lti:release()
				return true;
			end
		end
		
        lti:toNext()
        item = lti:current()
	end
	
	lti:release()
	return false;
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
    elseif self:isClassTypedef(mem) then
        return self:getOrCreateObject(mem,Class)
    else
        log:error("Cannot create member mapping for kind: " .. mem:kind())
    end
end

function ReflectionGenerator:generateItemLinks(lti,count,tname)
    count = count or 0
    if count > 1000 then
    	self:error("Detected infinite recursion loop in generateItemLinks() for member: ",tname)
    	return
    end
    
    lti:toFirst()
    local item = lti:current()
    if not item then
        lti:release()
        return
    end
    
    local result = Vector()
    
    while(item) do
        if item:kind() == dxp.ILinkedText.Kind_Text then
            item = dxp.toLinkText(item) --:dynamicCast("ILT_Text")
            local name = item:text():latin1()
            local link = ItemLink(ItemLink.STRING,name)
            result:push_back(link)
        elseif item:kind() == dxp.ILinkedText.Kind_Ref then
            item = dxp.toLinkRef(item) --:dynamicCast("ILT_Ref")
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
                		local list = dxp.toEnum(enum):enumValues()
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
                		
                		local handler = SectionHandler(MemberWriter())
                		self:foreachIterator(comp:sections(),handler,comp)
                		
                		-- return an int string in the worst case.
                		subtypes = Vector()
                		subtypes:push_back(ItemLink(ItemLink.STRING,"int"))
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
                		if self:isClassTypedef(mem) then
                			object = self:getOrCreateMember(mem)
                		else
	                		log:info("Reading sub item links for member ".. mem:name():latin1() .. " in compound " .. comp:name():latin1())
	                		subtypes = self:generateItemLinks(mem:type(),count+1,mem:name():latin1());
                		end
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

function ReflectionGenerator:extractNewName(cont) -- cont is a IDocIterator.
	if not cont then
		return;
	end
	
	cont:toFirst();
    local doc = cont:current()
        
    while(doc) do
    	--log:warn("Iterating on IDoc item.")
    	
    	local para = dxp.toDocPara(doc)
    	
    	local name = self:extractNewName(para and para:contents())
    	if name then
    		return name;
    	end
    	
        local txt = dxp.toDocText(doc)
        
        if txt then
        	local text = txt:text():latin1()
        	for name in text:gmatch("LUNA_RENAME%s+([^%s]+)") do
        	 	log:warn("Found the lua name '".. name .."'")
        		return name;
        	end
        end

        cont:toNext()
        doc=cont:current()
    end
    
    cont:release()
    return;
end

function ReflectionGenerator:getBaseIndex(cont) -- cont is a IDocIterator.
	if not cont then
		return;
	end
	
	cont:toFirst();
    local doc = cont:current()
        
    while(doc) do
    	--log:warn("Iterating on IDoc item.")
    	
    	local para = dxp.toDocPara(doc)
    	
    	local index = self:getBaseIndex(para and para:contents())
    	if index then
    		return index;
    	end
    	
        local txt = dxp.toDocText(doc)
        
        if txt then
        	local text = txt:text():latin1()
        	for index in text:gmatch("LUNA_BASE_INDEX%s+([%d]+)") do
        	 	log:warn("Found the lua base index '".. index .."'")
        		return index;
        	end
        end

        cont:toNext()
        doc=cont:current()
    end
    
    cont:release()
    return;
end


function ReflectionGenerator:extractFromDesc(cont,regex) -- cont is a IDocIterator.
	if not cont then
		return;
	end
	
	cont:toFirst();
    local doc = cont:current()
        
    while(doc) do
    	--log:warn("Iterating on IDoc item.")
    	
    	local para = dxp.toDocPara(doc)
    	
    	if para then
    		return self:extractFromDesc(para:contents(),regex)
    	end
    	
        local txt = dxp.toDocText(doc)
        
        if txt then
        	local text = txt:text():latin1()
        	for result in text:gmatch(regex) do
        	 	--log:warn("Found the lua base index '".. index .."'")
        		return result;
        	end
        end

        cont:toNext()
        doc=cont:current()
    end
    
    cont:release()
    return;
end

function ReflectionGenerator:isLunaExtension(cont) -- cont is a IDocIterator.
	if not cont then
		return false;
	end
	
	cont:toFirst();
    local doc = cont:current()
        
    while(doc) do
    	--log:warn("Iterating on IDoc item.")
    	
    	local para = dxp.toDocPara(doc)
    	
    	if para and self:isLunaExtension(para:contents()) then
    		return true;
    	end
    	
        local txt = dxp.toDocText(doc)
        
        if txt then
        	local text = txt:text():latin1() 
        	if text:find("LUNA_CLASS_EXTENSION") then
        		--log:warn("Found tag in text: '".. text.."'")
        		return true;
        	end
        end

        cont:toNext()
        doc=cont:current()
    end
    
    cont:release()
    return false;
end

function ReflectionGenerator:addScopeFunction(scope,mem)
    local fname = mem:name():latin1()
    local ignoreThisFunc = self:ignoreFunction(scope,fname);
                
    if ignoreThisFunc then
        log:info ("- Ignoring method ".. fname .. " on user request.")
        return
    end
    
    log:info ("- method ".. fname)
    
    local func = self:getOrCreateObject(mem,Function)
    --func:setName(fname)                

    -- retrieve the details concerning the function:
    local rtype = self:generateItemLinks(mem:type())
    if rtype then
        func:setReturnType(Type(rtype))
    else
        log:info("Invalid return type for function ".. fname .. " in scope ".. scope:getName())
        --func:setReturnType()
    end
    
    local location = self:getHeaderFileName(mem:definitionFile():latin1())
    func:setHeaderFile(location)
    
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
    	
    	-- check if this parameter is not simply "void"
    	if not p:isNothing() then
        	func:addParameter(p)
        end
        
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

	local desc = mem:detailedDescription()
	
	-- Check if this should really be ignored:
	if self:extractFromDesc(desc and desc:contents(),"LUNA_IGNORED") then
		return -- just ignore this function.
	end
		
	-- check if this function should be renamed:
	local luaName = self:extractNewName(desc and desc:contents())
	func:setLuaName(luaName) -- may be nil.
	
	-- Now decide where to store this function:
	-- it could be a regular function or a class extension.
	-- check the detailed description to find out:	
	if not self:isLunaExtension(desc and desc:contents()) then
		scope:addFunction(func)
		return;
	end

	-- this is a luna extension, find the parent class as the first argument
	-- of the function:
	log:warn("Found extension function " .. func:getName());
	
	-- mark the function as an extension:
	func:setAsExtension(true)
 	
 	-- add the function to the base class in the first parameter:
 	local baseIndex = self:getBaseIndex(desc and desc:contents()) or 0;
 	
 	local btype = func:getParameters():at(baseIndex+1):getType() -- assume there are enough parameters!!!
 	-- force parsing of that type:
 	btype:parse()
 	local bclass = btype:getBase() -- we assume this is a class !!!
 	if bclass.addFunction then
 		bclass:addFunction(func);
 	end
 	
    --local sig = func:getSignature(true)
    --log:info ("Function prototype is: ".. sig)
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
        elseif(self:isClassTypedef(mem) and self:isPublic(mem)) then
        	-- Add this class object to its parent scope:
        	local class = self:getOrCreateObject(mem,Class)
        	
    	    local location = self:getHeaderFileName(mem:definitionFile():latin1())
		    class:setHeaderFile(location)
    		
    		-- Add the mapped type string:
    		local typevec = self:generateItemLinks(mem:type())
    		
    		class:setMappedType(Type(typevec))

        	scope:addChild(class)
    		
        elseif(mem:kind()==dxp.IMember.Define and self:isPublic(mem)) then
            
            -- check if we have parameters:
            local params = mem:parameters()
            local param = nil
            if params then
            	params:toFirst()
            	param = params:current()
            	params:release()
        	end
        	
            if param then
            	self:notice("Ignoring define with parameters: ",mem:name():latin1())
            else
	            local def = self:getOrCreateObject(mem,Define)
	            local items = self:generateItemLinks(mem:initializer())
	            def:setInitializers(items)
	            def:setName(mem:name():latin1())  
	            self.reflectionMap:addDefine(def)
	        	
	    	    local location = self:getHeaderFileName(mem:definitionFile():latin1())
			    def:setHeaderFile(location)
		    end
        elseif(mem:kind()==dxp.IMember.Variable or mem:kind()==dxp.IMember.Property) and self:isPublic(mem) then
            -- is an attribute
            -- only add public attributes:
            local var = self:getOrCreateObject(mem,Variable)
            var:setName(mem:name():latin1())
            scope:addVariable(var)
        elseif(mem:kind()==dxp.IMember.Enum) and self:isPublic(mem) then
            log:info ("   - public enum ".. mem:name():latin1());
			--log:warn("Creating enum in scope ".. mem:name():latin1())
			
            local enum = self:getOrCreateObject(mem,Enum)
            
            local location = self:getHeaderFileName(mem:definitionFile():latin1())
		    enum:setHeaderFile(location)
		    
            -- manually add this enum to the current scope:
            enum:setName(mem:name():latin1())

            local mit = dxp.toEnum(mem):enumValues()
            local enumvals = {}
            mit:toFirst();
            local enumvals = {}
            local val = mit:current();
            while(val) do
            	local vname = val:name():latin1()
            	local item = self:getOrCreateObject(val,EnumValue,vname)
                
                log:info (" -enum value: ".. vname)
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

    if (comp:kind()==dxp.CompoundKind.Class or comp:kind()==dxp.CompoundKind.Struct or comp:kind()==dxp.CompoundKind.Interface) then 
        self:processClass(comp)
    elseif(comp:kind()==dxp.CompoundKind.File) then
        self:processFile(comp)
    elseif (comp:kind()==dxp.CompoundKind.Namespace) then
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
	
	if options.locationPrefixes then
		rg.locationPrefixes:fromTable(options.locationPrefixes)
	end

	if options.ignoreHeaders then
		im:getIgnoreHeadersPatterns():fromTable(options.ignoreHeaders)
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

	local writer = LunaWriter(datamap,not options.noConverters)
    writer:writeBindings(options.destpath)
end

return ReflectionGenerator

