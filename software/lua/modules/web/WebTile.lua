local Class = require("classBuilder"){name="WebTile",bases="osg.BasicNode"};

local Event = require "base.Event"
local webman = require "web.WebManager"
local tools = require "osg.Tools"

function Class:initialize(options)
	-- create a webview for this tile:
	self._webImage = webman:createWebImage();
	self._webView = self._webImage:getWebView();
	
	-- Also create the screen quad where to apply the image:
	self._quad = tools:createScreenQuad{image=self._webImage:getImage()}
	self:check(self._quad._CLASSNAME_=="osg.Geode","Invalid class: ",self._quad._CLASSNAME_)
	--self._quad:addParent(self:getWrapper());
	
	-- Register the update callback for this WebTile:
	self:getEventManager():addListener{event=Event.FRAME,object=self}
	
	self:setCullingActive(false);
	--self:setNumChildrenWithCullingDisabled(1)
	self:dirtyBound()
end

function Class:getImage()
	return self._webImage:getImage()
end

function Class:buildObjectWrapper(wrapper)
	-- nothing to serialize.
end

function Class:onFrame()
	self:info("Updating webtile...");
	self._webImage:update()
end

-- definition of the needed methods to traverse this node a kind of group:
function Class:traverse(nv)
	self:info("Traversing webtile...");
	self._quad:accept(nv);
end

function Class:computeBound()
	--self:info("computeBound webtile...");
	return self._quad:computeBound()
end

function Class:setThreadSafeRefUnref(threadSafe)
	--self:info("setThreadSafeRefUnref webtile...");
    self:base_setThreadSafeRefUnref(threadSafe);
	self._quad:setThreadSafeRefUnref(threadSafe);
end

function Class:resizeGLObjectBuffers(maxSize)
	--self:info("resizeGLObjectBuffers webtile...");
    self:base_resizeGLObjectBuffers(maxSize);
	self._quad:resizeGLObjectBuffers(maxSize);
end

function Class:releaseGLObjects(state)
	--self:info("releaseGLObjects webtile...");
    self:base_releaseGLObjects(state);
	self._quad:releaseGLObjects(state);
end

function Class:loadURL(url)
	self._webView:LoadURL(Awesomium.WebURL(url))
end

return Class
