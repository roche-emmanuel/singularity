local Class = require("classBuilder"){name="ProviderHolder",bases="base.Object"};

local Vector = require "std.Vector"
local SelectorProvider = require "gui.wx.SelectorProvider"
local Provider = require "gui.Provider"

function Class:initialize(options)
	self._providers = Vector();
end

function Class:createProvider(options)
    self:check(options,"Invalid options table in createProvider")
	
	local prov = options.selector and SelectorProvider(options) or Provider(options) 
	prov:setInterface(self)   
	self:addProvider(prov)
    return prov;
end

function Class:setDefaultProvider(provider)
    self._defaultProvider = provider;
end

function Class:getDefaultProvider()
    return self._defaultProvider;
end

function Class:addProvider(prov)
	self:check(prov,"Invalid provider object")
	self._providers:push_back(prov)
end

function Class:updateProviders(name)
    for _,prov in self._providers:sequence() do
        prov:update(name)
    end	
end

return Class
