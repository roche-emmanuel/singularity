module("plug.about.gui",package.seeall)

require("general","guitools")
require("plug.about.gui.handlers")

interface = guitools.prepareInterface{
menu="Help",
name="About...",
refreshWindow=false,
refreshProject=false,
dockable=false,
minsize=wx.wxSize(360,230),
fixedsize=true,
version=8
}

function interface:buildInterface()
    -- Implement interface construction here.
    local win = self:addHTMLWindow{prop=1,flags=wx.wxEXPAND,border=0}
    
    -- Retrieve the version numbers from the version file:
    local f = io.open(giCommon.Engine.getRootDir().."data/version","r")
    local str = f:read("*a");
    f:close()
    
    --wx.wxLogMessage("Version file content is: "..str)
    
    local values = {}
    local keys={"major","minor","release","build"}
    for k1,v1 in pairs(keys) do
        for v in string.gmatch(str,"ng3dv_".. v1 .."=([0-9]+)") do
            values[v1] = v
            --wx.wxLogMessage("Found value ".. v.." for key ".. v1)
        end
    end
      
    local pcode = {}
    pcode.linux64 = "Linux 64"
    pcode.mingw32 = "Win32"
    pcode.mingw64 = "Win64"
    
    -- Load page content:
    local content = [[<html>
<body bgcolor="#FFFFFF">
    <table cellspacing=3 cellpadding=4 width="100%">
		<tr>
            <td bgcolor="#101010">
                <center>
                    <font size=+2 color="#FFFFFF"><b><br>NG3DV Framework <br></b>Version ]] .. values.major .. [[.]] .. values.minor .. [[.]] .. values.release .. [[ - build ]] .. values.build .. [[ <br>]] .. (pcode[platform] or platform) .. [[ Edition</font>
                </center>
            </td>
		</tr>
		<tr>
            <td bgcolor="#73A183">
                <b><font size=+1>Copyright (C) 2009-2011 INSYEN AG</font></b><p>
                <font size=-1>
                <table cellpadding=0 cellspacing=0 width="100%">
                    <tr>
                        <td width="65%">Author:<br>Emmanuel Roche<p>
                        </td>
                        <td valign=top>
                            <img src="]].. giCommon.Engine.getRootDir() .. [[data/logo.png">
                        </td>
                    </tr>
                </table>
                <font size=1>Website: http://www.insyen.org/</font>
                </font>
            </td>
		</tr>
    </table>
</body>
</html> 
]]

    --content = "<html><body><p>Hello world</p></body></html>"
    
    win:SetBorders(0)
    win:SetPage(content)    
    
    win:SetMinSize(wx.wxSize(360,200)) --win:GetInternalRepresentation():GetWidth(),win:GetInternalRepresentation():GetHeight())
    
    self:getCurrentSizer():Layout()
end

guitools.registerInterface(interface)

