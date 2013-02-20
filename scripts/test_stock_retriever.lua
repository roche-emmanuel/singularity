#!/bin/sgt

log:notice "Executing init script..."

-- local App = require "finance.StockRetrieverApp"
local App = require "finance.StockRetrieverConsoleApp"
local app = App{profileFile="test_stock_retriever_profile.log"}

app:run()
	
log:notice "Script execution done."
