local Class = require("classBuilder"){name="StockRetrieverApp",bases="gui.wx.SimpleApp"};

local Thread = require "base.Thread"

function Class:initialize(options)
	local Interface = require "gui.wx.ControlInterface"

	local intf = Interface{root=self:getFrame()}

	self:buildInterface(intf,options)
	
	self:getFrame():Layout()
	
	self:info("Stock retriever now ready for action.")
	
	-- Create a new thread to retrieve the quotes every minutes:
	
	local interval = 1.0; -- check every second.
	local linda = Thread.newLinda()
	
	self._thread = Thread{name="quote_thread",timeout=10.0,func=function()
		log:info("Entering quote thread...")
		
		local Thread = require "base.Thread"
		local handler = require("finance.yahoo.QuoteHandler")()
		
		local key, v, secs, res;
		
		while true do
			key,v= linda:receive( interval, "test_key")
			secs = math.floor(Thread.getTime())
			--log:info("Elapsed seconds: ",secs)
			
			if math.mod(secs,60)==0 then
				-- retrieve the quotes:
				res = handler:getQuotes{"MSFT","AAPL","EURUSD=X"}
				log:info("Retrieved quotes are: ",res)
				collectgarbage('step')
			end
		end 
		
		log:info("Exiting quote thread.")
	end}
	
	self:info("Starting quote thread.")
	self._thread() -- start the thread
end

function Class:buildInterface(intf, options)
	intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	intf:addOutputPanel{}
	intf:popParent(true)
	
	self:getWindowManager():getMainFrame():SetSize(1280,720)
end


return Class -- return class instance.
