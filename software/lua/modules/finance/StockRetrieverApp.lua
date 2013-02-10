local Class = require("classBuilder"){name="StockRetrieverApp",bases="gui.wx.SimpleApp"};

local http = require("socket.http")
local json = require("json")

-- http://www.datatables.org/yahoo/finance/yahoo.finance.quotes.xml
--http://query.yahooapis.com/v1/public/yql?q=select%20*%20from%20yahoo.finance.quotes%20where%20symbol%20in%20%28%22MSFT%22%29&diagnostics=true&env=http%3A%2F%2Fdatatables.org%2Falltables.env&format=json 
-- http://query.yahooapis.com/v1/public/yql?q=select%20*%20from%20yahoo.finance.quotes%20where%20symbol%20in%20(%22YHOO%22%2C%22AAPL%22%2C%22GOOG%22%2C%22MSFT%22)%0A%09%09&diagnostics=true&env=http%3A%2F%2Fdatatables.org%2Falltables.env


-- http://download.finance.yahoo.com/d/quotes.csv?s=MSFT&f=aa2bb2b3b4cc1c3c6c8dd1d2ee1e7e8e9ghjkg1g3g4g5g6ii5j1j3j4j5j6k1k2k4k5ll1l2l3mm2m3m4m5m6m7m8nn4opp1p2p5p6qrr1r2r5r6r7ss1s7t1t7t8vv1v7ww1w4xy


-- var results = y.query("select * from csv where url=@url and columns='Ask,AverageDailyVolume,Bid,AskRealtime,BidRealtime,BookValue,Change&PercentChange,Change,Commission,ChangeRealtime,AfterHoursChangeRealtime,DividendShare,LastTradeDate,TradeDate,EarningsShare,ErrorIndicationreturnedforsymbolchangedinvalid,EPSEstimateCurrentYear,EPSEstimateNextYear,EPSEstimateNextQuarter,DaysLow,DaysHigh,YearLow,YearHigh,HoldingsGainPercent,AnnualizedGain,HoldingsGain,HoldingsGainPercentRealtime,HoldingsGainRealtime,MoreInfo,OrderBookRealtime,MarketCapitalization,MarketCapRealtime,EBITDA,ChangeFromYearLow,PercentChangeFromYearLow,LastTradeRealtimeWithTime,ChangePercentRealtime,ChangeFromYearHigh,PercebtChangeFromYearHigh,LastTradeWithTime,LastTradePriceOnly,HighLimit,LowLimit,DaysRange,DaysRangeRealtime,FiftydayMovingAverage,TwoHundreddayMovingAverage,ChangeFromTwoHundreddayMovingAverage,PercentChangeFromTwoHundreddayMovingAverage,ChangeFromFiftydayMovingAverage,PercentChangeFromFiftydayMovingAverage,Name,Notes,Open,PreviousClose,PricePaid,ChangeinPercent,PriceSales,PriceBook,ExDividendDate,PERatio,DividendPayDate,PERatioRealtime,PEGRatio,PriceEPSEstimateCurrentYear,PriceEPSEstimateNextYear,Symbol,SharesOwned,ShortRatio,LastTradeTime,TickerTrend,OneyrTargetPrice,Volume,HoldingsValue,HoldingsValueRealtime,YearRange,DaysValueChange,DaysValueChangeRealtime,StockExchange,DividendYield'",{url:request.url}); var quotes = <quotes/>; var rows=results.results.row; for each (var row in rows) { for each (var item in row.*) { var elname = item.localName(); var txt = item.text().toString(); if (txt=="N/A") txt=""; else if (txt=="-") txt=""; else { txt = txt.replace(/"/g, ''); } row[elname]=txt; } //split % change out var txt = row["Change_PercentChange"].text().toString(); row["PercentChange"]=txt.substring(txt.indexOf(" - ")+2);	 quotes.quote += <quote symbol={row.Symbol.text().toString()}>{row.*}</quote>; } response.object = quotes;

function Class:initialize(options)
	local Interface = require "gui.wx.ControlInterface"

	local intf = Interface{root=self:getFrame()}

	self:buildInterface(intf,options)
	
	self:getFrame():Layout()
	
	self:info("Stock retriever now ready for action.")
	
	-- self:getAllStocks()
	self:getQuote({"EURUSD%3DX","MSFT","AAPL"})
	-- self:getQuote("MSFT")
	-- self:getQuote("AAPL")
end

function Class:buildInterface(intf, options)
	intf:pushPanel{prop=1,flags=wx.wxALL+wx.wxEXPAND}
	intf:addOutputPanel{}
	intf:popParent(true)
	
	self:getWindowManager():getMainFrame():SetSize(1280,720)
end

function Class:retrieveURL(url)
	self:info("URL = ",url)
	local body, res = http.request(url)
	self:check(body,"Invalid body in HTTP request. Error: ", res)

	local result = json.decode(body)
	self:check(result,"Invalid json decode result.")
	return result;
end

function Class:performRequest(req)
	local url = self:formatSQLRequest(req)
	return self:retrieveURL(url)
end

function Class:formatSQLRequest(request)
	self:info("Formatting request: '", request,"'")
	request = request:gsub(" ",function() return "%20" end)
		:gsub(",",function() return "%2C" end)
		:gsub("%(",function() return "%28" end)
		:gsub("%)",function() return "%29" end)
		--:gsub("'",function() return "%22" end)
	self:info("Formatted request: '", request,"'")
	
	local url = 'http://query.yahooapis.com/v1/public/yql?q='
	url = url .. request
	-- url = url .. '&env=store://datatables.org/alltableswithkeys&format=json'
	url = url .. '&env=http://datatables.org/alltables.env&format=json'
	
	-- http://query.yahooapis.com/v1/public/yql?q=select * from yahoo.finance.quotes where symbol in ("YHOO","AAPL","GOOG","MSFT")&env=http://datatables.org/alltables.env
	
	return url
end

function Class:getQuote(symbols)
	symbols = type(symbols)=="string" and {symbols} or symbols
	
	local symstr = table.concat(symbols,"+")
	
	local allprop="aa2bb2b3b4cc1c3c6c8dd1d2ee1e7e8e9ghjkg1g3g4g5g6ii5j1j3j4j5j6k1k2k4k5ll1l2l3mm2m3m4m5m6m7m8nn4opp1p2p5p6qrr1r2r5r6r7ss1s7t1t7t8vv1v7ww1w4xy"
	-- local minprop="b2b3"
	local minprop="a0b0"
	
	local url = "http://download.finance.yahoo.com/d/quotes.csv?s=" .. symstr .. "&f=".. minprop
	self:info("URL = ",url)
	local body, res = http.request(url)
	self:check(body,"Invalid body in HTTP request. Error: ", res)
	
	self:info("Get quote responce: ",body)
end

function Class:getAllStocks()	
	local res = self:performRequest('select * from yahoo.finance.quotes where symbol in ("EURUSD=X")');
	self:info("Json result: ", res)
end

-- Bid%2CAsk
function Class:getAllStocks_old()
	local url = 'http://query.yahooapis.com/v1/public/yql?q=select%20*%20from%20yahoo.finance.quotes%20where%20symbol%20in%20(%22EURUSD=X%22)&env=store://datatables.org/alltableswithkeys&format=json'
	
	local res = self:retrieveURL(url);
	self:info("Json result: ", res)
end

return Class -- return class instance.
