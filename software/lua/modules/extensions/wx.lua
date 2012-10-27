
local wx = require "wx"
local osg = require "osg"

wx.wxColour.toVec4f = function(self,alpha)
	alpha = alpha or self:Alpha()/255.0;
	return osg.Vec4f(self:Red()/255.0,self:Green()/255.0,self:Blue()/255.0,alpha)
end

wx.wxDefaultPosition = wx.wxPoint(-1,-1);
wx.wxDefaultSize = wx.wxSize(-1,-1);
wx.wxDefaultValidator = wx.wxValidator();
wx.wxDefaultDateTime = wx.wxDateTime()
wx.wxNullFont = wx.wxFont()


wx.wxBLACK_PEN = wx.wxPen(wx.wxColour(0,0,0))
wx.wxTRANSPARENT_PEN = wx.wxPen(wx.wxColour(255,255,255),1,wx.wxPENSTYLE_TRANSPARENT)

wx.wxTRANSPARENT_BRUSH = wx.wxBrush(wx.wxColour(255,255,255),wx.wxBRUSHSTYLE_TRANSPARENT)

