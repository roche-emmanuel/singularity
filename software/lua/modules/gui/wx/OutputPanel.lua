local Class = require("classBuilder"){name="OutputPanel",bases="gui.wx.BasicWindow"};

local wx = require "wx"

local Event = require "base.Event"
local prof = require "debugging.Profiler"

--- Create an Output panel:
function Class:initialize(options)
	self:debug4("Initializing OutputPanel.")

	self._sink = sgt.LogSink{
		output = function(tt,obj,level,trace,msg)
			self._tc:SetDefaultStyle(self._styles[level] or self._defaultStyle);

			self._tc:AppendText(msg);
			self._tc:ShowPosition(self._tc:GetLastPosition());
		end	
	};
		
	self:getEventManager():addListener{event=Event.APP_CLOSING,object=self}
	
	self:create()

	sgt.LogManager.instance():addSink(self._sink)
	self:debug4("OutputPanel initialization done.")
end

function Class:onAppClosing()
	-- release all the images:
	self:info("Removing OutputPanel Sink.")
	sgt.LogManager.instance():removeSink(self._sink);
end

function Class:create()
	local Interface = require "gui.wx.ControlInterface"
	local intf = Interface{root=self._parent}
	
	self._window = intf:addTextCtrl{prop=1,flags=wx.wxALL+wx.wxEXPAND,style=bit.bor(wx.wxTE_MULTILINE,wx.wxTE_READONLY,wx.wxTE_BESTWRAP,wx.wxTE_RICH2)}
	self._tc = self._window
	
	self._styles = {}
	self._styles[sgt.LogManager.INFO] = wx.wxTextAttr(wx.wxBLUE, wx.wxWHITE)
	self._styles[sgt.LogManager.NOTICE] = wx.wxTextAttr(wx.wxDARK_GREEN, wx.wxWHITE)
	self._styles[sgt.LogManager.WARNING] = wx.wxTextAttr(wx.wxORANGE, wx.wxWHITE)
	self._styles[sgt.LogManager.ERROR] = wx.wxTextAttr(wx.wxRED, wx.wxWHITE)
	self._styles[sgt.LogManager.FATAL] = wx.wxTextAttr(wx.wxPURPLE, wx.wxWHITE)
	
	self._defaultStyle = wx.wxTextAttr(wx.wxBLACK, wx.wxWHITE)
end

return Class
