local Class = require("classBuilder"){name="WebTile",bases="osg.BasicNode"};

local Event = require "base.Event"
local webman = require "gui.web.WebManager"
local tools = require "osg.Tools"

function Class:initialize(options)
	-- create a webview for this tile:
	self._webImage = webman:createWebImage();
	self._webView = self._webImage:getWebView();
	
	-- Also create the screen quad where to apply the image:
	self._quad = tools:createScreenQuad{image=self._webImage:getImage()}
	
	-- Register the update callback for this WebTile:
	self:getEventManager():addListener{event=Event.FRAME,object=self}
	
	self:setCullingActive(false);

	self:info("DOne creating webtile.")
	
	--self:dirtyBound()
end

function Class:getImage()
	return self._webImage:getImage()
end

function Class:buildObjectWrapper(wrapper)
	-- nothing to serialize.
end

function Class:onFrame()
	self._webImage:update()
end

-- definition of the needed methods to traverse this node a kind of group:
function Class:traverse(nv)
	self._quad:accept(nv);
end

function Class:computeBound()
	return self._quad:computeBound()
end

function Class:setThreadSafeRefUnref(threadSafe)
    self:base_setThreadSafeRefUnref(threadSafe);
	self._quad:setThreadSafeRefUnref(threadSafe);
end

function Class:resizeGLObjectBuffers(maxSize)
    self:base_resizeGLObjectBuffers(maxSize);
	self._quad:resizeGLObjectBuffers(maxSize);
end

function Class:releaseGLObjects(state)
    self:base_releaseGLObjects(state);
	self._quad:releaseGLObjects(state);
end

function Class:loadURL(url)
	self._webView:LoadURL(Awesomium.WebURL(url))
end

return Class
