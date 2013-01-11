local Class = require("classBuilder"){name="WebTile",bases={"osg.BasicNode","base.EventHandler"}};

local Event = require "base.Event"
local webman = require "gui.web.WebManager"
local tools = require "osg.Tools"
local awe = require "Awesomium"

local buttonMap = {}
buttonMap[osgGA.GUIEventAdapter.LEFT_MOUSE_BUTTON] = awe.kMouseButton_Left
buttonMap[osgGA.GUIEventAdapter.MIDDLE_MOUSE_BUTTON] = kMouseButton_Middle
buttonMap[osgGA.GUIEventAdapter.RIGHT_MOUSE_BUTTON] = kMouseButton_Right

local scrollScale = 120.0;

local vScrollMap = {}
vScrollMap[osgGA.GUIEventAdapter.SCROLL_UP] = -scrollScale
vScrollMap[osgGA.GUIEventAdapter.SCROLL_DOWN] = scrollScale

local hScrollMap = {}
hScrollMap[osgGA.GUIEventAdapter.SCROLL_LEFT] = -scrollScale
hScrollMap[osgGA.GUIEventAdapter.SCROLL_RIGHT] = scrollScale

function Class:initialize(options)
	-- create a webview for this tile:
	self._webImage = webman:createWebImage(options);
	self._webView = self._webImage:getWebView();
	
	-- Also create the screen quad where to apply the image:
	self._quad = tools:createScreenQuad{image=self._webImage:getImage()}
	
	-- Register the update callback for this WebTile:
	self:getEventManager():addListener{event=Event.FRAME,object=self}

	self:info("DOne creating webtile.")
	
	self._viewListener = awe.View{
		OnChangeTitle = function(tt, obj, caller, title) -- title: WebString
			--self:info("In OnChangeTile(), title=",title);
			self:fireEvent("onChangeTitle",caller,title);
		end,
		
		OnChangeAddressBar = function (tt, obj, caller, url) -- url: WebURL
			--self:info("In OnChangeAddressBar(), url=",url:spec());
			self:fireEvent("onChangeAddressBar",caller,url);
		end,
		
		OnChangeTooltip = function(tt, obj, caller, tooltip) -- tooltip: WebString
			self:info("In OnChangeTooltip(), tooltip=",tooltip);
		end,
		
		OnChangeTargetURL = function(tt, obj, caller, url) -- url: WebURL
			--self:info("In OnChangeTargetURL(), url='",url:spec(),"'");
			self:fireEvent("onChangeTargetURL",caller,url);
		end,
		
		OnChangeCursor = function(tt, obj, caller, cursor)
			self:info("In OnChangeCursor(), cursor=",cursor);
		end,
		
		OnChangeFocus = function(tt, obj, caller, focused_type)
			self:info("In OnChangeFocus(), focused=",focused_type);
		end,
		
		OnShowCreatedWebView = function(tt, obj, caller, new_view, opener_url, target_url, initial_pos, is_popup)
			self:info("In OnShowCreatedWebView(), opener_url=",opener_url:spec(),", target_url=",target_url:spec(),", is_popup=",is_popup);
			self:fireEvent("onShowCreatedWebView",caller, new_view, opener_url, target_url, initial_pos, is_popup);
		end,
	};
	
	self._eventHandler = osgGA.GUIEventHandler{
		handle = function(tt,obj,ea,aa)
			local etype = ea:getEventType();
			local xratio = self._webImage:getWidth()/ea:getWindowWidth()
			local yratio = self._webImage:getHeight()/ea:getWindowHeight()
			
			local x = math.floor(ea:getX()*xratio + 0.5);
			local y = math.floor((ea:getWindowHeight() - ea:getY())*yratio + 0.5);
			
			self._webView:Focus();
			
			if etype == osgGA.GUIEventAdapter.MOVE or etype == osgGA.GUIEventAdapter.DRAG then
				self._webView:InjectMouseMove(x,y);
			elseif etype == osgGA.GUIEventAdapter.PUSH then
				self._webView:InjectMouseDown(buttonMap[ea:getButton()] or 0)
			elseif etype == osgGA.GUIEventAdapter.RELEASE then
				self._webView:InjectMouseUp(buttonMap[ea:getButton()] or 0)
			elseif etype == osgGA.GUIEventAdapter.SCROLL then
				--self:info("deltaY=",ea:getScrollingDeltaY(),", deltaX=",ea:getScrollingDeltaX())
				--self._webView:InjectMouseWheel(ea:getScrollingDeltaY(),ea:getScrollingDeltaX())
				local sm = ea:getScrollingMotion()
				self._webView:InjectMouseWheel(vScrollMap[sm] or 0,hScrollMap[sm] or 0)
				
			elseif etype == osgGA.GUIEventAdapter.KEYDOWN or etype == osgGA.GUIEventAdapter.KEYUP then
				self._webView:InjectKeyboardEvent(self:createKeyEvent(ea));
			end
			
			return false;
		end
	};
	
	self._webView:set_view_listener(self._viewListener)
end

function Class:setChangeTitleCallback(cb)

end

function Class:buildInstance(obj)
	obj:setCullingActive(false);
end

function Class:getModifiers(modkey)
	local result = 0;
	if bit.band(modkey,osgGA.GUIEventAdapter.MODKEY_SHIFT)~=0 then
		result = bitbor(result,awe.kModShiftKey);
	end
	
	if bit.band(modkey,osgGA.GUIEventAdapter.MODKEY_ALT)~=0 then
		result = bitbor(result,awe.kModAltKey);
	end

	if bit.band(modkey,osgGA.GUIEventAdapter.MODKEY_CTRL)~=0 then
		result = bitbor(result,awe.kModControlKey);
	end

	return result;
end

local keyMap = {}
keyMap[osgGA.GUIEventAdapter.KEY_Space] = awe.AK_SPACE;
keyMap[osgGA.GUIEventAdapter.KEY_BackSpace] = awe.AK_BACK;
keyMap[osgGA.GUIEventAdapter.KEY_Tab] = awe.AK_TAB;
keyMap[osgGA.GUIEventAdapter.KEY_Linefeed] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Clear] = awe.AK_CLEAR;
keyMap[osgGA.GUIEventAdapter.KEY_Return] = awe.AK_RETURN;
keyMap[osgGA.GUIEventAdapter.KEY_Pause] = awe.AK_PAUSE;
keyMap[osgGA.GUIEventAdapter.KEY_Scroll_Lock] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Sys_Req] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Escape] = awe.AK_ESCAPE;
keyMap[osgGA.GUIEventAdapter.KEY_Delete] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Home] = awe.AK_HOME;
keyMap[osgGA.GUIEventAdapter.KEY_Left] = awe.AK_LEFT;
keyMap[osgGA.GUIEventAdapter.KEY_Up] = awe.AK_UP;
keyMap[osgGA.GUIEventAdapter.KEY_Right] = awe.AK_RIGHT;
keyMap[osgGA.GUIEventAdapter.KEY_Down] = awe.AK_DOWN;
keyMap[osgGA.GUIEventAdapter.KEY_Prior] = awe.AK_PRIOR;
keyMap[osgGA.GUIEventAdapter.KEY_Page_Up] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Next] = awe.AK_NEXT;
keyMap[osgGA.GUIEventAdapter.KEY_Page_Down] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_End] = awe.AK_END;
keyMap[osgGA.GUIEventAdapter.KEY_Begin] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Select] = awe.AK_SELECT;
keyMap[osgGA.GUIEventAdapter.KEY_Print] = awe.AK_PRINT;
keyMap[osgGA.GUIEventAdapter.KEY_Execute] = awe.AK_EXECUTE;
keyMap[osgGA.GUIEventAdapter.KEY_Insert] = awe.AK_INSERT;
keyMap[osgGA.GUIEventAdapter.KEY_Undo] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Redo] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Menu] = awe.AK_MENU;
keyMap[osgGA.GUIEventAdapter.KEY_Find] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Cancel] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Help] = awe.AK_HELP;
keyMap[osgGA.GUIEventAdapter.KEY_Break] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Mode_switch] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Script_switch] = nil;
keyMap[osgGA.GUIEventAdapter.KEY_Num_Lock] = awe.AK_NUMLOCK;
	
function Class:getKeyCode(key)
	return keyMap[key] or key
end

local forcerCharMap = {}
forcerCharMap[osgGA.GUIEventAdapter.KEY_Space] = true

function Class:getKeyType(key)
	return keyMap[key] and not forcerCharMap[key] and awe.WebKeyboardEvent.kTypeKeyDown or awe.WebKeyboardEvent.kTypeChar
end

function Class:createKeyEvent(ea)
	local code = self:getKeyCode(ea:getKey())
	local event = awe.WebKeyboardEvent()
	--self:info("KeyType=", ea:getEventType()==osgGA.GUIEventAdapter.KEYDOWN and "DOWN" or "UP")
	
	local ktype = ea:getEventType()==osgGA.GUIEventAdapter.KEYDOWN and self:getKeyType(ea:getKey()) or awe.WebKeyboardEvent.kTypeKeyUp
	
	event:setType(ktype)
	event:setModifiers(self:getModifiers(ea:getModKeyMask()));
	
	event:setVirtualKeyCode(code);
	event:setNativeKeyCode(code);
	
	if ktype == awe.WebKeyboardEvent.kTypeChar then
		event:setText(code);
	end
	
	return event
end

function Class:getEventHandler()
	return self._eventHandler
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
function Class:traverse(obj,nv)
	self._quad:accept(nv);
end

function Class:computeBound(obj)
	return self._quad:computeBound()
end

function Class:setThreadSafeRefUnref(obj,threadSafe)
    obj:base_setThreadSafeRefUnref(threadSafe);
	self._quad:setThreadSafeRefUnref(threadSafe);
end

function Class:resizeGLObjectBuffers(obj,maxSize)
    obj:base_resizeGLObjectBuffers(maxSize);
	self._quad:resizeGLObjectBuffers(maxSize);
end

function Class:releaseGLObjects(obj,state)
    obj:base_releaseGLObjects(state);
	self._quad:releaseGLObjects(state);
end

function Class:loadURL(url)
	self._webView:LoadURL(Awesomium.WebURL(url))
end

return Class
