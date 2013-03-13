local Class = require("classBuilder"){name="WebTexture",bases="base.Object"};

local Event = require "base.Event"
local webman = require "gui.web.WebManager"
local osg = require "osg"
local gl = require "luagl"

function Class:initialize(options)	
	options = options or {}
	local ww = options.width or 1280
	local hh = options.height or 720;
	
	-- create a webview for this tile:
	self._webView = options.webView or webman:createWebView{width=ww,height=hh};
	webman:registerWebView(self._webView)
	self._webView:Resize(ww,hh)

	self._surface = webman:getSurfaceFactory():getOrCreateSurface(self._webView)
	self._texture = self._surface:getTexture();

	local tex = self._texture;	
	tex:setWrap(osg.Texture.WRAP_S,osg.Texture.CLAMP_TO_EDGE);
    tex:setWrap(osg.Texture.WRAP_T,osg.Texture.CLAMP_TO_EDGE);
    tex:setWrap(osg.Texture.WRAP_R,osg.Texture.CLAMP_TO_EDGE);
    tex:setFilter(osg.Texture.MIN_FILTER,osg.Texture.LINEAR);
    --tex:setFilter(osg.Texture.MIN_FILTER,osg.Texture.NEAREST);
    tex:setFilter(osg.Texture.MAG_FILTER,osg.Texture.LINEAR);
	
	self._surface:setSize(ww,hh);
end

function Class:getWidth()
	return self._texture:getTextureWidth()
end

function Class:getHeight()
	return self._texture:getTextureHeight()
end

function Class:getWebView()
	return self._webView;
end

function Class:getImage()
	return self._texture
end

function Class:update()
	-- nothing to do here.
end

return Class
