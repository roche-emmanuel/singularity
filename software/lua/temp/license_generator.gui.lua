module("licensegenerator.gui",package.seeall)

require("general","guitools")
require("licensegenerator.gui.handlers")

interface = guitools.prepareInterface{
menu="Help",
name="License generator",
refreshWindow=false,
refreshProject=false,
accel="Ctrl+Shift+L",
dockable=false,
}

interface.details = this_env:getProject():readAny("generator_settings",giScript.AnyMap());
interface.right_configs = this_env:getProject():readAny("right_configs",giScript.AnyVector());
interface.hostid_configs = this_env:getProject():readAny("hostid_configs",giScript.AnyVector());

for i=0,#interface.right_configs-1 do
    interface.right_configs[i].rights:sortOnStringKey("name")
end

licensePlug = general.tools.loadPluginLibrary("licensing")


function interface:buildInterface()
    self:setDefaultProvider(self:createProvider{simplemap=self.details})
    
    self:pushNotebook{prop=1,flags=wx.wxALL+wx.wxEXPAND} -- begin notebook.
        self:pushBookPage{caption="Generator"} -- begin Generator page.
            self.cbook = self:pushChoicebook{prop=0,flags=wx.wxALL+wx.wxEXPAND} -- begin choicebook.
                if licensePlug then
                    this_env:loadNamespace("giSecurity")
                    self:pushBookPage{caption="License Plug"} -- begin License Plug page.
                        self:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND} -- begin sizer
                            self:addStaticText{text="Admin password:"}
                            self.plug_pass = self:addTextCtrl{style=wx.wxTE_PASSWORD,flags=wx.wxEXPAND,prop=1}
                        self:popSizer() -- end sizer
                        
                        --self:addStringEntry{name="admin_password_plug",caption="Admin password",style=wx.wxTE_PASSWORD,provider=self:createProvider{simplemap=giScript.AnyMap()}}
                        --self:addFileEntry{name="plug_file",caption="Plug file",message="Select the local license plug file",wildcard="LicensePlug.plug"}
                        
                    self:popParent(true) -- End License Plug page
                else
                    wx.wxLogMessage("The license plugin could not be found, local license generation support will not be available.");
                end
                self:pushBookPage{caption="License Server"} -- begin License Server page.
                    self:pushSizer{orient=wx.wxHORIZONTAL,prop=0,flags=wx.wxEXPAND} -- begin sizer
                        self:addStaticText{text="Admin password:"}
                        self.server_pass = self:addTextCtrl{style=wx.wxTE_PASSWORD,flags=wx.wxEXPAND,prop=1}
                    self:popSizer() -- end sizer
                    
                    --self:addStringEntry{name="admin_password",caption="Admin password",style=wx.wxTE_PASSWORD,provider=self:createProvider{simplemap=giScript.AnyMap()}}
                    self:addStringEntry{name="server_name",caption="Server"}
                    self:addStringEntry{name="server_port",caption="Port"}
                    
                self:popParent(true) -- End License Server page
                
            self:popParent() -- End choicebook

        self:popParent(true) -- End Generator page
        self:pushBookPage{caption="Settings"} -- begin Settings page.
            self:addStringEntry{name="owner",caption="Owner"}
            self:addStringEntry{name="owner_email",caption="Owner Email",expanding=true}
            self:addStringEntry{name="comment",caption="License comment",expanding=true}
            self:addDatetimeEntry{name="validity",caption="Validity limit",notime=true}
            self:addStringEntry{name="password",caption="Password",style=wx.wxTE_PASSWORD,provider=self:createProvider{simplemap=giScript.AnyMap()}}
            self:addStringEntry{name="password2",caption="Confirm password",style=wx.wxTE_PASSWORD,provider=self:createProvider{simplemap=giScript.AnyMap()}}
            
        self:popParent(true) -- End Settings page
        self:pushBookPage{caption="Rights"} -- begin Rights page.
            
            self:addComboBoxSelector{text="Known configuration",vector=self.right_configs,flags=wx.wxALL+wx.wxEXPAND,actions={{name="delete"},{name="add"},{name="duplicate"}},actionHandler=handlers.onCfgAction}
            self.rights_provider = self:getDefaultProvider();
            local cb = self:addCheckedListEntry{name="rights",caption="Available rights",prop=1,flags=wx.wxALL,style=wx.wxLB_EXTENDED,
            activateHandler=handlers.onEditRight}
            self:pushSizer{orient=wx.wxHORIZONTAL,flags=wx.wxEXPAND} -- begin sizer
                self:addActionButtonEntry{ctrl=cb,lname="rights",src="select_all",name="select_all",caption="Select all",flags=wx.wxALL,handler=handlers.onButtonEvent}
                self:addActionButtonEntry{ctrl=cb,lname="rights",src="select_invert",name="select_invert",caption="Invert",flags=wx.wxALL,handler=handlers.onButtonEvent}
                self:addActionButtonEntry{ctrl=cb,lname="rights",src="select_none",name="select_none",caption="Unselect all",flags=wx.wxALL,handler=handlers.onButtonEvent}
                self:addSpacer{prop=1}
                --self:addActionButtonEntry{ctrl=cb,type="rights",src="save",name="rights_save",caption="Save config",flags=wx.wxALL,handler=handlers.onButtonEvent}
                self:addActionButtonEntry{ctrl=cb,lname="rights",src="remove",name="remove",caption="Remove",flags=wx.wxALL,handler=handlers.onButtonEvent}
                self:addActionButtonEntry{ctrl=cb,lname="rights",src="add",name="add",caption="Add",flags=wx.wxALL,handler=handlers.onButtonEvent}
            self:popSizer() -- end sizer
            
            
        self:popParent(true) -- End Rights page
        self:pushBookPage{caption="Host IDs"} -- begin Rights page.

            self:addComboBoxSelector{text="Known configuration",vector=self.hostid_configs,flags=wx.wxALL+wx.wxEXPAND,actions={{name="delete"},{name="add"},{name="duplicate"}},actionHandler=handlers.onCfgAction}
            self.hostids_provider = self:getDefaultProvider();
            local cb = self:addCheckedListEntry{name="hostids",caption="Available host IDs",prop=1,flags=wx.wxALL,style=wx.wxLB_EXTENDED,
            activateHandler=handlers.onEditHost}
            self:pushSizer{orient=wx.wxHORIZONTAL,flags=wx.wxEXPAND} -- begin sizer
                self:addActionButtonEntry{ctrl=cb,lname="hostids",src="select_all",name="select_all",caption="Select all",flags=wx.wxALL,handler=handlers.onButtonEvent}
                self:addActionButtonEntry{ctrl=cb,lname="hostids",src="select_invert",name="select_invert",caption="Invert",flags=wx.wxALL,handler=handlers.onButtonEvent}
                self:addActionButtonEntry{ctrl=cb,lname="hostids",src="select_none",name="select_none",caption="Unselect all",flags=wx.wxALL,handler=handlers.onButtonEvent}
                self:addSpacer{prop=1}
                --self:addActionButtonEntry{ctrl=cb,type="hostids",src="save",name="hostids_save",caption="Save config",flags=wx.wxALL,handler=handlers.onButtonEvent}
                self:addActionButtonEntry{ctrl=cb,lname="hostids",src="remove",name="remove",caption="Remove",flags=wx.wxALL,handler=handlers.onButtonEvent}
                self:addActionButtonEntry{ctrl=cb,lname="hostids",src="add",name="add",caption="Add",flags=wx.wxALL,handler=handlers.onButtonEvent}
            self:popSizer() -- end sizer
            
            
        self:popParent(true) -- End hosts page        

    self:popParent() -- End notebook
    self:pushSizer{orient=wx.wxHORIZONTAL,flags=wx.wxALIGN_RIGHT} -- begin sizer
        self:addActionButtonEntry{name="generate",caption="Generate",provider=self:createProvider{simplemap=self.details},handler=handlers.onGenerate}
        
    self:popSizer() -- end sizer
end

if licensePlug then
guitools.registerInterface(interface)
else
    wx.wxLogMessage("The license plugin could not be found, license generation support will not be available.");
end
