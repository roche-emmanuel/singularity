module("plug.prefs.gui",package.seeall)

require("guitools")
require("plug.prefs.gui.handlers")

interface = guitools.prepareInterface{
menu="Options",
name="Preferences...",
refreshWindow=false,
refreshProject=false,
dockable=false,
version=2,
iconsrc="editor" -- this is the icon used for the preferences menu.
}

function interface:buildInterface()
    self:setDefaultProvider(self:createProvider{}) -- this is a default application config level provider.
    
    self:pushTreebook{prop=1,flags=wx.wxALL+wx.wxEXPAND} -- begin treebook.
        self:pushBookPage{caption="General                      "} -- begin General                   page.
            self:addStaticText{text="This section is dedicated to general settings."}
            self:addActionButtonEntry{name="reset_config",caption="Reset config",flags=wx.wxALIGN_RIGHT, handler=handlers.resetConfig,tip="Reset the application config file"}
        self:popParent(true) -- End General                   page
        
        self:pushBookSubPage{caption="Rendering"} -- begin Rendering subpage.
            --self:addDoubleEntry{name="target.framerate",caption="Master framerate",range={1.000000,100.000000},unit=" fps",precision=1}
            --self:addBoolEntry{name="config.solarsystem.use_multipass",caption="Use multi-camera mode",tip="Use multiple cameras instead of DepthPartitionNode",defaultValue=false}
            self:addBoolEntry{name="config.solarsystem.earth_only_mode",caption="Earth only mode",tip="Display only Earth, Moon and Sun",defaultValue=true}
            
            self:pushSizer{orient=wx.wxHORIZONTAL,text="Render to Texture",prop=0,flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
                    self:addSingleChoiceEntry{name="config.render_to_texture.main.width",caption="Main width",choices={"256","512","1024","1280","1920"},defaultValue="1024"}
                    self:addSingleChoiceEntry{name="config.render_to_texture.main.height",caption="Main height",choices={"256","512","720","1024","1080"},defaultValue="512"}
            self:popSizer() -- end sizer
            
            self:pushSizer{orient=wx.wxVERTICAL,text="3D Threading settings",prop=0,flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
                local th_models = {
                    {id=osgViewer.ViewerBase.ThreadingModel.SingleThreaded,caption="SingleThreaded"}, 
                    {id=osgViewer.ViewerBase.ThreadingModel.CullDrawThreadPerContext,caption="CullDrawThreadPerContext"},
                    {id=osgViewer.ViewerBase.ThreadingModel.DrawThreadPerContext, caption="DrawThreadPerContext"},
                    {id=osgViewer.ViewerBase.ThreadingModel.CullThreadPerCameraDrawThreadPerContext,caption="CullThreadPerCameraDrawThreadPerContext"},
                    {id=osgViewer.ViewerBase.ThreadingModel.AutomaticSelection,caption="AutomaticSelection"},
                };
                
                self:addStateComboBoxEntry{name="config.viewer.threading_model",caption="Threading model",states=th_models,prop=0,flags=0,handler=handlers.updateThreadingModel}
                
                --self:addIntegerEntry{name="config.maxTexturePoolSize",caption="Max texture pool size",range={1.000000,1000.000000},defaultValue=1000}
                --self:addIntegerEntry{name="config.maxActiveTexture",caption="Max active textures",range={1.000000,200.000000},defaultValue=100}
                --self:addIntegerEntry{name="config.maxPagedLOD",caption="Max number PagedLOD",range={1.000000,300.000000},defaultValue=200}
                --self:addBoolEntry{name="config.database.precompile",caption="Precompile database objects"}
                self:addBoolEntry{name="config.3Dview.use_shared_context",caption="Use shared OpenGL contexts",defaultValue=true}
                self:addBoolEntry{name="config.3Dview.use_rendering_thread",caption="Use dedicated rendering thread (experimental)",defaultValue=true,
                    tip="When this is enabled, use a dedicated thread for the rendering loop. WARNIG: This may lead to craches or deadlocks.",handler=handlers.updateUseRenderingThread}
            self:popSizer() -- end sizer
            
            self:pushSizer{orient=wx.wxVERTICAL,text="Multi-sampling",prop=0,flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
                self:addBoolEntry{name="config.3Dview.enable_multisamples",caption="Enable multisamples",tip="Toggle anti-aliasing support on or off"}
                local samples = {
                    {id=1,caption="x1"},
                    {id=2,caption="x2"},
                    {id=4,caption="x4"},
                    {id=8,caption="x8"},
                    {id=16,caption="x16"},
                }
                --self:addStateRadioEntry{name="config.output.level.wx",text="wxWidgets Level",prop=1,states=wx_levels}
                self:addStateComboBoxEntry{parent="config.3Dview.enable_multisamples",name="config.3Dview.numSamples",caption="Num samples",prop=1,states=samples}

            self:popSizer() -- end sizer
            
            self:addBoolEntry{name="config.3Dview.enable_vsync",caption="Enable vertical synchronization",tip="Toggle the screen vertical synchronization on or off"}
            
        self:popParent(true) -- End Rendering subpage
        
        --self:pushBookSubPage{caption="Post processing"} -- begin Rendering subpage.
        --    self:addBoolEntry{name="config.enablePostProcessing",caption="Enable 3D image post processing",defaultValue=false}
        --self:popParent(true) -- End Rendering subpage
        
        self:pushBookSubPage{caption="Caching"} -- begin Caching subpage.
            self:pushSizer{orient=wx.wxVERTICAL,text="Map layer cache",prop=0,flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
                self:addDirEntry{name="config.cache.path",caption="Current folder",defaultValue=giCommon.Engine.getAppDataDir().."map_caching"}
                self:addActionButtonEntry{name="clear_cache",caption="Clear cache",flags=wx.wxALIGN_RIGHT, handler=handlers.clearCache}
            self:popSizer() -- end sizer
            
        self:popParent(true) -- End Caching subpage
        
        self:pushBookSubPage{caption="Selection"} -- begin Selection subpage.
            self:pushSizer{orient=wx.wxVERTICAL,text="Object selection",prop=0,flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
                self:addColorEntry{name="config.defaultSelectionColor",caption="Selection color",defaultValue=osg.Vec4f(0.000000,1.000000,0.000000,0.800000),alphaCaption="Opacity",prop=1,flags=wx.wxALIGN_RIGHT}
            self:popSizer() -- end sizer        
        self:popParent(true) -- End Selection subpage
        
        self:pushBookSubPage{caption="XRay vision"} -- begin Selection subpage.
            self:addSingleChoiceEntry{name="config.xray.mode",caption="XRay mode",choices={"Material","PolygonMode"}}            
            self:addSpacer{size=5}
            self:addStaticText{text="Material rendering:\nUse materials and transparency settings to apply the XRay vision effect.\nWARNING, this mode comes with a severe known limitation:\nsome objects [transparent or not] may disappear when they are behind\ntransparent objects. "}
            self:addSpacer{size=5}
            self:addStaticText{text="PolygonMode rendering:\nUse PolygonMode attributes to render objects in wireframe, with a simple\ngrey/white material."}

        self:popParent(true) -- End Selection subpage

        self:pushBookSubPage{caption="Navigation"} -- begin Navigation subpage.
            self:addSingleChoiceEntry{name="config.navigation.model",caption="Navigation model",choices={"Regular","Advanced"}}
            self:addSpacer{size=5}
            self:addStaticText{text="Advanced navigation:\n  - Mouse left button = Selection\n  - Mouse middle button = Rotation around target\n  - Mouse right button = Context menu\n  - Alt + Mouse middle button = Panning around target\n  - Alt + Mouse right button =  Zooming around target"}
            self:addSpacer{size=5}
            self:addStaticText{text="Regular navigation:\n  - Mouse left button = Rotation around target\n  - Mouse middle button = Panning around target\n  - Mouse right button = Zooming around target\n  - Ctrl + Mouse left button = Selection\n  - Ctrl + Mouse right button = Context menu"}
        self:popParent(true) -- End Navigation subpage
        
        self:pushBookPage{caption="Projects"} -- begin Projects page.
            self:pushSizer{orient=wx.wxVERTICAL,text="Open settings",prop=0,flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
                self:addBoolEntry{name="execute.init.script",caption="Auto init projects",defaultValue=true}
                self:addBoolEntry{name="config.auto.display.scenes",caption="Auto display 3D scenes", defaultValue=true}
                
            self:popSizer() -- end sizer
            
        self:popParent(true) -- End Projects page
        
        self:pushBookSubPage{caption="Auto-Init"} -- begin Navigation subpage.
            self:addStaticText{text="Advanced auto initialization support can be enabled for:"}
            self:addBoolEntry{name="config.autoinit.TAMER",caption="TAMER project", defaultValue=true,tip="Auto setup DA42 demo scene"} 
            self:addBoolEntry{name="config.autoinit.SolarSystem",caption="SolarSystem project", defaultValue=true,tip="Support standalone demo scene"} 
        self:popParent(true) -- End Navigation subpage
        
        self:pushBookPage{caption="User interface"} -- begin Selection subpage.
            self:addSingleChoiceEntry{name="config.gui.theme",caption="Global theme",choices={"Compact"}} --,"Regular"}} 
            self:addBoolEntry{name="config.gui.hide.tab.captions",caption="Show tab image only",defaultValue=true,tip="Display only the tab images when possible in notebook controls"}
            self:addSpacer{size=5}
            self:pushCollapsiblePanel{text="Font settings",flags=wx.wxALL+wx.wxEXPAND}
                self:addFontEntry{name="config.gui.default.font",caption="Default"}
                self:addFontEntry{name="config.gui.label.font",caption="Label"}
                self:addFontEntry{name="config.gui.text.font",caption="Text area"}                
                self:addFontEntry{name="config.gui.check.font",caption="Checkbox"}                
            self:popParent(true) -- end collapsible 
            self:pushCollapsiblePanel{text="Color settings",flags=wx.wxALL+wx.wxEXPAND}
                self:addColorEntry{name="config.gui.backgroundcolor",caption="Default Background",defaultValue=osg.Vec4f(0.941176,0.941176,0.941176,1.000000),flags=0,tip="Specify the background color"}
                self:addColorEntry{name="config.gui.foregroundcolor",caption="Default Foreground",defaultValue=osg.Vec4f(0.000000,0.000000,0.000000,1.000000),flags=0,tip="Specify the foreground (eg. Text) color"}
            self:popParent(true) -- end collapsible 
            
            self:addSpacer{size=5}
            self:addStaticText{text="Regular theme:\nUse the initial NG3DV GUI rendering theme."}
            self:addSpacer{size=5}
            self:addStaticText{text="compact theme:\nUse a more compact display system (using less space on screen)"}

        self:popParent(true) -- End Selection subpage
        
        self:pushBookPage{caption="Network"} -- begin Network page.
            self:pushSizer{orient=wx.wxVERTICAL,text="Connection proxy",prop=0,flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
                self:addBoolEntry{name="proxy.enabled",caption="Use proxy settings"}
                self:addStringEntry{name="proxy.server",caption="Proxy server"}
                self:addIntegerEntry{name="proxy.port",caption="Proxy port",range={1,65000},defaultValue=26600}
                
            self:popSizer() -- end sizer
            self:pushSizer{text="Timeouts",orient=wx.wxVERTICAL,prop=0,flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
                self:addDoubleEntry{name="config.network.timeout.connection",caption="Connection timeout",range={1.000000,10.000000},defaultValue=5,unit="s"}
                self:addDoubleEntry{name="config.network.timeout.transfer",caption="Transfer timeout",range={1.000000,20.000000},defaultValue=10,unit="s"}                
            self:popSizer() -- end sizer
            self:pushSizer{orient=wx.wxVERTICAL,text="Xavante settings",prop=0,flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
                self:addBoolEntry{name="config.xavante.autostart",caption="Automatic start of HTTP server"}
                self:addDoubleEntry{name="config.xavante.timeout",caption="Server selection timeout",range={0.001000,1.000000},defaultValue=0.01,unit="s"}
                self:addIntegerEntry{name="config.xavante.port",caption="Server port",range={1.000000,64000.000000},defaultValue=8080}
            self:popSizer() -- end sizer
        self:popParent(true) -- End Network page
        
        self:pushBookSubPage{caption="MXSim"} -- begin TLE page.
            self:pushSizer{orient=wx.wxVERTICAL,text="MXSim settings",flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
                self:addStringEntry{name="config.mxsim.default_address",caption="Default address",defaultValue="localhost"}
            self:popSizer() -- end sizer
        self:popParent(true) -- End TLE page
        
        self:pushBookSubPage{caption="TLE"} -- begin TLE page.
            self:pushSizer{orient=wx.wxVERTICAL,text="TLE settings",flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
                self:addBoolEntry{name="config.tle.automatic_update.enabled",caption="TLE update on/off",defaultValue=true}
            self:popSizer() -- end sizer
        self:popParent(true) -- End TLE page
        
        self:pushBookSubPage{caption="Satmon"} -- begin Satmon page.
            self:pushSizer{orient=wx.wxVERTICAL,text="Satmon settings",flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
                self:addBoolEntry{name="config.satmon.satmon_start.enabled",caption="Start Satmon internal server",defaultValue=false,tip="Automatically start the internal Satmon server if the following dialog is not shown"}
                self:addBoolEntry{name="config.satmon.satmon_dialog.enabled",caption="Always ask user before starting Satmon server",defaultValue=false,tip="Always display a dialog to the user before starting the Satmon server"}
                self:addIntegerEntry{name="config.satmon.satmon_port",caption="Satmon port",range={1,65000},defaultValue=26600}
                self:addIntegerEntry{name="config.satmon.satmon_delay",caption="Satmon delay",range={50,10000},defaultValue=1000}
                self:addSpacer{size=5}
                self:pushCollapsiblePanel{text="Advanced settings",topline=true,flags=wx.wxALL+wx.wxEXPAND} -- begin collapsible Advanced settings
                    self:addBoolEntry{name="config.satmon.stack_size_as_duration",caption="Stack size as duration",defaultValue=true,tip="Toggle ON to control the duration of each stack instead of its size directly"}
                    self:addIntegerEntry{name="config.satmon.stack_size",caption="Stack size",range={1.000000,10.0},defaultValue=6,tip="The size or duration of each interpolation stack"}
                    self:addIntegerEntry{name="config.satmon.time_offset",caption="Time offset",range={1.000000,10.0},defaultValue=3,unit=" s",tip="This is the delay applied on the current time when computing the interpolation"}                
                self:popParent(true) -- end collapsible Advanced settings
                
            self:popSizer() -- end sizer
        self:popParent(true) -- End Satmon page
        
        self:pushBookPage{caption="Outputs"} -- begin Outputs page.
            self:addBoolEntry{name="output.verbose",caption="Verbose outputs",handler=handlers.toggleVerbose}
            self:addBoolEntry{name="config.output.messagebox",caption="Use message boxes for important outputs",defaultValue=true}
            --self:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND} -- begin sizer
                osg_levels = {
                    {id=osg.NotifySeverity.ALWAYS,caption="Always"},
                    {id=osg.NotifySeverity.FATAL,caption="Fatal"},
                    {id=osg.NotifySeverity.WARN,caption="Warning"},
                    {id=osg.NotifySeverity.NOTICE,caption="Notice"},
                    {id=osg.NotifySeverity.INFO,caption="Info"},
                    {id=osg.NotifySeverity.DEBUG_INFO,caption="[debug] Info"},
                    {id=osg.NotifySeverity.DEBUG_FP,caption="[debug] FP"}
                }
                --self:addStateRadioEntry{name="config.output.level.wx",text="OSG Level",prop=1,states=osg_levels}
                self:addStateComboBoxEntry{name="config.output.level.osg",caption="OSG Level",prop=1,states=osg_levels,handler=handlers.updateOsgLog}
                self:addStateComboBoxEntry{name="config.output.level.osgearth",caption="OSG Earth Level",prop=1,states=osg_levels,handler=handlers.updateOsgEarthLog}
                 wx_levels = {
                    {id=wx.wxLOG_FatalError,caption="Fatal error"},
                    {id=wx.wxLOG_Error,caption="Error"},
                    {id=wx.wxLOG_Warning,caption="Warning"},
                    {id=wx.wxLOG_Message,caption="Message"},
                    {id=wx.wxLOG_Status,caption="Status"},
                    {id=wx.wxLOG_Info,caption="Info"},
                    {id=wx.wxLOG_Debug,caption="Debug"},
                    {id=wx.wxLOG_Trace,caption="Trace"},
                }
                --self:addStateRadioEntry{name="config.output.level.wx",text="wxWidgets Level",prop=1,states=wx_levels}
                self:addStateComboBoxEntry{name="config.output.level.wx",caption="wxWidgets Level",prop=1,states=wx_levels,handler=handlers.updateWxLog}
            
            --self:popSizer() -- end sizer
            
            
        self:popParent(true) -- End Outputs page
        
        self:pushBookPage{caption="Models"} -- begin Models page.
            self:pushSizer{orient=wx.wxVERTICAL,text="Import settings",flags=wx.wxALL+wx.wxEXPAND} -- begin sizer
                self:addBoolEntry{name="config.model.tri_strip.enabled",caption="Tri-strip geometries",defaultValue=true}
                self:addDoubleEntry{name="config.model.tri_strip.vertex_threshold",caption="     Vertex threshold",range={0.000000,10.000000},defaultValue=0.0001}
                self:addDoubleEntry{name="config.model.tri_strip.angular_threshold",caption="     Normal angular threshold",range={0.0,90.0},defaultValue=45.0}
                self:addBoolEntry{name="config.model.normalize.enabled",caption="Normalize normals",defaultValue=true}
                self:addBoolEntry{name="config.model.kdtrees.enabled",caption="Generate Kd-trees",defaultValue=false}
            self:popSizer() -- end sizer
            
        self:popParent(true) -- End Models page
        
        
        self:pushBookPage{caption="Alarms"} -- begin Alarms  page.
            self:addStaticText{text="This section is dedicated to alarm settings."}
        self:popParent(true) -- End Alarms page
        
        self:pushBookSubPage{caption="Status colors"} -- begin Colors subpage.
            self:addStaticText{text="Specify here the colors that should be used for default alarm status report:"}
            self:addSpacer{size=5}
            
            -- this sub page is for the alarms colors:
            -- the name of those entries here is the name used to save the detail in the app config file.
            self:addColorEntry{name="config.alarms.status.nominal_color",caption="Nominal Color",defaultValue=osg.Vec4f(1.000000,1.000000,1.000000,1.000000),alphaCaption="Opacity"}
            self:addColorEntry{name="config.alarms.status.static_color",caption="Static Color",defaultValue=osg.Vec4f(0.000000,0.000000,1.000000,1.000000),alphaCaption="Opacity"}
            self:addColorEntry{name="config.alarms.status.warning_color",caption="Warning Color",defaultValue=osg.Vec4f(1.000000,1.000000,0.000000,1.000000),alphaCaption="Opacity",handler=handlers.updateWarningMaterial}
            self:addColorEntry{name="config.alarms.status.critical_color",caption="Critical Color",defaultValue=osg.Vec4f(1.000000,0.000000,0.000000,1.000000),alphaCaption="Opacity",handler=handlers.updateCriticalMaterial}
            
        self:popParent(true) -- End Colors subpage
    
    self:popParent() -- End treebook

end

guitools.registerInterface(interface)

