-- prototype 1 for finance agent:
-- This agent will simply retrieve a fixed stock value from yahoo finance once every minute
-- and display the stock prices on the std output.
-- This module depends on the socket and json modules.

local http = require("socket.http")
local json = require("json")	
local apr = require("apr")
	
local Class = require("classBuilder"){name="AgentProto1",bases="base.Object"};
	
--- Perform initialization of the agent:
function Class:initialize(options)
	self._url = 'http://query.yahooapis.com/v1/public/yql?q=select%20Bid%2CAsk%20from%20yahoo.finance.quotes%20where%20symbol%20in%20(%22EURUSD=X%22)&env=store://datatables.org/alltableswithkeys&format=json'
	
	self:debug("Initialized.")
end

-- Main function to run the agent loop infinitely. 
-- Note that this agent will be blocking until the application is killed.
function Class:run()
	
	while(true) do
		-- Read from internet:
		local body, res = http.request(self._url)
		self:check(body,res)
			
		-- Non decompose JSON body:
		local result = json.decode(body)
		
		-- display the stock prices:
		self:info("Stock prices : Ask=",result.query.results.quote.Ask,", Bid=",result.query.results.quote.Bid)
		
		-- sleep for 60 seconds.
		apr.sleep(60);
	end
end

return Class
