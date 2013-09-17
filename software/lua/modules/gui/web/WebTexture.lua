local Class = require("classBuilder"){name="WebTexture",bases="gui.web.View"};

local osg = require "osg"

function Class:initialize(options)	
	self._surface = self:getManager():getSurfaceFactory():getOrCreateSurface(self._webView)
	self._texture = self._surface:getTexture();

	local tex = self._texture;	
	tex:setWrap(osg.Texture.WRAP_S,osg.Texture.CLAMP_TO_EDGE);
    tex:setWrap(osg.Texture.WRAP_T,osg.Texture.CLAMP_TO_EDGE);
    tex:setWrap(osg.Texture.WRAP_R,osg.Texture.CLAMP_TO_EDGE);
    tex:setFilter(osg.Texture.MIN_FILTER,osg.Texture.LINEAR);
    --tex:setFilter(osg.Texture.MIN_FILTER,osg.Texture.NEAREST);
    tex:setFilter(osg.Texture.MAG_FILTER,osg.Texture.LINEAR);
	
	self._surface:setSize(self._width,self._height);
end

function Class:getManager()
	return require "gui.web.WebManager"
end

-- function Class:getWebView()
	-- return self._webView;
-- end

function Class:getOSGTexture()
	return self._texture
end

return Class
