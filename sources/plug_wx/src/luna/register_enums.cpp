#include <plug_common.h>

#include <wx/accel.h>
#include <wx/animate.h>
#include <wx/any.h>
#include <wx/ribbon/art.h>
#include <wx/aui/auibar.h>
#include <wx/msw/ole/automtn.h>
#include <wx/base64.h>
#include <wx/brush.h>
#include <wx/ribbon/buttonbar.h>
#include <wx/calctrl.h>
#include <wx/checkbox.h>
#include <wx/cmdline.h>
#include <wx/cmndata.h>
#include <wx/colour.h>
#include <wx/control.h>
#include <wx/convauto.h>
#include <wx/dataview.h>
#include <wx/dc.h>
#include <wx/defs.h>
#include <wx/dialog.h>
#include <wx/dir.h>
#include <wx/dnd.h>
#include <wx/aui/dockart.h>
#include <wx/dynlib.h>
#include <wx/event.h>
#include <wx/fdrepdlg.h>
#include <wx/ffile.h>
#include <wx/filedlg.h>
#include <wx/filefn.h>
#include <wx/filename.h>
#include <wx/filesys.h>
#include <wx/font.h>
#include <wx/aui/framemanager.h>
#include <wx/fswatcher.h>
#include <wx/ribbon/gallery.h>
#include <wx/gdicmn.h>
#include <wx/geometry.h>
#include <wx/glcanvas.h>
#include <wx/graphics.h>
#include <wx/grid.h>
#include <wx/headercol.h>
#include <wx/image.h>
#include <wx/imaglist.h>
#include <wx/intl.h>
#include <wx/ipcbase.h>
#include <wx/language.h>
#include <wx/layout.h>
#include <wx/laywin.h>
#include <wx/listctrl.h>
#include <wx/log.h>
#include <wx/mediactrl.h>
#include <wx/mousestate.h>
#include <wx/msgqueue.h>
#include <wx/notebook.h>
#include <wx/odcombo.h>
#include <wx/pen.h>
#include <wx/platinfo.h>
#include <wx/power.h>
#include <wx/print.h>
#include <wx/process.h>
#include <wx/propdlg.h>
#include <wx/propgrid/property.h>
#include <wx/propgrid/propgrid.h>
#include <wx/propgrid/propgridpagestate.h>
#include <wx/protocol/protocol.h>
#include <wx/regex.h>
#include <wx/region.h>
#include <wx/renderer.h>
#include <wx/richtext/richtextbuffer.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/richtooltip.h>
#include <wx/sashwin.h>
#include <wx/sckipc.h>
#include <wx/scrolwin.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/socket.h>
#include <wx/splitter.h>
#include <wx/stockitem.h>
#include <wx/stream.h>
#include <wx/tarstrm.h>
#include <wx/textctrl.h>
#include <wx/textfile.h>
#include <wx/thread.h>
#include <wx/tokenzr.h>
#include <wx/toplevel.h>
#include <wx/treebase.h>
#include <wx/txtstrm.h>
#include <wx/uri.h>
#include <wx/url.h>
#include <wx/utils.h>
#include <wx/valnum.h>
#include <wx/valtext.h>
#include <wx/volume.h>
#include <wx/webview.h>
#include <wx/window.h>
#include <wx/xml/xml.h>
#include <wx/xrc/xmlres.h>
#include <wx/zipstrm.h>
#include <wx/zstream.h>
#include <wx/bookctrl.h>
#include <wx/combo.h>
#include <wx/config.h>
#include <wx/dataobj.h>
#include <wx/datetime.h>
#include <wx/eventfilter.h>
#include <wx/file.h>
#include <wx/protocol/ftp.h>
#include <wx/numformatter.h>
#include <wx/propgrid/propgridiface.h>
#include <wx/msw/registry.h>
#include <wx/stdpaths.h>
#include <wx/withimages.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum wxAcceleratorEntryFlags

	lua_pushnumber(L,wxACCEL_NORMAL); lua_setfield(L,-2,"wxACCEL_NORMAL");
	lua_pushnumber(L,wxACCEL_ALT); lua_setfield(L,-2,"wxACCEL_ALT");
	lua_pushnumber(L,wxACCEL_CTRL); lua_setfield(L,-2,"wxACCEL_CTRL");
	lua_pushnumber(L,wxACCEL_SHIFT); lua_setfield(L,-2,"wxACCEL_SHIFT");
	lua_pushnumber(L,wxACCEL_RAW_CTRL); lua_setfield(L,-2,"wxACCEL_RAW_CTRL");
	lua_pushnumber(L,wxACCEL_CMD); lua_setfield(L,-2,"wxACCEL_CMD");

	lua_setfield(L,-2,"wxAcceleratorEntryFlags");

	lua_pushnumber(L,wxACCEL_NORMAL); lua_setfield(L,-2,"wxACCEL_NORMAL");
	lua_pushnumber(L,wxACCEL_ALT); lua_setfield(L,-2,"wxACCEL_ALT");
	lua_pushnumber(L,wxACCEL_CTRL); lua_setfield(L,-2,"wxACCEL_CTRL");
	lua_pushnumber(L,wxACCEL_SHIFT); lua_setfield(L,-2,"wxACCEL_SHIFT");
	lua_pushnumber(L,wxACCEL_RAW_CTRL); lua_setfield(L,-2,"wxACCEL_RAW_CTRL");
	lua_pushnumber(L,wxACCEL_CMD); lua_setfield(L,-2,"wxACCEL_CMD");


	lua_newtable(L); // enum wxAnimationType

	lua_pushnumber(L,wxANIMATION_TYPE_INVALID); lua_setfield(L,-2,"wxANIMATION_TYPE_INVALID");
	lua_pushnumber(L,wxANIMATION_TYPE_GIF); lua_setfield(L,-2,"wxANIMATION_TYPE_GIF");
	lua_pushnumber(L,wxANIMATION_TYPE_ANI); lua_setfield(L,-2,"wxANIMATION_TYPE_ANI");
	lua_pushnumber(L,wxANIMATION_TYPE_ANY); lua_setfield(L,-2,"wxANIMATION_TYPE_ANY");

	lua_setfield(L,-2,"wxAnimationType");

	lua_pushnumber(L,wxANIMATION_TYPE_INVALID); lua_setfield(L,-2,"wxANIMATION_TYPE_INVALID");
	lua_pushnumber(L,wxANIMATION_TYPE_GIF); lua_setfield(L,-2,"wxANIMATION_TYPE_GIF");
	lua_pushnumber(L,wxANIMATION_TYPE_ANI); lua_setfield(L,-2,"wxANIMATION_TYPE_ANI");
	lua_pushnumber(L,wxANIMATION_TYPE_ANY); lua_setfield(L,-2,"wxANIMATION_TYPE_ANY");


	lua_newtable(L); // enum unnamed_0

	lua_pushnumber(L,WX_ANY_VALUE_BUFFER_SIZE); lua_setfield(L,-2,"WX_ANY_VALUE_BUFFER_SIZE");

	lua_setfield(L,-2,"unnamed_0");

	lua_pushnumber(L,WX_ANY_VALUE_BUFFER_SIZE); lua_setfield(L,-2,"WX_ANY_VALUE_BUFFER_SIZE");


	lua_newtable(L); // enum wxRibbonArtSetting

	lua_pushnumber(L,wxRIBBON_ART_TAB_SEPARATION_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_TAB_SEPARATION_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_BORDER_LEFT_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_BORDER_LEFT_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_BORDER_TOP_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_BORDER_TOP_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_BORDER_RIGHT_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_BORDER_RIGHT_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_BORDER_BOTTOM_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_BORDER_BOTTOM_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_X_SEPARATION_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_X_SEPARATION_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_Y_SEPARATION_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_Y_SEPARATION_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_GROUP_SEPARATION_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_GROUP_SEPARATION_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BITMAP_PADDING_LEFT_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BITMAP_PADDING_LEFT_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BITMAP_PADDING_RIGHT_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BITMAP_PADDING_RIGHT_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BITMAP_PADDING_TOP_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BITMAP_PADDING_TOP_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BITMAP_PADDING_BOTTOM_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BITMAP_PADDING_BOTTOM_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_LABEL_FONT); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_LABEL_FONT");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_LABEL_FONT); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_LABEL_FONT");
	lua_pushnumber(L,wxRIBBON_ART_TAB_LABEL_FONT); lua_setfield(L,-2,"wxRIBBON_ART_TAB_LABEL_FONT");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_LABEL_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_LABEL_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_HOVER_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_HOVER_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_ACTIVE_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_ACTIVE_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_HOVER_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_HOVER_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_FACE_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_FACE_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_HOVER_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_HOVER_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_HOVER_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_HOVER_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_HOVER_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_HOVER_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_HOVER_FACE_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_HOVER_FACE_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_FACE_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_FACE_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_DISABLED_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_DISABLED_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_DISABLED_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_DISABLED_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_DISABLED_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_DISABLED_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_DISABLED_FACE_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_DISABLED_FACE_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_ITEM_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_ITEM_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_LABEL_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_LABEL_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_SEPARATOR_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_SEPARATOR_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_SEPARATOR_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_SEPARATOR_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_CTRL_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_CTRL_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_CTRL_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_CTRL_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_HOVER_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_HOVER_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_HOVER_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_HOVER_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_HOVER_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_HOVER_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_BORDER_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_BORDER_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_MINIMISED_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_MINIMISED_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_MINIMISED_BORDER_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_MINIMISED_BORDER_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_LABEL_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_LABEL_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_LABEL_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_LABEL_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_LABEL_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_LABEL_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_HOVER_LABEL_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_HOVER_LABEL_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_HOVER_LABEL_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_HOVER_LABEL_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_HOVER_LABEL_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_HOVER_LABEL_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_MINIMISED_LABEL_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_MINIMISED_LABEL_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_HOVER_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_HOVER_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_HOVER_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_HOVER_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_HOVER_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_HOVER_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOLBAR_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOLBAR_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOLBAR_HOVER_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOLBAR_HOVER_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOLBAR_FACE_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOLBAR_FACE_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_HOVER_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_HOVER_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_HOVER_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_HOVER_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_HOVER_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_HOVER_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_GRADIENT_COLOUR");

	lua_setfield(L,-2,"wxRibbonArtSetting");

	lua_pushnumber(L,wxRIBBON_ART_TAB_SEPARATION_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_TAB_SEPARATION_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_BORDER_LEFT_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_BORDER_LEFT_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_BORDER_TOP_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_BORDER_TOP_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_BORDER_RIGHT_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_BORDER_RIGHT_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_BORDER_BOTTOM_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_BORDER_BOTTOM_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_X_SEPARATION_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_X_SEPARATION_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_Y_SEPARATION_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_Y_SEPARATION_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_GROUP_SEPARATION_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_GROUP_SEPARATION_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BITMAP_PADDING_LEFT_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BITMAP_PADDING_LEFT_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BITMAP_PADDING_RIGHT_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BITMAP_PADDING_RIGHT_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BITMAP_PADDING_TOP_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BITMAP_PADDING_TOP_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BITMAP_PADDING_BOTTOM_SIZE); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BITMAP_PADDING_BOTTOM_SIZE");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_LABEL_FONT); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_LABEL_FONT");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_LABEL_FONT); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_LABEL_FONT");
	lua_pushnumber(L,wxRIBBON_ART_TAB_LABEL_FONT); lua_setfield(L,-2,"wxRIBBON_ART_TAB_LABEL_FONT");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_LABEL_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_LABEL_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_HOVER_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_HOVER_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_ACTIVE_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_ACTIVE_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_HOVER_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_HOVER_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_FACE_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_FACE_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_HOVER_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_HOVER_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_HOVER_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_HOVER_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_HOVER_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_HOVER_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_HOVER_FACE_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_HOVER_FACE_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_FACE_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_FACE_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_DISABLED_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_DISABLED_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_DISABLED_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_DISABLED_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_DISABLED_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_DISABLED_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_BUTTON_DISABLED_FACE_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_BUTTON_DISABLED_FACE_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_GALLERY_ITEM_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_GALLERY_ITEM_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_LABEL_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_LABEL_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_SEPARATOR_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_SEPARATOR_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_SEPARATOR_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_SEPARATOR_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_CTRL_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_CTRL_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_CTRL_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_CTRL_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_HOVER_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_HOVER_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_HOVER_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_HOVER_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_HOVER_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_HOVER_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TAB_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TAB_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_BORDER_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_BORDER_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_MINIMISED_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_MINIMISED_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_MINIMISED_BORDER_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_MINIMISED_BORDER_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_LABEL_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_LABEL_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_LABEL_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_LABEL_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_LABEL_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_LABEL_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_HOVER_LABEL_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_HOVER_LABEL_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_HOVER_LABEL_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_HOVER_LABEL_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_HOVER_LABEL_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_HOVER_LABEL_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_MINIMISED_LABEL_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_MINIMISED_LABEL_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_HOVER_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_HOVER_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_HOVER_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_HOVER_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_PAGE_HOVER_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_PAGE_HOVER_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOLBAR_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOLBAR_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOLBAR_HOVER_BORDER_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOLBAR_HOVER_BORDER_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOLBAR_FACE_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOLBAR_FACE_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_HOVER_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_HOVER_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_HOVER_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_HOVER_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_HOVER_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_HOVER_BACKGROUND_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_TOP_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_TOP_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_GRADIENT_COLOUR); lua_setfield(L,-2,"wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_GRADIENT_COLOUR");


	lua_newtable(L); // enum wxRibbonScrollButtonStyle

	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_LEFT); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_LEFT");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_RIGHT); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_RIGHT");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_UP); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_UP");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_DOWN); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_DOWN");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_DIRECTION_MASK); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_DIRECTION_MASK");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_NORMAL); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_NORMAL");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_HOVERED); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_HOVERED");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_ACTIVE); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_ACTIVE");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_STATE_MASK); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_STATE_MASK");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_FOR_OTHER); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_FOR_OTHER");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_FOR_TABS); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_FOR_TABS");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_FOR_PAGE); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_FOR_PAGE");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_FOR_MASK); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_FOR_MASK");

	lua_setfield(L,-2,"wxRibbonScrollButtonStyle");

	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_LEFT); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_LEFT");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_RIGHT); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_RIGHT");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_UP); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_UP");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_DOWN); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_DOWN");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_DIRECTION_MASK); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_DIRECTION_MASK");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_NORMAL); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_NORMAL");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_HOVERED); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_HOVERED");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_ACTIVE); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_ACTIVE");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_STATE_MASK); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_STATE_MASK");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_FOR_OTHER); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_FOR_OTHER");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_FOR_TABS); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_FOR_TABS");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_FOR_PAGE); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_FOR_PAGE");
	lua_pushnumber(L,wxRIBBON_SCROLL_BTN_FOR_MASK); lua_setfield(L,-2,"wxRIBBON_SCROLL_BTN_FOR_MASK");


	lua_newtable(L); // enum wxRibbonButtonKind

	lua_pushnumber(L,wxRIBBON_BUTTON_NORMAL); lua_setfield(L,-2,"wxRIBBON_BUTTON_NORMAL");
	lua_pushnumber(L,wxRIBBON_BUTTON_DROPDOWN); lua_setfield(L,-2,"wxRIBBON_BUTTON_DROPDOWN");
	lua_pushnumber(L,wxRIBBON_BUTTON_HYBRID); lua_setfield(L,-2,"wxRIBBON_BUTTON_HYBRID");
	lua_pushnumber(L,wxRIBBON_BUTTON_TOGGLE); lua_setfield(L,-2,"wxRIBBON_BUTTON_TOGGLE");

	lua_setfield(L,-2,"wxRibbonButtonKind");

	lua_pushnumber(L,wxRIBBON_BUTTON_NORMAL); lua_setfield(L,-2,"wxRIBBON_BUTTON_NORMAL");
	lua_pushnumber(L,wxRIBBON_BUTTON_DROPDOWN); lua_setfield(L,-2,"wxRIBBON_BUTTON_DROPDOWN");
	lua_pushnumber(L,wxRIBBON_BUTTON_HYBRID); lua_setfield(L,-2,"wxRIBBON_BUTTON_HYBRID");
	lua_pushnumber(L,wxRIBBON_BUTTON_TOGGLE); lua_setfield(L,-2,"wxRIBBON_BUTTON_TOGGLE");


	lua_newtable(L); // enum wxAuiToolBarStyle

	lua_pushnumber(L,wxAUI_TB_TEXT); lua_setfield(L,-2,"wxAUI_TB_TEXT");
	lua_pushnumber(L,wxAUI_TB_NO_TOOLTIPS); lua_setfield(L,-2,"wxAUI_TB_NO_TOOLTIPS");
	lua_pushnumber(L,wxAUI_TB_NO_AUTORESIZE); lua_setfield(L,-2,"wxAUI_TB_NO_AUTORESIZE");
	lua_pushnumber(L,wxAUI_TB_GRIPPER); lua_setfield(L,-2,"wxAUI_TB_GRIPPER");
	lua_pushnumber(L,wxAUI_TB_OVERFLOW); lua_setfield(L,-2,"wxAUI_TB_OVERFLOW");
	lua_pushnumber(L,wxAUI_TB_VERTICAL); lua_setfield(L,-2,"wxAUI_TB_VERTICAL");
	lua_pushnumber(L,wxAUI_TB_HORZ_LAYOUT); lua_setfield(L,-2,"wxAUI_TB_HORZ_LAYOUT");
	lua_pushnumber(L,wxAUI_TB_HORIZONTAL); lua_setfield(L,-2,"wxAUI_TB_HORIZONTAL");
	lua_pushnumber(L,wxAUI_TB_HORZ_TEXT); lua_setfield(L,-2,"wxAUI_TB_HORZ_TEXT");
	lua_pushnumber(L,wxAUI_ORIENTATION_MASK); lua_setfield(L,-2,"wxAUI_ORIENTATION_MASK");
	lua_pushnumber(L,wxAUI_TB_DEFAULT_STYLE); lua_setfield(L,-2,"wxAUI_TB_DEFAULT_STYLE");

	lua_setfield(L,-2,"wxAuiToolBarStyle");

	lua_pushnumber(L,wxAUI_TB_TEXT); lua_setfield(L,-2,"wxAUI_TB_TEXT");
	lua_pushnumber(L,wxAUI_TB_NO_TOOLTIPS); lua_setfield(L,-2,"wxAUI_TB_NO_TOOLTIPS");
	lua_pushnumber(L,wxAUI_TB_NO_AUTORESIZE); lua_setfield(L,-2,"wxAUI_TB_NO_AUTORESIZE");
	lua_pushnumber(L,wxAUI_TB_GRIPPER); lua_setfield(L,-2,"wxAUI_TB_GRIPPER");
	lua_pushnumber(L,wxAUI_TB_OVERFLOW); lua_setfield(L,-2,"wxAUI_TB_OVERFLOW");
	lua_pushnumber(L,wxAUI_TB_VERTICAL); lua_setfield(L,-2,"wxAUI_TB_VERTICAL");
	lua_pushnumber(L,wxAUI_TB_HORZ_LAYOUT); lua_setfield(L,-2,"wxAUI_TB_HORZ_LAYOUT");
	lua_pushnumber(L,wxAUI_TB_HORIZONTAL); lua_setfield(L,-2,"wxAUI_TB_HORIZONTAL");
	lua_pushnumber(L,wxAUI_TB_HORZ_TEXT); lua_setfield(L,-2,"wxAUI_TB_HORZ_TEXT");
	lua_pushnumber(L,wxAUI_ORIENTATION_MASK); lua_setfield(L,-2,"wxAUI_ORIENTATION_MASK");
	lua_pushnumber(L,wxAUI_TB_DEFAULT_STYLE); lua_setfield(L,-2,"wxAUI_TB_DEFAULT_STYLE");


	lua_newtable(L); // enum wxAuiToolBarArtSetting

	lua_pushnumber(L,wxAUI_TBART_SEPARATOR_SIZE); lua_setfield(L,-2,"wxAUI_TBART_SEPARATOR_SIZE");
	lua_pushnumber(L,wxAUI_TBART_GRIPPER_SIZE); lua_setfield(L,-2,"wxAUI_TBART_GRIPPER_SIZE");
	lua_pushnumber(L,wxAUI_TBART_OVERFLOW_SIZE); lua_setfield(L,-2,"wxAUI_TBART_OVERFLOW_SIZE");

	lua_setfield(L,-2,"wxAuiToolBarArtSetting");

	lua_pushnumber(L,wxAUI_TBART_SEPARATOR_SIZE); lua_setfield(L,-2,"wxAUI_TBART_SEPARATOR_SIZE");
	lua_pushnumber(L,wxAUI_TBART_GRIPPER_SIZE); lua_setfield(L,-2,"wxAUI_TBART_GRIPPER_SIZE");
	lua_pushnumber(L,wxAUI_TBART_OVERFLOW_SIZE); lua_setfield(L,-2,"wxAUI_TBART_OVERFLOW_SIZE");


	lua_newtable(L); // enum wxAuiToolBarToolTextOrientation

	lua_pushnumber(L,wxAUI_TBTOOL_TEXT_LEFT); lua_setfield(L,-2,"wxAUI_TBTOOL_TEXT_LEFT");
	lua_pushnumber(L,wxAUI_TBTOOL_TEXT_RIGHT); lua_setfield(L,-2,"wxAUI_TBTOOL_TEXT_RIGHT");
	lua_pushnumber(L,wxAUI_TBTOOL_TEXT_TOP); lua_setfield(L,-2,"wxAUI_TBTOOL_TEXT_TOP");
	lua_pushnumber(L,wxAUI_TBTOOL_TEXT_BOTTOM); lua_setfield(L,-2,"wxAUI_TBTOOL_TEXT_BOTTOM");

	lua_setfield(L,-2,"wxAuiToolBarToolTextOrientation");

	lua_pushnumber(L,wxAUI_TBTOOL_TEXT_LEFT); lua_setfield(L,-2,"wxAUI_TBTOOL_TEXT_LEFT");
	lua_pushnumber(L,wxAUI_TBTOOL_TEXT_RIGHT); lua_setfield(L,-2,"wxAUI_TBTOOL_TEXT_RIGHT");
	lua_pushnumber(L,wxAUI_TBTOOL_TEXT_TOP); lua_setfield(L,-2,"wxAUI_TBTOOL_TEXT_TOP");
	lua_pushnumber(L,wxAUI_TBTOOL_TEXT_BOTTOM); lua_setfield(L,-2,"wxAUI_TBTOOL_TEXT_BOTTOM");


	lua_newtable(L); // enum wxAutomationInstanceFlags


	lua_setfield(L,-2,"wxAutomationInstanceFlags");



	lua_newtable(L); // enum wxBase64DecodeMode

	lua_pushnumber(L,wxBase64DecodeMode_Strict); lua_setfield(L,-2,"wxBase64DecodeMode_Strict");
	lua_pushnumber(L,wxBase64DecodeMode_SkipWS); lua_setfield(L,-2,"wxBase64DecodeMode_SkipWS");
	lua_pushnumber(L,wxBase64DecodeMode_Relaxed); lua_setfield(L,-2,"wxBase64DecodeMode_Relaxed");

	lua_setfield(L,-2,"wxBase64DecodeMode");

	lua_pushnumber(L,wxBase64DecodeMode_Strict); lua_setfield(L,-2,"wxBase64DecodeMode_Strict");
	lua_pushnumber(L,wxBase64DecodeMode_SkipWS); lua_setfield(L,-2,"wxBase64DecodeMode_SkipWS");
	lua_pushnumber(L,wxBase64DecodeMode_Relaxed); lua_setfield(L,-2,"wxBase64DecodeMode_Relaxed");


	lua_newtable(L); // enum wxBrushStyle

	lua_pushnumber(L,wxBRUSHSTYLE_INVALID); lua_setfield(L,-2,"wxBRUSHSTYLE_INVALID");
	lua_pushnumber(L,wxBRUSHSTYLE_SOLID); lua_setfield(L,-2,"wxBRUSHSTYLE_SOLID");
	lua_pushnumber(L,wxBRUSHSTYLE_TRANSPARENT); lua_setfield(L,-2,"wxBRUSHSTYLE_TRANSPARENT");
	lua_pushnumber(L,wxBRUSHSTYLE_STIPPLE_MASK_OPAQUE); lua_setfield(L,-2,"wxBRUSHSTYLE_STIPPLE_MASK_OPAQUE");
	lua_pushnumber(L,wxBRUSHSTYLE_STIPPLE_MASK); lua_setfield(L,-2,"wxBRUSHSTYLE_STIPPLE_MASK");
	lua_pushnumber(L,wxBRUSHSTYLE_STIPPLE); lua_setfield(L,-2,"wxBRUSHSTYLE_STIPPLE");
	lua_pushnumber(L,wxBRUSHSTYLE_BDIAGONAL_HATCH); lua_setfield(L,-2,"wxBRUSHSTYLE_BDIAGONAL_HATCH");
	lua_pushnumber(L,wxBRUSHSTYLE_CROSSDIAG_HATCH); lua_setfield(L,-2,"wxBRUSHSTYLE_CROSSDIAG_HATCH");
	lua_pushnumber(L,wxBRUSHSTYLE_FDIAGONAL_HATCH); lua_setfield(L,-2,"wxBRUSHSTYLE_FDIAGONAL_HATCH");
	lua_pushnumber(L,wxBRUSHSTYLE_CROSS_HATCH); lua_setfield(L,-2,"wxBRUSHSTYLE_CROSS_HATCH");
	lua_pushnumber(L,wxBRUSHSTYLE_HORIZONTAL_HATCH); lua_setfield(L,-2,"wxBRUSHSTYLE_HORIZONTAL_HATCH");
	lua_pushnumber(L,wxBRUSHSTYLE_VERTICAL_HATCH); lua_setfield(L,-2,"wxBRUSHSTYLE_VERTICAL_HATCH");
	lua_pushnumber(L,wxBRUSHSTYLE_FIRST_HATCH); lua_setfield(L,-2,"wxBRUSHSTYLE_FIRST_HATCH");
	lua_pushnumber(L,wxBRUSHSTYLE_LAST_HATCH); lua_setfield(L,-2,"wxBRUSHSTYLE_LAST_HATCH");

	lua_setfield(L,-2,"wxBrushStyle");

	lua_pushnumber(L,wxBRUSHSTYLE_INVALID); lua_setfield(L,-2,"wxBRUSHSTYLE_INVALID");
	lua_pushnumber(L,wxBRUSHSTYLE_SOLID); lua_setfield(L,-2,"wxBRUSHSTYLE_SOLID");
	lua_pushnumber(L,wxBRUSHSTYLE_TRANSPARENT); lua_setfield(L,-2,"wxBRUSHSTYLE_TRANSPARENT");
	lua_pushnumber(L,wxBRUSHSTYLE_STIPPLE_MASK_OPAQUE); lua_setfield(L,-2,"wxBRUSHSTYLE_STIPPLE_MASK_OPAQUE");
	lua_pushnumber(L,wxBRUSHSTYLE_STIPPLE_MASK); lua_setfield(L,-2,"wxBRUSHSTYLE_STIPPLE_MASK");
	lua_pushnumber(L,wxBRUSHSTYLE_STIPPLE); lua_setfield(L,-2,"wxBRUSHSTYLE_STIPPLE");
	lua_pushnumber(L,wxBRUSHSTYLE_BDIAGONAL_HATCH); lua_setfield(L,-2,"wxBRUSHSTYLE_BDIAGONAL_HATCH");
	lua_pushnumber(L,wxBRUSHSTYLE_CROSSDIAG_HATCH); lua_setfield(L,-2,"wxBRUSHSTYLE_CROSSDIAG_HATCH");
	lua_pushnumber(L,wxBRUSHSTYLE_FDIAGONAL_HATCH); lua_setfield(L,-2,"wxBRUSHSTYLE_FDIAGONAL_HATCH");
	lua_pushnumber(L,wxBRUSHSTYLE_CROSS_HATCH); lua_setfield(L,-2,"wxBRUSHSTYLE_CROSS_HATCH");
	lua_pushnumber(L,wxBRUSHSTYLE_HORIZONTAL_HATCH); lua_setfield(L,-2,"wxBRUSHSTYLE_HORIZONTAL_HATCH");
	lua_pushnumber(L,wxBRUSHSTYLE_VERTICAL_HATCH); lua_setfield(L,-2,"wxBRUSHSTYLE_VERTICAL_HATCH");
	lua_pushnumber(L,wxBRUSHSTYLE_FIRST_HATCH); lua_setfield(L,-2,"wxBRUSHSTYLE_FIRST_HATCH");
	lua_pushnumber(L,wxBRUSHSTYLE_LAST_HATCH); lua_setfield(L,-2,"wxBRUSHSTYLE_LAST_HATCH");


	lua_newtable(L); // enum wxRibbonButtonBarButtonState

	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_SMALL); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_SMALL");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_MEDIUM); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_MEDIUM");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_LARGE); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_LARGE");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_SIZE_MASK); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_SIZE_MASK");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_NORMAL_HOVERED); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_NORMAL_HOVERED");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_DROPDOWN_HOVERED); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_DROPDOWN_HOVERED");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_HOVER_MASK); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_HOVER_MASK");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_NORMAL_ACTIVE); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_NORMAL_ACTIVE");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_DROPDOWN_ACTIVE); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_DROPDOWN_ACTIVE");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_DISABLED); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_DISABLED");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_TOGGLED); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_TOGGLED");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_STATE_MASK); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_STATE_MASK");

	lua_setfield(L,-2,"wxRibbonButtonBarButtonState");

	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_SMALL); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_SMALL");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_MEDIUM); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_MEDIUM");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_LARGE); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_LARGE");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_SIZE_MASK); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_SIZE_MASK");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_NORMAL_HOVERED); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_NORMAL_HOVERED");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_DROPDOWN_HOVERED); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_DROPDOWN_HOVERED");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_HOVER_MASK); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_HOVER_MASK");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_NORMAL_ACTIVE); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_NORMAL_ACTIVE");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_DROPDOWN_ACTIVE); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_DROPDOWN_ACTIVE");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_DISABLED); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_DISABLED");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_TOGGLED); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_TOGGLED");
	lua_pushnumber(L,wxRIBBON_BUTTONBAR_BUTTON_STATE_MASK); lua_setfield(L,-2,"wxRIBBON_BUTTONBAR_BUTTON_STATE_MASK");


	lua_newtable(L); // enum wxCalendarDateBorder

	lua_pushnumber(L,wxCAL_BORDER_NONE); lua_setfield(L,-2,"wxCAL_BORDER_NONE");
	lua_pushnumber(L,wxCAL_BORDER_SQUARE); lua_setfield(L,-2,"wxCAL_BORDER_SQUARE");
	lua_pushnumber(L,wxCAL_BORDER_ROUND); lua_setfield(L,-2,"wxCAL_BORDER_ROUND");

	lua_setfield(L,-2,"wxCalendarDateBorder");

	lua_pushnumber(L,wxCAL_BORDER_NONE); lua_setfield(L,-2,"wxCAL_BORDER_NONE");
	lua_pushnumber(L,wxCAL_BORDER_SQUARE); lua_setfield(L,-2,"wxCAL_BORDER_SQUARE");
	lua_pushnumber(L,wxCAL_BORDER_ROUND); lua_setfield(L,-2,"wxCAL_BORDER_ROUND");


	lua_newtable(L); // enum wxCalendarHitTestResult

	lua_pushnumber(L,wxCAL_HITTEST_NOWHERE); lua_setfield(L,-2,"wxCAL_HITTEST_NOWHERE");
	lua_pushnumber(L,wxCAL_HITTEST_HEADER); lua_setfield(L,-2,"wxCAL_HITTEST_HEADER");
	lua_pushnumber(L,wxCAL_HITTEST_DAY); lua_setfield(L,-2,"wxCAL_HITTEST_DAY");
	lua_pushnumber(L,wxCAL_HITTEST_INCMONTH); lua_setfield(L,-2,"wxCAL_HITTEST_INCMONTH");
	lua_pushnumber(L,wxCAL_HITTEST_DECMONTH); lua_setfield(L,-2,"wxCAL_HITTEST_DECMONTH");
	lua_pushnumber(L,wxCAL_HITTEST_SURROUNDING_WEEK); lua_setfield(L,-2,"wxCAL_HITTEST_SURROUNDING_WEEK");
	lua_pushnumber(L,wxCAL_HITTEST_WEEK); lua_setfield(L,-2,"wxCAL_HITTEST_WEEK");

	lua_setfield(L,-2,"wxCalendarHitTestResult");

	lua_pushnumber(L,wxCAL_HITTEST_NOWHERE); lua_setfield(L,-2,"wxCAL_HITTEST_NOWHERE");
	lua_pushnumber(L,wxCAL_HITTEST_HEADER); lua_setfield(L,-2,"wxCAL_HITTEST_HEADER");
	lua_pushnumber(L,wxCAL_HITTEST_DAY); lua_setfield(L,-2,"wxCAL_HITTEST_DAY");
	lua_pushnumber(L,wxCAL_HITTEST_INCMONTH); lua_setfield(L,-2,"wxCAL_HITTEST_INCMONTH");
	lua_pushnumber(L,wxCAL_HITTEST_DECMONTH); lua_setfield(L,-2,"wxCAL_HITTEST_DECMONTH");
	lua_pushnumber(L,wxCAL_HITTEST_SURROUNDING_WEEK); lua_setfield(L,-2,"wxCAL_HITTEST_SURROUNDING_WEEK");
	lua_pushnumber(L,wxCAL_HITTEST_WEEK); lua_setfield(L,-2,"wxCAL_HITTEST_WEEK");


	lua_newtable(L); // enum wxCheckBoxState

	lua_pushnumber(L,wxCHK_UNCHECKED); lua_setfield(L,-2,"wxCHK_UNCHECKED");
	lua_pushnumber(L,wxCHK_CHECKED); lua_setfield(L,-2,"wxCHK_CHECKED");
	lua_pushnumber(L,wxCHK_UNDETERMINED); lua_setfield(L,-2,"wxCHK_UNDETERMINED");

	lua_setfield(L,-2,"wxCheckBoxState");

	lua_pushnumber(L,wxCHK_UNCHECKED); lua_setfield(L,-2,"wxCHK_UNCHECKED");
	lua_pushnumber(L,wxCHK_CHECKED); lua_setfield(L,-2,"wxCHK_CHECKED");
	lua_pushnumber(L,wxCHK_UNDETERMINED); lua_setfield(L,-2,"wxCHK_UNDETERMINED");


	lua_newtable(L); // enum wxCmdLineEntryFlags

	lua_pushnumber(L,wxCMD_LINE_OPTION_MANDATORY); lua_setfield(L,-2,"wxCMD_LINE_OPTION_MANDATORY");
	lua_pushnumber(L,wxCMD_LINE_PARAM_OPTIONAL); lua_setfield(L,-2,"wxCMD_LINE_PARAM_OPTIONAL");
	lua_pushnumber(L,wxCMD_LINE_PARAM_MULTIPLE); lua_setfield(L,-2,"wxCMD_LINE_PARAM_MULTIPLE");
	lua_pushnumber(L,wxCMD_LINE_OPTION_HELP); lua_setfield(L,-2,"wxCMD_LINE_OPTION_HELP");
	lua_pushnumber(L,wxCMD_LINE_NEEDS_SEPARATOR); lua_setfield(L,-2,"wxCMD_LINE_NEEDS_SEPARATOR");
	lua_pushnumber(L,wxCMD_LINE_SWITCH_NEGATABLE); lua_setfield(L,-2,"wxCMD_LINE_SWITCH_NEGATABLE");

	lua_setfield(L,-2,"wxCmdLineEntryFlags");

	lua_pushnumber(L,wxCMD_LINE_OPTION_MANDATORY); lua_setfield(L,-2,"wxCMD_LINE_OPTION_MANDATORY");
	lua_pushnumber(L,wxCMD_LINE_PARAM_OPTIONAL); lua_setfield(L,-2,"wxCMD_LINE_PARAM_OPTIONAL");
	lua_pushnumber(L,wxCMD_LINE_PARAM_MULTIPLE); lua_setfield(L,-2,"wxCMD_LINE_PARAM_MULTIPLE");
	lua_pushnumber(L,wxCMD_LINE_OPTION_HELP); lua_setfield(L,-2,"wxCMD_LINE_OPTION_HELP");
	lua_pushnumber(L,wxCMD_LINE_NEEDS_SEPARATOR); lua_setfield(L,-2,"wxCMD_LINE_NEEDS_SEPARATOR");
	lua_pushnumber(L,wxCMD_LINE_SWITCH_NEGATABLE); lua_setfield(L,-2,"wxCMD_LINE_SWITCH_NEGATABLE");


	lua_newtable(L); // enum wxCmdLineParamType

	lua_pushnumber(L,wxCMD_LINE_VAL_STRING); lua_setfield(L,-2,"wxCMD_LINE_VAL_STRING");
	lua_pushnumber(L,wxCMD_LINE_VAL_NUMBER); lua_setfield(L,-2,"wxCMD_LINE_VAL_NUMBER");
	lua_pushnumber(L,wxCMD_LINE_VAL_DATE); lua_setfield(L,-2,"wxCMD_LINE_VAL_DATE");
	lua_pushnumber(L,wxCMD_LINE_VAL_DOUBLE); lua_setfield(L,-2,"wxCMD_LINE_VAL_DOUBLE");
	lua_pushnumber(L,wxCMD_LINE_VAL_NONE); lua_setfield(L,-2,"wxCMD_LINE_VAL_NONE");

	lua_setfield(L,-2,"wxCmdLineParamType");

	lua_pushnumber(L,wxCMD_LINE_VAL_STRING); lua_setfield(L,-2,"wxCMD_LINE_VAL_STRING");
	lua_pushnumber(L,wxCMD_LINE_VAL_NUMBER); lua_setfield(L,-2,"wxCMD_LINE_VAL_NUMBER");
	lua_pushnumber(L,wxCMD_LINE_VAL_DATE); lua_setfield(L,-2,"wxCMD_LINE_VAL_DATE");
	lua_pushnumber(L,wxCMD_LINE_VAL_DOUBLE); lua_setfield(L,-2,"wxCMD_LINE_VAL_DOUBLE");
	lua_pushnumber(L,wxCMD_LINE_VAL_NONE); lua_setfield(L,-2,"wxCMD_LINE_VAL_NONE");


	lua_newtable(L); // enum wxCmdLineEntryType

	lua_pushnumber(L,wxCMD_LINE_SWITCH); lua_setfield(L,-2,"wxCMD_LINE_SWITCH");
	lua_pushnumber(L,wxCMD_LINE_OPTION); lua_setfield(L,-2,"wxCMD_LINE_OPTION");
	lua_pushnumber(L,wxCMD_LINE_PARAM); lua_setfield(L,-2,"wxCMD_LINE_PARAM");
	lua_pushnumber(L,wxCMD_LINE_USAGE_TEXT); lua_setfield(L,-2,"wxCMD_LINE_USAGE_TEXT");
	lua_pushnumber(L,wxCMD_LINE_NONE); lua_setfield(L,-2,"wxCMD_LINE_NONE");

	lua_setfield(L,-2,"wxCmdLineEntryType");

	lua_pushnumber(L,wxCMD_LINE_SWITCH); lua_setfield(L,-2,"wxCMD_LINE_SWITCH");
	lua_pushnumber(L,wxCMD_LINE_OPTION); lua_setfield(L,-2,"wxCMD_LINE_OPTION");
	lua_pushnumber(L,wxCMD_LINE_PARAM); lua_setfield(L,-2,"wxCMD_LINE_PARAM");
	lua_pushnumber(L,wxCMD_LINE_USAGE_TEXT); lua_setfield(L,-2,"wxCMD_LINE_USAGE_TEXT");
	lua_pushnumber(L,wxCMD_LINE_NONE); lua_setfield(L,-2,"wxCMD_LINE_NONE");


	lua_newtable(L); // enum wxCmdLineSwitchState

	lua_pushnumber(L,wxCMD_SWITCH_OFF); lua_setfield(L,-2,"wxCMD_SWITCH_OFF");
	lua_pushnumber(L,wxCMD_SWITCH_ON); lua_setfield(L,-2,"wxCMD_SWITCH_ON");

	lua_setfield(L,-2,"wxCmdLineSwitchState");

	lua_pushnumber(L,wxCMD_SWITCH_OFF); lua_setfield(L,-2,"wxCMD_SWITCH_OFF");
	lua_pushnumber(L,wxCMD_SWITCH_ON); lua_setfield(L,-2,"wxCMD_SWITCH_ON");


	lua_newtable(L); // enum wxCmdLineSplitType

	lua_pushnumber(L,wxCMD_LINE_SPLIT_DOS); lua_setfield(L,-2,"wxCMD_LINE_SPLIT_DOS");
	lua_pushnumber(L,wxCMD_LINE_SPLIT_UNIX); lua_setfield(L,-2,"wxCMD_LINE_SPLIT_UNIX");

	lua_setfield(L,-2,"wxCmdLineSplitType");

	lua_pushnumber(L,wxCMD_LINE_SPLIT_DOS); lua_setfield(L,-2,"wxCMD_LINE_SPLIT_DOS");
	lua_pushnumber(L,wxCMD_LINE_SPLIT_UNIX); lua_setfield(L,-2,"wxCMD_LINE_SPLIT_UNIX");


	lua_newtable(L); // enum wxPrintBin

	lua_pushnumber(L,wxPRINTBIN_DEFAULT); lua_setfield(L,-2,"wxPRINTBIN_DEFAULT");
	lua_pushnumber(L,wxPRINTBIN_ONLYONE); lua_setfield(L,-2,"wxPRINTBIN_ONLYONE");
	lua_pushnumber(L,wxPRINTBIN_LOWER); lua_setfield(L,-2,"wxPRINTBIN_LOWER");
	lua_pushnumber(L,wxPRINTBIN_MIDDLE); lua_setfield(L,-2,"wxPRINTBIN_MIDDLE");
	lua_pushnumber(L,wxPRINTBIN_MANUAL); lua_setfield(L,-2,"wxPRINTBIN_MANUAL");
	lua_pushnumber(L,wxPRINTBIN_ENVELOPE); lua_setfield(L,-2,"wxPRINTBIN_ENVELOPE");
	lua_pushnumber(L,wxPRINTBIN_ENVMANUAL); lua_setfield(L,-2,"wxPRINTBIN_ENVMANUAL");
	lua_pushnumber(L,wxPRINTBIN_AUTO); lua_setfield(L,-2,"wxPRINTBIN_AUTO");
	lua_pushnumber(L,wxPRINTBIN_TRACTOR); lua_setfield(L,-2,"wxPRINTBIN_TRACTOR");
	lua_pushnumber(L,wxPRINTBIN_SMALLFMT); lua_setfield(L,-2,"wxPRINTBIN_SMALLFMT");
	lua_pushnumber(L,wxPRINTBIN_LARGEFMT); lua_setfield(L,-2,"wxPRINTBIN_LARGEFMT");
	lua_pushnumber(L,wxPRINTBIN_LARGECAPACITY); lua_setfield(L,-2,"wxPRINTBIN_LARGECAPACITY");
	lua_pushnumber(L,wxPRINTBIN_CASSETTE); lua_setfield(L,-2,"wxPRINTBIN_CASSETTE");
	lua_pushnumber(L,wxPRINTBIN_FORMSOURCE); lua_setfield(L,-2,"wxPRINTBIN_FORMSOURCE");
	lua_pushnumber(L,wxPRINTBIN_USER); lua_setfield(L,-2,"wxPRINTBIN_USER");

	lua_setfield(L,-2,"wxPrintBin");

	lua_pushnumber(L,wxPRINTBIN_DEFAULT); lua_setfield(L,-2,"wxPRINTBIN_DEFAULT");
	lua_pushnumber(L,wxPRINTBIN_ONLYONE); lua_setfield(L,-2,"wxPRINTBIN_ONLYONE");
	lua_pushnumber(L,wxPRINTBIN_LOWER); lua_setfield(L,-2,"wxPRINTBIN_LOWER");
	lua_pushnumber(L,wxPRINTBIN_MIDDLE); lua_setfield(L,-2,"wxPRINTBIN_MIDDLE");
	lua_pushnumber(L,wxPRINTBIN_MANUAL); lua_setfield(L,-2,"wxPRINTBIN_MANUAL");
	lua_pushnumber(L,wxPRINTBIN_ENVELOPE); lua_setfield(L,-2,"wxPRINTBIN_ENVELOPE");
	lua_pushnumber(L,wxPRINTBIN_ENVMANUAL); lua_setfield(L,-2,"wxPRINTBIN_ENVMANUAL");
	lua_pushnumber(L,wxPRINTBIN_AUTO); lua_setfield(L,-2,"wxPRINTBIN_AUTO");
	lua_pushnumber(L,wxPRINTBIN_TRACTOR); lua_setfield(L,-2,"wxPRINTBIN_TRACTOR");
	lua_pushnumber(L,wxPRINTBIN_SMALLFMT); lua_setfield(L,-2,"wxPRINTBIN_SMALLFMT");
	lua_pushnumber(L,wxPRINTBIN_LARGEFMT); lua_setfield(L,-2,"wxPRINTBIN_LARGEFMT");
	lua_pushnumber(L,wxPRINTBIN_LARGECAPACITY); lua_setfield(L,-2,"wxPRINTBIN_LARGECAPACITY");
	lua_pushnumber(L,wxPRINTBIN_CASSETTE); lua_setfield(L,-2,"wxPRINTBIN_CASSETTE");
	lua_pushnumber(L,wxPRINTBIN_FORMSOURCE); lua_setfield(L,-2,"wxPRINTBIN_FORMSOURCE");
	lua_pushnumber(L,wxPRINTBIN_USER); lua_setfield(L,-2,"wxPRINTBIN_USER");


	lua_newtable(L); // enum unnamed_2

	lua_pushnumber(L,wxC2S_NAME); lua_setfield(L,-2,"wxC2S_NAME");
	lua_pushnumber(L,wxC2S_CSS_SYNTAX); lua_setfield(L,-2,"wxC2S_CSS_SYNTAX");
	lua_pushnumber(L,wxC2S_HTML_SYNTAX); lua_setfield(L,-2,"wxC2S_HTML_SYNTAX");

	lua_setfield(L,-2,"unnamed_2");

	lua_pushnumber(L,wxC2S_NAME); lua_setfield(L,-2,"wxC2S_NAME");
	lua_pushnumber(L,wxC2S_CSS_SYNTAX); lua_setfield(L,-2,"wxC2S_CSS_SYNTAX");
	lua_pushnumber(L,wxC2S_HTML_SYNTAX); lua_setfield(L,-2,"wxC2S_HTML_SYNTAX");


	lua_newtable(L); // enum wxEllipsizeFlags

	lua_pushnumber(L,wxELLIPSIZE_FLAGS_NONE); lua_setfield(L,-2,"wxELLIPSIZE_FLAGS_NONE");
	lua_pushnumber(L,wxELLIPSIZE_FLAGS_PROCESS_MNEMONICS); lua_setfield(L,-2,"wxELLIPSIZE_FLAGS_PROCESS_MNEMONICS");
	lua_pushnumber(L,wxELLIPSIZE_FLAGS_EXPAND_TABS); lua_setfield(L,-2,"wxELLIPSIZE_FLAGS_EXPAND_TABS");
	lua_pushnumber(L,wxELLIPSIZE_FLAGS_DEFAULT); lua_setfield(L,-2,"wxELLIPSIZE_FLAGS_DEFAULT");

	lua_setfield(L,-2,"wxEllipsizeFlags");

	lua_pushnumber(L,wxELLIPSIZE_FLAGS_NONE); lua_setfield(L,-2,"wxELLIPSIZE_FLAGS_NONE");
	lua_pushnumber(L,wxELLIPSIZE_FLAGS_PROCESS_MNEMONICS); lua_setfield(L,-2,"wxELLIPSIZE_FLAGS_PROCESS_MNEMONICS");
	lua_pushnumber(L,wxELLIPSIZE_FLAGS_EXPAND_TABS); lua_setfield(L,-2,"wxELLIPSIZE_FLAGS_EXPAND_TABS");
	lua_pushnumber(L,wxELLIPSIZE_FLAGS_DEFAULT); lua_setfield(L,-2,"wxELLIPSIZE_FLAGS_DEFAULT");


	lua_newtable(L); // enum wxEllipsizeMode

	lua_pushnumber(L,wxELLIPSIZE_NONE); lua_setfield(L,-2,"wxELLIPSIZE_NONE");
	lua_pushnumber(L,wxELLIPSIZE_START); lua_setfield(L,-2,"wxELLIPSIZE_START");
	lua_pushnumber(L,wxELLIPSIZE_MIDDLE); lua_setfield(L,-2,"wxELLIPSIZE_MIDDLE");
	lua_pushnumber(L,wxELLIPSIZE_END); lua_setfield(L,-2,"wxELLIPSIZE_END");

	lua_setfield(L,-2,"wxEllipsizeMode");

	lua_pushnumber(L,wxELLIPSIZE_NONE); lua_setfield(L,-2,"wxELLIPSIZE_NONE");
	lua_pushnumber(L,wxELLIPSIZE_START); lua_setfield(L,-2,"wxELLIPSIZE_START");
	lua_pushnumber(L,wxELLIPSIZE_MIDDLE); lua_setfield(L,-2,"wxELLIPSIZE_MIDDLE");
	lua_pushnumber(L,wxELLIPSIZE_END); lua_setfield(L,-2,"wxELLIPSIZE_END");


	lua_newtable(L); // enum wxBOM

	lua_pushnumber(L,wxBOM_Unknown); lua_setfield(L,-2,"wxBOM_Unknown");
	lua_pushnumber(L,wxBOM_None); lua_setfield(L,-2,"wxBOM_None");
	lua_pushnumber(L,wxBOM_UTF32BE); lua_setfield(L,-2,"wxBOM_UTF32BE");
	lua_pushnumber(L,wxBOM_UTF32LE); lua_setfield(L,-2,"wxBOM_UTF32LE");
	lua_pushnumber(L,wxBOM_UTF16BE); lua_setfield(L,-2,"wxBOM_UTF16BE");
	lua_pushnumber(L,wxBOM_UTF16LE); lua_setfield(L,-2,"wxBOM_UTF16LE");
	lua_pushnumber(L,wxBOM_UTF8); lua_setfield(L,-2,"wxBOM_UTF8");

	lua_setfield(L,-2,"wxBOM");

	lua_pushnumber(L,wxBOM_Unknown); lua_setfield(L,-2,"wxBOM_Unknown");
	lua_pushnumber(L,wxBOM_None); lua_setfield(L,-2,"wxBOM_None");
	lua_pushnumber(L,wxBOM_UTF32BE); lua_setfield(L,-2,"wxBOM_UTF32BE");
	lua_pushnumber(L,wxBOM_UTF32LE); lua_setfield(L,-2,"wxBOM_UTF32LE");
	lua_pushnumber(L,wxBOM_UTF16BE); lua_setfield(L,-2,"wxBOM_UTF16BE");
	lua_pushnumber(L,wxBOM_UTF16LE); lua_setfield(L,-2,"wxBOM_UTF16LE");
	lua_pushnumber(L,wxBOM_UTF8); lua_setfield(L,-2,"wxBOM_UTF8");


	lua_newtable(L); // enum wxDataViewCellMode

	lua_pushnumber(L,wxDATAVIEW_CELL_INERT); lua_setfield(L,-2,"wxDATAVIEW_CELL_INERT");
	lua_pushnumber(L,wxDATAVIEW_CELL_ACTIVATABLE); lua_setfield(L,-2,"wxDATAVIEW_CELL_ACTIVATABLE");
	lua_pushnumber(L,wxDATAVIEW_CELL_EDITABLE); lua_setfield(L,-2,"wxDATAVIEW_CELL_EDITABLE");

	lua_setfield(L,-2,"wxDataViewCellMode");

	lua_pushnumber(L,wxDATAVIEW_CELL_INERT); lua_setfield(L,-2,"wxDATAVIEW_CELL_INERT");
	lua_pushnumber(L,wxDATAVIEW_CELL_ACTIVATABLE); lua_setfield(L,-2,"wxDATAVIEW_CELL_ACTIVATABLE");
	lua_pushnumber(L,wxDATAVIEW_CELL_EDITABLE); lua_setfield(L,-2,"wxDATAVIEW_CELL_EDITABLE");


	lua_newtable(L); // enum wxDataViewCellRenderState

	lua_pushnumber(L,wxDATAVIEW_CELL_SELECTED); lua_setfield(L,-2,"wxDATAVIEW_CELL_SELECTED");
	lua_pushnumber(L,wxDATAVIEW_CELL_PRELIT); lua_setfield(L,-2,"wxDATAVIEW_CELL_PRELIT");
	lua_pushnumber(L,wxDATAVIEW_CELL_INSENSITIVE); lua_setfield(L,-2,"wxDATAVIEW_CELL_INSENSITIVE");
	lua_pushnumber(L,wxDATAVIEW_CELL_FOCUSED); lua_setfield(L,-2,"wxDATAVIEW_CELL_FOCUSED");

	lua_setfield(L,-2,"wxDataViewCellRenderState");

	lua_pushnumber(L,wxDATAVIEW_CELL_SELECTED); lua_setfield(L,-2,"wxDATAVIEW_CELL_SELECTED");
	lua_pushnumber(L,wxDATAVIEW_CELL_PRELIT); lua_setfield(L,-2,"wxDATAVIEW_CELL_PRELIT");
	lua_pushnumber(L,wxDATAVIEW_CELL_INSENSITIVE); lua_setfield(L,-2,"wxDATAVIEW_CELL_INSENSITIVE");
	lua_pushnumber(L,wxDATAVIEW_CELL_FOCUSED); lua_setfield(L,-2,"wxDATAVIEW_CELL_FOCUSED");


	lua_newtable(L); // enum wxDataViewColumnFlags

	lua_pushnumber(L,wxDATAVIEW_COL_RESIZABLE); lua_setfield(L,-2,"wxDATAVIEW_COL_RESIZABLE");
	lua_pushnumber(L,wxDATAVIEW_COL_SORTABLE); lua_setfield(L,-2,"wxDATAVIEW_COL_SORTABLE");
	lua_pushnumber(L,wxDATAVIEW_COL_REORDERABLE); lua_setfield(L,-2,"wxDATAVIEW_COL_REORDERABLE");
	lua_pushnumber(L,wxDATAVIEW_COL_HIDDEN); lua_setfield(L,-2,"wxDATAVIEW_COL_HIDDEN");

	lua_setfield(L,-2,"wxDataViewColumnFlags");

	lua_pushnumber(L,wxDATAVIEW_COL_RESIZABLE); lua_setfield(L,-2,"wxDATAVIEW_COL_RESIZABLE");
	lua_pushnumber(L,wxDATAVIEW_COL_SORTABLE); lua_setfield(L,-2,"wxDATAVIEW_COL_SORTABLE");
	lua_pushnumber(L,wxDATAVIEW_COL_REORDERABLE); lua_setfield(L,-2,"wxDATAVIEW_COL_REORDERABLE");
	lua_pushnumber(L,wxDATAVIEW_COL_HIDDEN); lua_setfield(L,-2,"wxDATAVIEW_COL_HIDDEN");


	lua_newtable(L); // enum wxRasterOperationMode

	lua_pushnumber(L,wxCLEAR); lua_setfield(L,-2,"wxCLEAR");
	lua_pushnumber(L,wxXOR); lua_setfield(L,-2,"wxXOR");
	lua_pushnumber(L,wxINVERT); lua_setfield(L,-2,"wxINVERT");
	lua_pushnumber(L,wxOR_REVERSE); lua_setfield(L,-2,"wxOR_REVERSE");
	lua_pushnumber(L,wxAND_REVERSE); lua_setfield(L,-2,"wxAND_REVERSE");
	lua_pushnumber(L,wxCOPY); lua_setfield(L,-2,"wxCOPY");
	lua_pushnumber(L,wxAND); lua_setfield(L,-2,"wxAND");
	lua_pushnumber(L,wxAND_INVERT); lua_setfield(L,-2,"wxAND_INVERT");
	lua_pushnumber(L,wxNO_OP); lua_setfield(L,-2,"wxNO_OP");
	lua_pushnumber(L,wxNOR); lua_setfield(L,-2,"wxNOR");
	lua_pushnumber(L,wxEQUIV); lua_setfield(L,-2,"wxEQUIV");
	lua_pushnumber(L,wxSRC_INVERT); lua_setfield(L,-2,"wxSRC_INVERT");
	lua_pushnumber(L,wxOR_INVERT); lua_setfield(L,-2,"wxOR_INVERT");
	lua_pushnumber(L,wxNAND); lua_setfield(L,-2,"wxNAND");
	lua_pushnumber(L,wxOR); lua_setfield(L,-2,"wxOR");
	lua_pushnumber(L,wxSET); lua_setfield(L,-2,"wxSET");

	lua_setfield(L,-2,"wxRasterOperationMode");

	lua_pushnumber(L,wxCLEAR); lua_setfield(L,-2,"wxCLEAR");
	lua_pushnumber(L,wxXOR); lua_setfield(L,-2,"wxXOR");
	lua_pushnumber(L,wxINVERT); lua_setfield(L,-2,"wxINVERT");
	lua_pushnumber(L,wxOR_REVERSE); lua_setfield(L,-2,"wxOR_REVERSE");
	lua_pushnumber(L,wxAND_REVERSE); lua_setfield(L,-2,"wxAND_REVERSE");
	lua_pushnumber(L,wxCOPY); lua_setfield(L,-2,"wxCOPY");
	lua_pushnumber(L,wxAND); lua_setfield(L,-2,"wxAND");
	lua_pushnumber(L,wxAND_INVERT); lua_setfield(L,-2,"wxAND_INVERT");
	lua_pushnumber(L,wxNO_OP); lua_setfield(L,-2,"wxNO_OP");
	lua_pushnumber(L,wxNOR); lua_setfield(L,-2,"wxNOR");
	lua_pushnumber(L,wxEQUIV); lua_setfield(L,-2,"wxEQUIV");
	lua_pushnumber(L,wxSRC_INVERT); lua_setfield(L,-2,"wxSRC_INVERT");
	lua_pushnumber(L,wxOR_INVERT); lua_setfield(L,-2,"wxOR_INVERT");
	lua_pushnumber(L,wxNAND); lua_setfield(L,-2,"wxNAND");
	lua_pushnumber(L,wxOR); lua_setfield(L,-2,"wxOR");
	lua_pushnumber(L,wxSET); lua_setfield(L,-2,"wxSET");


	lua_newtable(L); // enum wxFloodFillStyle

	lua_pushnumber(L,wxFLOOD_SURFACE); lua_setfield(L,-2,"wxFLOOD_SURFACE");
	lua_pushnumber(L,wxFLOOD_BORDER); lua_setfield(L,-2,"wxFLOOD_BORDER");

	lua_setfield(L,-2,"wxFloodFillStyle");

	lua_pushnumber(L,wxFLOOD_SURFACE); lua_setfield(L,-2,"wxFLOOD_SURFACE");
	lua_pushnumber(L,wxFLOOD_BORDER); lua_setfield(L,-2,"wxFLOOD_BORDER");


	lua_newtable(L); // enum wxMappingMode

	lua_pushnumber(L,wxMM_TEXT); lua_setfield(L,-2,"wxMM_TEXT");
	lua_pushnumber(L,wxMM_METRIC); lua_setfield(L,-2,"wxMM_METRIC");
	lua_pushnumber(L,wxMM_LOMETRIC); lua_setfield(L,-2,"wxMM_LOMETRIC");
	lua_pushnumber(L,wxMM_TWIPS); lua_setfield(L,-2,"wxMM_TWIPS");
	lua_pushnumber(L,wxMM_POINTS); lua_setfield(L,-2,"wxMM_POINTS");

	lua_setfield(L,-2,"wxMappingMode");

	lua_pushnumber(L,wxMM_TEXT); lua_setfield(L,-2,"wxMM_TEXT");
	lua_pushnumber(L,wxMM_METRIC); lua_setfield(L,-2,"wxMM_METRIC");
	lua_pushnumber(L,wxMM_LOMETRIC); lua_setfield(L,-2,"wxMM_LOMETRIC");
	lua_pushnumber(L,wxMM_TWIPS); lua_setfield(L,-2,"wxMM_TWIPS");
	lua_pushnumber(L,wxMM_POINTS); lua_setfield(L,-2,"wxMM_POINTS");


	lua_newtable(L); // enum wxGeometryCentre

	lua_pushnumber(L,wxCENTRE); lua_setfield(L,-2,"wxCENTRE");
	lua_pushnumber(L,wxCENTER); lua_setfield(L,-2,"wxCENTER");

	lua_setfield(L,-2,"wxGeometryCentre");

	lua_pushnumber(L,wxCENTRE); lua_setfield(L,-2,"wxCENTRE");
	lua_pushnumber(L,wxCENTER); lua_setfield(L,-2,"wxCENTER");


	lua_newtable(L); // enum wxOrientation

	lua_pushnumber(L,wxHORIZONTAL); lua_setfield(L,-2,"wxHORIZONTAL");
	lua_pushnumber(L,wxVERTICAL); lua_setfield(L,-2,"wxVERTICAL");
	lua_pushnumber(L,wxBOTH); lua_setfield(L,-2,"wxBOTH");
	lua_pushnumber(L,wxORIENTATION_MASK); lua_setfield(L,-2,"wxORIENTATION_MASK");

	lua_setfield(L,-2,"wxOrientation");

	lua_pushnumber(L,wxHORIZONTAL); lua_setfield(L,-2,"wxHORIZONTAL");
	lua_pushnumber(L,wxVERTICAL); lua_setfield(L,-2,"wxVERTICAL");
	lua_pushnumber(L,wxBOTH); lua_setfield(L,-2,"wxBOTH");
	lua_pushnumber(L,wxORIENTATION_MASK); lua_setfield(L,-2,"wxORIENTATION_MASK");


	lua_newtable(L); // enum wxDirection

	lua_pushnumber(L,wxLEFT); lua_setfield(L,-2,"wxLEFT");
	lua_pushnumber(L,wxRIGHT); lua_setfield(L,-2,"wxRIGHT");
	lua_pushnumber(L,wxUP); lua_setfield(L,-2,"wxUP");
	lua_pushnumber(L,wxDOWN); lua_setfield(L,-2,"wxDOWN");
	lua_pushnumber(L,wxTOP); lua_setfield(L,-2,"wxTOP");
	lua_pushnumber(L,wxBOTTOM); lua_setfield(L,-2,"wxBOTTOM");
	lua_pushnumber(L,wxNORTH); lua_setfield(L,-2,"wxNORTH");
	lua_pushnumber(L,wxSOUTH); lua_setfield(L,-2,"wxSOUTH");
	lua_pushnumber(L,wxWEST); lua_setfield(L,-2,"wxWEST");
	lua_pushnumber(L,wxEAST); lua_setfield(L,-2,"wxEAST");
	lua_pushnumber(L,wxALL); lua_setfield(L,-2,"wxALL");
	lua_pushnumber(L,wxDIRECTION_MASK); lua_setfield(L,-2,"wxDIRECTION_MASK");

	lua_setfield(L,-2,"wxDirection");

	lua_pushnumber(L,wxLEFT); lua_setfield(L,-2,"wxLEFT");
	lua_pushnumber(L,wxRIGHT); lua_setfield(L,-2,"wxRIGHT");
	lua_pushnumber(L,wxUP); lua_setfield(L,-2,"wxUP");
	lua_pushnumber(L,wxDOWN); lua_setfield(L,-2,"wxDOWN");
	lua_pushnumber(L,wxTOP); lua_setfield(L,-2,"wxTOP");
	lua_pushnumber(L,wxBOTTOM); lua_setfield(L,-2,"wxBOTTOM");
	lua_pushnumber(L,wxNORTH); lua_setfield(L,-2,"wxNORTH");
	lua_pushnumber(L,wxSOUTH); lua_setfield(L,-2,"wxSOUTH");
	lua_pushnumber(L,wxWEST); lua_setfield(L,-2,"wxWEST");
	lua_pushnumber(L,wxEAST); lua_setfield(L,-2,"wxEAST");
	lua_pushnumber(L,wxALL); lua_setfield(L,-2,"wxALL");
	lua_pushnumber(L,wxDIRECTION_MASK); lua_setfield(L,-2,"wxDIRECTION_MASK");


	lua_newtable(L); // enum wxAlignment

	lua_pushnumber(L,wxALIGN_INVALID); lua_setfield(L,-2,"wxALIGN_INVALID");
	lua_pushnumber(L,wxALIGN_NOT); lua_setfield(L,-2,"wxALIGN_NOT");
	lua_pushnumber(L,wxALIGN_CENTER_HORIZONTAL); lua_setfield(L,-2,"wxALIGN_CENTER_HORIZONTAL");
	lua_pushnumber(L,wxALIGN_CENTRE_HORIZONTAL); lua_setfield(L,-2,"wxALIGN_CENTRE_HORIZONTAL");
	lua_pushnumber(L,wxALIGN_LEFT); lua_setfield(L,-2,"wxALIGN_LEFT");
	lua_pushnumber(L,wxALIGN_TOP); lua_setfield(L,-2,"wxALIGN_TOP");
	lua_pushnumber(L,wxALIGN_RIGHT); lua_setfield(L,-2,"wxALIGN_RIGHT");
	lua_pushnumber(L,wxALIGN_BOTTOM); lua_setfield(L,-2,"wxALIGN_BOTTOM");
	lua_pushnumber(L,wxALIGN_CENTER_VERTICAL); lua_setfield(L,-2,"wxALIGN_CENTER_VERTICAL");
	lua_pushnumber(L,wxALIGN_CENTRE_VERTICAL); lua_setfield(L,-2,"wxALIGN_CENTRE_VERTICAL");
	lua_pushnumber(L,wxALIGN_CENTER); lua_setfield(L,-2,"wxALIGN_CENTER");
	lua_pushnumber(L,wxALIGN_CENTRE); lua_setfield(L,-2,"wxALIGN_CENTRE");
	lua_pushnumber(L,wxALIGN_MASK); lua_setfield(L,-2,"wxALIGN_MASK");

	lua_setfield(L,-2,"wxAlignment");

	lua_pushnumber(L,wxALIGN_INVALID); lua_setfield(L,-2,"wxALIGN_INVALID");
	lua_pushnumber(L,wxALIGN_NOT); lua_setfield(L,-2,"wxALIGN_NOT");
	lua_pushnumber(L,wxALIGN_CENTER_HORIZONTAL); lua_setfield(L,-2,"wxALIGN_CENTER_HORIZONTAL");
	lua_pushnumber(L,wxALIGN_CENTRE_HORIZONTAL); lua_setfield(L,-2,"wxALIGN_CENTRE_HORIZONTAL");
	lua_pushnumber(L,wxALIGN_LEFT); lua_setfield(L,-2,"wxALIGN_LEFT");
	lua_pushnumber(L,wxALIGN_TOP); lua_setfield(L,-2,"wxALIGN_TOP");
	lua_pushnumber(L,wxALIGN_RIGHT); lua_setfield(L,-2,"wxALIGN_RIGHT");
	lua_pushnumber(L,wxALIGN_BOTTOM); lua_setfield(L,-2,"wxALIGN_BOTTOM");
	lua_pushnumber(L,wxALIGN_CENTER_VERTICAL); lua_setfield(L,-2,"wxALIGN_CENTER_VERTICAL");
	lua_pushnumber(L,wxALIGN_CENTRE_VERTICAL); lua_setfield(L,-2,"wxALIGN_CENTRE_VERTICAL");
	lua_pushnumber(L,wxALIGN_CENTER); lua_setfield(L,-2,"wxALIGN_CENTER");
	lua_pushnumber(L,wxALIGN_CENTRE); lua_setfield(L,-2,"wxALIGN_CENTRE");
	lua_pushnumber(L,wxALIGN_MASK); lua_setfield(L,-2,"wxALIGN_MASK");


	lua_newtable(L); // enum wxSizerFlagBits

	lua_pushnumber(L,wxFIXED_MINSIZE); lua_setfield(L,-2,"wxFIXED_MINSIZE");
	lua_pushnumber(L,wxRESERVE_SPACE_EVEN_IF_HIDDEN); lua_setfield(L,-2,"wxRESERVE_SPACE_EVEN_IF_HIDDEN");
	lua_pushnumber(L,wxSIZER_FLAG_BITS_MASK); lua_setfield(L,-2,"wxSIZER_FLAG_BITS_MASK");

	lua_setfield(L,-2,"wxSizerFlagBits");

	lua_pushnumber(L,wxFIXED_MINSIZE); lua_setfield(L,-2,"wxFIXED_MINSIZE");
	lua_pushnumber(L,wxRESERVE_SPACE_EVEN_IF_HIDDEN); lua_setfield(L,-2,"wxRESERVE_SPACE_EVEN_IF_HIDDEN");
	lua_pushnumber(L,wxSIZER_FLAG_BITS_MASK); lua_setfield(L,-2,"wxSIZER_FLAG_BITS_MASK");


	lua_newtable(L); // enum wxStretch

	lua_pushnumber(L,wxSTRETCH_NOT); lua_setfield(L,-2,"wxSTRETCH_NOT");
	lua_pushnumber(L,wxSHRINK); lua_setfield(L,-2,"wxSHRINK");
	lua_pushnumber(L,wxGROW); lua_setfield(L,-2,"wxGROW");
	lua_pushnumber(L,wxEXPAND); lua_setfield(L,-2,"wxEXPAND");
	lua_pushnumber(L,wxSHAPED); lua_setfield(L,-2,"wxSHAPED");
	lua_pushnumber(L,wxTILE); lua_setfield(L,-2,"wxTILE");
	lua_pushnumber(L,wxSTRETCH_MASK); lua_setfield(L,-2,"wxSTRETCH_MASK");

	lua_setfield(L,-2,"wxStretch");

	lua_pushnumber(L,wxSTRETCH_NOT); lua_setfield(L,-2,"wxSTRETCH_NOT");
	lua_pushnumber(L,wxSHRINK); lua_setfield(L,-2,"wxSHRINK");
	lua_pushnumber(L,wxGROW); lua_setfield(L,-2,"wxGROW");
	lua_pushnumber(L,wxEXPAND); lua_setfield(L,-2,"wxEXPAND");
	lua_pushnumber(L,wxSHAPED); lua_setfield(L,-2,"wxSHAPED");
	lua_pushnumber(L,wxTILE); lua_setfield(L,-2,"wxTILE");
	lua_pushnumber(L,wxSTRETCH_MASK); lua_setfield(L,-2,"wxSTRETCH_MASK");


	lua_newtable(L); // enum wxBorder

	lua_pushnumber(L,wxBORDER_DEFAULT); lua_setfield(L,-2,"wxBORDER_DEFAULT");
	lua_pushnumber(L,wxBORDER_NONE); lua_setfield(L,-2,"wxBORDER_NONE");
	lua_pushnumber(L,wxBORDER_STATIC); lua_setfield(L,-2,"wxBORDER_STATIC");
	lua_pushnumber(L,wxBORDER_SIMPLE); lua_setfield(L,-2,"wxBORDER_SIMPLE");
	lua_pushnumber(L,wxBORDER_RAISED); lua_setfield(L,-2,"wxBORDER_RAISED");
	lua_pushnumber(L,wxBORDER_SUNKEN); lua_setfield(L,-2,"wxBORDER_SUNKEN");
	lua_pushnumber(L,wxBORDER_DOUBLE); lua_setfield(L,-2,"wxBORDER_DOUBLE");
	lua_pushnumber(L,wxBORDER_THEME); lua_setfield(L,-2,"wxBORDER_THEME");
	lua_pushnumber(L,wxBORDER_MASK); lua_setfield(L,-2,"wxBORDER_MASK");

	lua_setfield(L,-2,"wxBorder");

	lua_pushnumber(L,wxBORDER_DEFAULT); lua_setfield(L,-2,"wxBORDER_DEFAULT");
	lua_pushnumber(L,wxBORDER_NONE); lua_setfield(L,-2,"wxBORDER_NONE");
	lua_pushnumber(L,wxBORDER_STATIC); lua_setfield(L,-2,"wxBORDER_STATIC");
	lua_pushnumber(L,wxBORDER_SIMPLE); lua_setfield(L,-2,"wxBORDER_SIMPLE");
	lua_pushnumber(L,wxBORDER_RAISED); lua_setfield(L,-2,"wxBORDER_RAISED");
	lua_pushnumber(L,wxBORDER_SUNKEN); lua_setfield(L,-2,"wxBORDER_SUNKEN");
	lua_pushnumber(L,wxBORDER_DOUBLE); lua_setfield(L,-2,"wxBORDER_DOUBLE");
	lua_pushnumber(L,wxBORDER_THEME); lua_setfield(L,-2,"wxBORDER_THEME");
	lua_pushnumber(L,wxBORDER_MASK); lua_setfield(L,-2,"wxBORDER_MASK");


	lua_newtable(L); // enum wxBackgroundStyle

	lua_pushnumber(L,wxBG_STYLE_ERASE); lua_setfield(L,-2,"wxBG_STYLE_ERASE");
	lua_pushnumber(L,wxBG_STYLE_SYSTEM); lua_setfield(L,-2,"wxBG_STYLE_SYSTEM");
	lua_pushnumber(L,wxBG_STYLE_PAINT); lua_setfield(L,-2,"wxBG_STYLE_PAINT");
	lua_pushnumber(L,wxBG_STYLE_COLOUR); lua_setfield(L,-2,"wxBG_STYLE_COLOUR");
	lua_pushnumber(L,wxBG_STYLE_TRANSPARENT); lua_setfield(L,-2,"wxBG_STYLE_TRANSPARENT");

	lua_setfield(L,-2,"wxBackgroundStyle");

	lua_pushnumber(L,wxBG_STYLE_ERASE); lua_setfield(L,-2,"wxBG_STYLE_ERASE");
	lua_pushnumber(L,wxBG_STYLE_SYSTEM); lua_setfield(L,-2,"wxBG_STYLE_SYSTEM");
	lua_pushnumber(L,wxBG_STYLE_PAINT); lua_setfield(L,-2,"wxBG_STYLE_PAINT");
	lua_pushnumber(L,wxBG_STYLE_COLOUR); lua_setfield(L,-2,"wxBG_STYLE_COLOUR");
	lua_pushnumber(L,wxBG_STYLE_TRANSPARENT); lua_setfield(L,-2,"wxBG_STYLE_TRANSPARENT");


	lua_newtable(L); // enum wxStandardID

	lua_pushnumber(L,wxID_AUTO_LOWEST); lua_setfield(L,-2,"wxID_AUTO_LOWEST");
	lua_pushnumber(L,wxID_AUTO_HIGHEST); lua_setfield(L,-2,"wxID_AUTO_HIGHEST");
	lua_pushnumber(L,wxID_NONE); lua_setfield(L,-2,"wxID_NONE");
	lua_pushnumber(L,wxID_SEPARATOR); lua_setfield(L,-2,"wxID_SEPARATOR");
	lua_pushnumber(L,wxID_ANY); lua_setfield(L,-2,"wxID_ANY");
	lua_pushnumber(L,wxID_LOWEST); lua_setfield(L,-2,"wxID_LOWEST");
	lua_pushnumber(L,wxID_OPEN); lua_setfield(L,-2,"wxID_OPEN");
	lua_pushnumber(L,wxID_CLOSE); lua_setfield(L,-2,"wxID_CLOSE");
	lua_pushnumber(L,wxID_NEW); lua_setfield(L,-2,"wxID_NEW");
	lua_pushnumber(L,wxID_SAVE); lua_setfield(L,-2,"wxID_SAVE");
	lua_pushnumber(L,wxID_SAVEAS); lua_setfield(L,-2,"wxID_SAVEAS");
	lua_pushnumber(L,wxID_REVERT); lua_setfield(L,-2,"wxID_REVERT");
	lua_pushnumber(L,wxID_EXIT); lua_setfield(L,-2,"wxID_EXIT");
	lua_pushnumber(L,wxID_UNDO); lua_setfield(L,-2,"wxID_UNDO");
	lua_pushnumber(L,wxID_REDO); lua_setfield(L,-2,"wxID_REDO");
	lua_pushnumber(L,wxID_HELP); lua_setfield(L,-2,"wxID_HELP");
	lua_pushnumber(L,wxID_PRINT); lua_setfield(L,-2,"wxID_PRINT");
	lua_pushnumber(L,wxID_PRINT_SETUP); lua_setfield(L,-2,"wxID_PRINT_SETUP");
	lua_pushnumber(L,wxID_PAGE_SETUP); lua_setfield(L,-2,"wxID_PAGE_SETUP");
	lua_pushnumber(L,wxID_PREVIEW); lua_setfield(L,-2,"wxID_PREVIEW");
	lua_pushnumber(L,wxID_ABOUT); lua_setfield(L,-2,"wxID_ABOUT");
	lua_pushnumber(L,wxID_HELP_CONTENTS); lua_setfield(L,-2,"wxID_HELP_CONTENTS");
	lua_pushnumber(L,wxID_HELP_INDEX); lua_setfield(L,-2,"wxID_HELP_INDEX");
	lua_pushnumber(L,wxID_HELP_SEARCH); lua_setfield(L,-2,"wxID_HELP_SEARCH");
	lua_pushnumber(L,wxID_HELP_COMMANDS); lua_setfield(L,-2,"wxID_HELP_COMMANDS");
	lua_pushnumber(L,wxID_HELP_PROCEDURES); lua_setfield(L,-2,"wxID_HELP_PROCEDURES");
	lua_pushnumber(L,wxID_HELP_CONTEXT); lua_setfield(L,-2,"wxID_HELP_CONTEXT");
	lua_pushnumber(L,wxID_CLOSE_ALL); lua_setfield(L,-2,"wxID_CLOSE_ALL");
	lua_pushnumber(L,wxID_PREFERENCES); lua_setfield(L,-2,"wxID_PREFERENCES");
	lua_pushnumber(L,wxID_EDIT); lua_setfield(L,-2,"wxID_EDIT");
	lua_pushnumber(L,wxID_CUT); lua_setfield(L,-2,"wxID_CUT");
	lua_pushnumber(L,wxID_COPY); lua_setfield(L,-2,"wxID_COPY");
	lua_pushnumber(L,wxID_PASTE); lua_setfield(L,-2,"wxID_PASTE");
	lua_pushnumber(L,wxID_CLEAR); lua_setfield(L,-2,"wxID_CLEAR");
	lua_pushnumber(L,wxID_FIND); lua_setfield(L,-2,"wxID_FIND");
	lua_pushnumber(L,wxID_DUPLICATE); lua_setfield(L,-2,"wxID_DUPLICATE");
	lua_pushnumber(L,wxID_SELECTALL); lua_setfield(L,-2,"wxID_SELECTALL");
	lua_pushnumber(L,wxID_DELETE); lua_setfield(L,-2,"wxID_DELETE");
	lua_pushnumber(L,wxID_REPLACE); lua_setfield(L,-2,"wxID_REPLACE");
	lua_pushnumber(L,wxID_REPLACE_ALL); lua_setfield(L,-2,"wxID_REPLACE_ALL");
	lua_pushnumber(L,wxID_PROPERTIES); lua_setfield(L,-2,"wxID_PROPERTIES");
	lua_pushnumber(L,wxID_VIEW_DETAILS); lua_setfield(L,-2,"wxID_VIEW_DETAILS");
	lua_pushnumber(L,wxID_VIEW_LARGEICONS); lua_setfield(L,-2,"wxID_VIEW_LARGEICONS");
	lua_pushnumber(L,wxID_VIEW_SMALLICONS); lua_setfield(L,-2,"wxID_VIEW_SMALLICONS");
	lua_pushnumber(L,wxID_VIEW_LIST); lua_setfield(L,-2,"wxID_VIEW_LIST");
	lua_pushnumber(L,wxID_VIEW_SORTDATE); lua_setfield(L,-2,"wxID_VIEW_SORTDATE");
	lua_pushnumber(L,wxID_VIEW_SORTNAME); lua_setfield(L,-2,"wxID_VIEW_SORTNAME");
	lua_pushnumber(L,wxID_VIEW_SORTSIZE); lua_setfield(L,-2,"wxID_VIEW_SORTSIZE");
	lua_pushnumber(L,wxID_VIEW_SORTTYPE); lua_setfield(L,-2,"wxID_VIEW_SORTTYPE");
	lua_pushnumber(L,wxID_FILE); lua_setfield(L,-2,"wxID_FILE");
	lua_pushnumber(L,wxID_FILE1); lua_setfield(L,-2,"wxID_FILE1");
	lua_pushnumber(L,wxID_FILE2); lua_setfield(L,-2,"wxID_FILE2");
	lua_pushnumber(L,wxID_FILE3); lua_setfield(L,-2,"wxID_FILE3");
	lua_pushnumber(L,wxID_FILE4); lua_setfield(L,-2,"wxID_FILE4");
	lua_pushnumber(L,wxID_FILE5); lua_setfield(L,-2,"wxID_FILE5");
	lua_pushnumber(L,wxID_FILE6); lua_setfield(L,-2,"wxID_FILE6");
	lua_pushnumber(L,wxID_FILE7); lua_setfield(L,-2,"wxID_FILE7");
	lua_pushnumber(L,wxID_FILE8); lua_setfield(L,-2,"wxID_FILE8");
	lua_pushnumber(L,wxID_FILE9); lua_setfield(L,-2,"wxID_FILE9");
	lua_pushnumber(L,wxID_OK); lua_setfield(L,-2,"wxID_OK");
	lua_pushnumber(L,wxID_CANCEL); lua_setfield(L,-2,"wxID_CANCEL");
	lua_pushnumber(L,wxID_APPLY); lua_setfield(L,-2,"wxID_APPLY");
	lua_pushnumber(L,wxID_YES); lua_setfield(L,-2,"wxID_YES");
	lua_pushnumber(L,wxID_NO); lua_setfield(L,-2,"wxID_NO");
	lua_pushnumber(L,wxID_STATIC); lua_setfield(L,-2,"wxID_STATIC");
	lua_pushnumber(L,wxID_FORWARD); lua_setfield(L,-2,"wxID_FORWARD");
	lua_pushnumber(L,wxID_BACKWARD); lua_setfield(L,-2,"wxID_BACKWARD");
	lua_pushnumber(L,wxID_DEFAULT); lua_setfield(L,-2,"wxID_DEFAULT");
	lua_pushnumber(L,wxID_MORE); lua_setfield(L,-2,"wxID_MORE");
	lua_pushnumber(L,wxID_SETUP); lua_setfield(L,-2,"wxID_SETUP");
	lua_pushnumber(L,wxID_RESET); lua_setfield(L,-2,"wxID_RESET");
	lua_pushnumber(L,wxID_CONTEXT_HELP); lua_setfield(L,-2,"wxID_CONTEXT_HELP");
	lua_pushnumber(L,wxID_YESTOALL); lua_setfield(L,-2,"wxID_YESTOALL");
	lua_pushnumber(L,wxID_NOTOALL); lua_setfield(L,-2,"wxID_NOTOALL");
	lua_pushnumber(L,wxID_ABORT); lua_setfield(L,-2,"wxID_ABORT");
	lua_pushnumber(L,wxID_RETRY); lua_setfield(L,-2,"wxID_RETRY");
	lua_pushnumber(L,wxID_IGNORE); lua_setfield(L,-2,"wxID_IGNORE");
	lua_pushnumber(L,wxID_ADD); lua_setfield(L,-2,"wxID_ADD");
	lua_pushnumber(L,wxID_REMOVE); lua_setfield(L,-2,"wxID_REMOVE");
	lua_pushnumber(L,wxID_UP); lua_setfield(L,-2,"wxID_UP");
	lua_pushnumber(L,wxID_DOWN); lua_setfield(L,-2,"wxID_DOWN");
	lua_pushnumber(L,wxID_HOME); lua_setfield(L,-2,"wxID_HOME");
	lua_pushnumber(L,wxID_REFRESH); lua_setfield(L,-2,"wxID_REFRESH");
	lua_pushnumber(L,wxID_STOP); lua_setfield(L,-2,"wxID_STOP");
	lua_pushnumber(L,wxID_INDEX); lua_setfield(L,-2,"wxID_INDEX");
	lua_pushnumber(L,wxID_BOLD); lua_setfield(L,-2,"wxID_BOLD");
	lua_pushnumber(L,wxID_ITALIC); lua_setfield(L,-2,"wxID_ITALIC");
	lua_pushnumber(L,wxID_JUSTIFY_CENTER); lua_setfield(L,-2,"wxID_JUSTIFY_CENTER");
	lua_pushnumber(L,wxID_JUSTIFY_FILL); lua_setfield(L,-2,"wxID_JUSTIFY_FILL");
	lua_pushnumber(L,wxID_JUSTIFY_RIGHT); lua_setfield(L,-2,"wxID_JUSTIFY_RIGHT");
	lua_pushnumber(L,wxID_JUSTIFY_LEFT); lua_setfield(L,-2,"wxID_JUSTIFY_LEFT");
	lua_pushnumber(L,wxID_UNDERLINE); lua_setfield(L,-2,"wxID_UNDERLINE");
	lua_pushnumber(L,wxID_INDENT); lua_setfield(L,-2,"wxID_INDENT");
	lua_pushnumber(L,wxID_UNINDENT); lua_setfield(L,-2,"wxID_UNINDENT");
	lua_pushnumber(L,wxID_ZOOM_100); lua_setfield(L,-2,"wxID_ZOOM_100");
	lua_pushnumber(L,wxID_ZOOM_FIT); lua_setfield(L,-2,"wxID_ZOOM_FIT");
	lua_pushnumber(L,wxID_ZOOM_IN); lua_setfield(L,-2,"wxID_ZOOM_IN");
	lua_pushnumber(L,wxID_ZOOM_OUT); lua_setfield(L,-2,"wxID_ZOOM_OUT");
	lua_pushnumber(L,wxID_UNDELETE); lua_setfield(L,-2,"wxID_UNDELETE");
	lua_pushnumber(L,wxID_REVERT_TO_SAVED); lua_setfield(L,-2,"wxID_REVERT_TO_SAVED");
	lua_pushnumber(L,wxID_CDROM); lua_setfield(L,-2,"wxID_CDROM");
	lua_pushnumber(L,wxID_CONVERT); lua_setfield(L,-2,"wxID_CONVERT");
	lua_pushnumber(L,wxID_EXECUTE); lua_setfield(L,-2,"wxID_EXECUTE");
	lua_pushnumber(L,wxID_FLOPPY); lua_setfield(L,-2,"wxID_FLOPPY");
	lua_pushnumber(L,wxID_HARDDISK); lua_setfield(L,-2,"wxID_HARDDISK");
	lua_pushnumber(L,wxID_BOTTOM); lua_setfield(L,-2,"wxID_BOTTOM");
	lua_pushnumber(L,wxID_FIRST); lua_setfield(L,-2,"wxID_FIRST");
	lua_pushnumber(L,wxID_LAST); lua_setfield(L,-2,"wxID_LAST");
	lua_pushnumber(L,wxID_TOP); lua_setfield(L,-2,"wxID_TOP");
	lua_pushnumber(L,wxID_INFO); lua_setfield(L,-2,"wxID_INFO");
	lua_pushnumber(L,wxID_JUMP_TO); lua_setfield(L,-2,"wxID_JUMP_TO");
	lua_pushnumber(L,wxID_NETWORK); lua_setfield(L,-2,"wxID_NETWORK");
	lua_pushnumber(L,wxID_SELECT_COLOR); lua_setfield(L,-2,"wxID_SELECT_COLOR");
	lua_pushnumber(L,wxID_SELECT_FONT); lua_setfield(L,-2,"wxID_SELECT_FONT");
	lua_pushnumber(L,wxID_SORT_ASCENDING); lua_setfield(L,-2,"wxID_SORT_ASCENDING");
	lua_pushnumber(L,wxID_SORT_DESCENDING); lua_setfield(L,-2,"wxID_SORT_DESCENDING");
	lua_pushnumber(L,wxID_SPELL_CHECK); lua_setfield(L,-2,"wxID_SPELL_CHECK");
	lua_pushnumber(L,wxID_STRIKETHROUGH); lua_setfield(L,-2,"wxID_STRIKETHROUGH");
	lua_pushnumber(L,wxID_SYSTEM_MENU); lua_setfield(L,-2,"wxID_SYSTEM_MENU");
	lua_pushnumber(L,wxID_CLOSE_FRAME); lua_setfield(L,-2,"wxID_CLOSE_FRAME");
	lua_pushnumber(L,wxID_MOVE_FRAME); lua_setfield(L,-2,"wxID_MOVE_FRAME");
	lua_pushnumber(L,wxID_RESIZE_FRAME); lua_setfield(L,-2,"wxID_RESIZE_FRAME");
	lua_pushnumber(L,wxID_MAXIMIZE_FRAME); lua_setfield(L,-2,"wxID_MAXIMIZE_FRAME");
	lua_pushnumber(L,wxID_ICONIZE_FRAME); lua_setfield(L,-2,"wxID_ICONIZE_FRAME");
	lua_pushnumber(L,wxID_RESTORE_FRAME); lua_setfield(L,-2,"wxID_RESTORE_FRAME");
	lua_pushnumber(L,wxID_MDI_WINDOW_FIRST); lua_setfield(L,-2,"wxID_MDI_WINDOW_FIRST");
	lua_pushnumber(L,wxID_MDI_WINDOW_CASCADE); lua_setfield(L,-2,"wxID_MDI_WINDOW_CASCADE");
	lua_pushnumber(L,wxID_MDI_WINDOW_TILE_HORZ); lua_setfield(L,-2,"wxID_MDI_WINDOW_TILE_HORZ");
	lua_pushnumber(L,wxID_MDI_WINDOW_TILE_VERT); lua_setfield(L,-2,"wxID_MDI_WINDOW_TILE_VERT");
	lua_pushnumber(L,wxID_MDI_WINDOW_ARRANGE_ICONS); lua_setfield(L,-2,"wxID_MDI_WINDOW_ARRANGE_ICONS");
	lua_pushnumber(L,wxID_MDI_WINDOW_PREV); lua_setfield(L,-2,"wxID_MDI_WINDOW_PREV");
	lua_pushnumber(L,wxID_MDI_WINDOW_NEXT); lua_setfield(L,-2,"wxID_MDI_WINDOW_NEXT");
	lua_pushnumber(L,wxID_MDI_WINDOW_LAST); lua_setfield(L,-2,"wxID_MDI_WINDOW_LAST");
	lua_pushnumber(L,wxID_FILEDLGG); lua_setfield(L,-2,"wxID_FILEDLGG");
	lua_pushnumber(L,wxID_FILECTRL); lua_setfield(L,-2,"wxID_FILECTRL");
	lua_pushnumber(L,wxID_HIGHEST); lua_setfield(L,-2,"wxID_HIGHEST");

	lua_setfield(L,-2,"wxStandardID");

	lua_pushnumber(L,wxID_AUTO_LOWEST); lua_setfield(L,-2,"wxID_AUTO_LOWEST");
	lua_pushnumber(L,wxID_AUTO_HIGHEST); lua_setfield(L,-2,"wxID_AUTO_HIGHEST");
	lua_pushnumber(L,wxID_NONE); lua_setfield(L,-2,"wxID_NONE");
	lua_pushnumber(L,wxID_SEPARATOR); lua_setfield(L,-2,"wxID_SEPARATOR");
	lua_pushnumber(L,wxID_ANY); lua_setfield(L,-2,"wxID_ANY");
	lua_pushnumber(L,wxID_LOWEST); lua_setfield(L,-2,"wxID_LOWEST");
	lua_pushnumber(L,wxID_OPEN); lua_setfield(L,-2,"wxID_OPEN");
	lua_pushnumber(L,wxID_CLOSE); lua_setfield(L,-2,"wxID_CLOSE");
	lua_pushnumber(L,wxID_NEW); lua_setfield(L,-2,"wxID_NEW");
	lua_pushnumber(L,wxID_SAVE); lua_setfield(L,-2,"wxID_SAVE");
	lua_pushnumber(L,wxID_SAVEAS); lua_setfield(L,-2,"wxID_SAVEAS");
	lua_pushnumber(L,wxID_REVERT); lua_setfield(L,-2,"wxID_REVERT");
	lua_pushnumber(L,wxID_EXIT); lua_setfield(L,-2,"wxID_EXIT");
	lua_pushnumber(L,wxID_UNDO); lua_setfield(L,-2,"wxID_UNDO");
	lua_pushnumber(L,wxID_REDO); lua_setfield(L,-2,"wxID_REDO");
	lua_pushnumber(L,wxID_HELP); lua_setfield(L,-2,"wxID_HELP");
	lua_pushnumber(L,wxID_PRINT); lua_setfield(L,-2,"wxID_PRINT");
	lua_pushnumber(L,wxID_PRINT_SETUP); lua_setfield(L,-2,"wxID_PRINT_SETUP");
	lua_pushnumber(L,wxID_PAGE_SETUP); lua_setfield(L,-2,"wxID_PAGE_SETUP");
	lua_pushnumber(L,wxID_PREVIEW); lua_setfield(L,-2,"wxID_PREVIEW");
	lua_pushnumber(L,wxID_ABOUT); lua_setfield(L,-2,"wxID_ABOUT");
	lua_pushnumber(L,wxID_HELP_CONTENTS); lua_setfield(L,-2,"wxID_HELP_CONTENTS");
	lua_pushnumber(L,wxID_HELP_INDEX); lua_setfield(L,-2,"wxID_HELP_INDEX");
	lua_pushnumber(L,wxID_HELP_SEARCH); lua_setfield(L,-2,"wxID_HELP_SEARCH");
	lua_pushnumber(L,wxID_HELP_COMMANDS); lua_setfield(L,-2,"wxID_HELP_COMMANDS");
	lua_pushnumber(L,wxID_HELP_PROCEDURES); lua_setfield(L,-2,"wxID_HELP_PROCEDURES");
	lua_pushnumber(L,wxID_HELP_CONTEXT); lua_setfield(L,-2,"wxID_HELP_CONTEXT");
	lua_pushnumber(L,wxID_CLOSE_ALL); lua_setfield(L,-2,"wxID_CLOSE_ALL");
	lua_pushnumber(L,wxID_PREFERENCES); lua_setfield(L,-2,"wxID_PREFERENCES");
	lua_pushnumber(L,wxID_EDIT); lua_setfield(L,-2,"wxID_EDIT");
	lua_pushnumber(L,wxID_CUT); lua_setfield(L,-2,"wxID_CUT");
	lua_pushnumber(L,wxID_COPY); lua_setfield(L,-2,"wxID_COPY");
	lua_pushnumber(L,wxID_PASTE); lua_setfield(L,-2,"wxID_PASTE");
	lua_pushnumber(L,wxID_CLEAR); lua_setfield(L,-2,"wxID_CLEAR");
	lua_pushnumber(L,wxID_FIND); lua_setfield(L,-2,"wxID_FIND");
	lua_pushnumber(L,wxID_DUPLICATE); lua_setfield(L,-2,"wxID_DUPLICATE");
	lua_pushnumber(L,wxID_SELECTALL); lua_setfield(L,-2,"wxID_SELECTALL");
	lua_pushnumber(L,wxID_DELETE); lua_setfield(L,-2,"wxID_DELETE");
	lua_pushnumber(L,wxID_REPLACE); lua_setfield(L,-2,"wxID_REPLACE");
	lua_pushnumber(L,wxID_REPLACE_ALL); lua_setfield(L,-2,"wxID_REPLACE_ALL");
	lua_pushnumber(L,wxID_PROPERTIES); lua_setfield(L,-2,"wxID_PROPERTIES");
	lua_pushnumber(L,wxID_VIEW_DETAILS); lua_setfield(L,-2,"wxID_VIEW_DETAILS");
	lua_pushnumber(L,wxID_VIEW_LARGEICONS); lua_setfield(L,-2,"wxID_VIEW_LARGEICONS");
	lua_pushnumber(L,wxID_VIEW_SMALLICONS); lua_setfield(L,-2,"wxID_VIEW_SMALLICONS");
	lua_pushnumber(L,wxID_VIEW_LIST); lua_setfield(L,-2,"wxID_VIEW_LIST");
	lua_pushnumber(L,wxID_VIEW_SORTDATE); lua_setfield(L,-2,"wxID_VIEW_SORTDATE");
	lua_pushnumber(L,wxID_VIEW_SORTNAME); lua_setfield(L,-2,"wxID_VIEW_SORTNAME");
	lua_pushnumber(L,wxID_VIEW_SORTSIZE); lua_setfield(L,-2,"wxID_VIEW_SORTSIZE");
	lua_pushnumber(L,wxID_VIEW_SORTTYPE); lua_setfield(L,-2,"wxID_VIEW_SORTTYPE");
	lua_pushnumber(L,wxID_FILE); lua_setfield(L,-2,"wxID_FILE");
	lua_pushnumber(L,wxID_FILE1); lua_setfield(L,-2,"wxID_FILE1");
	lua_pushnumber(L,wxID_FILE2); lua_setfield(L,-2,"wxID_FILE2");
	lua_pushnumber(L,wxID_FILE3); lua_setfield(L,-2,"wxID_FILE3");
	lua_pushnumber(L,wxID_FILE4); lua_setfield(L,-2,"wxID_FILE4");
	lua_pushnumber(L,wxID_FILE5); lua_setfield(L,-2,"wxID_FILE5");
	lua_pushnumber(L,wxID_FILE6); lua_setfield(L,-2,"wxID_FILE6");
	lua_pushnumber(L,wxID_FILE7); lua_setfield(L,-2,"wxID_FILE7");
	lua_pushnumber(L,wxID_FILE8); lua_setfield(L,-2,"wxID_FILE8");
	lua_pushnumber(L,wxID_FILE9); lua_setfield(L,-2,"wxID_FILE9");
	lua_pushnumber(L,wxID_OK); lua_setfield(L,-2,"wxID_OK");
	lua_pushnumber(L,wxID_CANCEL); lua_setfield(L,-2,"wxID_CANCEL");
	lua_pushnumber(L,wxID_APPLY); lua_setfield(L,-2,"wxID_APPLY");
	lua_pushnumber(L,wxID_YES); lua_setfield(L,-2,"wxID_YES");
	lua_pushnumber(L,wxID_NO); lua_setfield(L,-2,"wxID_NO");
	lua_pushnumber(L,wxID_STATIC); lua_setfield(L,-2,"wxID_STATIC");
	lua_pushnumber(L,wxID_FORWARD); lua_setfield(L,-2,"wxID_FORWARD");
	lua_pushnumber(L,wxID_BACKWARD); lua_setfield(L,-2,"wxID_BACKWARD");
	lua_pushnumber(L,wxID_DEFAULT); lua_setfield(L,-2,"wxID_DEFAULT");
	lua_pushnumber(L,wxID_MORE); lua_setfield(L,-2,"wxID_MORE");
	lua_pushnumber(L,wxID_SETUP); lua_setfield(L,-2,"wxID_SETUP");
	lua_pushnumber(L,wxID_RESET); lua_setfield(L,-2,"wxID_RESET");
	lua_pushnumber(L,wxID_CONTEXT_HELP); lua_setfield(L,-2,"wxID_CONTEXT_HELP");
	lua_pushnumber(L,wxID_YESTOALL); lua_setfield(L,-2,"wxID_YESTOALL");
	lua_pushnumber(L,wxID_NOTOALL); lua_setfield(L,-2,"wxID_NOTOALL");
	lua_pushnumber(L,wxID_ABORT); lua_setfield(L,-2,"wxID_ABORT");
	lua_pushnumber(L,wxID_RETRY); lua_setfield(L,-2,"wxID_RETRY");
	lua_pushnumber(L,wxID_IGNORE); lua_setfield(L,-2,"wxID_IGNORE");
	lua_pushnumber(L,wxID_ADD); lua_setfield(L,-2,"wxID_ADD");
	lua_pushnumber(L,wxID_REMOVE); lua_setfield(L,-2,"wxID_REMOVE");
	lua_pushnumber(L,wxID_UP); lua_setfield(L,-2,"wxID_UP");
	lua_pushnumber(L,wxID_DOWN); lua_setfield(L,-2,"wxID_DOWN");
	lua_pushnumber(L,wxID_HOME); lua_setfield(L,-2,"wxID_HOME");
	lua_pushnumber(L,wxID_REFRESH); lua_setfield(L,-2,"wxID_REFRESH");
	lua_pushnumber(L,wxID_STOP); lua_setfield(L,-2,"wxID_STOP");
	lua_pushnumber(L,wxID_INDEX); lua_setfield(L,-2,"wxID_INDEX");
	lua_pushnumber(L,wxID_BOLD); lua_setfield(L,-2,"wxID_BOLD");
	lua_pushnumber(L,wxID_ITALIC); lua_setfield(L,-2,"wxID_ITALIC");
	lua_pushnumber(L,wxID_JUSTIFY_CENTER); lua_setfield(L,-2,"wxID_JUSTIFY_CENTER");
	lua_pushnumber(L,wxID_JUSTIFY_FILL); lua_setfield(L,-2,"wxID_JUSTIFY_FILL");
	lua_pushnumber(L,wxID_JUSTIFY_RIGHT); lua_setfield(L,-2,"wxID_JUSTIFY_RIGHT");
	lua_pushnumber(L,wxID_JUSTIFY_LEFT); lua_setfield(L,-2,"wxID_JUSTIFY_LEFT");
	lua_pushnumber(L,wxID_UNDERLINE); lua_setfield(L,-2,"wxID_UNDERLINE");
	lua_pushnumber(L,wxID_INDENT); lua_setfield(L,-2,"wxID_INDENT");
	lua_pushnumber(L,wxID_UNINDENT); lua_setfield(L,-2,"wxID_UNINDENT");
	lua_pushnumber(L,wxID_ZOOM_100); lua_setfield(L,-2,"wxID_ZOOM_100");
	lua_pushnumber(L,wxID_ZOOM_FIT); lua_setfield(L,-2,"wxID_ZOOM_FIT");
	lua_pushnumber(L,wxID_ZOOM_IN); lua_setfield(L,-2,"wxID_ZOOM_IN");
	lua_pushnumber(L,wxID_ZOOM_OUT); lua_setfield(L,-2,"wxID_ZOOM_OUT");
	lua_pushnumber(L,wxID_UNDELETE); lua_setfield(L,-2,"wxID_UNDELETE");
	lua_pushnumber(L,wxID_REVERT_TO_SAVED); lua_setfield(L,-2,"wxID_REVERT_TO_SAVED");
	lua_pushnumber(L,wxID_CDROM); lua_setfield(L,-2,"wxID_CDROM");
	lua_pushnumber(L,wxID_CONVERT); lua_setfield(L,-2,"wxID_CONVERT");
	lua_pushnumber(L,wxID_EXECUTE); lua_setfield(L,-2,"wxID_EXECUTE");
	lua_pushnumber(L,wxID_FLOPPY); lua_setfield(L,-2,"wxID_FLOPPY");
	lua_pushnumber(L,wxID_HARDDISK); lua_setfield(L,-2,"wxID_HARDDISK");
	lua_pushnumber(L,wxID_BOTTOM); lua_setfield(L,-2,"wxID_BOTTOM");
	lua_pushnumber(L,wxID_FIRST); lua_setfield(L,-2,"wxID_FIRST");
	lua_pushnumber(L,wxID_LAST); lua_setfield(L,-2,"wxID_LAST");
	lua_pushnumber(L,wxID_TOP); lua_setfield(L,-2,"wxID_TOP");
	lua_pushnumber(L,wxID_INFO); lua_setfield(L,-2,"wxID_INFO");
	lua_pushnumber(L,wxID_JUMP_TO); lua_setfield(L,-2,"wxID_JUMP_TO");
	lua_pushnumber(L,wxID_NETWORK); lua_setfield(L,-2,"wxID_NETWORK");
	lua_pushnumber(L,wxID_SELECT_COLOR); lua_setfield(L,-2,"wxID_SELECT_COLOR");
	lua_pushnumber(L,wxID_SELECT_FONT); lua_setfield(L,-2,"wxID_SELECT_FONT");
	lua_pushnumber(L,wxID_SORT_ASCENDING); lua_setfield(L,-2,"wxID_SORT_ASCENDING");
	lua_pushnumber(L,wxID_SORT_DESCENDING); lua_setfield(L,-2,"wxID_SORT_DESCENDING");
	lua_pushnumber(L,wxID_SPELL_CHECK); lua_setfield(L,-2,"wxID_SPELL_CHECK");
	lua_pushnumber(L,wxID_STRIKETHROUGH); lua_setfield(L,-2,"wxID_STRIKETHROUGH");
	lua_pushnumber(L,wxID_SYSTEM_MENU); lua_setfield(L,-2,"wxID_SYSTEM_MENU");
	lua_pushnumber(L,wxID_CLOSE_FRAME); lua_setfield(L,-2,"wxID_CLOSE_FRAME");
	lua_pushnumber(L,wxID_MOVE_FRAME); lua_setfield(L,-2,"wxID_MOVE_FRAME");
	lua_pushnumber(L,wxID_RESIZE_FRAME); lua_setfield(L,-2,"wxID_RESIZE_FRAME");
	lua_pushnumber(L,wxID_MAXIMIZE_FRAME); lua_setfield(L,-2,"wxID_MAXIMIZE_FRAME");
	lua_pushnumber(L,wxID_ICONIZE_FRAME); lua_setfield(L,-2,"wxID_ICONIZE_FRAME");
	lua_pushnumber(L,wxID_RESTORE_FRAME); lua_setfield(L,-2,"wxID_RESTORE_FRAME");
	lua_pushnumber(L,wxID_MDI_WINDOW_FIRST); lua_setfield(L,-2,"wxID_MDI_WINDOW_FIRST");
	lua_pushnumber(L,wxID_MDI_WINDOW_CASCADE); lua_setfield(L,-2,"wxID_MDI_WINDOW_CASCADE");
	lua_pushnumber(L,wxID_MDI_WINDOW_TILE_HORZ); lua_setfield(L,-2,"wxID_MDI_WINDOW_TILE_HORZ");
	lua_pushnumber(L,wxID_MDI_WINDOW_TILE_VERT); lua_setfield(L,-2,"wxID_MDI_WINDOW_TILE_VERT");
	lua_pushnumber(L,wxID_MDI_WINDOW_ARRANGE_ICONS); lua_setfield(L,-2,"wxID_MDI_WINDOW_ARRANGE_ICONS");
	lua_pushnumber(L,wxID_MDI_WINDOW_PREV); lua_setfield(L,-2,"wxID_MDI_WINDOW_PREV");
	lua_pushnumber(L,wxID_MDI_WINDOW_NEXT); lua_setfield(L,-2,"wxID_MDI_WINDOW_NEXT");
	lua_pushnumber(L,wxID_MDI_WINDOW_LAST); lua_setfield(L,-2,"wxID_MDI_WINDOW_LAST");
	lua_pushnumber(L,wxID_FILEDLGG); lua_setfield(L,-2,"wxID_FILEDLGG");
	lua_pushnumber(L,wxID_FILECTRL); lua_setfield(L,-2,"wxID_FILECTRL");
	lua_pushnumber(L,wxID_HIGHEST); lua_setfield(L,-2,"wxID_HIGHEST");


	lua_newtable(L); // enum wxItemKind

	lua_pushnumber(L,wxITEM_SEPARATOR); lua_setfield(L,-2,"wxITEM_SEPARATOR");
	lua_pushnumber(L,wxITEM_NORMAL); lua_setfield(L,-2,"wxITEM_NORMAL");
	lua_pushnumber(L,wxITEM_CHECK); lua_setfield(L,-2,"wxITEM_CHECK");
	lua_pushnumber(L,wxITEM_RADIO); lua_setfield(L,-2,"wxITEM_RADIO");
	lua_pushnumber(L,wxITEM_DROPDOWN); lua_setfield(L,-2,"wxITEM_DROPDOWN");
	lua_pushnumber(L,wxITEM_MAX); lua_setfield(L,-2,"wxITEM_MAX");

	lua_setfield(L,-2,"wxItemKind");

	lua_pushnumber(L,wxITEM_SEPARATOR); lua_setfield(L,-2,"wxITEM_SEPARATOR");
	lua_pushnumber(L,wxITEM_NORMAL); lua_setfield(L,-2,"wxITEM_NORMAL");
	lua_pushnumber(L,wxITEM_CHECK); lua_setfield(L,-2,"wxITEM_CHECK");
	lua_pushnumber(L,wxITEM_RADIO); lua_setfield(L,-2,"wxITEM_RADIO");
	lua_pushnumber(L,wxITEM_DROPDOWN); lua_setfield(L,-2,"wxITEM_DROPDOWN");
	lua_pushnumber(L,wxITEM_MAX); lua_setfield(L,-2,"wxITEM_MAX");


	lua_newtable(L); // enum wxHitTest

	lua_pushnumber(L,wxHT_NOWHERE); lua_setfield(L,-2,"wxHT_NOWHERE");
	lua_pushnumber(L,wxHT_SCROLLBAR_FIRST); lua_setfield(L,-2,"wxHT_SCROLLBAR_FIRST");
	lua_pushnumber(L,wxHT_SCROLLBAR_ARROW_LINE_1); lua_setfield(L,-2,"wxHT_SCROLLBAR_ARROW_LINE_1");
	lua_pushnumber(L,wxHT_SCROLLBAR_ARROW_LINE_2); lua_setfield(L,-2,"wxHT_SCROLLBAR_ARROW_LINE_2");
	lua_pushnumber(L,wxHT_SCROLLBAR_ARROW_PAGE_1); lua_setfield(L,-2,"wxHT_SCROLLBAR_ARROW_PAGE_1");
	lua_pushnumber(L,wxHT_SCROLLBAR_ARROW_PAGE_2); lua_setfield(L,-2,"wxHT_SCROLLBAR_ARROW_PAGE_2");
	lua_pushnumber(L,wxHT_SCROLLBAR_THUMB); lua_setfield(L,-2,"wxHT_SCROLLBAR_THUMB");
	lua_pushnumber(L,wxHT_SCROLLBAR_BAR_1); lua_setfield(L,-2,"wxHT_SCROLLBAR_BAR_1");
	lua_pushnumber(L,wxHT_SCROLLBAR_BAR_2); lua_setfield(L,-2,"wxHT_SCROLLBAR_BAR_2");
	lua_pushnumber(L,wxHT_SCROLLBAR_LAST); lua_setfield(L,-2,"wxHT_SCROLLBAR_LAST");
	lua_pushnumber(L,wxHT_WINDOW_OUTSIDE); lua_setfield(L,-2,"wxHT_WINDOW_OUTSIDE");
	lua_pushnumber(L,wxHT_WINDOW_INSIDE); lua_setfield(L,-2,"wxHT_WINDOW_INSIDE");
	lua_pushnumber(L,wxHT_WINDOW_VERT_SCROLLBAR); lua_setfield(L,-2,"wxHT_WINDOW_VERT_SCROLLBAR");
	lua_pushnumber(L,wxHT_WINDOW_HORZ_SCROLLBAR); lua_setfield(L,-2,"wxHT_WINDOW_HORZ_SCROLLBAR");
	lua_pushnumber(L,wxHT_WINDOW_CORNER); lua_setfield(L,-2,"wxHT_WINDOW_CORNER");
	lua_pushnumber(L,wxHT_MAX); lua_setfield(L,-2,"wxHT_MAX");

	lua_setfield(L,-2,"wxHitTest");

	lua_pushnumber(L,wxHT_NOWHERE); lua_setfield(L,-2,"wxHT_NOWHERE");
	lua_pushnumber(L,wxHT_SCROLLBAR_FIRST); lua_setfield(L,-2,"wxHT_SCROLLBAR_FIRST");
	lua_pushnumber(L,wxHT_SCROLLBAR_ARROW_LINE_1); lua_setfield(L,-2,"wxHT_SCROLLBAR_ARROW_LINE_1");
	lua_pushnumber(L,wxHT_SCROLLBAR_ARROW_LINE_2); lua_setfield(L,-2,"wxHT_SCROLLBAR_ARROW_LINE_2");
	lua_pushnumber(L,wxHT_SCROLLBAR_ARROW_PAGE_1); lua_setfield(L,-2,"wxHT_SCROLLBAR_ARROW_PAGE_1");
	lua_pushnumber(L,wxHT_SCROLLBAR_ARROW_PAGE_2); lua_setfield(L,-2,"wxHT_SCROLLBAR_ARROW_PAGE_2");
	lua_pushnumber(L,wxHT_SCROLLBAR_THUMB); lua_setfield(L,-2,"wxHT_SCROLLBAR_THUMB");
	lua_pushnumber(L,wxHT_SCROLLBAR_BAR_1); lua_setfield(L,-2,"wxHT_SCROLLBAR_BAR_1");
	lua_pushnumber(L,wxHT_SCROLLBAR_BAR_2); lua_setfield(L,-2,"wxHT_SCROLLBAR_BAR_2");
	lua_pushnumber(L,wxHT_SCROLLBAR_LAST); lua_setfield(L,-2,"wxHT_SCROLLBAR_LAST");
	lua_pushnumber(L,wxHT_WINDOW_OUTSIDE); lua_setfield(L,-2,"wxHT_WINDOW_OUTSIDE");
	lua_pushnumber(L,wxHT_WINDOW_INSIDE); lua_setfield(L,-2,"wxHT_WINDOW_INSIDE");
	lua_pushnumber(L,wxHT_WINDOW_VERT_SCROLLBAR); lua_setfield(L,-2,"wxHT_WINDOW_VERT_SCROLLBAR");
	lua_pushnumber(L,wxHT_WINDOW_HORZ_SCROLLBAR); lua_setfield(L,-2,"wxHT_WINDOW_HORZ_SCROLLBAR");
	lua_pushnumber(L,wxHT_WINDOW_CORNER); lua_setfield(L,-2,"wxHT_WINDOW_CORNER");
	lua_pushnumber(L,wxHT_MAX); lua_setfield(L,-2,"wxHT_MAX");


	lua_newtable(L); // enum wxDataFormatId

	lua_pushnumber(L,wxDF_INVALID); lua_setfield(L,-2,"wxDF_INVALID");
	lua_pushnumber(L,wxDF_TEXT); lua_setfield(L,-2,"wxDF_TEXT");
	lua_pushnumber(L,wxDF_BITMAP); lua_setfield(L,-2,"wxDF_BITMAP");
	lua_pushnumber(L,wxDF_METAFILE); lua_setfield(L,-2,"wxDF_METAFILE");
	lua_pushnumber(L,wxDF_SYLK); lua_setfield(L,-2,"wxDF_SYLK");
	lua_pushnumber(L,wxDF_DIF); lua_setfield(L,-2,"wxDF_DIF");
	lua_pushnumber(L,wxDF_TIFF); lua_setfield(L,-2,"wxDF_TIFF");
	lua_pushnumber(L,wxDF_OEMTEXT); lua_setfield(L,-2,"wxDF_OEMTEXT");
	lua_pushnumber(L,wxDF_DIB); lua_setfield(L,-2,"wxDF_DIB");
	lua_pushnumber(L,wxDF_PALETTE); lua_setfield(L,-2,"wxDF_PALETTE");
	lua_pushnumber(L,wxDF_PENDATA); lua_setfield(L,-2,"wxDF_PENDATA");
	lua_pushnumber(L,wxDF_RIFF); lua_setfield(L,-2,"wxDF_RIFF");
	lua_pushnumber(L,wxDF_WAVE); lua_setfield(L,-2,"wxDF_WAVE");
	lua_pushnumber(L,wxDF_UNICODETEXT); lua_setfield(L,-2,"wxDF_UNICODETEXT");
	lua_pushnumber(L,wxDF_ENHMETAFILE); lua_setfield(L,-2,"wxDF_ENHMETAFILE");
	lua_pushnumber(L,wxDF_FILENAME); lua_setfield(L,-2,"wxDF_FILENAME");
	lua_pushnumber(L,wxDF_LOCALE); lua_setfield(L,-2,"wxDF_LOCALE");
	lua_pushnumber(L,wxDF_PRIVATE); lua_setfield(L,-2,"wxDF_PRIVATE");
	lua_pushnumber(L,wxDF_HTML); lua_setfield(L,-2,"wxDF_HTML");
	lua_pushnumber(L,wxDF_MAX); lua_setfield(L,-2,"wxDF_MAX");

	lua_setfield(L,-2,"wxDataFormatId");

	lua_pushnumber(L,wxDF_INVALID); lua_setfield(L,-2,"wxDF_INVALID");
	lua_pushnumber(L,wxDF_TEXT); lua_setfield(L,-2,"wxDF_TEXT");
	lua_pushnumber(L,wxDF_BITMAP); lua_setfield(L,-2,"wxDF_BITMAP");
	lua_pushnumber(L,wxDF_METAFILE); lua_setfield(L,-2,"wxDF_METAFILE");
	lua_pushnumber(L,wxDF_SYLK); lua_setfield(L,-2,"wxDF_SYLK");
	lua_pushnumber(L,wxDF_DIF); lua_setfield(L,-2,"wxDF_DIF");
	lua_pushnumber(L,wxDF_TIFF); lua_setfield(L,-2,"wxDF_TIFF");
	lua_pushnumber(L,wxDF_OEMTEXT); lua_setfield(L,-2,"wxDF_OEMTEXT");
	lua_pushnumber(L,wxDF_DIB); lua_setfield(L,-2,"wxDF_DIB");
	lua_pushnumber(L,wxDF_PALETTE); lua_setfield(L,-2,"wxDF_PALETTE");
	lua_pushnumber(L,wxDF_PENDATA); lua_setfield(L,-2,"wxDF_PENDATA");
	lua_pushnumber(L,wxDF_RIFF); lua_setfield(L,-2,"wxDF_RIFF");
	lua_pushnumber(L,wxDF_WAVE); lua_setfield(L,-2,"wxDF_WAVE");
	lua_pushnumber(L,wxDF_UNICODETEXT); lua_setfield(L,-2,"wxDF_UNICODETEXT");
	lua_pushnumber(L,wxDF_ENHMETAFILE); lua_setfield(L,-2,"wxDF_ENHMETAFILE");
	lua_pushnumber(L,wxDF_FILENAME); lua_setfield(L,-2,"wxDF_FILENAME");
	lua_pushnumber(L,wxDF_LOCALE); lua_setfield(L,-2,"wxDF_LOCALE");
	lua_pushnumber(L,wxDF_PRIVATE); lua_setfield(L,-2,"wxDF_PRIVATE");
	lua_pushnumber(L,wxDF_HTML); lua_setfield(L,-2,"wxDF_HTML");
	lua_pushnumber(L,wxDF_MAX); lua_setfield(L,-2,"wxDF_MAX");


	lua_newtable(L); // enum wxKeyCode

	lua_pushnumber(L,WXK_NONE); lua_setfield(L,-2,"WXK_NONE");
	lua_pushnumber(L,WXK_BACK); lua_setfield(L,-2,"WXK_BACK");
	lua_pushnumber(L,WXK_TAB); lua_setfield(L,-2,"WXK_TAB");
	lua_pushnumber(L,WXK_RETURN); lua_setfield(L,-2,"WXK_RETURN");
	lua_pushnumber(L,WXK_ESCAPE); lua_setfield(L,-2,"WXK_ESCAPE");
	lua_pushnumber(L,WXK_SPACE); lua_setfield(L,-2,"WXK_SPACE");
	lua_pushnumber(L,WXK_DELETE); lua_setfield(L,-2,"WXK_DELETE");
	lua_pushnumber(L,WXK_START); lua_setfield(L,-2,"WXK_START");
	lua_pushnumber(L,WXK_LBUTTON); lua_setfield(L,-2,"WXK_LBUTTON");
	lua_pushnumber(L,WXK_RBUTTON); lua_setfield(L,-2,"WXK_RBUTTON");
	lua_pushnumber(L,WXK_CANCEL); lua_setfield(L,-2,"WXK_CANCEL");
	lua_pushnumber(L,WXK_MBUTTON); lua_setfield(L,-2,"WXK_MBUTTON");
	lua_pushnumber(L,WXK_CLEAR); lua_setfield(L,-2,"WXK_CLEAR");
	lua_pushnumber(L,WXK_SHIFT); lua_setfield(L,-2,"WXK_SHIFT");
	lua_pushnumber(L,WXK_ALT); lua_setfield(L,-2,"WXK_ALT");
	lua_pushnumber(L,WXK_CONTROL); lua_setfield(L,-2,"WXK_CONTROL");
	lua_pushnumber(L,WXK_MENU); lua_setfield(L,-2,"WXK_MENU");
	lua_pushnumber(L,WXK_PAUSE); lua_setfield(L,-2,"WXK_PAUSE");
	lua_pushnumber(L,WXK_CAPITAL); lua_setfield(L,-2,"WXK_CAPITAL");
	lua_pushnumber(L,WXK_END); lua_setfield(L,-2,"WXK_END");
	lua_pushnumber(L,WXK_HOME); lua_setfield(L,-2,"WXK_HOME");
	lua_pushnumber(L,WXK_LEFT); lua_setfield(L,-2,"WXK_LEFT");
	lua_pushnumber(L,WXK_UP); lua_setfield(L,-2,"WXK_UP");
	lua_pushnumber(L,WXK_RIGHT); lua_setfield(L,-2,"WXK_RIGHT");
	lua_pushnumber(L,WXK_DOWN); lua_setfield(L,-2,"WXK_DOWN");
	lua_pushnumber(L,WXK_SELECT); lua_setfield(L,-2,"WXK_SELECT");
	lua_pushnumber(L,WXK_PRINT); lua_setfield(L,-2,"WXK_PRINT");
	lua_pushnumber(L,WXK_EXECUTE); lua_setfield(L,-2,"WXK_EXECUTE");
	lua_pushnumber(L,WXK_SNAPSHOT); lua_setfield(L,-2,"WXK_SNAPSHOT");
	lua_pushnumber(L,WXK_INSERT); lua_setfield(L,-2,"WXK_INSERT");
	lua_pushnumber(L,WXK_HELP); lua_setfield(L,-2,"WXK_HELP");
	lua_pushnumber(L,WXK_NUMPAD0); lua_setfield(L,-2,"WXK_NUMPAD0");
	lua_pushnumber(L,WXK_NUMPAD1); lua_setfield(L,-2,"WXK_NUMPAD1");
	lua_pushnumber(L,WXK_NUMPAD2); lua_setfield(L,-2,"WXK_NUMPAD2");
	lua_pushnumber(L,WXK_NUMPAD3); lua_setfield(L,-2,"WXK_NUMPAD3");
	lua_pushnumber(L,WXK_NUMPAD4); lua_setfield(L,-2,"WXK_NUMPAD4");
	lua_pushnumber(L,WXK_NUMPAD5); lua_setfield(L,-2,"WXK_NUMPAD5");
	lua_pushnumber(L,WXK_NUMPAD6); lua_setfield(L,-2,"WXK_NUMPAD6");
	lua_pushnumber(L,WXK_NUMPAD7); lua_setfield(L,-2,"WXK_NUMPAD7");
	lua_pushnumber(L,WXK_NUMPAD8); lua_setfield(L,-2,"WXK_NUMPAD8");
	lua_pushnumber(L,WXK_NUMPAD9); lua_setfield(L,-2,"WXK_NUMPAD9");
	lua_pushnumber(L,WXK_MULTIPLY); lua_setfield(L,-2,"WXK_MULTIPLY");
	lua_pushnumber(L,WXK_ADD); lua_setfield(L,-2,"WXK_ADD");
	lua_pushnumber(L,WXK_SEPARATOR); lua_setfield(L,-2,"WXK_SEPARATOR");
	lua_pushnumber(L,WXK_SUBTRACT); lua_setfield(L,-2,"WXK_SUBTRACT");
	lua_pushnumber(L,WXK_DECIMAL); lua_setfield(L,-2,"WXK_DECIMAL");
	lua_pushnumber(L,WXK_DIVIDE); lua_setfield(L,-2,"WXK_DIVIDE");
	lua_pushnumber(L,WXK_F1); lua_setfield(L,-2,"WXK_F1");
	lua_pushnumber(L,WXK_F2); lua_setfield(L,-2,"WXK_F2");
	lua_pushnumber(L,WXK_F3); lua_setfield(L,-2,"WXK_F3");
	lua_pushnumber(L,WXK_F4); lua_setfield(L,-2,"WXK_F4");
	lua_pushnumber(L,WXK_F5); lua_setfield(L,-2,"WXK_F5");
	lua_pushnumber(L,WXK_F6); lua_setfield(L,-2,"WXK_F6");
	lua_pushnumber(L,WXK_F7); lua_setfield(L,-2,"WXK_F7");
	lua_pushnumber(L,WXK_F8); lua_setfield(L,-2,"WXK_F8");
	lua_pushnumber(L,WXK_F9); lua_setfield(L,-2,"WXK_F9");
	lua_pushnumber(L,WXK_F10); lua_setfield(L,-2,"WXK_F10");
	lua_pushnumber(L,WXK_F11); lua_setfield(L,-2,"WXK_F11");
	lua_pushnumber(L,WXK_F12); lua_setfield(L,-2,"WXK_F12");
	lua_pushnumber(L,WXK_F13); lua_setfield(L,-2,"WXK_F13");
	lua_pushnumber(L,WXK_F14); lua_setfield(L,-2,"WXK_F14");
	lua_pushnumber(L,WXK_F15); lua_setfield(L,-2,"WXK_F15");
	lua_pushnumber(L,WXK_F16); lua_setfield(L,-2,"WXK_F16");
	lua_pushnumber(L,WXK_F17); lua_setfield(L,-2,"WXK_F17");
	lua_pushnumber(L,WXK_F18); lua_setfield(L,-2,"WXK_F18");
	lua_pushnumber(L,WXK_F19); lua_setfield(L,-2,"WXK_F19");
	lua_pushnumber(L,WXK_F20); lua_setfield(L,-2,"WXK_F20");
	lua_pushnumber(L,WXK_F21); lua_setfield(L,-2,"WXK_F21");
	lua_pushnumber(L,WXK_F22); lua_setfield(L,-2,"WXK_F22");
	lua_pushnumber(L,WXK_F23); lua_setfield(L,-2,"WXK_F23");
	lua_pushnumber(L,WXK_F24); lua_setfield(L,-2,"WXK_F24");
	lua_pushnumber(L,WXK_NUMLOCK); lua_setfield(L,-2,"WXK_NUMLOCK");
	lua_pushnumber(L,WXK_SCROLL); lua_setfield(L,-2,"WXK_SCROLL");
	lua_pushnumber(L,WXK_PAGEUP); lua_setfield(L,-2,"WXK_PAGEUP");
	lua_pushnumber(L,WXK_PAGEDOWN); lua_setfield(L,-2,"WXK_PAGEDOWN");
	lua_pushnumber(L,WXK_NUMPAD_SPACE); lua_setfield(L,-2,"WXK_NUMPAD_SPACE");
	lua_pushnumber(L,WXK_NUMPAD_TAB); lua_setfield(L,-2,"WXK_NUMPAD_TAB");
	lua_pushnumber(L,WXK_NUMPAD_ENTER); lua_setfield(L,-2,"WXK_NUMPAD_ENTER");
	lua_pushnumber(L,WXK_NUMPAD_F1); lua_setfield(L,-2,"WXK_NUMPAD_F1");
	lua_pushnumber(L,WXK_NUMPAD_F2); lua_setfield(L,-2,"WXK_NUMPAD_F2");
	lua_pushnumber(L,WXK_NUMPAD_F3); lua_setfield(L,-2,"WXK_NUMPAD_F3");
	lua_pushnumber(L,WXK_NUMPAD_F4); lua_setfield(L,-2,"WXK_NUMPAD_F4");
	lua_pushnumber(L,WXK_NUMPAD_HOME); lua_setfield(L,-2,"WXK_NUMPAD_HOME");
	lua_pushnumber(L,WXK_NUMPAD_LEFT); lua_setfield(L,-2,"WXK_NUMPAD_LEFT");
	lua_pushnumber(L,WXK_NUMPAD_UP); lua_setfield(L,-2,"WXK_NUMPAD_UP");
	lua_pushnumber(L,WXK_NUMPAD_RIGHT); lua_setfield(L,-2,"WXK_NUMPAD_RIGHT");
	lua_pushnumber(L,WXK_NUMPAD_DOWN); lua_setfield(L,-2,"WXK_NUMPAD_DOWN");
	lua_pushnumber(L,WXK_NUMPAD_PAGEUP); lua_setfield(L,-2,"WXK_NUMPAD_PAGEUP");
	lua_pushnumber(L,WXK_NUMPAD_PAGEDOWN); lua_setfield(L,-2,"WXK_NUMPAD_PAGEDOWN");
	lua_pushnumber(L,WXK_NUMPAD_END); lua_setfield(L,-2,"WXK_NUMPAD_END");
	lua_pushnumber(L,WXK_NUMPAD_BEGIN); lua_setfield(L,-2,"WXK_NUMPAD_BEGIN");
	lua_pushnumber(L,WXK_NUMPAD_INSERT); lua_setfield(L,-2,"WXK_NUMPAD_INSERT");
	lua_pushnumber(L,WXK_NUMPAD_DELETE); lua_setfield(L,-2,"WXK_NUMPAD_DELETE");
	lua_pushnumber(L,WXK_NUMPAD_EQUAL); lua_setfield(L,-2,"WXK_NUMPAD_EQUAL");
	lua_pushnumber(L,WXK_NUMPAD_MULTIPLY); lua_setfield(L,-2,"WXK_NUMPAD_MULTIPLY");
	lua_pushnumber(L,WXK_NUMPAD_ADD); lua_setfield(L,-2,"WXK_NUMPAD_ADD");
	lua_pushnumber(L,WXK_NUMPAD_SEPARATOR); lua_setfield(L,-2,"WXK_NUMPAD_SEPARATOR");
	lua_pushnumber(L,WXK_NUMPAD_SUBTRACT); lua_setfield(L,-2,"WXK_NUMPAD_SUBTRACT");
	lua_pushnumber(L,WXK_NUMPAD_DECIMAL); lua_setfield(L,-2,"WXK_NUMPAD_DECIMAL");
	lua_pushnumber(L,WXK_NUMPAD_DIVIDE); lua_setfield(L,-2,"WXK_NUMPAD_DIVIDE");
	lua_pushnumber(L,WXK_WINDOWS_LEFT); lua_setfield(L,-2,"WXK_WINDOWS_LEFT");
	lua_pushnumber(L,WXK_WINDOWS_RIGHT); lua_setfield(L,-2,"WXK_WINDOWS_RIGHT");
	lua_pushnumber(L,WXK_WINDOWS_MENU); lua_setfield(L,-2,"WXK_WINDOWS_MENU");
	lua_pushnumber(L,WXK_COMMAND); lua_setfield(L,-2,"WXK_COMMAND");
	lua_pushnumber(L,WXK_SPECIAL1); lua_setfield(L,-2,"WXK_SPECIAL1");
	lua_pushnumber(L,WXK_SPECIAL2); lua_setfield(L,-2,"WXK_SPECIAL2");
	lua_pushnumber(L,WXK_SPECIAL3); lua_setfield(L,-2,"WXK_SPECIAL3");
	lua_pushnumber(L,WXK_SPECIAL4); lua_setfield(L,-2,"WXK_SPECIAL4");
	lua_pushnumber(L,WXK_SPECIAL5); lua_setfield(L,-2,"WXK_SPECIAL5");
	lua_pushnumber(L,WXK_SPECIAL6); lua_setfield(L,-2,"WXK_SPECIAL6");
	lua_pushnumber(L,WXK_SPECIAL7); lua_setfield(L,-2,"WXK_SPECIAL7");
	lua_pushnumber(L,WXK_SPECIAL8); lua_setfield(L,-2,"WXK_SPECIAL8");
	lua_pushnumber(L,WXK_SPECIAL9); lua_setfield(L,-2,"WXK_SPECIAL9");
	lua_pushnumber(L,WXK_SPECIAL10); lua_setfield(L,-2,"WXK_SPECIAL10");
	lua_pushnumber(L,WXK_SPECIAL11); lua_setfield(L,-2,"WXK_SPECIAL11");
	lua_pushnumber(L,WXK_SPECIAL12); lua_setfield(L,-2,"WXK_SPECIAL12");
	lua_pushnumber(L,WXK_SPECIAL13); lua_setfield(L,-2,"WXK_SPECIAL13");
	lua_pushnumber(L,WXK_SPECIAL14); lua_setfield(L,-2,"WXK_SPECIAL14");
	lua_pushnumber(L,WXK_SPECIAL15); lua_setfield(L,-2,"WXK_SPECIAL15");
	lua_pushnumber(L,WXK_SPECIAL16); lua_setfield(L,-2,"WXK_SPECIAL16");
	lua_pushnumber(L,WXK_SPECIAL17); lua_setfield(L,-2,"WXK_SPECIAL17");
	lua_pushnumber(L,WXK_SPECIAL18); lua_setfield(L,-2,"WXK_SPECIAL18");
	lua_pushnumber(L,WXK_SPECIAL19); lua_setfield(L,-2,"WXK_SPECIAL19");
	lua_pushnumber(L,WXK_SPECIAL20); lua_setfield(L,-2,"WXK_SPECIAL20");

	lua_setfield(L,-2,"wxKeyCode");

	lua_pushnumber(L,WXK_NONE); lua_setfield(L,-2,"WXK_NONE");
	lua_pushnumber(L,WXK_BACK); lua_setfield(L,-2,"WXK_BACK");
	lua_pushnumber(L,WXK_TAB); lua_setfield(L,-2,"WXK_TAB");
	lua_pushnumber(L,WXK_RETURN); lua_setfield(L,-2,"WXK_RETURN");
	lua_pushnumber(L,WXK_ESCAPE); lua_setfield(L,-2,"WXK_ESCAPE");
	lua_pushnumber(L,WXK_SPACE); lua_setfield(L,-2,"WXK_SPACE");
	lua_pushnumber(L,WXK_DELETE); lua_setfield(L,-2,"WXK_DELETE");
	lua_pushnumber(L,WXK_START); lua_setfield(L,-2,"WXK_START");
	lua_pushnumber(L,WXK_LBUTTON); lua_setfield(L,-2,"WXK_LBUTTON");
	lua_pushnumber(L,WXK_RBUTTON); lua_setfield(L,-2,"WXK_RBUTTON");
	lua_pushnumber(L,WXK_CANCEL); lua_setfield(L,-2,"WXK_CANCEL");
	lua_pushnumber(L,WXK_MBUTTON); lua_setfield(L,-2,"WXK_MBUTTON");
	lua_pushnumber(L,WXK_CLEAR); lua_setfield(L,-2,"WXK_CLEAR");
	lua_pushnumber(L,WXK_SHIFT); lua_setfield(L,-2,"WXK_SHIFT");
	lua_pushnumber(L,WXK_ALT); lua_setfield(L,-2,"WXK_ALT");
	lua_pushnumber(L,WXK_CONTROL); lua_setfield(L,-2,"WXK_CONTROL");
	lua_pushnumber(L,WXK_MENU); lua_setfield(L,-2,"WXK_MENU");
	lua_pushnumber(L,WXK_PAUSE); lua_setfield(L,-2,"WXK_PAUSE");
	lua_pushnumber(L,WXK_CAPITAL); lua_setfield(L,-2,"WXK_CAPITAL");
	lua_pushnumber(L,WXK_END); lua_setfield(L,-2,"WXK_END");
	lua_pushnumber(L,WXK_HOME); lua_setfield(L,-2,"WXK_HOME");
	lua_pushnumber(L,WXK_LEFT); lua_setfield(L,-2,"WXK_LEFT");
	lua_pushnumber(L,WXK_UP); lua_setfield(L,-2,"WXK_UP");
	lua_pushnumber(L,WXK_RIGHT); lua_setfield(L,-2,"WXK_RIGHT");
	lua_pushnumber(L,WXK_DOWN); lua_setfield(L,-2,"WXK_DOWN");
	lua_pushnumber(L,WXK_SELECT); lua_setfield(L,-2,"WXK_SELECT");
	lua_pushnumber(L,WXK_PRINT); lua_setfield(L,-2,"WXK_PRINT");
	lua_pushnumber(L,WXK_EXECUTE); lua_setfield(L,-2,"WXK_EXECUTE");
	lua_pushnumber(L,WXK_SNAPSHOT); lua_setfield(L,-2,"WXK_SNAPSHOT");
	lua_pushnumber(L,WXK_INSERT); lua_setfield(L,-2,"WXK_INSERT");
	lua_pushnumber(L,WXK_HELP); lua_setfield(L,-2,"WXK_HELP");
	lua_pushnumber(L,WXK_NUMPAD0); lua_setfield(L,-2,"WXK_NUMPAD0");
	lua_pushnumber(L,WXK_NUMPAD1); lua_setfield(L,-2,"WXK_NUMPAD1");
	lua_pushnumber(L,WXK_NUMPAD2); lua_setfield(L,-2,"WXK_NUMPAD2");
	lua_pushnumber(L,WXK_NUMPAD3); lua_setfield(L,-2,"WXK_NUMPAD3");
	lua_pushnumber(L,WXK_NUMPAD4); lua_setfield(L,-2,"WXK_NUMPAD4");
	lua_pushnumber(L,WXK_NUMPAD5); lua_setfield(L,-2,"WXK_NUMPAD5");
	lua_pushnumber(L,WXK_NUMPAD6); lua_setfield(L,-2,"WXK_NUMPAD6");
	lua_pushnumber(L,WXK_NUMPAD7); lua_setfield(L,-2,"WXK_NUMPAD7");
	lua_pushnumber(L,WXK_NUMPAD8); lua_setfield(L,-2,"WXK_NUMPAD8");
	lua_pushnumber(L,WXK_NUMPAD9); lua_setfield(L,-2,"WXK_NUMPAD9");
	lua_pushnumber(L,WXK_MULTIPLY); lua_setfield(L,-2,"WXK_MULTIPLY");
	lua_pushnumber(L,WXK_ADD); lua_setfield(L,-2,"WXK_ADD");
	lua_pushnumber(L,WXK_SEPARATOR); lua_setfield(L,-2,"WXK_SEPARATOR");
	lua_pushnumber(L,WXK_SUBTRACT); lua_setfield(L,-2,"WXK_SUBTRACT");
	lua_pushnumber(L,WXK_DECIMAL); lua_setfield(L,-2,"WXK_DECIMAL");
	lua_pushnumber(L,WXK_DIVIDE); lua_setfield(L,-2,"WXK_DIVIDE");
	lua_pushnumber(L,WXK_F1); lua_setfield(L,-2,"WXK_F1");
	lua_pushnumber(L,WXK_F2); lua_setfield(L,-2,"WXK_F2");
	lua_pushnumber(L,WXK_F3); lua_setfield(L,-2,"WXK_F3");
	lua_pushnumber(L,WXK_F4); lua_setfield(L,-2,"WXK_F4");
	lua_pushnumber(L,WXK_F5); lua_setfield(L,-2,"WXK_F5");
	lua_pushnumber(L,WXK_F6); lua_setfield(L,-2,"WXK_F6");
	lua_pushnumber(L,WXK_F7); lua_setfield(L,-2,"WXK_F7");
	lua_pushnumber(L,WXK_F8); lua_setfield(L,-2,"WXK_F8");
	lua_pushnumber(L,WXK_F9); lua_setfield(L,-2,"WXK_F9");
	lua_pushnumber(L,WXK_F10); lua_setfield(L,-2,"WXK_F10");
	lua_pushnumber(L,WXK_F11); lua_setfield(L,-2,"WXK_F11");
	lua_pushnumber(L,WXK_F12); lua_setfield(L,-2,"WXK_F12");
	lua_pushnumber(L,WXK_F13); lua_setfield(L,-2,"WXK_F13");
	lua_pushnumber(L,WXK_F14); lua_setfield(L,-2,"WXK_F14");
	lua_pushnumber(L,WXK_F15); lua_setfield(L,-2,"WXK_F15");
	lua_pushnumber(L,WXK_F16); lua_setfield(L,-2,"WXK_F16");
	lua_pushnumber(L,WXK_F17); lua_setfield(L,-2,"WXK_F17");
	lua_pushnumber(L,WXK_F18); lua_setfield(L,-2,"WXK_F18");
	lua_pushnumber(L,WXK_F19); lua_setfield(L,-2,"WXK_F19");
	lua_pushnumber(L,WXK_F20); lua_setfield(L,-2,"WXK_F20");
	lua_pushnumber(L,WXK_F21); lua_setfield(L,-2,"WXK_F21");
	lua_pushnumber(L,WXK_F22); lua_setfield(L,-2,"WXK_F22");
	lua_pushnumber(L,WXK_F23); lua_setfield(L,-2,"WXK_F23");
	lua_pushnumber(L,WXK_F24); lua_setfield(L,-2,"WXK_F24");
	lua_pushnumber(L,WXK_NUMLOCK); lua_setfield(L,-2,"WXK_NUMLOCK");
	lua_pushnumber(L,WXK_SCROLL); lua_setfield(L,-2,"WXK_SCROLL");
	lua_pushnumber(L,WXK_PAGEUP); lua_setfield(L,-2,"WXK_PAGEUP");
	lua_pushnumber(L,WXK_PAGEDOWN); lua_setfield(L,-2,"WXK_PAGEDOWN");
	lua_pushnumber(L,WXK_NUMPAD_SPACE); lua_setfield(L,-2,"WXK_NUMPAD_SPACE");
	lua_pushnumber(L,WXK_NUMPAD_TAB); lua_setfield(L,-2,"WXK_NUMPAD_TAB");
	lua_pushnumber(L,WXK_NUMPAD_ENTER); lua_setfield(L,-2,"WXK_NUMPAD_ENTER");
	lua_pushnumber(L,WXK_NUMPAD_F1); lua_setfield(L,-2,"WXK_NUMPAD_F1");
	lua_pushnumber(L,WXK_NUMPAD_F2); lua_setfield(L,-2,"WXK_NUMPAD_F2");
	lua_pushnumber(L,WXK_NUMPAD_F3); lua_setfield(L,-2,"WXK_NUMPAD_F3");
	lua_pushnumber(L,WXK_NUMPAD_F4); lua_setfield(L,-2,"WXK_NUMPAD_F4");
	lua_pushnumber(L,WXK_NUMPAD_HOME); lua_setfield(L,-2,"WXK_NUMPAD_HOME");
	lua_pushnumber(L,WXK_NUMPAD_LEFT); lua_setfield(L,-2,"WXK_NUMPAD_LEFT");
	lua_pushnumber(L,WXK_NUMPAD_UP); lua_setfield(L,-2,"WXK_NUMPAD_UP");
	lua_pushnumber(L,WXK_NUMPAD_RIGHT); lua_setfield(L,-2,"WXK_NUMPAD_RIGHT");
	lua_pushnumber(L,WXK_NUMPAD_DOWN); lua_setfield(L,-2,"WXK_NUMPAD_DOWN");
	lua_pushnumber(L,WXK_NUMPAD_PAGEUP); lua_setfield(L,-2,"WXK_NUMPAD_PAGEUP");
	lua_pushnumber(L,WXK_NUMPAD_PAGEDOWN); lua_setfield(L,-2,"WXK_NUMPAD_PAGEDOWN");
	lua_pushnumber(L,WXK_NUMPAD_END); lua_setfield(L,-2,"WXK_NUMPAD_END");
	lua_pushnumber(L,WXK_NUMPAD_BEGIN); lua_setfield(L,-2,"WXK_NUMPAD_BEGIN");
	lua_pushnumber(L,WXK_NUMPAD_INSERT); lua_setfield(L,-2,"WXK_NUMPAD_INSERT");
	lua_pushnumber(L,WXK_NUMPAD_DELETE); lua_setfield(L,-2,"WXK_NUMPAD_DELETE");
	lua_pushnumber(L,WXK_NUMPAD_EQUAL); lua_setfield(L,-2,"WXK_NUMPAD_EQUAL");
	lua_pushnumber(L,WXK_NUMPAD_MULTIPLY); lua_setfield(L,-2,"WXK_NUMPAD_MULTIPLY");
	lua_pushnumber(L,WXK_NUMPAD_ADD); lua_setfield(L,-2,"WXK_NUMPAD_ADD");
	lua_pushnumber(L,WXK_NUMPAD_SEPARATOR); lua_setfield(L,-2,"WXK_NUMPAD_SEPARATOR");
	lua_pushnumber(L,WXK_NUMPAD_SUBTRACT); lua_setfield(L,-2,"WXK_NUMPAD_SUBTRACT");
	lua_pushnumber(L,WXK_NUMPAD_DECIMAL); lua_setfield(L,-2,"WXK_NUMPAD_DECIMAL");
	lua_pushnumber(L,WXK_NUMPAD_DIVIDE); lua_setfield(L,-2,"WXK_NUMPAD_DIVIDE");
	lua_pushnumber(L,WXK_WINDOWS_LEFT); lua_setfield(L,-2,"WXK_WINDOWS_LEFT");
	lua_pushnumber(L,WXK_WINDOWS_RIGHT); lua_setfield(L,-2,"WXK_WINDOWS_RIGHT");
	lua_pushnumber(L,WXK_WINDOWS_MENU); lua_setfield(L,-2,"WXK_WINDOWS_MENU");
	lua_pushnumber(L,WXK_COMMAND); lua_setfield(L,-2,"WXK_COMMAND");
	lua_pushnumber(L,WXK_SPECIAL1); lua_setfield(L,-2,"WXK_SPECIAL1");
	lua_pushnumber(L,WXK_SPECIAL2); lua_setfield(L,-2,"WXK_SPECIAL2");
	lua_pushnumber(L,WXK_SPECIAL3); lua_setfield(L,-2,"WXK_SPECIAL3");
	lua_pushnumber(L,WXK_SPECIAL4); lua_setfield(L,-2,"WXK_SPECIAL4");
	lua_pushnumber(L,WXK_SPECIAL5); lua_setfield(L,-2,"WXK_SPECIAL5");
	lua_pushnumber(L,WXK_SPECIAL6); lua_setfield(L,-2,"WXK_SPECIAL6");
	lua_pushnumber(L,WXK_SPECIAL7); lua_setfield(L,-2,"WXK_SPECIAL7");
	lua_pushnumber(L,WXK_SPECIAL8); lua_setfield(L,-2,"WXK_SPECIAL8");
	lua_pushnumber(L,WXK_SPECIAL9); lua_setfield(L,-2,"WXK_SPECIAL9");
	lua_pushnumber(L,WXK_SPECIAL10); lua_setfield(L,-2,"WXK_SPECIAL10");
	lua_pushnumber(L,WXK_SPECIAL11); lua_setfield(L,-2,"WXK_SPECIAL11");
	lua_pushnumber(L,WXK_SPECIAL12); lua_setfield(L,-2,"WXK_SPECIAL12");
	lua_pushnumber(L,WXK_SPECIAL13); lua_setfield(L,-2,"WXK_SPECIAL13");
	lua_pushnumber(L,WXK_SPECIAL14); lua_setfield(L,-2,"WXK_SPECIAL14");
	lua_pushnumber(L,WXK_SPECIAL15); lua_setfield(L,-2,"WXK_SPECIAL15");
	lua_pushnumber(L,WXK_SPECIAL16); lua_setfield(L,-2,"WXK_SPECIAL16");
	lua_pushnumber(L,WXK_SPECIAL17); lua_setfield(L,-2,"WXK_SPECIAL17");
	lua_pushnumber(L,WXK_SPECIAL18); lua_setfield(L,-2,"WXK_SPECIAL18");
	lua_pushnumber(L,WXK_SPECIAL19); lua_setfield(L,-2,"WXK_SPECIAL19");
	lua_pushnumber(L,WXK_SPECIAL20); lua_setfield(L,-2,"WXK_SPECIAL20");


	lua_newtable(L); // enum wxKeyModifier

	lua_pushnumber(L,wxMOD_NONE); lua_setfield(L,-2,"wxMOD_NONE");
	lua_pushnumber(L,wxMOD_ALT); lua_setfield(L,-2,"wxMOD_ALT");
	lua_pushnumber(L,wxMOD_CONTROL); lua_setfield(L,-2,"wxMOD_CONTROL");
	lua_pushnumber(L,wxMOD_ALTGR); lua_setfield(L,-2,"wxMOD_ALTGR");
	lua_pushnumber(L,wxMOD_SHIFT); lua_setfield(L,-2,"wxMOD_SHIFT");
	lua_pushnumber(L,wxMOD_META); lua_setfield(L,-2,"wxMOD_META");
	lua_pushnumber(L,wxMOD_WIN); lua_setfield(L,-2,"wxMOD_WIN");
	lua_pushnumber(L,wxMOD_RAW_CONTROL); lua_setfield(L,-2,"wxMOD_RAW_CONTROL");
	lua_pushnumber(L,wxMOD_CMD); lua_setfield(L,-2,"wxMOD_CMD");
	lua_pushnumber(L,wxMOD_ALL); lua_setfield(L,-2,"wxMOD_ALL");

	lua_setfield(L,-2,"wxKeyModifier");

	lua_pushnumber(L,wxMOD_NONE); lua_setfield(L,-2,"wxMOD_NONE");
	lua_pushnumber(L,wxMOD_ALT); lua_setfield(L,-2,"wxMOD_ALT");
	lua_pushnumber(L,wxMOD_CONTROL); lua_setfield(L,-2,"wxMOD_CONTROL");
	lua_pushnumber(L,wxMOD_ALTGR); lua_setfield(L,-2,"wxMOD_ALTGR");
	lua_pushnumber(L,wxMOD_SHIFT); lua_setfield(L,-2,"wxMOD_SHIFT");
	lua_pushnumber(L,wxMOD_META); lua_setfield(L,-2,"wxMOD_META");
	lua_pushnumber(L,wxMOD_WIN); lua_setfield(L,-2,"wxMOD_WIN");
	lua_pushnumber(L,wxMOD_RAW_CONTROL); lua_setfield(L,-2,"wxMOD_RAW_CONTROL");
	lua_pushnumber(L,wxMOD_CMD); lua_setfield(L,-2,"wxMOD_CMD");
	lua_pushnumber(L,wxMOD_ALL); lua_setfield(L,-2,"wxMOD_ALL");


	lua_newtable(L); // enum wxPaperSize

	lua_pushnumber(L,wxPAPER_NONE); lua_setfield(L,-2,"wxPAPER_NONE");
	lua_pushnumber(L,wxPAPER_LETTER); lua_setfield(L,-2,"wxPAPER_LETTER");
	lua_pushnumber(L,wxPAPER_LEGAL); lua_setfield(L,-2,"wxPAPER_LEGAL");
	lua_pushnumber(L,wxPAPER_A4); lua_setfield(L,-2,"wxPAPER_A4");
	lua_pushnumber(L,wxPAPER_CSHEET); lua_setfield(L,-2,"wxPAPER_CSHEET");
	lua_pushnumber(L,wxPAPER_DSHEET); lua_setfield(L,-2,"wxPAPER_DSHEET");
	lua_pushnumber(L,wxPAPER_ESHEET); lua_setfield(L,-2,"wxPAPER_ESHEET");
	lua_pushnumber(L,wxPAPER_LETTERSMALL); lua_setfield(L,-2,"wxPAPER_LETTERSMALL");
	lua_pushnumber(L,wxPAPER_TABLOID); lua_setfield(L,-2,"wxPAPER_TABLOID");
	lua_pushnumber(L,wxPAPER_LEDGER); lua_setfield(L,-2,"wxPAPER_LEDGER");
	lua_pushnumber(L,wxPAPER_STATEMENT); lua_setfield(L,-2,"wxPAPER_STATEMENT");
	lua_pushnumber(L,wxPAPER_EXECUTIVE); lua_setfield(L,-2,"wxPAPER_EXECUTIVE");
	lua_pushnumber(L,wxPAPER_A3); lua_setfield(L,-2,"wxPAPER_A3");
	lua_pushnumber(L,wxPAPER_A4SMALL); lua_setfield(L,-2,"wxPAPER_A4SMALL");
	lua_pushnumber(L,wxPAPER_A5); lua_setfield(L,-2,"wxPAPER_A5");
	lua_pushnumber(L,wxPAPER_B4); lua_setfield(L,-2,"wxPAPER_B4");
	lua_pushnumber(L,wxPAPER_B5); lua_setfield(L,-2,"wxPAPER_B5");
	lua_pushnumber(L,wxPAPER_FOLIO); lua_setfield(L,-2,"wxPAPER_FOLIO");
	lua_pushnumber(L,wxPAPER_QUARTO); lua_setfield(L,-2,"wxPAPER_QUARTO");
	lua_pushnumber(L,wxPAPER_10X14); lua_setfield(L,-2,"wxPAPER_10X14");
	lua_pushnumber(L,wxPAPER_11X17); lua_setfield(L,-2,"wxPAPER_11X17");
	lua_pushnumber(L,wxPAPER_NOTE); lua_setfield(L,-2,"wxPAPER_NOTE");
	lua_pushnumber(L,wxPAPER_ENV_9); lua_setfield(L,-2,"wxPAPER_ENV_9");
	lua_pushnumber(L,wxPAPER_ENV_10); lua_setfield(L,-2,"wxPAPER_ENV_10");
	lua_pushnumber(L,wxPAPER_ENV_11); lua_setfield(L,-2,"wxPAPER_ENV_11");
	lua_pushnumber(L,wxPAPER_ENV_12); lua_setfield(L,-2,"wxPAPER_ENV_12");
	lua_pushnumber(L,wxPAPER_ENV_14); lua_setfield(L,-2,"wxPAPER_ENV_14");
	lua_pushnumber(L,wxPAPER_ENV_DL); lua_setfield(L,-2,"wxPAPER_ENV_DL");
	lua_pushnumber(L,wxPAPER_ENV_C5); lua_setfield(L,-2,"wxPAPER_ENV_C5");
	lua_pushnumber(L,wxPAPER_ENV_C3); lua_setfield(L,-2,"wxPAPER_ENV_C3");
	lua_pushnumber(L,wxPAPER_ENV_C4); lua_setfield(L,-2,"wxPAPER_ENV_C4");
	lua_pushnumber(L,wxPAPER_ENV_C6); lua_setfield(L,-2,"wxPAPER_ENV_C6");
	lua_pushnumber(L,wxPAPER_ENV_C65); lua_setfield(L,-2,"wxPAPER_ENV_C65");
	lua_pushnumber(L,wxPAPER_ENV_B4); lua_setfield(L,-2,"wxPAPER_ENV_B4");
	lua_pushnumber(L,wxPAPER_ENV_B5); lua_setfield(L,-2,"wxPAPER_ENV_B5");
	lua_pushnumber(L,wxPAPER_ENV_B6); lua_setfield(L,-2,"wxPAPER_ENV_B6");
	lua_pushnumber(L,wxPAPER_ENV_ITALY); lua_setfield(L,-2,"wxPAPER_ENV_ITALY");
	lua_pushnumber(L,wxPAPER_ENV_MONARCH); lua_setfield(L,-2,"wxPAPER_ENV_MONARCH");
	lua_pushnumber(L,wxPAPER_ENV_PERSONAL); lua_setfield(L,-2,"wxPAPER_ENV_PERSONAL");
	lua_pushnumber(L,wxPAPER_FANFOLD_US); lua_setfield(L,-2,"wxPAPER_FANFOLD_US");
	lua_pushnumber(L,wxPAPER_FANFOLD_STD_GERMAN); lua_setfield(L,-2,"wxPAPER_FANFOLD_STD_GERMAN");
	lua_pushnumber(L,wxPAPER_FANFOLD_LGL_GERMAN); lua_setfield(L,-2,"wxPAPER_FANFOLD_LGL_GERMAN");
	lua_pushnumber(L,wxPAPER_ISO_B4); lua_setfield(L,-2,"wxPAPER_ISO_B4");
	lua_pushnumber(L,wxPAPER_JAPANESE_POSTCARD); lua_setfield(L,-2,"wxPAPER_JAPANESE_POSTCARD");
	lua_pushnumber(L,wxPAPER_9X11); lua_setfield(L,-2,"wxPAPER_9X11");
	lua_pushnumber(L,wxPAPER_10X11); lua_setfield(L,-2,"wxPAPER_10X11");
	lua_pushnumber(L,wxPAPER_15X11); lua_setfield(L,-2,"wxPAPER_15X11");
	lua_pushnumber(L,wxPAPER_ENV_INVITE); lua_setfield(L,-2,"wxPAPER_ENV_INVITE");
	lua_pushnumber(L,wxPAPER_LETTER_EXTRA); lua_setfield(L,-2,"wxPAPER_LETTER_EXTRA");
	lua_pushnumber(L,wxPAPER_LEGAL_EXTRA); lua_setfield(L,-2,"wxPAPER_LEGAL_EXTRA");
	lua_pushnumber(L,wxPAPER_TABLOID_EXTRA); lua_setfield(L,-2,"wxPAPER_TABLOID_EXTRA");
	lua_pushnumber(L,wxPAPER_A4_EXTRA); lua_setfield(L,-2,"wxPAPER_A4_EXTRA");
	lua_pushnumber(L,wxPAPER_LETTER_TRANSVERSE); lua_setfield(L,-2,"wxPAPER_LETTER_TRANSVERSE");
	lua_pushnumber(L,wxPAPER_A4_TRANSVERSE); lua_setfield(L,-2,"wxPAPER_A4_TRANSVERSE");
	lua_pushnumber(L,wxPAPER_LETTER_EXTRA_TRANSVERSE); lua_setfield(L,-2,"wxPAPER_LETTER_EXTRA_TRANSVERSE");
	lua_pushnumber(L,wxPAPER_A_PLUS); lua_setfield(L,-2,"wxPAPER_A_PLUS");
	lua_pushnumber(L,wxPAPER_B_PLUS); lua_setfield(L,-2,"wxPAPER_B_PLUS");
	lua_pushnumber(L,wxPAPER_LETTER_PLUS); lua_setfield(L,-2,"wxPAPER_LETTER_PLUS");
	lua_pushnumber(L,wxPAPER_A4_PLUS); lua_setfield(L,-2,"wxPAPER_A4_PLUS");
	lua_pushnumber(L,wxPAPER_A5_TRANSVERSE); lua_setfield(L,-2,"wxPAPER_A5_TRANSVERSE");
	lua_pushnumber(L,wxPAPER_B5_TRANSVERSE); lua_setfield(L,-2,"wxPAPER_B5_TRANSVERSE");
	lua_pushnumber(L,wxPAPER_A3_EXTRA); lua_setfield(L,-2,"wxPAPER_A3_EXTRA");
	lua_pushnumber(L,wxPAPER_A5_EXTRA); lua_setfield(L,-2,"wxPAPER_A5_EXTRA");
	lua_pushnumber(L,wxPAPER_B5_EXTRA); lua_setfield(L,-2,"wxPAPER_B5_EXTRA");
	lua_pushnumber(L,wxPAPER_A2); lua_setfield(L,-2,"wxPAPER_A2");
	lua_pushnumber(L,wxPAPER_A3_TRANSVERSE); lua_setfield(L,-2,"wxPAPER_A3_TRANSVERSE");
	lua_pushnumber(L,wxPAPER_A3_EXTRA_TRANSVERSE); lua_setfield(L,-2,"wxPAPER_A3_EXTRA_TRANSVERSE");
	lua_pushnumber(L,wxPAPER_DBL_JAPANESE_POSTCARD); lua_setfield(L,-2,"wxPAPER_DBL_JAPANESE_POSTCARD");
	lua_pushnumber(L,wxPAPER_A6); lua_setfield(L,-2,"wxPAPER_A6");
	lua_pushnumber(L,wxPAPER_JENV_KAKU2); lua_setfield(L,-2,"wxPAPER_JENV_KAKU2");
	lua_pushnumber(L,wxPAPER_JENV_KAKU3); lua_setfield(L,-2,"wxPAPER_JENV_KAKU3");
	lua_pushnumber(L,wxPAPER_JENV_CHOU3); lua_setfield(L,-2,"wxPAPER_JENV_CHOU3");
	lua_pushnumber(L,wxPAPER_JENV_CHOU4); lua_setfield(L,-2,"wxPAPER_JENV_CHOU4");
	lua_pushnumber(L,wxPAPER_LETTER_ROTATED); lua_setfield(L,-2,"wxPAPER_LETTER_ROTATED");
	lua_pushnumber(L,wxPAPER_A3_ROTATED); lua_setfield(L,-2,"wxPAPER_A3_ROTATED");
	lua_pushnumber(L,wxPAPER_A4_ROTATED); lua_setfield(L,-2,"wxPAPER_A4_ROTATED");
	lua_pushnumber(L,wxPAPER_A5_ROTATED); lua_setfield(L,-2,"wxPAPER_A5_ROTATED");
	lua_pushnumber(L,wxPAPER_B4_JIS_ROTATED); lua_setfield(L,-2,"wxPAPER_B4_JIS_ROTATED");
	lua_pushnumber(L,wxPAPER_B5_JIS_ROTATED); lua_setfield(L,-2,"wxPAPER_B5_JIS_ROTATED");
	lua_pushnumber(L,wxPAPER_JAPANESE_POSTCARD_ROTATED); lua_setfield(L,-2,"wxPAPER_JAPANESE_POSTCARD_ROTATED");
	lua_pushnumber(L,wxPAPER_DBL_JAPANESE_POSTCARD_ROTATED); lua_setfield(L,-2,"wxPAPER_DBL_JAPANESE_POSTCARD_ROTATED");
	lua_pushnumber(L,wxPAPER_A6_ROTATED); lua_setfield(L,-2,"wxPAPER_A6_ROTATED");
	lua_pushnumber(L,wxPAPER_JENV_KAKU2_ROTATED); lua_setfield(L,-2,"wxPAPER_JENV_KAKU2_ROTATED");
	lua_pushnumber(L,wxPAPER_JENV_KAKU3_ROTATED); lua_setfield(L,-2,"wxPAPER_JENV_KAKU3_ROTATED");
	lua_pushnumber(L,wxPAPER_JENV_CHOU3_ROTATED); lua_setfield(L,-2,"wxPAPER_JENV_CHOU3_ROTATED");
	lua_pushnumber(L,wxPAPER_JENV_CHOU4_ROTATED); lua_setfield(L,-2,"wxPAPER_JENV_CHOU4_ROTATED");
	lua_pushnumber(L,wxPAPER_B6_JIS); lua_setfield(L,-2,"wxPAPER_B6_JIS");
	lua_pushnumber(L,wxPAPER_B6_JIS_ROTATED); lua_setfield(L,-2,"wxPAPER_B6_JIS_ROTATED");
	lua_pushnumber(L,wxPAPER_12X11); lua_setfield(L,-2,"wxPAPER_12X11");
	lua_pushnumber(L,wxPAPER_JENV_YOU4); lua_setfield(L,-2,"wxPAPER_JENV_YOU4");
	lua_pushnumber(L,wxPAPER_JENV_YOU4_ROTATED); lua_setfield(L,-2,"wxPAPER_JENV_YOU4_ROTATED");
	lua_pushnumber(L,wxPAPER_P16K); lua_setfield(L,-2,"wxPAPER_P16K");
	lua_pushnumber(L,wxPAPER_P32K); lua_setfield(L,-2,"wxPAPER_P32K");
	lua_pushnumber(L,wxPAPER_P32KBIG); lua_setfield(L,-2,"wxPAPER_P32KBIG");
	lua_pushnumber(L,wxPAPER_PENV_1); lua_setfield(L,-2,"wxPAPER_PENV_1");
	lua_pushnumber(L,wxPAPER_PENV_2); lua_setfield(L,-2,"wxPAPER_PENV_2");
	lua_pushnumber(L,wxPAPER_PENV_3); lua_setfield(L,-2,"wxPAPER_PENV_3");
	lua_pushnumber(L,wxPAPER_PENV_4); lua_setfield(L,-2,"wxPAPER_PENV_4");
	lua_pushnumber(L,wxPAPER_PENV_5); lua_setfield(L,-2,"wxPAPER_PENV_5");
	lua_pushnumber(L,wxPAPER_PENV_6); lua_setfield(L,-2,"wxPAPER_PENV_6");
	lua_pushnumber(L,wxPAPER_PENV_7); lua_setfield(L,-2,"wxPAPER_PENV_7");
	lua_pushnumber(L,wxPAPER_PENV_8); lua_setfield(L,-2,"wxPAPER_PENV_8");
	lua_pushnumber(L,wxPAPER_PENV_9); lua_setfield(L,-2,"wxPAPER_PENV_9");
	lua_pushnumber(L,wxPAPER_PENV_10); lua_setfield(L,-2,"wxPAPER_PENV_10");
	lua_pushnumber(L,wxPAPER_P16K_ROTATED); lua_setfield(L,-2,"wxPAPER_P16K_ROTATED");
	lua_pushnumber(L,wxPAPER_P32K_ROTATED); lua_setfield(L,-2,"wxPAPER_P32K_ROTATED");
	lua_pushnumber(L,wxPAPER_P32KBIG_ROTATED); lua_setfield(L,-2,"wxPAPER_P32KBIG_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_1_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_1_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_2_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_2_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_3_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_3_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_4_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_4_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_5_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_5_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_6_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_6_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_7_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_7_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_8_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_8_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_9_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_9_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_10_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_10_ROTATED");

	lua_setfield(L,-2,"wxPaperSize");

	lua_pushnumber(L,wxPAPER_NONE); lua_setfield(L,-2,"wxPAPER_NONE");
	lua_pushnumber(L,wxPAPER_LETTER); lua_setfield(L,-2,"wxPAPER_LETTER");
	lua_pushnumber(L,wxPAPER_LEGAL); lua_setfield(L,-2,"wxPAPER_LEGAL");
	lua_pushnumber(L,wxPAPER_A4); lua_setfield(L,-2,"wxPAPER_A4");
	lua_pushnumber(L,wxPAPER_CSHEET); lua_setfield(L,-2,"wxPAPER_CSHEET");
	lua_pushnumber(L,wxPAPER_DSHEET); lua_setfield(L,-2,"wxPAPER_DSHEET");
	lua_pushnumber(L,wxPAPER_ESHEET); lua_setfield(L,-2,"wxPAPER_ESHEET");
	lua_pushnumber(L,wxPAPER_LETTERSMALL); lua_setfield(L,-2,"wxPAPER_LETTERSMALL");
	lua_pushnumber(L,wxPAPER_TABLOID); lua_setfield(L,-2,"wxPAPER_TABLOID");
	lua_pushnumber(L,wxPAPER_LEDGER); lua_setfield(L,-2,"wxPAPER_LEDGER");
	lua_pushnumber(L,wxPAPER_STATEMENT); lua_setfield(L,-2,"wxPAPER_STATEMENT");
	lua_pushnumber(L,wxPAPER_EXECUTIVE); lua_setfield(L,-2,"wxPAPER_EXECUTIVE");
	lua_pushnumber(L,wxPAPER_A3); lua_setfield(L,-2,"wxPAPER_A3");
	lua_pushnumber(L,wxPAPER_A4SMALL); lua_setfield(L,-2,"wxPAPER_A4SMALL");
	lua_pushnumber(L,wxPAPER_A5); lua_setfield(L,-2,"wxPAPER_A5");
	lua_pushnumber(L,wxPAPER_B4); lua_setfield(L,-2,"wxPAPER_B4");
	lua_pushnumber(L,wxPAPER_B5); lua_setfield(L,-2,"wxPAPER_B5");
	lua_pushnumber(L,wxPAPER_FOLIO); lua_setfield(L,-2,"wxPAPER_FOLIO");
	lua_pushnumber(L,wxPAPER_QUARTO); lua_setfield(L,-2,"wxPAPER_QUARTO");
	lua_pushnumber(L,wxPAPER_10X14); lua_setfield(L,-2,"wxPAPER_10X14");
	lua_pushnumber(L,wxPAPER_11X17); lua_setfield(L,-2,"wxPAPER_11X17");
	lua_pushnumber(L,wxPAPER_NOTE); lua_setfield(L,-2,"wxPAPER_NOTE");
	lua_pushnumber(L,wxPAPER_ENV_9); lua_setfield(L,-2,"wxPAPER_ENV_9");
	lua_pushnumber(L,wxPAPER_ENV_10); lua_setfield(L,-2,"wxPAPER_ENV_10");
	lua_pushnumber(L,wxPAPER_ENV_11); lua_setfield(L,-2,"wxPAPER_ENV_11");
	lua_pushnumber(L,wxPAPER_ENV_12); lua_setfield(L,-2,"wxPAPER_ENV_12");
	lua_pushnumber(L,wxPAPER_ENV_14); lua_setfield(L,-2,"wxPAPER_ENV_14");
	lua_pushnumber(L,wxPAPER_ENV_DL); lua_setfield(L,-2,"wxPAPER_ENV_DL");
	lua_pushnumber(L,wxPAPER_ENV_C5); lua_setfield(L,-2,"wxPAPER_ENV_C5");
	lua_pushnumber(L,wxPAPER_ENV_C3); lua_setfield(L,-2,"wxPAPER_ENV_C3");
	lua_pushnumber(L,wxPAPER_ENV_C4); lua_setfield(L,-2,"wxPAPER_ENV_C4");
	lua_pushnumber(L,wxPAPER_ENV_C6); lua_setfield(L,-2,"wxPAPER_ENV_C6");
	lua_pushnumber(L,wxPAPER_ENV_C65); lua_setfield(L,-2,"wxPAPER_ENV_C65");
	lua_pushnumber(L,wxPAPER_ENV_B4); lua_setfield(L,-2,"wxPAPER_ENV_B4");
	lua_pushnumber(L,wxPAPER_ENV_B5); lua_setfield(L,-2,"wxPAPER_ENV_B5");
	lua_pushnumber(L,wxPAPER_ENV_B6); lua_setfield(L,-2,"wxPAPER_ENV_B6");
	lua_pushnumber(L,wxPAPER_ENV_ITALY); lua_setfield(L,-2,"wxPAPER_ENV_ITALY");
	lua_pushnumber(L,wxPAPER_ENV_MONARCH); lua_setfield(L,-2,"wxPAPER_ENV_MONARCH");
	lua_pushnumber(L,wxPAPER_ENV_PERSONAL); lua_setfield(L,-2,"wxPAPER_ENV_PERSONAL");
	lua_pushnumber(L,wxPAPER_FANFOLD_US); lua_setfield(L,-2,"wxPAPER_FANFOLD_US");
	lua_pushnumber(L,wxPAPER_FANFOLD_STD_GERMAN); lua_setfield(L,-2,"wxPAPER_FANFOLD_STD_GERMAN");
	lua_pushnumber(L,wxPAPER_FANFOLD_LGL_GERMAN); lua_setfield(L,-2,"wxPAPER_FANFOLD_LGL_GERMAN");
	lua_pushnumber(L,wxPAPER_ISO_B4); lua_setfield(L,-2,"wxPAPER_ISO_B4");
	lua_pushnumber(L,wxPAPER_JAPANESE_POSTCARD); lua_setfield(L,-2,"wxPAPER_JAPANESE_POSTCARD");
	lua_pushnumber(L,wxPAPER_9X11); lua_setfield(L,-2,"wxPAPER_9X11");
	lua_pushnumber(L,wxPAPER_10X11); lua_setfield(L,-2,"wxPAPER_10X11");
	lua_pushnumber(L,wxPAPER_15X11); lua_setfield(L,-2,"wxPAPER_15X11");
	lua_pushnumber(L,wxPAPER_ENV_INVITE); lua_setfield(L,-2,"wxPAPER_ENV_INVITE");
	lua_pushnumber(L,wxPAPER_LETTER_EXTRA); lua_setfield(L,-2,"wxPAPER_LETTER_EXTRA");
	lua_pushnumber(L,wxPAPER_LEGAL_EXTRA); lua_setfield(L,-2,"wxPAPER_LEGAL_EXTRA");
	lua_pushnumber(L,wxPAPER_TABLOID_EXTRA); lua_setfield(L,-2,"wxPAPER_TABLOID_EXTRA");
	lua_pushnumber(L,wxPAPER_A4_EXTRA); lua_setfield(L,-2,"wxPAPER_A4_EXTRA");
	lua_pushnumber(L,wxPAPER_LETTER_TRANSVERSE); lua_setfield(L,-2,"wxPAPER_LETTER_TRANSVERSE");
	lua_pushnumber(L,wxPAPER_A4_TRANSVERSE); lua_setfield(L,-2,"wxPAPER_A4_TRANSVERSE");
	lua_pushnumber(L,wxPAPER_LETTER_EXTRA_TRANSVERSE); lua_setfield(L,-2,"wxPAPER_LETTER_EXTRA_TRANSVERSE");
	lua_pushnumber(L,wxPAPER_A_PLUS); lua_setfield(L,-2,"wxPAPER_A_PLUS");
	lua_pushnumber(L,wxPAPER_B_PLUS); lua_setfield(L,-2,"wxPAPER_B_PLUS");
	lua_pushnumber(L,wxPAPER_LETTER_PLUS); lua_setfield(L,-2,"wxPAPER_LETTER_PLUS");
	lua_pushnumber(L,wxPAPER_A4_PLUS); lua_setfield(L,-2,"wxPAPER_A4_PLUS");
	lua_pushnumber(L,wxPAPER_A5_TRANSVERSE); lua_setfield(L,-2,"wxPAPER_A5_TRANSVERSE");
	lua_pushnumber(L,wxPAPER_B5_TRANSVERSE); lua_setfield(L,-2,"wxPAPER_B5_TRANSVERSE");
	lua_pushnumber(L,wxPAPER_A3_EXTRA); lua_setfield(L,-2,"wxPAPER_A3_EXTRA");
	lua_pushnumber(L,wxPAPER_A5_EXTRA); lua_setfield(L,-2,"wxPAPER_A5_EXTRA");
	lua_pushnumber(L,wxPAPER_B5_EXTRA); lua_setfield(L,-2,"wxPAPER_B5_EXTRA");
	lua_pushnumber(L,wxPAPER_A2); lua_setfield(L,-2,"wxPAPER_A2");
	lua_pushnumber(L,wxPAPER_A3_TRANSVERSE); lua_setfield(L,-2,"wxPAPER_A3_TRANSVERSE");
	lua_pushnumber(L,wxPAPER_A3_EXTRA_TRANSVERSE); lua_setfield(L,-2,"wxPAPER_A3_EXTRA_TRANSVERSE");
	lua_pushnumber(L,wxPAPER_DBL_JAPANESE_POSTCARD); lua_setfield(L,-2,"wxPAPER_DBL_JAPANESE_POSTCARD");
	lua_pushnumber(L,wxPAPER_A6); lua_setfield(L,-2,"wxPAPER_A6");
	lua_pushnumber(L,wxPAPER_JENV_KAKU2); lua_setfield(L,-2,"wxPAPER_JENV_KAKU2");
	lua_pushnumber(L,wxPAPER_JENV_KAKU3); lua_setfield(L,-2,"wxPAPER_JENV_KAKU3");
	lua_pushnumber(L,wxPAPER_JENV_CHOU3); lua_setfield(L,-2,"wxPAPER_JENV_CHOU3");
	lua_pushnumber(L,wxPAPER_JENV_CHOU4); lua_setfield(L,-2,"wxPAPER_JENV_CHOU4");
	lua_pushnumber(L,wxPAPER_LETTER_ROTATED); lua_setfield(L,-2,"wxPAPER_LETTER_ROTATED");
	lua_pushnumber(L,wxPAPER_A3_ROTATED); lua_setfield(L,-2,"wxPAPER_A3_ROTATED");
	lua_pushnumber(L,wxPAPER_A4_ROTATED); lua_setfield(L,-2,"wxPAPER_A4_ROTATED");
	lua_pushnumber(L,wxPAPER_A5_ROTATED); lua_setfield(L,-2,"wxPAPER_A5_ROTATED");
	lua_pushnumber(L,wxPAPER_B4_JIS_ROTATED); lua_setfield(L,-2,"wxPAPER_B4_JIS_ROTATED");
	lua_pushnumber(L,wxPAPER_B5_JIS_ROTATED); lua_setfield(L,-2,"wxPAPER_B5_JIS_ROTATED");
	lua_pushnumber(L,wxPAPER_JAPANESE_POSTCARD_ROTATED); lua_setfield(L,-2,"wxPAPER_JAPANESE_POSTCARD_ROTATED");
	lua_pushnumber(L,wxPAPER_DBL_JAPANESE_POSTCARD_ROTATED); lua_setfield(L,-2,"wxPAPER_DBL_JAPANESE_POSTCARD_ROTATED");
	lua_pushnumber(L,wxPAPER_A6_ROTATED); lua_setfield(L,-2,"wxPAPER_A6_ROTATED");
	lua_pushnumber(L,wxPAPER_JENV_KAKU2_ROTATED); lua_setfield(L,-2,"wxPAPER_JENV_KAKU2_ROTATED");
	lua_pushnumber(L,wxPAPER_JENV_KAKU3_ROTATED); lua_setfield(L,-2,"wxPAPER_JENV_KAKU3_ROTATED");
	lua_pushnumber(L,wxPAPER_JENV_CHOU3_ROTATED); lua_setfield(L,-2,"wxPAPER_JENV_CHOU3_ROTATED");
	lua_pushnumber(L,wxPAPER_JENV_CHOU4_ROTATED); lua_setfield(L,-2,"wxPAPER_JENV_CHOU4_ROTATED");
	lua_pushnumber(L,wxPAPER_B6_JIS); lua_setfield(L,-2,"wxPAPER_B6_JIS");
	lua_pushnumber(L,wxPAPER_B6_JIS_ROTATED); lua_setfield(L,-2,"wxPAPER_B6_JIS_ROTATED");
	lua_pushnumber(L,wxPAPER_12X11); lua_setfield(L,-2,"wxPAPER_12X11");
	lua_pushnumber(L,wxPAPER_JENV_YOU4); lua_setfield(L,-2,"wxPAPER_JENV_YOU4");
	lua_pushnumber(L,wxPAPER_JENV_YOU4_ROTATED); lua_setfield(L,-2,"wxPAPER_JENV_YOU4_ROTATED");
	lua_pushnumber(L,wxPAPER_P16K); lua_setfield(L,-2,"wxPAPER_P16K");
	lua_pushnumber(L,wxPAPER_P32K); lua_setfield(L,-2,"wxPAPER_P32K");
	lua_pushnumber(L,wxPAPER_P32KBIG); lua_setfield(L,-2,"wxPAPER_P32KBIG");
	lua_pushnumber(L,wxPAPER_PENV_1); lua_setfield(L,-2,"wxPAPER_PENV_1");
	lua_pushnumber(L,wxPAPER_PENV_2); lua_setfield(L,-2,"wxPAPER_PENV_2");
	lua_pushnumber(L,wxPAPER_PENV_3); lua_setfield(L,-2,"wxPAPER_PENV_3");
	lua_pushnumber(L,wxPAPER_PENV_4); lua_setfield(L,-2,"wxPAPER_PENV_4");
	lua_pushnumber(L,wxPAPER_PENV_5); lua_setfield(L,-2,"wxPAPER_PENV_5");
	lua_pushnumber(L,wxPAPER_PENV_6); lua_setfield(L,-2,"wxPAPER_PENV_6");
	lua_pushnumber(L,wxPAPER_PENV_7); lua_setfield(L,-2,"wxPAPER_PENV_7");
	lua_pushnumber(L,wxPAPER_PENV_8); lua_setfield(L,-2,"wxPAPER_PENV_8");
	lua_pushnumber(L,wxPAPER_PENV_9); lua_setfield(L,-2,"wxPAPER_PENV_9");
	lua_pushnumber(L,wxPAPER_PENV_10); lua_setfield(L,-2,"wxPAPER_PENV_10");
	lua_pushnumber(L,wxPAPER_P16K_ROTATED); lua_setfield(L,-2,"wxPAPER_P16K_ROTATED");
	lua_pushnumber(L,wxPAPER_P32K_ROTATED); lua_setfield(L,-2,"wxPAPER_P32K_ROTATED");
	lua_pushnumber(L,wxPAPER_P32KBIG_ROTATED); lua_setfield(L,-2,"wxPAPER_P32KBIG_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_1_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_1_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_2_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_2_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_3_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_3_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_4_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_4_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_5_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_5_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_6_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_6_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_7_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_7_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_8_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_8_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_9_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_9_ROTATED");
	lua_pushnumber(L,wxPAPER_PENV_10_ROTATED); lua_setfield(L,-2,"wxPAPER_PENV_10_ROTATED");


	lua_newtable(L); // enum wxPrintOrientation

	lua_pushnumber(L,wxPORTRAIT); lua_setfield(L,-2,"wxPORTRAIT");
	lua_pushnumber(L,wxLANDSCAPE); lua_setfield(L,-2,"wxLANDSCAPE");

	lua_setfield(L,-2,"wxPrintOrientation");

	lua_pushnumber(L,wxPORTRAIT); lua_setfield(L,-2,"wxPORTRAIT");
	lua_pushnumber(L,wxLANDSCAPE); lua_setfield(L,-2,"wxLANDSCAPE");


	lua_newtable(L); // enum wxDuplexMode

	lua_pushnumber(L,wxDUPLEX_SIMPLEX); lua_setfield(L,-2,"wxDUPLEX_SIMPLEX");
	lua_pushnumber(L,wxDUPLEX_HORIZONTAL); lua_setfield(L,-2,"wxDUPLEX_HORIZONTAL");
	lua_pushnumber(L,wxDUPLEX_VERTICAL); lua_setfield(L,-2,"wxDUPLEX_VERTICAL");

	lua_setfield(L,-2,"wxDuplexMode");

	lua_pushnumber(L,wxDUPLEX_SIMPLEX); lua_setfield(L,-2,"wxDUPLEX_SIMPLEX");
	lua_pushnumber(L,wxDUPLEX_HORIZONTAL); lua_setfield(L,-2,"wxDUPLEX_HORIZONTAL");
	lua_pushnumber(L,wxDUPLEX_VERTICAL); lua_setfield(L,-2,"wxDUPLEX_VERTICAL");


	lua_newtable(L); // enum wxPrintMode

	lua_pushnumber(L,wxPRINT_MODE_NONE); lua_setfield(L,-2,"wxPRINT_MODE_NONE");
	lua_pushnumber(L,wxPRINT_MODE_PREVIEW); lua_setfield(L,-2,"wxPRINT_MODE_PREVIEW");
	lua_pushnumber(L,wxPRINT_MODE_FILE); lua_setfield(L,-2,"wxPRINT_MODE_FILE");
	lua_pushnumber(L,wxPRINT_MODE_PRINTER); lua_setfield(L,-2,"wxPRINT_MODE_PRINTER");
	lua_pushnumber(L,wxPRINT_MODE_STREAM); lua_setfield(L,-2,"wxPRINT_MODE_STREAM");

	lua_setfield(L,-2,"wxPrintMode");

	lua_pushnumber(L,wxPRINT_MODE_NONE); lua_setfield(L,-2,"wxPRINT_MODE_NONE");
	lua_pushnumber(L,wxPRINT_MODE_PREVIEW); lua_setfield(L,-2,"wxPRINT_MODE_PREVIEW");
	lua_pushnumber(L,wxPRINT_MODE_FILE); lua_setfield(L,-2,"wxPRINT_MODE_FILE");
	lua_pushnumber(L,wxPRINT_MODE_PRINTER); lua_setfield(L,-2,"wxPRINT_MODE_PRINTER");
	lua_pushnumber(L,wxPRINT_MODE_STREAM); lua_setfield(L,-2,"wxPRINT_MODE_STREAM");


	lua_newtable(L); // enum wxUpdateUI

	lua_pushnumber(L,wxUPDATE_UI_NONE); lua_setfield(L,-2,"wxUPDATE_UI_NONE");
	lua_pushnumber(L,wxUPDATE_UI_RECURSE); lua_setfield(L,-2,"wxUPDATE_UI_RECURSE");
	lua_pushnumber(L,wxUPDATE_UI_FROMIDLE); lua_setfield(L,-2,"wxUPDATE_UI_FROMIDLE");

	lua_setfield(L,-2,"wxUpdateUI");

	lua_pushnumber(L,wxUPDATE_UI_NONE); lua_setfield(L,-2,"wxUPDATE_UI_NONE");
	lua_pushnumber(L,wxUPDATE_UI_RECURSE); lua_setfield(L,-2,"wxUPDATE_UI_RECURSE");
	lua_pushnumber(L,wxUPDATE_UI_FROMIDLE); lua_setfield(L,-2,"wxUPDATE_UI_FROMIDLE");


	lua_newtable(L); // enum wxDialogLayoutAdaptationMode

	lua_pushnumber(L,wxDIALOG_ADAPTATION_MODE_DEFAULT); lua_setfield(L,-2,"wxDIALOG_ADAPTATION_MODE_DEFAULT");
	lua_pushnumber(L,wxDIALOG_ADAPTATION_MODE_ENABLED); lua_setfield(L,-2,"wxDIALOG_ADAPTATION_MODE_ENABLED");
	lua_pushnumber(L,wxDIALOG_ADAPTATION_MODE_DISABLED); lua_setfield(L,-2,"wxDIALOG_ADAPTATION_MODE_DISABLED");

	lua_setfield(L,-2,"wxDialogLayoutAdaptationMode");

	lua_pushnumber(L,wxDIALOG_ADAPTATION_MODE_DEFAULT); lua_setfield(L,-2,"wxDIALOG_ADAPTATION_MODE_DEFAULT");
	lua_pushnumber(L,wxDIALOG_ADAPTATION_MODE_ENABLED); lua_setfield(L,-2,"wxDIALOG_ADAPTATION_MODE_ENABLED");
	lua_pushnumber(L,wxDIALOG_ADAPTATION_MODE_DISABLED); lua_setfield(L,-2,"wxDIALOG_ADAPTATION_MODE_DISABLED");


	lua_newtable(L); // enum wxDirTraverseResult

	lua_pushnumber(L,wxDIR_IGNORE); lua_setfield(L,-2,"wxDIR_IGNORE");
	lua_pushnumber(L,wxDIR_STOP); lua_setfield(L,-2,"wxDIR_STOP");
	lua_pushnumber(L,wxDIR_CONTINUE); lua_setfield(L,-2,"wxDIR_CONTINUE");

	lua_setfield(L,-2,"wxDirTraverseResult");

	lua_pushnumber(L,wxDIR_IGNORE); lua_setfield(L,-2,"wxDIR_IGNORE");
	lua_pushnumber(L,wxDIR_STOP); lua_setfield(L,-2,"wxDIR_STOP");
	lua_pushnumber(L,wxDIR_CONTINUE); lua_setfield(L,-2,"wxDIR_CONTINUE");


	lua_newtable(L); // enum wxDirFlags

	lua_pushnumber(L,wxDIR_FILES); lua_setfield(L,-2,"wxDIR_FILES");
	lua_pushnumber(L,wxDIR_DIRS); lua_setfield(L,-2,"wxDIR_DIRS");
	lua_pushnumber(L,wxDIR_HIDDEN); lua_setfield(L,-2,"wxDIR_HIDDEN");
	lua_pushnumber(L,wxDIR_DOTDOT); lua_setfield(L,-2,"wxDIR_DOTDOT");
	lua_pushnumber(L,wxDIR_DEFAULT); lua_setfield(L,-2,"wxDIR_DEFAULT");

	lua_setfield(L,-2,"wxDirFlags");

	lua_pushnumber(L,wxDIR_FILES); lua_setfield(L,-2,"wxDIR_FILES");
	lua_pushnumber(L,wxDIR_DIRS); lua_setfield(L,-2,"wxDIR_DIRS");
	lua_pushnumber(L,wxDIR_HIDDEN); lua_setfield(L,-2,"wxDIR_HIDDEN");
	lua_pushnumber(L,wxDIR_DOTDOT); lua_setfield(L,-2,"wxDIR_DOTDOT");
	lua_pushnumber(L,wxDIR_DEFAULT); lua_setfield(L,-2,"wxDIR_DEFAULT");


	lua_newtable(L); // enum wxDragResult

	lua_pushnumber(L,wxDragError); lua_setfield(L,-2,"wxDragError");
	lua_pushnumber(L,wxDragNone); lua_setfield(L,-2,"wxDragNone");
	lua_pushnumber(L,wxDragCopy); lua_setfield(L,-2,"wxDragCopy");
	lua_pushnumber(L,wxDragMove); lua_setfield(L,-2,"wxDragMove");
	lua_pushnumber(L,wxDragLink); lua_setfield(L,-2,"wxDragLink");
	lua_pushnumber(L,wxDragCancel); lua_setfield(L,-2,"wxDragCancel");

	lua_setfield(L,-2,"wxDragResult");

	lua_pushnumber(L,wxDragError); lua_setfield(L,-2,"wxDragError");
	lua_pushnumber(L,wxDragNone); lua_setfield(L,-2,"wxDragNone");
	lua_pushnumber(L,wxDragCopy); lua_setfield(L,-2,"wxDragCopy");
	lua_pushnumber(L,wxDragMove); lua_setfield(L,-2,"wxDragMove");
	lua_pushnumber(L,wxDragLink); lua_setfield(L,-2,"wxDragLink");
	lua_pushnumber(L,wxDragCancel); lua_setfield(L,-2,"wxDragCancel");


	lua_newtable(L); // enum wxAuiPaneDockArtSetting

	lua_pushnumber(L,wxAUI_DOCKART_SASH_SIZE); lua_setfield(L,-2,"wxAUI_DOCKART_SASH_SIZE");
	lua_pushnumber(L,wxAUI_DOCKART_CAPTION_SIZE); lua_setfield(L,-2,"wxAUI_DOCKART_CAPTION_SIZE");
	lua_pushnumber(L,wxAUI_DOCKART_GRIPPER_SIZE); lua_setfield(L,-2,"wxAUI_DOCKART_GRIPPER_SIZE");
	lua_pushnumber(L,wxAUI_DOCKART_PANE_BORDER_SIZE); lua_setfield(L,-2,"wxAUI_DOCKART_PANE_BORDER_SIZE");
	lua_pushnumber(L,wxAUI_DOCKART_PANE_BUTTON_SIZE); lua_setfield(L,-2,"wxAUI_DOCKART_PANE_BUTTON_SIZE");
	lua_pushnumber(L,wxAUI_DOCKART_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_SASH_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_SASH_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_ACTIVE_CAPTION_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_ACTIVE_CAPTION_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_ACTIVE_CAPTION_GRADIENT_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_ACTIVE_CAPTION_GRADIENT_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_INACTIVE_CAPTION_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_INACTIVE_CAPTION_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_INACTIVE_CAPTION_GRADIENT_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_INACTIVE_CAPTION_GRADIENT_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_ACTIVE_CAPTION_TEXT_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_ACTIVE_CAPTION_TEXT_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_INACTIVE_CAPTION_TEXT_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_INACTIVE_CAPTION_TEXT_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_BORDER_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_BORDER_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_GRIPPER_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_GRIPPER_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_CAPTION_FONT); lua_setfield(L,-2,"wxAUI_DOCKART_CAPTION_FONT");
	lua_pushnumber(L,wxAUI_DOCKART_GRADIENT_TYPE); lua_setfield(L,-2,"wxAUI_DOCKART_GRADIENT_TYPE");

	lua_setfield(L,-2,"wxAuiPaneDockArtSetting");

	lua_pushnumber(L,wxAUI_DOCKART_SASH_SIZE); lua_setfield(L,-2,"wxAUI_DOCKART_SASH_SIZE");
	lua_pushnumber(L,wxAUI_DOCKART_CAPTION_SIZE); lua_setfield(L,-2,"wxAUI_DOCKART_CAPTION_SIZE");
	lua_pushnumber(L,wxAUI_DOCKART_GRIPPER_SIZE); lua_setfield(L,-2,"wxAUI_DOCKART_GRIPPER_SIZE");
	lua_pushnumber(L,wxAUI_DOCKART_PANE_BORDER_SIZE); lua_setfield(L,-2,"wxAUI_DOCKART_PANE_BORDER_SIZE");
	lua_pushnumber(L,wxAUI_DOCKART_PANE_BUTTON_SIZE); lua_setfield(L,-2,"wxAUI_DOCKART_PANE_BUTTON_SIZE");
	lua_pushnumber(L,wxAUI_DOCKART_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_SASH_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_SASH_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_ACTIVE_CAPTION_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_ACTIVE_CAPTION_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_ACTIVE_CAPTION_GRADIENT_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_ACTIVE_CAPTION_GRADIENT_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_INACTIVE_CAPTION_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_INACTIVE_CAPTION_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_INACTIVE_CAPTION_GRADIENT_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_INACTIVE_CAPTION_GRADIENT_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_ACTIVE_CAPTION_TEXT_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_ACTIVE_CAPTION_TEXT_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_INACTIVE_CAPTION_TEXT_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_INACTIVE_CAPTION_TEXT_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_BORDER_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_BORDER_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_GRIPPER_COLOUR); lua_setfield(L,-2,"wxAUI_DOCKART_GRIPPER_COLOUR");
	lua_pushnumber(L,wxAUI_DOCKART_CAPTION_FONT); lua_setfield(L,-2,"wxAUI_DOCKART_CAPTION_FONT");
	lua_pushnumber(L,wxAUI_DOCKART_GRADIENT_TYPE); lua_setfield(L,-2,"wxAUI_DOCKART_GRADIENT_TYPE");


	lua_newtable(L); // enum wxAuiPaneDockArtGradients

	lua_pushnumber(L,wxAUI_GRADIENT_NONE); lua_setfield(L,-2,"wxAUI_GRADIENT_NONE");
	lua_pushnumber(L,wxAUI_GRADIENT_VERTICAL); lua_setfield(L,-2,"wxAUI_GRADIENT_VERTICAL");
	lua_pushnumber(L,wxAUI_GRADIENT_HORIZONTAL); lua_setfield(L,-2,"wxAUI_GRADIENT_HORIZONTAL");

	lua_setfield(L,-2,"wxAuiPaneDockArtGradients");

	lua_pushnumber(L,wxAUI_GRADIENT_NONE); lua_setfield(L,-2,"wxAUI_GRADIENT_NONE");
	lua_pushnumber(L,wxAUI_GRADIENT_VERTICAL); lua_setfield(L,-2,"wxAUI_GRADIENT_VERTICAL");
	lua_pushnumber(L,wxAUI_GRADIENT_HORIZONTAL); lua_setfield(L,-2,"wxAUI_GRADIENT_HORIZONTAL");


	lua_newtable(L); // enum wxAuiPaneButtonState

	lua_pushnumber(L,wxAUI_BUTTON_STATE_NORMAL); lua_setfield(L,-2,"wxAUI_BUTTON_STATE_NORMAL");
	lua_pushnumber(L,wxAUI_BUTTON_STATE_HOVER); lua_setfield(L,-2,"wxAUI_BUTTON_STATE_HOVER");
	lua_pushnumber(L,wxAUI_BUTTON_STATE_PRESSED); lua_setfield(L,-2,"wxAUI_BUTTON_STATE_PRESSED");

	lua_setfield(L,-2,"wxAuiPaneButtonState");

	lua_pushnumber(L,wxAUI_BUTTON_STATE_NORMAL); lua_setfield(L,-2,"wxAUI_BUTTON_STATE_NORMAL");
	lua_pushnumber(L,wxAUI_BUTTON_STATE_HOVER); lua_setfield(L,-2,"wxAUI_BUTTON_STATE_HOVER");
	lua_pushnumber(L,wxAUI_BUTTON_STATE_PRESSED); lua_setfield(L,-2,"wxAUI_BUTTON_STATE_PRESSED");


	lua_newtable(L); // enum wxAuiButtonId

	lua_pushnumber(L,wxAUI_BUTTON_CLOSE); lua_setfield(L,-2,"wxAUI_BUTTON_CLOSE");
	lua_pushnumber(L,wxAUI_BUTTON_MAXIMIZE_RESTORE); lua_setfield(L,-2,"wxAUI_BUTTON_MAXIMIZE_RESTORE");
	lua_pushnumber(L,wxAUI_BUTTON_MINIMIZE); lua_setfield(L,-2,"wxAUI_BUTTON_MINIMIZE");
	lua_pushnumber(L,wxAUI_BUTTON_PIN); lua_setfield(L,-2,"wxAUI_BUTTON_PIN");
	lua_pushnumber(L,wxAUI_BUTTON_OPTIONS); lua_setfield(L,-2,"wxAUI_BUTTON_OPTIONS");
	lua_pushnumber(L,wxAUI_BUTTON_WINDOWLIST); lua_setfield(L,-2,"wxAUI_BUTTON_WINDOWLIST");
	lua_pushnumber(L,wxAUI_BUTTON_LEFT); lua_setfield(L,-2,"wxAUI_BUTTON_LEFT");
	lua_pushnumber(L,wxAUI_BUTTON_RIGHT); lua_setfield(L,-2,"wxAUI_BUTTON_RIGHT");
	lua_pushnumber(L,wxAUI_BUTTON_UP); lua_setfield(L,-2,"wxAUI_BUTTON_UP");
	lua_pushnumber(L,wxAUI_BUTTON_DOWN); lua_setfield(L,-2,"wxAUI_BUTTON_DOWN");
	lua_pushnumber(L,wxAUI_BUTTON_CUSTOM1); lua_setfield(L,-2,"wxAUI_BUTTON_CUSTOM1");
	lua_pushnumber(L,wxAUI_BUTTON_CUSTOM2); lua_setfield(L,-2,"wxAUI_BUTTON_CUSTOM2");
	lua_pushnumber(L,wxAUI_BUTTON_CUSTOM3); lua_setfield(L,-2,"wxAUI_BUTTON_CUSTOM3");

	lua_setfield(L,-2,"wxAuiButtonId");

	lua_pushnumber(L,wxAUI_BUTTON_CLOSE); lua_setfield(L,-2,"wxAUI_BUTTON_CLOSE");
	lua_pushnumber(L,wxAUI_BUTTON_MAXIMIZE_RESTORE); lua_setfield(L,-2,"wxAUI_BUTTON_MAXIMIZE_RESTORE");
	lua_pushnumber(L,wxAUI_BUTTON_MINIMIZE); lua_setfield(L,-2,"wxAUI_BUTTON_MINIMIZE");
	lua_pushnumber(L,wxAUI_BUTTON_PIN); lua_setfield(L,-2,"wxAUI_BUTTON_PIN");
	lua_pushnumber(L,wxAUI_BUTTON_OPTIONS); lua_setfield(L,-2,"wxAUI_BUTTON_OPTIONS");
	lua_pushnumber(L,wxAUI_BUTTON_WINDOWLIST); lua_setfield(L,-2,"wxAUI_BUTTON_WINDOWLIST");
	lua_pushnumber(L,wxAUI_BUTTON_LEFT); lua_setfield(L,-2,"wxAUI_BUTTON_LEFT");
	lua_pushnumber(L,wxAUI_BUTTON_RIGHT); lua_setfield(L,-2,"wxAUI_BUTTON_RIGHT");
	lua_pushnumber(L,wxAUI_BUTTON_UP); lua_setfield(L,-2,"wxAUI_BUTTON_UP");
	lua_pushnumber(L,wxAUI_BUTTON_DOWN); lua_setfield(L,-2,"wxAUI_BUTTON_DOWN");
	lua_pushnumber(L,wxAUI_BUTTON_CUSTOM1); lua_setfield(L,-2,"wxAUI_BUTTON_CUSTOM1");
	lua_pushnumber(L,wxAUI_BUTTON_CUSTOM2); lua_setfield(L,-2,"wxAUI_BUTTON_CUSTOM2");
	lua_pushnumber(L,wxAUI_BUTTON_CUSTOM3); lua_setfield(L,-2,"wxAUI_BUTTON_CUSTOM3");


	lua_newtable(L); // enum wxDynamicLibraryCategory

	lua_pushnumber(L,wxDL_LIBRARY); lua_setfield(L,-2,"wxDL_LIBRARY");
	lua_pushnumber(L,wxDL_MODULE); lua_setfield(L,-2,"wxDL_MODULE");

	lua_setfield(L,-2,"wxDynamicLibraryCategory");

	lua_pushnumber(L,wxDL_LIBRARY); lua_setfield(L,-2,"wxDL_LIBRARY");
	lua_pushnumber(L,wxDL_MODULE); lua_setfield(L,-2,"wxDL_MODULE");


	lua_newtable(L); // enum wxPluginCategory

	lua_pushnumber(L,wxDL_PLUGIN_GUI); lua_setfield(L,-2,"wxDL_PLUGIN_GUI");
	lua_pushnumber(L,wxDL_PLUGIN_BASE); lua_setfield(L,-2,"wxDL_PLUGIN_BASE");

	lua_setfield(L,-2,"wxPluginCategory");

	lua_pushnumber(L,wxDL_PLUGIN_GUI); lua_setfield(L,-2,"wxDL_PLUGIN_GUI");
	lua_pushnumber(L,wxDL_PLUGIN_BASE); lua_setfield(L,-2,"wxDL_PLUGIN_BASE");


	lua_newtable(L); // enum wxEventPropagation

	lua_pushnumber(L,wxEVENT_PROPAGATE_NONE); lua_setfield(L,-2,"wxEVENT_PROPAGATE_NONE");
	lua_pushnumber(L,wxEVENT_PROPAGATE_MAX); lua_setfield(L,-2,"wxEVENT_PROPAGATE_MAX");

	lua_setfield(L,-2,"wxEventPropagation");

	lua_pushnumber(L,wxEVENT_PROPAGATE_NONE); lua_setfield(L,-2,"wxEVENT_PROPAGATE_NONE");
	lua_pushnumber(L,wxEVENT_PROPAGATE_MAX); lua_setfield(L,-2,"wxEVENT_PROPAGATE_MAX");


	lua_newtable(L); // enum wxEventCategory

	lua_pushnumber(L,wxEVT_CATEGORY_UI); lua_setfield(L,-2,"wxEVT_CATEGORY_UI");
	lua_pushnumber(L,wxEVT_CATEGORY_USER_INPUT); lua_setfield(L,-2,"wxEVT_CATEGORY_USER_INPUT");
	lua_pushnumber(L,wxEVT_CATEGORY_SOCKET); lua_setfield(L,-2,"wxEVT_CATEGORY_SOCKET");
	lua_pushnumber(L,wxEVT_CATEGORY_TIMER); lua_setfield(L,-2,"wxEVT_CATEGORY_TIMER");
	lua_pushnumber(L,wxEVT_CATEGORY_THREAD); lua_setfield(L,-2,"wxEVT_CATEGORY_THREAD");
	lua_pushnumber(L,wxEVT_CATEGORY_ALL); lua_setfield(L,-2,"wxEVT_CATEGORY_ALL");

	lua_setfield(L,-2,"wxEventCategory");

	lua_pushnumber(L,wxEVT_CATEGORY_UI); lua_setfield(L,-2,"wxEVT_CATEGORY_UI");
	lua_pushnumber(L,wxEVT_CATEGORY_USER_INPUT); lua_setfield(L,-2,"wxEVT_CATEGORY_USER_INPUT");
	lua_pushnumber(L,wxEVT_CATEGORY_SOCKET); lua_setfield(L,-2,"wxEVT_CATEGORY_SOCKET");
	lua_pushnumber(L,wxEVT_CATEGORY_TIMER); lua_setfield(L,-2,"wxEVT_CATEGORY_TIMER");
	lua_pushnumber(L,wxEVT_CATEGORY_THREAD); lua_setfield(L,-2,"wxEVT_CATEGORY_THREAD");
	lua_pushnumber(L,wxEVT_CATEGORY_ALL); lua_setfield(L,-2,"wxEVT_CATEGORY_ALL");


	lua_newtable(L); // enum wxKeyCategoryFlags

	lua_pushnumber(L,WXK_CATEGORY_ARROW); lua_setfield(L,-2,"WXK_CATEGORY_ARROW");
	lua_pushnumber(L,WXK_CATEGORY_PAGING); lua_setfield(L,-2,"WXK_CATEGORY_PAGING");
	lua_pushnumber(L,WXK_CATEGORY_JUMP); lua_setfield(L,-2,"WXK_CATEGORY_JUMP");
	lua_pushnumber(L,WXK_CATEGORY_TAB); lua_setfield(L,-2,"WXK_CATEGORY_TAB");
	lua_pushnumber(L,WXK_CATEGORY_CUT); lua_setfield(L,-2,"WXK_CATEGORY_CUT");
	lua_pushnumber(L,WXK_CATEGORY_NAVIGATION); lua_setfield(L,-2,"WXK_CATEGORY_NAVIGATION");

	lua_setfield(L,-2,"wxKeyCategoryFlags");

	lua_pushnumber(L,WXK_CATEGORY_ARROW); lua_setfield(L,-2,"WXK_CATEGORY_ARROW");
	lua_pushnumber(L,WXK_CATEGORY_PAGING); lua_setfield(L,-2,"WXK_CATEGORY_PAGING");
	lua_pushnumber(L,WXK_CATEGORY_JUMP); lua_setfield(L,-2,"WXK_CATEGORY_JUMP");
	lua_pushnumber(L,WXK_CATEGORY_TAB); lua_setfield(L,-2,"WXK_CATEGORY_TAB");
	lua_pushnumber(L,WXK_CATEGORY_CUT); lua_setfield(L,-2,"WXK_CATEGORY_CUT");
	lua_pushnumber(L,WXK_CATEGORY_NAVIGATION); lua_setfield(L,-2,"WXK_CATEGORY_NAVIGATION");


	lua_newtable(L); // enum wxUpdateUIMode

	lua_pushnumber(L,wxUPDATE_UI_PROCESS_ALL); lua_setfield(L,-2,"wxUPDATE_UI_PROCESS_ALL");
	lua_pushnumber(L,wxUPDATE_UI_PROCESS_SPECIFIED); lua_setfield(L,-2,"wxUPDATE_UI_PROCESS_SPECIFIED");

	lua_setfield(L,-2,"wxUpdateUIMode");

	lua_pushnumber(L,wxUPDATE_UI_PROCESS_ALL); lua_setfield(L,-2,"wxUPDATE_UI_PROCESS_ALL");
	lua_pushnumber(L,wxUPDATE_UI_PROCESS_SPECIFIED); lua_setfield(L,-2,"wxUPDATE_UI_PROCESS_SPECIFIED");


	lua_newtable(L); // enum wxIdleMode

	lua_pushnumber(L,wxIDLE_PROCESS_ALL); lua_setfield(L,-2,"wxIDLE_PROCESS_ALL");
	lua_pushnumber(L,wxIDLE_PROCESS_SPECIFIED); lua_setfield(L,-2,"wxIDLE_PROCESS_SPECIFIED");

	lua_setfield(L,-2,"wxIdleMode");

	lua_pushnumber(L,wxIDLE_PROCESS_ALL); lua_setfield(L,-2,"wxIDLE_PROCESS_ALL");
	lua_pushnumber(L,wxIDLE_PROCESS_SPECIFIED); lua_setfield(L,-2,"wxIDLE_PROCESS_SPECIFIED");


	lua_newtable(L); // enum wxFindReplaceFlags

	lua_pushnumber(L,wxFR_DOWN); lua_setfield(L,-2,"wxFR_DOWN");
	lua_pushnumber(L,wxFR_WHOLEWORD); lua_setfield(L,-2,"wxFR_WHOLEWORD");
	lua_pushnumber(L,wxFR_MATCHCASE); lua_setfield(L,-2,"wxFR_MATCHCASE");

	lua_setfield(L,-2,"wxFindReplaceFlags");

	lua_pushnumber(L,wxFR_DOWN); lua_setfield(L,-2,"wxFR_DOWN");
	lua_pushnumber(L,wxFR_WHOLEWORD); lua_setfield(L,-2,"wxFR_WHOLEWORD");
	lua_pushnumber(L,wxFR_MATCHCASE); lua_setfield(L,-2,"wxFR_MATCHCASE");


	lua_newtable(L); // enum wxSeekMode

	lua_pushnumber(L,wxFromStart); lua_setfield(L,-2,"wxFromStart");
	lua_pushnumber(L,wxFromCurrent); lua_setfield(L,-2,"wxFromCurrent");
	lua_pushnumber(L,wxFromEnd); lua_setfield(L,-2,"wxFromEnd");

	lua_setfield(L,-2,"wxSeekMode");

	lua_pushnumber(L,wxFromStart); lua_setfield(L,-2,"wxFromStart");
	lua_pushnumber(L,wxFromCurrent); lua_setfield(L,-2,"wxFromCurrent");
	lua_pushnumber(L,wxFromEnd); lua_setfield(L,-2,"wxFromEnd");


	lua_newtable(L); // enum wxFileKind

	lua_pushnumber(L,wxFILE_KIND_UNKNOWN); lua_setfield(L,-2,"wxFILE_KIND_UNKNOWN");
	lua_pushnumber(L,wxFILE_KIND_DISK); lua_setfield(L,-2,"wxFILE_KIND_DISK");
	lua_pushnumber(L,wxFILE_KIND_TERMINAL); lua_setfield(L,-2,"wxFILE_KIND_TERMINAL");
	lua_pushnumber(L,wxFILE_KIND_PIPE); lua_setfield(L,-2,"wxFILE_KIND_PIPE");

	lua_setfield(L,-2,"wxFileKind");

	lua_pushnumber(L,wxFILE_KIND_UNKNOWN); lua_setfield(L,-2,"wxFILE_KIND_UNKNOWN");
	lua_pushnumber(L,wxFILE_KIND_DISK); lua_setfield(L,-2,"wxFILE_KIND_DISK");
	lua_pushnumber(L,wxFILE_KIND_TERMINAL); lua_setfield(L,-2,"wxFILE_KIND_TERMINAL");
	lua_pushnumber(L,wxFILE_KIND_PIPE); lua_setfield(L,-2,"wxFILE_KIND_PIPE");


	lua_newtable(L); // enum unnamed_6

	lua_pushnumber(L,wxFD_OPEN); lua_setfield(L,-2,"wxFD_OPEN");
	lua_pushnumber(L,wxFD_SAVE); lua_setfield(L,-2,"wxFD_SAVE");
	lua_pushnumber(L,wxFD_OVERWRITE_PROMPT); lua_setfield(L,-2,"wxFD_OVERWRITE_PROMPT");
	lua_pushnumber(L,wxFD_FILE_MUST_EXIST); lua_setfield(L,-2,"wxFD_FILE_MUST_EXIST");
	lua_pushnumber(L,wxFD_MULTIPLE); lua_setfield(L,-2,"wxFD_MULTIPLE");
	lua_pushnumber(L,wxFD_CHANGE_DIR); lua_setfield(L,-2,"wxFD_CHANGE_DIR");
	lua_pushnumber(L,wxFD_PREVIEW); lua_setfield(L,-2,"wxFD_PREVIEW");

	lua_setfield(L,-2,"unnamed_6");

	lua_pushnumber(L,wxFD_OPEN); lua_setfield(L,-2,"wxFD_OPEN");
	lua_pushnumber(L,wxFD_SAVE); lua_setfield(L,-2,"wxFD_SAVE");
	lua_pushnumber(L,wxFD_OVERWRITE_PROMPT); lua_setfield(L,-2,"wxFD_OVERWRITE_PROMPT");
	lua_pushnumber(L,wxFD_FILE_MUST_EXIST); lua_setfield(L,-2,"wxFD_FILE_MUST_EXIST");
	lua_pushnumber(L,wxFD_MULTIPLE); lua_setfield(L,-2,"wxFD_MULTIPLE");
	lua_pushnumber(L,wxFD_CHANGE_DIR); lua_setfield(L,-2,"wxFD_CHANGE_DIR");
	lua_pushnumber(L,wxFD_PREVIEW); lua_setfield(L,-2,"wxFD_PREVIEW");


	lua_newtable(L); // enum wxPosixPermissions

	lua_pushnumber(L,wxS_IRUSR); lua_setfield(L,-2,"wxS_IRUSR");
	lua_pushnumber(L,wxS_IWUSR); lua_setfield(L,-2,"wxS_IWUSR");
	lua_pushnumber(L,wxS_IXUSR); lua_setfield(L,-2,"wxS_IXUSR");
	lua_pushnumber(L,wxS_IRGRP); lua_setfield(L,-2,"wxS_IRGRP");
	lua_pushnumber(L,wxS_IWGRP); lua_setfield(L,-2,"wxS_IWGRP");
	lua_pushnumber(L,wxS_IXGRP); lua_setfield(L,-2,"wxS_IXGRP");
	lua_pushnumber(L,wxS_IROTH); lua_setfield(L,-2,"wxS_IROTH");
	lua_pushnumber(L,wxS_IWOTH); lua_setfield(L,-2,"wxS_IWOTH");
	lua_pushnumber(L,wxS_IXOTH); lua_setfield(L,-2,"wxS_IXOTH");
	lua_pushnumber(L,wxPOSIX_USER_READ); lua_setfield(L,-2,"wxPOSIX_USER_READ");
	lua_pushnumber(L,wxPOSIX_USER_WRITE); lua_setfield(L,-2,"wxPOSIX_USER_WRITE");
	lua_pushnumber(L,wxPOSIX_USER_EXECUTE); lua_setfield(L,-2,"wxPOSIX_USER_EXECUTE");
	lua_pushnumber(L,wxPOSIX_GROUP_READ); lua_setfield(L,-2,"wxPOSIX_GROUP_READ");
	lua_pushnumber(L,wxPOSIX_GROUP_WRITE); lua_setfield(L,-2,"wxPOSIX_GROUP_WRITE");
	lua_pushnumber(L,wxPOSIX_GROUP_EXECUTE); lua_setfield(L,-2,"wxPOSIX_GROUP_EXECUTE");
	lua_pushnumber(L,wxPOSIX_OTHERS_READ); lua_setfield(L,-2,"wxPOSIX_OTHERS_READ");
	lua_pushnumber(L,wxPOSIX_OTHERS_WRITE); lua_setfield(L,-2,"wxPOSIX_OTHERS_WRITE");
	lua_pushnumber(L,wxPOSIX_OTHERS_EXECUTE); lua_setfield(L,-2,"wxPOSIX_OTHERS_EXECUTE");
	lua_pushnumber(L,wxS_DEFAULT); lua_setfield(L,-2,"wxS_DEFAULT");
	lua_pushnumber(L,wxS_DIR_DEFAULT); lua_setfield(L,-2,"wxS_DIR_DEFAULT");

	lua_setfield(L,-2,"wxPosixPermissions");

	lua_pushnumber(L,wxS_IRUSR); lua_setfield(L,-2,"wxS_IRUSR");
	lua_pushnumber(L,wxS_IWUSR); lua_setfield(L,-2,"wxS_IWUSR");
	lua_pushnumber(L,wxS_IXUSR); lua_setfield(L,-2,"wxS_IXUSR");
	lua_pushnumber(L,wxS_IRGRP); lua_setfield(L,-2,"wxS_IRGRP");
	lua_pushnumber(L,wxS_IWGRP); lua_setfield(L,-2,"wxS_IWGRP");
	lua_pushnumber(L,wxS_IXGRP); lua_setfield(L,-2,"wxS_IXGRP");
	lua_pushnumber(L,wxS_IROTH); lua_setfield(L,-2,"wxS_IROTH");
	lua_pushnumber(L,wxS_IWOTH); lua_setfield(L,-2,"wxS_IWOTH");
	lua_pushnumber(L,wxS_IXOTH); lua_setfield(L,-2,"wxS_IXOTH");
	lua_pushnumber(L,wxPOSIX_USER_READ); lua_setfield(L,-2,"wxPOSIX_USER_READ");
	lua_pushnumber(L,wxPOSIX_USER_WRITE); lua_setfield(L,-2,"wxPOSIX_USER_WRITE");
	lua_pushnumber(L,wxPOSIX_USER_EXECUTE); lua_setfield(L,-2,"wxPOSIX_USER_EXECUTE");
	lua_pushnumber(L,wxPOSIX_GROUP_READ); lua_setfield(L,-2,"wxPOSIX_GROUP_READ");
	lua_pushnumber(L,wxPOSIX_GROUP_WRITE); lua_setfield(L,-2,"wxPOSIX_GROUP_WRITE");
	lua_pushnumber(L,wxPOSIX_GROUP_EXECUTE); lua_setfield(L,-2,"wxPOSIX_GROUP_EXECUTE");
	lua_pushnumber(L,wxPOSIX_OTHERS_READ); lua_setfield(L,-2,"wxPOSIX_OTHERS_READ");
	lua_pushnumber(L,wxPOSIX_OTHERS_WRITE); lua_setfield(L,-2,"wxPOSIX_OTHERS_WRITE");
	lua_pushnumber(L,wxPOSIX_OTHERS_EXECUTE); lua_setfield(L,-2,"wxPOSIX_OTHERS_EXECUTE");
	lua_pushnumber(L,wxS_DEFAULT); lua_setfield(L,-2,"wxS_DEFAULT");
	lua_pushnumber(L,wxS_DIR_DEFAULT); lua_setfield(L,-2,"wxS_DIR_DEFAULT");


	lua_newtable(L); // enum wxFileKind

	lua_pushnumber(L,wxFILE_KIND_UNKNOWN); lua_setfield(L,-2,"wxFILE_KIND_UNKNOWN");
	lua_pushnumber(L,wxFILE_KIND_DISK); lua_setfield(L,-2,"wxFILE_KIND_DISK");
	lua_pushnumber(L,wxFILE_KIND_TERMINAL); lua_setfield(L,-2,"wxFILE_KIND_TERMINAL");
	lua_pushnumber(L,wxFILE_KIND_PIPE); lua_setfield(L,-2,"wxFILE_KIND_PIPE");

	lua_setfield(L,-2,"wxFileKind");

	lua_pushnumber(L,wxFILE_KIND_UNKNOWN); lua_setfield(L,-2,"wxFILE_KIND_UNKNOWN");
	lua_pushnumber(L,wxFILE_KIND_DISK); lua_setfield(L,-2,"wxFILE_KIND_DISK");
	lua_pushnumber(L,wxFILE_KIND_TERMINAL); lua_setfield(L,-2,"wxFILE_KIND_TERMINAL");
	lua_pushnumber(L,wxFILE_KIND_PIPE); lua_setfield(L,-2,"wxFILE_KIND_PIPE");


	lua_newtable(L); // enum wxPathFormat

	lua_pushnumber(L,wxPATH_NATIVE); lua_setfield(L,-2,"wxPATH_NATIVE");
	lua_pushnumber(L,wxPATH_UNIX); lua_setfield(L,-2,"wxPATH_UNIX");
	lua_pushnumber(L,wxPATH_BEOS); lua_setfield(L,-2,"wxPATH_BEOS");
	lua_pushnumber(L,wxPATH_MAC); lua_setfield(L,-2,"wxPATH_MAC");
	lua_pushnumber(L,wxPATH_DOS); lua_setfield(L,-2,"wxPATH_DOS");
	lua_pushnumber(L,wxPATH_WIN); lua_setfield(L,-2,"wxPATH_WIN");
	lua_pushnumber(L,wxPATH_OS2); lua_setfield(L,-2,"wxPATH_OS2");
	lua_pushnumber(L,wxPATH_VMS); lua_setfield(L,-2,"wxPATH_VMS");
	lua_pushnumber(L,wxPATH_MAX); lua_setfield(L,-2,"wxPATH_MAX");

	lua_setfield(L,-2,"wxPathFormat");

	lua_pushnumber(L,wxPATH_NATIVE); lua_setfield(L,-2,"wxPATH_NATIVE");
	lua_pushnumber(L,wxPATH_UNIX); lua_setfield(L,-2,"wxPATH_UNIX");
	lua_pushnumber(L,wxPATH_BEOS); lua_setfield(L,-2,"wxPATH_BEOS");
	lua_pushnumber(L,wxPATH_MAC); lua_setfield(L,-2,"wxPATH_MAC");
	lua_pushnumber(L,wxPATH_DOS); lua_setfield(L,-2,"wxPATH_DOS");
	lua_pushnumber(L,wxPATH_WIN); lua_setfield(L,-2,"wxPATH_WIN");
	lua_pushnumber(L,wxPATH_OS2); lua_setfield(L,-2,"wxPATH_OS2");
	lua_pushnumber(L,wxPATH_VMS); lua_setfield(L,-2,"wxPATH_VMS");
	lua_pushnumber(L,wxPATH_MAX); lua_setfield(L,-2,"wxPATH_MAX");


	lua_newtable(L); // enum wxSizeConvention

	lua_pushnumber(L,wxSIZE_CONV_TRADITIONAL); lua_setfield(L,-2,"wxSIZE_CONV_TRADITIONAL");
	lua_pushnumber(L,wxSIZE_CONV_IEC); lua_setfield(L,-2,"wxSIZE_CONV_IEC");
	lua_pushnumber(L,wxSIZE_CONV_SI); lua_setfield(L,-2,"wxSIZE_CONV_SI");

	lua_setfield(L,-2,"wxSizeConvention");

	lua_pushnumber(L,wxSIZE_CONV_TRADITIONAL); lua_setfield(L,-2,"wxSIZE_CONV_TRADITIONAL");
	lua_pushnumber(L,wxSIZE_CONV_IEC); lua_setfield(L,-2,"wxSIZE_CONV_IEC");
	lua_pushnumber(L,wxSIZE_CONV_SI); lua_setfield(L,-2,"wxSIZE_CONV_SI");


	lua_newtable(L); // enum wxPathNormalize

	lua_pushnumber(L,wxPATH_NORM_ENV_VARS); lua_setfield(L,-2,"wxPATH_NORM_ENV_VARS");
	lua_pushnumber(L,wxPATH_NORM_DOTS); lua_setfield(L,-2,"wxPATH_NORM_DOTS");
	lua_pushnumber(L,wxPATH_NORM_TILDE); lua_setfield(L,-2,"wxPATH_NORM_TILDE");
	lua_pushnumber(L,wxPATH_NORM_CASE); lua_setfield(L,-2,"wxPATH_NORM_CASE");
	lua_pushnumber(L,wxPATH_NORM_ABSOLUTE); lua_setfield(L,-2,"wxPATH_NORM_ABSOLUTE");
	lua_pushnumber(L,wxPATH_NORM_LONG); lua_setfield(L,-2,"wxPATH_NORM_LONG");
	lua_pushnumber(L,wxPATH_NORM_SHORTCUT); lua_setfield(L,-2,"wxPATH_NORM_SHORTCUT");
	lua_pushnumber(L,wxPATH_NORM_ALL); lua_setfield(L,-2,"wxPATH_NORM_ALL");

	lua_setfield(L,-2,"wxPathNormalize");

	lua_pushnumber(L,wxPATH_NORM_ENV_VARS); lua_setfield(L,-2,"wxPATH_NORM_ENV_VARS");
	lua_pushnumber(L,wxPATH_NORM_DOTS); lua_setfield(L,-2,"wxPATH_NORM_DOTS");
	lua_pushnumber(L,wxPATH_NORM_TILDE); lua_setfield(L,-2,"wxPATH_NORM_TILDE");
	lua_pushnumber(L,wxPATH_NORM_CASE); lua_setfield(L,-2,"wxPATH_NORM_CASE");
	lua_pushnumber(L,wxPATH_NORM_ABSOLUTE); lua_setfield(L,-2,"wxPATH_NORM_ABSOLUTE");
	lua_pushnumber(L,wxPATH_NORM_LONG); lua_setfield(L,-2,"wxPATH_NORM_LONG");
	lua_pushnumber(L,wxPATH_NORM_SHORTCUT); lua_setfield(L,-2,"wxPATH_NORM_SHORTCUT");
	lua_pushnumber(L,wxPATH_NORM_ALL); lua_setfield(L,-2,"wxPATH_NORM_ALL");


	lua_newtable(L); // enum unnamed_7

	lua_pushnumber(L,wxPATH_RMDIR_FULL); lua_setfield(L,-2,"wxPATH_RMDIR_FULL");
	lua_pushnumber(L,wxPATH_RMDIR_RECURSIVE); lua_setfield(L,-2,"wxPATH_RMDIR_RECURSIVE");

	lua_setfield(L,-2,"unnamed_7");

	lua_pushnumber(L,wxPATH_RMDIR_FULL); lua_setfield(L,-2,"wxPATH_RMDIR_FULL");
	lua_pushnumber(L,wxPATH_RMDIR_RECURSIVE); lua_setfield(L,-2,"wxPATH_RMDIR_RECURSIVE");


	lua_newtable(L); // enum wxFileSystemOpenFlags

	lua_pushnumber(L,wxFS_READ); lua_setfield(L,-2,"wxFS_READ");
	lua_pushnumber(L,wxFS_SEEKABLE); lua_setfield(L,-2,"wxFS_SEEKABLE");

	lua_setfield(L,-2,"wxFileSystemOpenFlags");

	lua_pushnumber(L,wxFS_READ); lua_setfield(L,-2,"wxFS_READ");
	lua_pushnumber(L,wxFS_SEEKABLE); lua_setfield(L,-2,"wxFS_SEEKABLE");


	lua_newtable(L); // enum wxFontFamily

	lua_pushnumber(L,wxFONTFAMILY_DEFAULT); lua_setfield(L,-2,"wxFONTFAMILY_DEFAULT");
	lua_pushnumber(L,wxFONTFAMILY_DECORATIVE); lua_setfield(L,-2,"wxFONTFAMILY_DECORATIVE");
	lua_pushnumber(L,wxFONTFAMILY_ROMAN); lua_setfield(L,-2,"wxFONTFAMILY_ROMAN");
	lua_pushnumber(L,wxFONTFAMILY_SCRIPT); lua_setfield(L,-2,"wxFONTFAMILY_SCRIPT");
	lua_pushnumber(L,wxFONTFAMILY_SWISS); lua_setfield(L,-2,"wxFONTFAMILY_SWISS");
	lua_pushnumber(L,wxFONTFAMILY_MODERN); lua_setfield(L,-2,"wxFONTFAMILY_MODERN");
	lua_pushnumber(L,wxFONTFAMILY_TELETYPE); lua_setfield(L,-2,"wxFONTFAMILY_TELETYPE");
	lua_pushnumber(L,wxFONTFAMILY_MAX); lua_setfield(L,-2,"wxFONTFAMILY_MAX");
	lua_pushnumber(L,wxFONTFAMILY_UNKNOWN); lua_setfield(L,-2,"wxFONTFAMILY_UNKNOWN");

	lua_setfield(L,-2,"wxFontFamily");

	lua_pushnumber(L,wxFONTFAMILY_DEFAULT); lua_setfield(L,-2,"wxFONTFAMILY_DEFAULT");
	lua_pushnumber(L,wxFONTFAMILY_DECORATIVE); lua_setfield(L,-2,"wxFONTFAMILY_DECORATIVE");
	lua_pushnumber(L,wxFONTFAMILY_ROMAN); lua_setfield(L,-2,"wxFONTFAMILY_ROMAN");
	lua_pushnumber(L,wxFONTFAMILY_SCRIPT); lua_setfield(L,-2,"wxFONTFAMILY_SCRIPT");
	lua_pushnumber(L,wxFONTFAMILY_SWISS); lua_setfield(L,-2,"wxFONTFAMILY_SWISS");
	lua_pushnumber(L,wxFONTFAMILY_MODERN); lua_setfield(L,-2,"wxFONTFAMILY_MODERN");
	lua_pushnumber(L,wxFONTFAMILY_TELETYPE); lua_setfield(L,-2,"wxFONTFAMILY_TELETYPE");
	lua_pushnumber(L,wxFONTFAMILY_MAX); lua_setfield(L,-2,"wxFONTFAMILY_MAX");
	lua_pushnumber(L,wxFONTFAMILY_UNKNOWN); lua_setfield(L,-2,"wxFONTFAMILY_UNKNOWN");


	lua_newtable(L); // enum wxFontStyle

	lua_pushnumber(L,wxFONTSTYLE_NORMAL); lua_setfield(L,-2,"wxFONTSTYLE_NORMAL");
	lua_pushnumber(L,wxFONTSTYLE_ITALIC); lua_setfield(L,-2,"wxFONTSTYLE_ITALIC");
	lua_pushnumber(L,wxFONTSTYLE_SLANT); lua_setfield(L,-2,"wxFONTSTYLE_SLANT");
	lua_pushnumber(L,wxFONTSTYLE_MAX); lua_setfield(L,-2,"wxFONTSTYLE_MAX");

	lua_setfield(L,-2,"wxFontStyle");

	lua_pushnumber(L,wxFONTSTYLE_NORMAL); lua_setfield(L,-2,"wxFONTSTYLE_NORMAL");
	lua_pushnumber(L,wxFONTSTYLE_ITALIC); lua_setfield(L,-2,"wxFONTSTYLE_ITALIC");
	lua_pushnumber(L,wxFONTSTYLE_SLANT); lua_setfield(L,-2,"wxFONTSTYLE_SLANT");
	lua_pushnumber(L,wxFONTSTYLE_MAX); lua_setfield(L,-2,"wxFONTSTYLE_MAX");


	lua_newtable(L); // enum wxFontWeight

	lua_pushnumber(L,wxFONTWEIGHT_NORMAL); lua_setfield(L,-2,"wxFONTWEIGHT_NORMAL");
	lua_pushnumber(L,wxFONTWEIGHT_LIGHT); lua_setfield(L,-2,"wxFONTWEIGHT_LIGHT");
	lua_pushnumber(L,wxFONTWEIGHT_BOLD); lua_setfield(L,-2,"wxFONTWEIGHT_BOLD");
	lua_pushnumber(L,wxFONTWEIGHT_MAX); lua_setfield(L,-2,"wxFONTWEIGHT_MAX");

	lua_setfield(L,-2,"wxFontWeight");

	lua_pushnumber(L,wxFONTWEIGHT_NORMAL); lua_setfield(L,-2,"wxFONTWEIGHT_NORMAL");
	lua_pushnumber(L,wxFONTWEIGHT_LIGHT); lua_setfield(L,-2,"wxFONTWEIGHT_LIGHT");
	lua_pushnumber(L,wxFONTWEIGHT_BOLD); lua_setfield(L,-2,"wxFONTWEIGHT_BOLD");
	lua_pushnumber(L,wxFONTWEIGHT_MAX); lua_setfield(L,-2,"wxFONTWEIGHT_MAX");


	lua_newtable(L); // enum wxFontSymbolicSize

	lua_pushnumber(L,wxFONTSIZE_XX_SMALL); lua_setfield(L,-2,"wxFONTSIZE_XX_SMALL");
	lua_pushnumber(L,wxFONTSIZE_X_SMALL); lua_setfield(L,-2,"wxFONTSIZE_X_SMALL");
	lua_pushnumber(L,wxFONTSIZE_SMALL); lua_setfield(L,-2,"wxFONTSIZE_SMALL");
	lua_pushnumber(L,wxFONTSIZE_MEDIUM); lua_setfield(L,-2,"wxFONTSIZE_MEDIUM");
	lua_pushnumber(L,wxFONTSIZE_LARGE); lua_setfield(L,-2,"wxFONTSIZE_LARGE");
	lua_pushnumber(L,wxFONTSIZE_X_LARGE); lua_setfield(L,-2,"wxFONTSIZE_X_LARGE");
	lua_pushnumber(L,wxFONTSIZE_XX_LARGE); lua_setfield(L,-2,"wxFONTSIZE_XX_LARGE");

	lua_setfield(L,-2,"wxFontSymbolicSize");

	lua_pushnumber(L,wxFONTSIZE_XX_SMALL); lua_setfield(L,-2,"wxFONTSIZE_XX_SMALL");
	lua_pushnumber(L,wxFONTSIZE_X_SMALL); lua_setfield(L,-2,"wxFONTSIZE_X_SMALL");
	lua_pushnumber(L,wxFONTSIZE_SMALL); lua_setfield(L,-2,"wxFONTSIZE_SMALL");
	lua_pushnumber(L,wxFONTSIZE_MEDIUM); lua_setfield(L,-2,"wxFONTSIZE_MEDIUM");
	lua_pushnumber(L,wxFONTSIZE_LARGE); lua_setfield(L,-2,"wxFONTSIZE_LARGE");
	lua_pushnumber(L,wxFONTSIZE_X_LARGE); lua_setfield(L,-2,"wxFONTSIZE_X_LARGE");
	lua_pushnumber(L,wxFONTSIZE_XX_LARGE); lua_setfield(L,-2,"wxFONTSIZE_XX_LARGE");


	lua_newtable(L); // enum wxFontFlag

	lua_pushnumber(L,wxFONTFLAG_DEFAULT); lua_setfield(L,-2,"wxFONTFLAG_DEFAULT");
	lua_pushnumber(L,wxFONTFLAG_ITALIC); lua_setfield(L,-2,"wxFONTFLAG_ITALIC");
	lua_pushnumber(L,wxFONTFLAG_SLANT); lua_setfield(L,-2,"wxFONTFLAG_SLANT");
	lua_pushnumber(L,wxFONTFLAG_LIGHT); lua_setfield(L,-2,"wxFONTFLAG_LIGHT");
	lua_pushnumber(L,wxFONTFLAG_BOLD); lua_setfield(L,-2,"wxFONTFLAG_BOLD");
	lua_pushnumber(L,wxFONTFLAG_ANTIALIASED); lua_setfield(L,-2,"wxFONTFLAG_ANTIALIASED");
	lua_pushnumber(L,wxFONTFLAG_NOT_ANTIALIASED); lua_setfield(L,-2,"wxFONTFLAG_NOT_ANTIALIASED");
	lua_pushnumber(L,wxFONTFLAG_UNDERLINED); lua_setfield(L,-2,"wxFONTFLAG_UNDERLINED");
	lua_pushnumber(L,wxFONTFLAG_STRIKETHROUGH); lua_setfield(L,-2,"wxFONTFLAG_STRIKETHROUGH");
	lua_pushnumber(L,wxFONTFLAG_MASK); lua_setfield(L,-2,"wxFONTFLAG_MASK");

	lua_setfield(L,-2,"wxFontFlag");

	lua_pushnumber(L,wxFONTFLAG_DEFAULT); lua_setfield(L,-2,"wxFONTFLAG_DEFAULT");
	lua_pushnumber(L,wxFONTFLAG_ITALIC); lua_setfield(L,-2,"wxFONTFLAG_ITALIC");
	lua_pushnumber(L,wxFONTFLAG_SLANT); lua_setfield(L,-2,"wxFONTFLAG_SLANT");
	lua_pushnumber(L,wxFONTFLAG_LIGHT); lua_setfield(L,-2,"wxFONTFLAG_LIGHT");
	lua_pushnumber(L,wxFONTFLAG_BOLD); lua_setfield(L,-2,"wxFONTFLAG_BOLD");
	lua_pushnumber(L,wxFONTFLAG_ANTIALIASED); lua_setfield(L,-2,"wxFONTFLAG_ANTIALIASED");
	lua_pushnumber(L,wxFONTFLAG_NOT_ANTIALIASED); lua_setfield(L,-2,"wxFONTFLAG_NOT_ANTIALIASED");
	lua_pushnumber(L,wxFONTFLAG_UNDERLINED); lua_setfield(L,-2,"wxFONTFLAG_UNDERLINED");
	lua_pushnumber(L,wxFONTFLAG_STRIKETHROUGH); lua_setfield(L,-2,"wxFONTFLAG_STRIKETHROUGH");
	lua_pushnumber(L,wxFONTFLAG_MASK); lua_setfield(L,-2,"wxFONTFLAG_MASK");


	lua_newtable(L); // enum wxFontEncoding

	lua_pushnumber(L,wxFONTENCODING_SYSTEM); lua_setfield(L,-2,"wxFONTENCODING_SYSTEM");
	lua_pushnumber(L,wxFONTENCODING_DEFAULT); lua_setfield(L,-2,"wxFONTENCODING_DEFAULT");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_1); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_1");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_2); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_2");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_3); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_3");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_4); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_4");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_5); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_5");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_6); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_6");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_7); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_7");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_8); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_8");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_9); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_9");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_10); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_10");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_11); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_11");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_12); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_12");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_13); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_13");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_14); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_14");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_15); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_15");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_MAX); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_MAX");
	lua_pushnumber(L,wxFONTENCODING_KOI8); lua_setfield(L,-2,"wxFONTENCODING_KOI8");
	lua_pushnumber(L,wxFONTENCODING_KOI8_U); lua_setfield(L,-2,"wxFONTENCODING_KOI8_U");
	lua_pushnumber(L,wxFONTENCODING_ALTERNATIVE); lua_setfield(L,-2,"wxFONTENCODING_ALTERNATIVE");
	lua_pushnumber(L,wxFONTENCODING_BULGARIAN); lua_setfield(L,-2,"wxFONTENCODING_BULGARIAN");
	lua_pushnumber(L,wxFONTENCODING_CP437); lua_setfield(L,-2,"wxFONTENCODING_CP437");
	lua_pushnumber(L,wxFONTENCODING_CP850); lua_setfield(L,-2,"wxFONTENCODING_CP850");
	lua_pushnumber(L,wxFONTENCODING_CP852); lua_setfield(L,-2,"wxFONTENCODING_CP852");
	lua_pushnumber(L,wxFONTENCODING_CP855); lua_setfield(L,-2,"wxFONTENCODING_CP855");
	lua_pushnumber(L,wxFONTENCODING_CP866); lua_setfield(L,-2,"wxFONTENCODING_CP866");
	lua_pushnumber(L,wxFONTENCODING_CP874); lua_setfield(L,-2,"wxFONTENCODING_CP874");
	lua_pushnumber(L,wxFONTENCODING_CP932); lua_setfield(L,-2,"wxFONTENCODING_CP932");
	lua_pushnumber(L,wxFONTENCODING_CP936); lua_setfield(L,-2,"wxFONTENCODING_CP936");
	lua_pushnumber(L,wxFONTENCODING_CP949); lua_setfield(L,-2,"wxFONTENCODING_CP949");
	lua_pushnumber(L,wxFONTENCODING_CP950); lua_setfield(L,-2,"wxFONTENCODING_CP950");
	lua_pushnumber(L,wxFONTENCODING_CP1250); lua_setfield(L,-2,"wxFONTENCODING_CP1250");
	lua_pushnumber(L,wxFONTENCODING_CP1251); lua_setfield(L,-2,"wxFONTENCODING_CP1251");
	lua_pushnumber(L,wxFONTENCODING_CP1252); lua_setfield(L,-2,"wxFONTENCODING_CP1252");
	lua_pushnumber(L,wxFONTENCODING_CP1253); lua_setfield(L,-2,"wxFONTENCODING_CP1253");
	lua_pushnumber(L,wxFONTENCODING_CP1254); lua_setfield(L,-2,"wxFONTENCODING_CP1254");
	lua_pushnumber(L,wxFONTENCODING_CP1255); lua_setfield(L,-2,"wxFONTENCODING_CP1255");
	lua_pushnumber(L,wxFONTENCODING_CP1256); lua_setfield(L,-2,"wxFONTENCODING_CP1256");
	lua_pushnumber(L,wxFONTENCODING_CP1257); lua_setfield(L,-2,"wxFONTENCODING_CP1257");
	lua_pushnumber(L,wxFONTENCODING_CP12_MAX); lua_setfield(L,-2,"wxFONTENCODING_CP12_MAX");
	lua_pushnumber(L,wxFONTENCODING_UTF7); lua_setfield(L,-2,"wxFONTENCODING_UTF7");
	lua_pushnumber(L,wxFONTENCODING_UTF8); lua_setfield(L,-2,"wxFONTENCODING_UTF8");
	lua_pushnumber(L,wxFONTENCODING_EUC_JP); lua_setfield(L,-2,"wxFONTENCODING_EUC_JP");
	lua_pushnumber(L,wxFONTENCODING_UTF16BE); lua_setfield(L,-2,"wxFONTENCODING_UTF16BE");
	lua_pushnumber(L,wxFONTENCODING_UTF16LE); lua_setfield(L,-2,"wxFONTENCODING_UTF16LE");
	lua_pushnumber(L,wxFONTENCODING_UTF32BE); lua_setfield(L,-2,"wxFONTENCODING_UTF32BE");
	lua_pushnumber(L,wxFONTENCODING_UTF32LE); lua_setfield(L,-2,"wxFONTENCODING_UTF32LE");
	lua_pushnumber(L,wxFONTENCODING_MACROMAN); lua_setfield(L,-2,"wxFONTENCODING_MACROMAN");
	lua_pushnumber(L,wxFONTENCODING_MACJAPANESE); lua_setfield(L,-2,"wxFONTENCODING_MACJAPANESE");
	lua_pushnumber(L,wxFONTENCODING_MACCHINESETRAD); lua_setfield(L,-2,"wxFONTENCODING_MACCHINESETRAD");
	lua_pushnumber(L,wxFONTENCODING_MACKOREAN); lua_setfield(L,-2,"wxFONTENCODING_MACKOREAN");
	lua_pushnumber(L,wxFONTENCODING_MACARABIC); lua_setfield(L,-2,"wxFONTENCODING_MACARABIC");
	lua_pushnumber(L,wxFONTENCODING_MACHEBREW); lua_setfield(L,-2,"wxFONTENCODING_MACHEBREW");
	lua_pushnumber(L,wxFONTENCODING_MACGREEK); lua_setfield(L,-2,"wxFONTENCODING_MACGREEK");
	lua_pushnumber(L,wxFONTENCODING_MACCYRILLIC); lua_setfield(L,-2,"wxFONTENCODING_MACCYRILLIC");
	lua_pushnumber(L,wxFONTENCODING_MACDEVANAGARI); lua_setfield(L,-2,"wxFONTENCODING_MACDEVANAGARI");
	lua_pushnumber(L,wxFONTENCODING_MACGURMUKHI); lua_setfield(L,-2,"wxFONTENCODING_MACGURMUKHI");
	lua_pushnumber(L,wxFONTENCODING_MACGUJARATI); lua_setfield(L,-2,"wxFONTENCODING_MACGUJARATI");
	lua_pushnumber(L,wxFONTENCODING_MACORIYA); lua_setfield(L,-2,"wxFONTENCODING_MACORIYA");
	lua_pushnumber(L,wxFONTENCODING_MACBENGALI); lua_setfield(L,-2,"wxFONTENCODING_MACBENGALI");
	lua_pushnumber(L,wxFONTENCODING_MACTAMIL); lua_setfield(L,-2,"wxFONTENCODING_MACTAMIL");
	lua_pushnumber(L,wxFONTENCODING_MACTELUGU); lua_setfield(L,-2,"wxFONTENCODING_MACTELUGU");
	lua_pushnumber(L,wxFONTENCODING_MACKANNADA); lua_setfield(L,-2,"wxFONTENCODING_MACKANNADA");
	lua_pushnumber(L,wxFONTENCODING_MACMALAJALAM); lua_setfield(L,-2,"wxFONTENCODING_MACMALAJALAM");
	lua_pushnumber(L,wxFONTENCODING_MACSINHALESE); lua_setfield(L,-2,"wxFONTENCODING_MACSINHALESE");
	lua_pushnumber(L,wxFONTENCODING_MACBURMESE); lua_setfield(L,-2,"wxFONTENCODING_MACBURMESE");
	lua_pushnumber(L,wxFONTENCODING_MACKHMER); lua_setfield(L,-2,"wxFONTENCODING_MACKHMER");
	lua_pushnumber(L,wxFONTENCODING_MACTHAI); lua_setfield(L,-2,"wxFONTENCODING_MACTHAI");
	lua_pushnumber(L,wxFONTENCODING_MACLAOTIAN); lua_setfield(L,-2,"wxFONTENCODING_MACLAOTIAN");
	lua_pushnumber(L,wxFONTENCODING_MACGEORGIAN); lua_setfield(L,-2,"wxFONTENCODING_MACGEORGIAN");
	lua_pushnumber(L,wxFONTENCODING_MACARMENIAN); lua_setfield(L,-2,"wxFONTENCODING_MACARMENIAN");
	lua_pushnumber(L,wxFONTENCODING_MACCHINESESIMP); lua_setfield(L,-2,"wxFONTENCODING_MACCHINESESIMP");
	lua_pushnumber(L,wxFONTENCODING_MACTIBETAN); lua_setfield(L,-2,"wxFONTENCODING_MACTIBETAN");
	lua_pushnumber(L,wxFONTENCODING_MACMONGOLIAN); lua_setfield(L,-2,"wxFONTENCODING_MACMONGOLIAN");
	lua_pushnumber(L,wxFONTENCODING_MACETHIOPIC); lua_setfield(L,-2,"wxFONTENCODING_MACETHIOPIC");
	lua_pushnumber(L,wxFONTENCODING_MACCENTRALEUR); lua_setfield(L,-2,"wxFONTENCODING_MACCENTRALEUR");
	lua_pushnumber(L,wxFONTENCODING_MACVIATNAMESE); lua_setfield(L,-2,"wxFONTENCODING_MACVIATNAMESE");
	lua_pushnumber(L,wxFONTENCODING_MACARABICEXT); lua_setfield(L,-2,"wxFONTENCODING_MACARABICEXT");
	lua_pushnumber(L,wxFONTENCODING_MACSYMBOL); lua_setfield(L,-2,"wxFONTENCODING_MACSYMBOL");
	lua_pushnumber(L,wxFONTENCODING_MACDINGBATS); lua_setfield(L,-2,"wxFONTENCODING_MACDINGBATS");
	lua_pushnumber(L,wxFONTENCODING_MACTURKISH); lua_setfield(L,-2,"wxFONTENCODING_MACTURKISH");
	lua_pushnumber(L,wxFONTENCODING_MACCROATIAN); lua_setfield(L,-2,"wxFONTENCODING_MACCROATIAN");
	lua_pushnumber(L,wxFONTENCODING_MACICELANDIC); lua_setfield(L,-2,"wxFONTENCODING_MACICELANDIC");
	lua_pushnumber(L,wxFONTENCODING_MACROMANIAN); lua_setfield(L,-2,"wxFONTENCODING_MACROMANIAN");
	lua_pushnumber(L,wxFONTENCODING_MACCELTIC); lua_setfield(L,-2,"wxFONTENCODING_MACCELTIC");
	lua_pushnumber(L,wxFONTENCODING_MACGAELIC); lua_setfield(L,-2,"wxFONTENCODING_MACGAELIC");
	lua_pushnumber(L,wxFONTENCODING_MACKEYBOARD); lua_setfield(L,-2,"wxFONTENCODING_MACKEYBOARD");
	lua_pushnumber(L,wxFONTENCODING_ISO2022_JP); lua_setfield(L,-2,"wxFONTENCODING_ISO2022_JP");
	lua_pushnumber(L,wxFONTENCODING_MAX); lua_setfield(L,-2,"wxFONTENCODING_MAX");
	lua_pushnumber(L,wxFONTENCODING_MACMIN); lua_setfield(L,-2,"wxFONTENCODING_MACMIN");
	lua_pushnumber(L,wxFONTENCODING_MACMAX); lua_setfield(L,-2,"wxFONTENCODING_MACMAX");
	lua_pushnumber(L,wxFONTENCODING_UTF16); lua_setfield(L,-2,"wxFONTENCODING_UTF16");
	lua_pushnumber(L,wxFONTENCODING_UTF32); lua_setfield(L,-2,"wxFONTENCODING_UTF32");
	lua_pushnumber(L,wxFONTENCODING_UNICODE); lua_setfield(L,-2,"wxFONTENCODING_UNICODE");
	lua_pushnumber(L,wxFONTENCODING_GB2312); lua_setfield(L,-2,"wxFONTENCODING_GB2312");
	lua_pushnumber(L,wxFONTENCODING_BIG5); lua_setfield(L,-2,"wxFONTENCODING_BIG5");
	lua_pushnumber(L,wxFONTENCODING_SHIFT_JIS); lua_setfield(L,-2,"wxFONTENCODING_SHIFT_JIS");
	lua_pushnumber(L,wxFONTENCODING_EUC_KR); lua_setfield(L,-2,"wxFONTENCODING_EUC_KR");

	lua_setfield(L,-2,"wxFontEncoding");

	lua_pushnumber(L,wxFONTENCODING_SYSTEM); lua_setfield(L,-2,"wxFONTENCODING_SYSTEM");
	lua_pushnumber(L,wxFONTENCODING_DEFAULT); lua_setfield(L,-2,"wxFONTENCODING_DEFAULT");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_1); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_1");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_2); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_2");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_3); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_3");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_4); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_4");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_5); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_5");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_6); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_6");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_7); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_7");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_8); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_8");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_9); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_9");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_10); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_10");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_11); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_11");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_12); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_12");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_13); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_13");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_14); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_14");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_15); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_15");
	lua_pushnumber(L,wxFONTENCODING_ISO8859_MAX); lua_setfield(L,-2,"wxFONTENCODING_ISO8859_MAX");
	lua_pushnumber(L,wxFONTENCODING_KOI8); lua_setfield(L,-2,"wxFONTENCODING_KOI8");
	lua_pushnumber(L,wxFONTENCODING_KOI8_U); lua_setfield(L,-2,"wxFONTENCODING_KOI8_U");
	lua_pushnumber(L,wxFONTENCODING_ALTERNATIVE); lua_setfield(L,-2,"wxFONTENCODING_ALTERNATIVE");
	lua_pushnumber(L,wxFONTENCODING_BULGARIAN); lua_setfield(L,-2,"wxFONTENCODING_BULGARIAN");
	lua_pushnumber(L,wxFONTENCODING_CP437); lua_setfield(L,-2,"wxFONTENCODING_CP437");
	lua_pushnumber(L,wxFONTENCODING_CP850); lua_setfield(L,-2,"wxFONTENCODING_CP850");
	lua_pushnumber(L,wxFONTENCODING_CP852); lua_setfield(L,-2,"wxFONTENCODING_CP852");
	lua_pushnumber(L,wxFONTENCODING_CP855); lua_setfield(L,-2,"wxFONTENCODING_CP855");
	lua_pushnumber(L,wxFONTENCODING_CP866); lua_setfield(L,-2,"wxFONTENCODING_CP866");
	lua_pushnumber(L,wxFONTENCODING_CP874); lua_setfield(L,-2,"wxFONTENCODING_CP874");
	lua_pushnumber(L,wxFONTENCODING_CP932); lua_setfield(L,-2,"wxFONTENCODING_CP932");
	lua_pushnumber(L,wxFONTENCODING_CP936); lua_setfield(L,-2,"wxFONTENCODING_CP936");
	lua_pushnumber(L,wxFONTENCODING_CP949); lua_setfield(L,-2,"wxFONTENCODING_CP949");
	lua_pushnumber(L,wxFONTENCODING_CP950); lua_setfield(L,-2,"wxFONTENCODING_CP950");
	lua_pushnumber(L,wxFONTENCODING_CP1250); lua_setfield(L,-2,"wxFONTENCODING_CP1250");
	lua_pushnumber(L,wxFONTENCODING_CP1251); lua_setfield(L,-2,"wxFONTENCODING_CP1251");
	lua_pushnumber(L,wxFONTENCODING_CP1252); lua_setfield(L,-2,"wxFONTENCODING_CP1252");
	lua_pushnumber(L,wxFONTENCODING_CP1253); lua_setfield(L,-2,"wxFONTENCODING_CP1253");
	lua_pushnumber(L,wxFONTENCODING_CP1254); lua_setfield(L,-2,"wxFONTENCODING_CP1254");
	lua_pushnumber(L,wxFONTENCODING_CP1255); lua_setfield(L,-2,"wxFONTENCODING_CP1255");
	lua_pushnumber(L,wxFONTENCODING_CP1256); lua_setfield(L,-2,"wxFONTENCODING_CP1256");
	lua_pushnumber(L,wxFONTENCODING_CP1257); lua_setfield(L,-2,"wxFONTENCODING_CP1257");
	lua_pushnumber(L,wxFONTENCODING_CP12_MAX); lua_setfield(L,-2,"wxFONTENCODING_CP12_MAX");
	lua_pushnumber(L,wxFONTENCODING_UTF7); lua_setfield(L,-2,"wxFONTENCODING_UTF7");
	lua_pushnumber(L,wxFONTENCODING_UTF8); lua_setfield(L,-2,"wxFONTENCODING_UTF8");
	lua_pushnumber(L,wxFONTENCODING_EUC_JP); lua_setfield(L,-2,"wxFONTENCODING_EUC_JP");
	lua_pushnumber(L,wxFONTENCODING_UTF16BE); lua_setfield(L,-2,"wxFONTENCODING_UTF16BE");
	lua_pushnumber(L,wxFONTENCODING_UTF16LE); lua_setfield(L,-2,"wxFONTENCODING_UTF16LE");
	lua_pushnumber(L,wxFONTENCODING_UTF32BE); lua_setfield(L,-2,"wxFONTENCODING_UTF32BE");
	lua_pushnumber(L,wxFONTENCODING_UTF32LE); lua_setfield(L,-2,"wxFONTENCODING_UTF32LE");
	lua_pushnumber(L,wxFONTENCODING_MACROMAN); lua_setfield(L,-2,"wxFONTENCODING_MACROMAN");
	lua_pushnumber(L,wxFONTENCODING_MACJAPANESE); lua_setfield(L,-2,"wxFONTENCODING_MACJAPANESE");
	lua_pushnumber(L,wxFONTENCODING_MACCHINESETRAD); lua_setfield(L,-2,"wxFONTENCODING_MACCHINESETRAD");
	lua_pushnumber(L,wxFONTENCODING_MACKOREAN); lua_setfield(L,-2,"wxFONTENCODING_MACKOREAN");
	lua_pushnumber(L,wxFONTENCODING_MACARABIC); lua_setfield(L,-2,"wxFONTENCODING_MACARABIC");
	lua_pushnumber(L,wxFONTENCODING_MACHEBREW); lua_setfield(L,-2,"wxFONTENCODING_MACHEBREW");
	lua_pushnumber(L,wxFONTENCODING_MACGREEK); lua_setfield(L,-2,"wxFONTENCODING_MACGREEK");
	lua_pushnumber(L,wxFONTENCODING_MACCYRILLIC); lua_setfield(L,-2,"wxFONTENCODING_MACCYRILLIC");
	lua_pushnumber(L,wxFONTENCODING_MACDEVANAGARI); lua_setfield(L,-2,"wxFONTENCODING_MACDEVANAGARI");
	lua_pushnumber(L,wxFONTENCODING_MACGURMUKHI); lua_setfield(L,-2,"wxFONTENCODING_MACGURMUKHI");
	lua_pushnumber(L,wxFONTENCODING_MACGUJARATI); lua_setfield(L,-2,"wxFONTENCODING_MACGUJARATI");
	lua_pushnumber(L,wxFONTENCODING_MACORIYA); lua_setfield(L,-2,"wxFONTENCODING_MACORIYA");
	lua_pushnumber(L,wxFONTENCODING_MACBENGALI); lua_setfield(L,-2,"wxFONTENCODING_MACBENGALI");
	lua_pushnumber(L,wxFONTENCODING_MACTAMIL); lua_setfield(L,-2,"wxFONTENCODING_MACTAMIL");
	lua_pushnumber(L,wxFONTENCODING_MACTELUGU); lua_setfield(L,-2,"wxFONTENCODING_MACTELUGU");
	lua_pushnumber(L,wxFONTENCODING_MACKANNADA); lua_setfield(L,-2,"wxFONTENCODING_MACKANNADA");
	lua_pushnumber(L,wxFONTENCODING_MACMALAJALAM); lua_setfield(L,-2,"wxFONTENCODING_MACMALAJALAM");
	lua_pushnumber(L,wxFONTENCODING_MACSINHALESE); lua_setfield(L,-2,"wxFONTENCODING_MACSINHALESE");
	lua_pushnumber(L,wxFONTENCODING_MACBURMESE); lua_setfield(L,-2,"wxFONTENCODING_MACBURMESE");
	lua_pushnumber(L,wxFONTENCODING_MACKHMER); lua_setfield(L,-2,"wxFONTENCODING_MACKHMER");
	lua_pushnumber(L,wxFONTENCODING_MACTHAI); lua_setfield(L,-2,"wxFONTENCODING_MACTHAI");
	lua_pushnumber(L,wxFONTENCODING_MACLAOTIAN); lua_setfield(L,-2,"wxFONTENCODING_MACLAOTIAN");
	lua_pushnumber(L,wxFONTENCODING_MACGEORGIAN); lua_setfield(L,-2,"wxFONTENCODING_MACGEORGIAN");
	lua_pushnumber(L,wxFONTENCODING_MACARMENIAN); lua_setfield(L,-2,"wxFONTENCODING_MACARMENIAN");
	lua_pushnumber(L,wxFONTENCODING_MACCHINESESIMP); lua_setfield(L,-2,"wxFONTENCODING_MACCHINESESIMP");
	lua_pushnumber(L,wxFONTENCODING_MACTIBETAN); lua_setfield(L,-2,"wxFONTENCODING_MACTIBETAN");
	lua_pushnumber(L,wxFONTENCODING_MACMONGOLIAN); lua_setfield(L,-2,"wxFONTENCODING_MACMONGOLIAN");
	lua_pushnumber(L,wxFONTENCODING_MACETHIOPIC); lua_setfield(L,-2,"wxFONTENCODING_MACETHIOPIC");
	lua_pushnumber(L,wxFONTENCODING_MACCENTRALEUR); lua_setfield(L,-2,"wxFONTENCODING_MACCENTRALEUR");
	lua_pushnumber(L,wxFONTENCODING_MACVIATNAMESE); lua_setfield(L,-2,"wxFONTENCODING_MACVIATNAMESE");
	lua_pushnumber(L,wxFONTENCODING_MACARABICEXT); lua_setfield(L,-2,"wxFONTENCODING_MACARABICEXT");
	lua_pushnumber(L,wxFONTENCODING_MACSYMBOL); lua_setfield(L,-2,"wxFONTENCODING_MACSYMBOL");
	lua_pushnumber(L,wxFONTENCODING_MACDINGBATS); lua_setfield(L,-2,"wxFONTENCODING_MACDINGBATS");
	lua_pushnumber(L,wxFONTENCODING_MACTURKISH); lua_setfield(L,-2,"wxFONTENCODING_MACTURKISH");
	lua_pushnumber(L,wxFONTENCODING_MACCROATIAN); lua_setfield(L,-2,"wxFONTENCODING_MACCROATIAN");
	lua_pushnumber(L,wxFONTENCODING_MACICELANDIC); lua_setfield(L,-2,"wxFONTENCODING_MACICELANDIC");
	lua_pushnumber(L,wxFONTENCODING_MACROMANIAN); lua_setfield(L,-2,"wxFONTENCODING_MACROMANIAN");
	lua_pushnumber(L,wxFONTENCODING_MACCELTIC); lua_setfield(L,-2,"wxFONTENCODING_MACCELTIC");
	lua_pushnumber(L,wxFONTENCODING_MACGAELIC); lua_setfield(L,-2,"wxFONTENCODING_MACGAELIC");
	lua_pushnumber(L,wxFONTENCODING_MACKEYBOARD); lua_setfield(L,-2,"wxFONTENCODING_MACKEYBOARD");
	lua_pushnumber(L,wxFONTENCODING_ISO2022_JP); lua_setfield(L,-2,"wxFONTENCODING_ISO2022_JP");
	lua_pushnumber(L,wxFONTENCODING_MAX); lua_setfield(L,-2,"wxFONTENCODING_MAX");
	lua_pushnumber(L,wxFONTENCODING_MACMIN); lua_setfield(L,-2,"wxFONTENCODING_MACMIN");
	lua_pushnumber(L,wxFONTENCODING_MACMAX); lua_setfield(L,-2,"wxFONTENCODING_MACMAX");
	lua_pushnumber(L,wxFONTENCODING_UTF16); lua_setfield(L,-2,"wxFONTENCODING_UTF16");
	lua_pushnumber(L,wxFONTENCODING_UTF32); lua_setfield(L,-2,"wxFONTENCODING_UTF32");
	lua_pushnumber(L,wxFONTENCODING_UNICODE); lua_setfield(L,-2,"wxFONTENCODING_UNICODE");
	lua_pushnumber(L,wxFONTENCODING_GB2312); lua_setfield(L,-2,"wxFONTENCODING_GB2312");
	lua_pushnumber(L,wxFONTENCODING_BIG5); lua_setfield(L,-2,"wxFONTENCODING_BIG5");
	lua_pushnumber(L,wxFONTENCODING_SHIFT_JIS); lua_setfield(L,-2,"wxFONTENCODING_SHIFT_JIS");
	lua_pushnumber(L,wxFONTENCODING_EUC_KR); lua_setfield(L,-2,"wxFONTENCODING_EUC_KR");


	lua_newtable(L); // enum wxAuiManagerDock

	lua_pushnumber(L,wxAUI_DOCK_NONE); lua_setfield(L,-2,"wxAUI_DOCK_NONE");
	lua_pushnumber(L,wxAUI_DOCK_TOP); lua_setfield(L,-2,"wxAUI_DOCK_TOP");
	lua_pushnumber(L,wxAUI_DOCK_RIGHT); lua_setfield(L,-2,"wxAUI_DOCK_RIGHT");
	lua_pushnumber(L,wxAUI_DOCK_BOTTOM); lua_setfield(L,-2,"wxAUI_DOCK_BOTTOM");
	lua_pushnumber(L,wxAUI_DOCK_LEFT); lua_setfield(L,-2,"wxAUI_DOCK_LEFT");
	lua_pushnumber(L,wxAUI_DOCK_CENTER); lua_setfield(L,-2,"wxAUI_DOCK_CENTER");
	lua_pushnumber(L,wxAUI_DOCK_CENTRE); lua_setfield(L,-2,"wxAUI_DOCK_CENTRE");

	lua_setfield(L,-2,"wxAuiManagerDock");

	lua_pushnumber(L,wxAUI_DOCK_NONE); lua_setfield(L,-2,"wxAUI_DOCK_NONE");
	lua_pushnumber(L,wxAUI_DOCK_TOP); lua_setfield(L,-2,"wxAUI_DOCK_TOP");
	lua_pushnumber(L,wxAUI_DOCK_RIGHT); lua_setfield(L,-2,"wxAUI_DOCK_RIGHT");
	lua_pushnumber(L,wxAUI_DOCK_BOTTOM); lua_setfield(L,-2,"wxAUI_DOCK_BOTTOM");
	lua_pushnumber(L,wxAUI_DOCK_LEFT); lua_setfield(L,-2,"wxAUI_DOCK_LEFT");
	lua_pushnumber(L,wxAUI_DOCK_CENTER); lua_setfield(L,-2,"wxAUI_DOCK_CENTER");
	lua_pushnumber(L,wxAUI_DOCK_CENTRE); lua_setfield(L,-2,"wxAUI_DOCK_CENTRE");


	lua_newtable(L); // enum wxAuiManagerOption

	lua_pushnumber(L,wxAUI_MGR_ALLOW_FLOATING); lua_setfield(L,-2,"wxAUI_MGR_ALLOW_FLOATING");
	lua_pushnumber(L,wxAUI_MGR_ALLOW_ACTIVE_PANE); lua_setfield(L,-2,"wxAUI_MGR_ALLOW_ACTIVE_PANE");
	lua_pushnumber(L,wxAUI_MGR_TRANSPARENT_DRAG); lua_setfield(L,-2,"wxAUI_MGR_TRANSPARENT_DRAG");
	lua_pushnumber(L,wxAUI_MGR_TRANSPARENT_HINT); lua_setfield(L,-2,"wxAUI_MGR_TRANSPARENT_HINT");
	lua_pushnumber(L,wxAUI_MGR_VENETIAN_BLINDS_HINT); lua_setfield(L,-2,"wxAUI_MGR_VENETIAN_BLINDS_HINT");
	lua_pushnumber(L,wxAUI_MGR_RECTANGLE_HINT); lua_setfield(L,-2,"wxAUI_MGR_RECTANGLE_HINT");
	lua_pushnumber(L,wxAUI_MGR_HINT_FADE); lua_setfield(L,-2,"wxAUI_MGR_HINT_FADE");
	lua_pushnumber(L,wxAUI_MGR_NO_VENETIAN_BLINDS_FADE); lua_setfield(L,-2,"wxAUI_MGR_NO_VENETIAN_BLINDS_FADE");
	lua_pushnumber(L,wxAUI_MGR_LIVE_RESIZE); lua_setfield(L,-2,"wxAUI_MGR_LIVE_RESIZE");
	lua_pushnumber(L,wxAUI_MGR_DEFAULT); lua_setfield(L,-2,"wxAUI_MGR_DEFAULT");

	lua_setfield(L,-2,"wxAuiManagerOption");

	lua_pushnumber(L,wxAUI_MGR_ALLOW_FLOATING); lua_setfield(L,-2,"wxAUI_MGR_ALLOW_FLOATING");
	lua_pushnumber(L,wxAUI_MGR_ALLOW_ACTIVE_PANE); lua_setfield(L,-2,"wxAUI_MGR_ALLOW_ACTIVE_PANE");
	lua_pushnumber(L,wxAUI_MGR_TRANSPARENT_DRAG); lua_setfield(L,-2,"wxAUI_MGR_TRANSPARENT_DRAG");
	lua_pushnumber(L,wxAUI_MGR_TRANSPARENT_HINT); lua_setfield(L,-2,"wxAUI_MGR_TRANSPARENT_HINT");
	lua_pushnumber(L,wxAUI_MGR_VENETIAN_BLINDS_HINT); lua_setfield(L,-2,"wxAUI_MGR_VENETIAN_BLINDS_HINT");
	lua_pushnumber(L,wxAUI_MGR_RECTANGLE_HINT); lua_setfield(L,-2,"wxAUI_MGR_RECTANGLE_HINT");
	lua_pushnumber(L,wxAUI_MGR_HINT_FADE); lua_setfield(L,-2,"wxAUI_MGR_HINT_FADE");
	lua_pushnumber(L,wxAUI_MGR_NO_VENETIAN_BLINDS_FADE); lua_setfield(L,-2,"wxAUI_MGR_NO_VENETIAN_BLINDS_FADE");
	lua_pushnumber(L,wxAUI_MGR_LIVE_RESIZE); lua_setfield(L,-2,"wxAUI_MGR_LIVE_RESIZE");
	lua_pushnumber(L,wxAUI_MGR_DEFAULT); lua_setfield(L,-2,"wxAUI_MGR_DEFAULT");


	lua_newtable(L); // enum wxFSWFlags

	lua_pushnumber(L,wxFSW_EVENT_CREATE); lua_setfield(L,-2,"wxFSW_EVENT_CREATE");
	lua_pushnumber(L,wxFSW_EVENT_DELETE); lua_setfield(L,-2,"wxFSW_EVENT_DELETE");
	lua_pushnumber(L,wxFSW_EVENT_RENAME); lua_setfield(L,-2,"wxFSW_EVENT_RENAME");
	lua_pushnumber(L,wxFSW_EVENT_MODIFY); lua_setfield(L,-2,"wxFSW_EVENT_MODIFY");
	lua_pushnumber(L,wxFSW_EVENT_ACCESS); lua_setfield(L,-2,"wxFSW_EVENT_ACCESS");
	lua_pushnumber(L,wxFSW_EVENT_WARNING); lua_setfield(L,-2,"wxFSW_EVENT_WARNING");
	lua_pushnumber(L,wxFSW_EVENT_ERROR); lua_setfield(L,-2,"wxFSW_EVENT_ERROR");
	lua_pushnumber(L,wxFSW_EVENT_ALL); lua_setfield(L,-2,"wxFSW_EVENT_ALL");

	lua_setfield(L,-2,"wxFSWFlags");

	lua_pushnumber(L,wxFSW_EVENT_CREATE); lua_setfield(L,-2,"wxFSW_EVENT_CREATE");
	lua_pushnumber(L,wxFSW_EVENT_DELETE); lua_setfield(L,-2,"wxFSW_EVENT_DELETE");
	lua_pushnumber(L,wxFSW_EVENT_RENAME); lua_setfield(L,-2,"wxFSW_EVENT_RENAME");
	lua_pushnumber(L,wxFSW_EVENT_MODIFY); lua_setfield(L,-2,"wxFSW_EVENT_MODIFY");
	lua_pushnumber(L,wxFSW_EVENT_ACCESS); lua_setfield(L,-2,"wxFSW_EVENT_ACCESS");
	lua_pushnumber(L,wxFSW_EVENT_WARNING); lua_setfield(L,-2,"wxFSW_EVENT_WARNING");
	lua_pushnumber(L,wxFSW_EVENT_ERROR); lua_setfield(L,-2,"wxFSW_EVENT_ERROR");
	lua_pushnumber(L,wxFSW_EVENT_ALL); lua_setfield(L,-2,"wxFSW_EVENT_ALL");


	lua_newtable(L); // enum wxRibbonGalleryButtonState

	lua_pushnumber(L,wxRIBBON_GALLERY_BUTTON_NORMAL); lua_setfield(L,-2,"wxRIBBON_GALLERY_BUTTON_NORMAL");
	lua_pushnumber(L,wxRIBBON_GALLERY_BUTTON_HOVERED); lua_setfield(L,-2,"wxRIBBON_GALLERY_BUTTON_HOVERED");
	lua_pushnumber(L,wxRIBBON_GALLERY_BUTTON_ACTIVE); lua_setfield(L,-2,"wxRIBBON_GALLERY_BUTTON_ACTIVE");
	lua_pushnumber(L,wxRIBBON_GALLERY_BUTTON_DISABLED); lua_setfield(L,-2,"wxRIBBON_GALLERY_BUTTON_DISABLED");

	lua_setfield(L,-2,"wxRibbonGalleryButtonState");

	lua_pushnumber(L,wxRIBBON_GALLERY_BUTTON_NORMAL); lua_setfield(L,-2,"wxRIBBON_GALLERY_BUTTON_NORMAL");
	lua_pushnumber(L,wxRIBBON_GALLERY_BUTTON_HOVERED); lua_setfield(L,-2,"wxRIBBON_GALLERY_BUTTON_HOVERED");
	lua_pushnumber(L,wxRIBBON_GALLERY_BUTTON_ACTIVE); lua_setfield(L,-2,"wxRIBBON_GALLERY_BUTTON_ACTIVE");
	lua_pushnumber(L,wxRIBBON_GALLERY_BUTTON_DISABLED); lua_setfield(L,-2,"wxRIBBON_GALLERY_BUTTON_DISABLED");


	lua_newtable(L); // enum wxBitmapType

	lua_pushnumber(L,wxBITMAP_TYPE_INVALID); lua_setfield(L,-2,"wxBITMAP_TYPE_INVALID");
	lua_pushnumber(L,wxBITMAP_TYPE_BMP); lua_setfield(L,-2,"wxBITMAP_TYPE_BMP");
	lua_pushnumber(L,wxBITMAP_TYPE_BMP_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_BMP_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_ICO); lua_setfield(L,-2,"wxBITMAP_TYPE_ICO");
	lua_pushnumber(L,wxBITMAP_TYPE_ICO_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_ICO_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_CUR); lua_setfield(L,-2,"wxBITMAP_TYPE_CUR");
	lua_pushnumber(L,wxBITMAP_TYPE_CUR_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_CUR_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_XBM); lua_setfield(L,-2,"wxBITMAP_TYPE_XBM");
	lua_pushnumber(L,wxBITMAP_TYPE_XBM_DATA); lua_setfield(L,-2,"wxBITMAP_TYPE_XBM_DATA");
	lua_pushnumber(L,wxBITMAP_TYPE_XPM); lua_setfield(L,-2,"wxBITMAP_TYPE_XPM");
	lua_pushnumber(L,wxBITMAP_TYPE_XPM_DATA); lua_setfield(L,-2,"wxBITMAP_TYPE_XPM_DATA");
	lua_pushnumber(L,wxBITMAP_TYPE_TIFF); lua_setfield(L,-2,"wxBITMAP_TYPE_TIFF");
	lua_pushnumber(L,wxBITMAP_TYPE_TIF); lua_setfield(L,-2,"wxBITMAP_TYPE_TIF");
	lua_pushnumber(L,wxBITMAP_TYPE_TIFF_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_TIFF_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_TIF_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_TIF_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_GIF); lua_setfield(L,-2,"wxBITMAP_TYPE_GIF");
	lua_pushnumber(L,wxBITMAP_TYPE_GIF_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_GIF_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_PNG); lua_setfield(L,-2,"wxBITMAP_TYPE_PNG");
	lua_pushnumber(L,wxBITMAP_TYPE_PNG_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_PNG_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_JPEG); lua_setfield(L,-2,"wxBITMAP_TYPE_JPEG");
	lua_pushnumber(L,wxBITMAP_TYPE_JPEG_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_JPEG_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_PNM); lua_setfield(L,-2,"wxBITMAP_TYPE_PNM");
	lua_pushnumber(L,wxBITMAP_TYPE_PNM_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_PNM_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_PCX); lua_setfield(L,-2,"wxBITMAP_TYPE_PCX");
	lua_pushnumber(L,wxBITMAP_TYPE_PCX_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_PCX_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_PICT); lua_setfield(L,-2,"wxBITMAP_TYPE_PICT");
	lua_pushnumber(L,wxBITMAP_TYPE_PICT_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_PICT_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_ICON); lua_setfield(L,-2,"wxBITMAP_TYPE_ICON");
	lua_pushnumber(L,wxBITMAP_TYPE_ICON_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_ICON_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_ANI); lua_setfield(L,-2,"wxBITMAP_TYPE_ANI");
	lua_pushnumber(L,wxBITMAP_TYPE_IFF); lua_setfield(L,-2,"wxBITMAP_TYPE_IFF");
	lua_pushnumber(L,wxBITMAP_TYPE_TGA); lua_setfield(L,-2,"wxBITMAP_TYPE_TGA");
	lua_pushnumber(L,wxBITMAP_TYPE_MACCURSOR); lua_setfield(L,-2,"wxBITMAP_TYPE_MACCURSOR");
	lua_pushnumber(L,wxBITMAP_TYPE_MACCURSOR_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_MACCURSOR_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_ANY); lua_setfield(L,-2,"wxBITMAP_TYPE_ANY");

	lua_setfield(L,-2,"wxBitmapType");

	lua_pushnumber(L,wxBITMAP_TYPE_INVALID); lua_setfield(L,-2,"wxBITMAP_TYPE_INVALID");
	lua_pushnumber(L,wxBITMAP_TYPE_BMP); lua_setfield(L,-2,"wxBITMAP_TYPE_BMP");
	lua_pushnumber(L,wxBITMAP_TYPE_BMP_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_BMP_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_ICO); lua_setfield(L,-2,"wxBITMAP_TYPE_ICO");
	lua_pushnumber(L,wxBITMAP_TYPE_ICO_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_ICO_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_CUR); lua_setfield(L,-2,"wxBITMAP_TYPE_CUR");
	lua_pushnumber(L,wxBITMAP_TYPE_CUR_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_CUR_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_XBM); lua_setfield(L,-2,"wxBITMAP_TYPE_XBM");
	lua_pushnumber(L,wxBITMAP_TYPE_XBM_DATA); lua_setfield(L,-2,"wxBITMAP_TYPE_XBM_DATA");
	lua_pushnumber(L,wxBITMAP_TYPE_XPM); lua_setfield(L,-2,"wxBITMAP_TYPE_XPM");
	lua_pushnumber(L,wxBITMAP_TYPE_XPM_DATA); lua_setfield(L,-2,"wxBITMAP_TYPE_XPM_DATA");
	lua_pushnumber(L,wxBITMAP_TYPE_TIFF); lua_setfield(L,-2,"wxBITMAP_TYPE_TIFF");
	lua_pushnumber(L,wxBITMAP_TYPE_TIF); lua_setfield(L,-2,"wxBITMAP_TYPE_TIF");
	lua_pushnumber(L,wxBITMAP_TYPE_TIFF_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_TIFF_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_TIF_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_TIF_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_GIF); lua_setfield(L,-2,"wxBITMAP_TYPE_GIF");
	lua_pushnumber(L,wxBITMAP_TYPE_GIF_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_GIF_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_PNG); lua_setfield(L,-2,"wxBITMAP_TYPE_PNG");
	lua_pushnumber(L,wxBITMAP_TYPE_PNG_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_PNG_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_JPEG); lua_setfield(L,-2,"wxBITMAP_TYPE_JPEG");
	lua_pushnumber(L,wxBITMAP_TYPE_JPEG_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_JPEG_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_PNM); lua_setfield(L,-2,"wxBITMAP_TYPE_PNM");
	lua_pushnumber(L,wxBITMAP_TYPE_PNM_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_PNM_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_PCX); lua_setfield(L,-2,"wxBITMAP_TYPE_PCX");
	lua_pushnumber(L,wxBITMAP_TYPE_PCX_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_PCX_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_PICT); lua_setfield(L,-2,"wxBITMAP_TYPE_PICT");
	lua_pushnumber(L,wxBITMAP_TYPE_PICT_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_PICT_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_ICON); lua_setfield(L,-2,"wxBITMAP_TYPE_ICON");
	lua_pushnumber(L,wxBITMAP_TYPE_ICON_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_ICON_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_ANI); lua_setfield(L,-2,"wxBITMAP_TYPE_ANI");
	lua_pushnumber(L,wxBITMAP_TYPE_IFF); lua_setfield(L,-2,"wxBITMAP_TYPE_IFF");
	lua_pushnumber(L,wxBITMAP_TYPE_TGA); lua_setfield(L,-2,"wxBITMAP_TYPE_TGA");
	lua_pushnumber(L,wxBITMAP_TYPE_MACCURSOR); lua_setfield(L,-2,"wxBITMAP_TYPE_MACCURSOR");
	lua_pushnumber(L,wxBITMAP_TYPE_MACCURSOR_RESOURCE); lua_setfield(L,-2,"wxBITMAP_TYPE_MACCURSOR_RESOURCE");
	lua_pushnumber(L,wxBITMAP_TYPE_ANY); lua_setfield(L,-2,"wxBITMAP_TYPE_ANY");


	lua_newtable(L); // enum wxPolygonFillMode

	lua_pushnumber(L,wxODDEVEN_RULE); lua_setfield(L,-2,"wxODDEVEN_RULE");
	lua_pushnumber(L,wxWINDING_RULE); lua_setfield(L,-2,"wxWINDING_RULE");

	lua_setfield(L,-2,"wxPolygonFillMode");

	lua_pushnumber(L,wxODDEVEN_RULE); lua_setfield(L,-2,"wxODDEVEN_RULE");
	lua_pushnumber(L,wxWINDING_RULE); lua_setfield(L,-2,"wxWINDING_RULE");


	lua_newtable(L); // enum wxStockCursor

	lua_pushnumber(L,wxCURSOR_NONE); lua_setfield(L,-2,"wxCURSOR_NONE");
	lua_pushnumber(L,wxCURSOR_ARROW); lua_setfield(L,-2,"wxCURSOR_ARROW");
	lua_pushnumber(L,wxCURSOR_RIGHT_ARROW); lua_setfield(L,-2,"wxCURSOR_RIGHT_ARROW");
	lua_pushnumber(L,wxCURSOR_BULLSEYE); lua_setfield(L,-2,"wxCURSOR_BULLSEYE");
	lua_pushnumber(L,wxCURSOR_CHAR); lua_setfield(L,-2,"wxCURSOR_CHAR");
	lua_pushnumber(L,wxCURSOR_CROSS); lua_setfield(L,-2,"wxCURSOR_CROSS");
	lua_pushnumber(L,wxCURSOR_HAND); lua_setfield(L,-2,"wxCURSOR_HAND");
	lua_pushnumber(L,wxCURSOR_IBEAM); lua_setfield(L,-2,"wxCURSOR_IBEAM");
	lua_pushnumber(L,wxCURSOR_LEFT_BUTTON); lua_setfield(L,-2,"wxCURSOR_LEFT_BUTTON");
	lua_pushnumber(L,wxCURSOR_MAGNIFIER); lua_setfield(L,-2,"wxCURSOR_MAGNIFIER");
	lua_pushnumber(L,wxCURSOR_MIDDLE_BUTTON); lua_setfield(L,-2,"wxCURSOR_MIDDLE_BUTTON");
	lua_pushnumber(L,wxCURSOR_NO_ENTRY); lua_setfield(L,-2,"wxCURSOR_NO_ENTRY");
	lua_pushnumber(L,wxCURSOR_PAINT_BRUSH); lua_setfield(L,-2,"wxCURSOR_PAINT_BRUSH");
	lua_pushnumber(L,wxCURSOR_PENCIL); lua_setfield(L,-2,"wxCURSOR_PENCIL");
	lua_pushnumber(L,wxCURSOR_POINT_LEFT); lua_setfield(L,-2,"wxCURSOR_POINT_LEFT");
	lua_pushnumber(L,wxCURSOR_POINT_RIGHT); lua_setfield(L,-2,"wxCURSOR_POINT_RIGHT");
	lua_pushnumber(L,wxCURSOR_QUESTION_ARROW); lua_setfield(L,-2,"wxCURSOR_QUESTION_ARROW");
	lua_pushnumber(L,wxCURSOR_RIGHT_BUTTON); lua_setfield(L,-2,"wxCURSOR_RIGHT_BUTTON");
	lua_pushnumber(L,wxCURSOR_SIZENESW); lua_setfield(L,-2,"wxCURSOR_SIZENESW");
	lua_pushnumber(L,wxCURSOR_SIZENS); lua_setfield(L,-2,"wxCURSOR_SIZENS");
	lua_pushnumber(L,wxCURSOR_SIZENWSE); lua_setfield(L,-2,"wxCURSOR_SIZENWSE");
	lua_pushnumber(L,wxCURSOR_SIZEWE); lua_setfield(L,-2,"wxCURSOR_SIZEWE");
	lua_pushnumber(L,wxCURSOR_SIZING); lua_setfield(L,-2,"wxCURSOR_SIZING");
	lua_pushnumber(L,wxCURSOR_SPRAYCAN); lua_setfield(L,-2,"wxCURSOR_SPRAYCAN");
	lua_pushnumber(L,wxCURSOR_WAIT); lua_setfield(L,-2,"wxCURSOR_WAIT");
	lua_pushnumber(L,wxCURSOR_WATCH); lua_setfield(L,-2,"wxCURSOR_WATCH");
	lua_pushnumber(L,wxCURSOR_BLANK); lua_setfield(L,-2,"wxCURSOR_BLANK");
	lua_pushnumber(L,wxCURSOR_ARROWWAIT); lua_setfield(L,-2,"wxCURSOR_ARROWWAIT");
	lua_pushnumber(L,wxCURSOR_MAX); lua_setfield(L,-2,"wxCURSOR_MAX");

	lua_setfield(L,-2,"wxStockCursor");

	lua_pushnumber(L,wxCURSOR_NONE); lua_setfield(L,-2,"wxCURSOR_NONE");
	lua_pushnumber(L,wxCURSOR_ARROW); lua_setfield(L,-2,"wxCURSOR_ARROW");
	lua_pushnumber(L,wxCURSOR_RIGHT_ARROW); lua_setfield(L,-2,"wxCURSOR_RIGHT_ARROW");
	lua_pushnumber(L,wxCURSOR_BULLSEYE); lua_setfield(L,-2,"wxCURSOR_BULLSEYE");
	lua_pushnumber(L,wxCURSOR_CHAR); lua_setfield(L,-2,"wxCURSOR_CHAR");
	lua_pushnumber(L,wxCURSOR_CROSS); lua_setfield(L,-2,"wxCURSOR_CROSS");
	lua_pushnumber(L,wxCURSOR_HAND); lua_setfield(L,-2,"wxCURSOR_HAND");
	lua_pushnumber(L,wxCURSOR_IBEAM); lua_setfield(L,-2,"wxCURSOR_IBEAM");
	lua_pushnumber(L,wxCURSOR_LEFT_BUTTON); lua_setfield(L,-2,"wxCURSOR_LEFT_BUTTON");
	lua_pushnumber(L,wxCURSOR_MAGNIFIER); lua_setfield(L,-2,"wxCURSOR_MAGNIFIER");
	lua_pushnumber(L,wxCURSOR_MIDDLE_BUTTON); lua_setfield(L,-2,"wxCURSOR_MIDDLE_BUTTON");
	lua_pushnumber(L,wxCURSOR_NO_ENTRY); lua_setfield(L,-2,"wxCURSOR_NO_ENTRY");
	lua_pushnumber(L,wxCURSOR_PAINT_BRUSH); lua_setfield(L,-2,"wxCURSOR_PAINT_BRUSH");
	lua_pushnumber(L,wxCURSOR_PENCIL); lua_setfield(L,-2,"wxCURSOR_PENCIL");
	lua_pushnumber(L,wxCURSOR_POINT_LEFT); lua_setfield(L,-2,"wxCURSOR_POINT_LEFT");
	lua_pushnumber(L,wxCURSOR_POINT_RIGHT); lua_setfield(L,-2,"wxCURSOR_POINT_RIGHT");
	lua_pushnumber(L,wxCURSOR_QUESTION_ARROW); lua_setfield(L,-2,"wxCURSOR_QUESTION_ARROW");
	lua_pushnumber(L,wxCURSOR_RIGHT_BUTTON); lua_setfield(L,-2,"wxCURSOR_RIGHT_BUTTON");
	lua_pushnumber(L,wxCURSOR_SIZENESW); lua_setfield(L,-2,"wxCURSOR_SIZENESW");
	lua_pushnumber(L,wxCURSOR_SIZENS); lua_setfield(L,-2,"wxCURSOR_SIZENS");
	lua_pushnumber(L,wxCURSOR_SIZENWSE); lua_setfield(L,-2,"wxCURSOR_SIZENWSE");
	lua_pushnumber(L,wxCURSOR_SIZEWE); lua_setfield(L,-2,"wxCURSOR_SIZEWE");
	lua_pushnumber(L,wxCURSOR_SIZING); lua_setfield(L,-2,"wxCURSOR_SIZING");
	lua_pushnumber(L,wxCURSOR_SPRAYCAN); lua_setfield(L,-2,"wxCURSOR_SPRAYCAN");
	lua_pushnumber(L,wxCURSOR_WAIT); lua_setfield(L,-2,"wxCURSOR_WAIT");
	lua_pushnumber(L,wxCURSOR_WATCH); lua_setfield(L,-2,"wxCURSOR_WATCH");
	lua_pushnumber(L,wxCURSOR_BLANK); lua_setfield(L,-2,"wxCURSOR_BLANK");
	lua_pushnumber(L,wxCURSOR_ARROWWAIT); lua_setfield(L,-2,"wxCURSOR_ARROWWAIT");
	lua_pushnumber(L,wxCURSOR_MAX); lua_setfield(L,-2,"wxCURSOR_MAX");


	lua_newtable(L); // enum wxOutCode

	lua_pushnumber(L,wxInside); lua_setfield(L,-2,"wxInside");
	lua_pushnumber(L,wxOutLeft); lua_setfield(L,-2,"wxOutLeft");
	lua_pushnumber(L,wxOutRight); lua_setfield(L,-2,"wxOutRight");
	lua_pushnumber(L,wxOutTop); lua_setfield(L,-2,"wxOutTop");
	lua_pushnumber(L,wxOutBottom); lua_setfield(L,-2,"wxOutBottom");

	lua_setfield(L,-2,"wxOutCode");

	lua_pushnumber(L,wxInside); lua_setfield(L,-2,"wxInside");
	lua_pushnumber(L,wxOutLeft); lua_setfield(L,-2,"wxOutLeft");
	lua_pushnumber(L,wxOutRight); lua_setfield(L,-2,"wxOutRight");
	lua_pushnumber(L,wxOutTop); lua_setfield(L,-2,"wxOutTop");
	lua_pushnumber(L,wxOutBottom); lua_setfield(L,-2,"wxOutBottom");


	lua_newtable(L); // enum unnamed_8

	lua_pushnumber(L,WX_GL_RGBA); lua_setfield(L,-2,"WX_GL_RGBA");
	lua_pushnumber(L,WX_GL_BUFFER_SIZE); lua_setfield(L,-2,"WX_GL_BUFFER_SIZE");
	lua_pushnumber(L,WX_GL_LEVEL); lua_setfield(L,-2,"WX_GL_LEVEL");
	lua_pushnumber(L,WX_GL_DOUBLEBUFFER); lua_setfield(L,-2,"WX_GL_DOUBLEBUFFER");
	lua_pushnumber(L,WX_GL_STEREO); lua_setfield(L,-2,"WX_GL_STEREO");
	lua_pushnumber(L,WX_GL_AUX_BUFFERS); lua_setfield(L,-2,"WX_GL_AUX_BUFFERS");
	lua_pushnumber(L,WX_GL_MIN_RED); lua_setfield(L,-2,"WX_GL_MIN_RED");
	lua_pushnumber(L,WX_GL_MIN_GREEN); lua_setfield(L,-2,"WX_GL_MIN_GREEN");
	lua_pushnumber(L,WX_GL_MIN_BLUE); lua_setfield(L,-2,"WX_GL_MIN_BLUE");
	lua_pushnumber(L,WX_GL_MIN_ALPHA); lua_setfield(L,-2,"WX_GL_MIN_ALPHA");
	lua_pushnumber(L,WX_GL_DEPTH_SIZE); lua_setfield(L,-2,"WX_GL_DEPTH_SIZE");
	lua_pushnumber(L,WX_GL_STENCIL_SIZE); lua_setfield(L,-2,"WX_GL_STENCIL_SIZE");
	lua_pushnumber(L,WX_GL_MIN_ACCUM_RED); lua_setfield(L,-2,"WX_GL_MIN_ACCUM_RED");
	lua_pushnumber(L,WX_GL_MIN_ACCUM_GREEN); lua_setfield(L,-2,"WX_GL_MIN_ACCUM_GREEN");
	lua_pushnumber(L,WX_GL_MIN_ACCUM_BLUE); lua_setfield(L,-2,"WX_GL_MIN_ACCUM_BLUE");
	lua_pushnumber(L,WX_GL_MIN_ACCUM_ALPHA); lua_setfield(L,-2,"WX_GL_MIN_ACCUM_ALPHA");
	lua_pushnumber(L,WX_GL_SAMPLE_BUFFERS); lua_setfield(L,-2,"WX_GL_SAMPLE_BUFFERS");
	lua_pushnumber(L,WX_GL_SAMPLES); lua_setfield(L,-2,"WX_GL_SAMPLES");

	lua_setfield(L,-2,"unnamed_8");

	lua_pushnumber(L,WX_GL_RGBA); lua_setfield(L,-2,"WX_GL_RGBA");
	lua_pushnumber(L,WX_GL_BUFFER_SIZE); lua_setfield(L,-2,"WX_GL_BUFFER_SIZE");
	lua_pushnumber(L,WX_GL_LEVEL); lua_setfield(L,-2,"WX_GL_LEVEL");
	lua_pushnumber(L,WX_GL_DOUBLEBUFFER); lua_setfield(L,-2,"WX_GL_DOUBLEBUFFER");
	lua_pushnumber(L,WX_GL_STEREO); lua_setfield(L,-2,"WX_GL_STEREO");
	lua_pushnumber(L,WX_GL_AUX_BUFFERS); lua_setfield(L,-2,"WX_GL_AUX_BUFFERS");
	lua_pushnumber(L,WX_GL_MIN_RED); lua_setfield(L,-2,"WX_GL_MIN_RED");
	lua_pushnumber(L,WX_GL_MIN_GREEN); lua_setfield(L,-2,"WX_GL_MIN_GREEN");
	lua_pushnumber(L,WX_GL_MIN_BLUE); lua_setfield(L,-2,"WX_GL_MIN_BLUE");
	lua_pushnumber(L,WX_GL_MIN_ALPHA); lua_setfield(L,-2,"WX_GL_MIN_ALPHA");
	lua_pushnumber(L,WX_GL_DEPTH_SIZE); lua_setfield(L,-2,"WX_GL_DEPTH_SIZE");
	lua_pushnumber(L,WX_GL_STENCIL_SIZE); lua_setfield(L,-2,"WX_GL_STENCIL_SIZE");
	lua_pushnumber(L,WX_GL_MIN_ACCUM_RED); lua_setfield(L,-2,"WX_GL_MIN_ACCUM_RED");
	lua_pushnumber(L,WX_GL_MIN_ACCUM_GREEN); lua_setfield(L,-2,"WX_GL_MIN_ACCUM_GREEN");
	lua_pushnumber(L,WX_GL_MIN_ACCUM_BLUE); lua_setfield(L,-2,"WX_GL_MIN_ACCUM_BLUE");
	lua_pushnumber(L,WX_GL_MIN_ACCUM_ALPHA); lua_setfield(L,-2,"WX_GL_MIN_ACCUM_ALPHA");
	lua_pushnumber(L,WX_GL_SAMPLE_BUFFERS); lua_setfield(L,-2,"WX_GL_SAMPLE_BUFFERS");
	lua_pushnumber(L,WX_GL_SAMPLES); lua_setfield(L,-2,"WX_GL_SAMPLES");


	lua_newtable(L); // enum wxAntialiasMode

	lua_pushnumber(L,wxANTIALIAS_NONE); lua_setfield(L,-2,"wxANTIALIAS_NONE");
	lua_pushnumber(L,wxANTIALIAS_DEFAULT); lua_setfield(L,-2,"wxANTIALIAS_DEFAULT");

	lua_setfield(L,-2,"wxAntialiasMode");

	lua_pushnumber(L,wxANTIALIAS_NONE); lua_setfield(L,-2,"wxANTIALIAS_NONE");
	lua_pushnumber(L,wxANTIALIAS_DEFAULT); lua_setfield(L,-2,"wxANTIALIAS_DEFAULT");


	lua_newtable(L); // enum wxInterpolationQuality

	lua_pushnumber(L,wxINTERPOLATION_DEFAULT); lua_setfield(L,-2,"wxINTERPOLATION_DEFAULT");
	lua_pushnumber(L,wxINTERPOLATION_NONE); lua_setfield(L,-2,"wxINTERPOLATION_NONE");
	lua_pushnumber(L,wxINTERPOLATION_FAST); lua_setfield(L,-2,"wxINTERPOLATION_FAST");
	lua_pushnumber(L,wxINTERPOLATION_GOOD); lua_setfield(L,-2,"wxINTERPOLATION_GOOD");
	lua_pushnumber(L,wxINTERPOLATION_BEST); lua_setfield(L,-2,"wxINTERPOLATION_BEST");

	lua_setfield(L,-2,"wxInterpolationQuality");

	lua_pushnumber(L,wxINTERPOLATION_DEFAULT); lua_setfield(L,-2,"wxINTERPOLATION_DEFAULT");
	lua_pushnumber(L,wxINTERPOLATION_NONE); lua_setfield(L,-2,"wxINTERPOLATION_NONE");
	lua_pushnumber(L,wxINTERPOLATION_FAST); lua_setfield(L,-2,"wxINTERPOLATION_FAST");
	lua_pushnumber(L,wxINTERPOLATION_GOOD); lua_setfield(L,-2,"wxINTERPOLATION_GOOD");
	lua_pushnumber(L,wxINTERPOLATION_BEST); lua_setfield(L,-2,"wxINTERPOLATION_BEST");


	lua_newtable(L); // enum wxCompositionMode

	lua_pushnumber(L,wxCOMPOSITION_INVALID); lua_setfield(L,-2,"wxCOMPOSITION_INVALID");
	lua_pushnumber(L,wxCOMPOSITION_CLEAR); lua_setfield(L,-2,"wxCOMPOSITION_CLEAR");
	lua_pushnumber(L,wxCOMPOSITION_SOURCE); lua_setfield(L,-2,"wxCOMPOSITION_SOURCE");
	lua_pushnumber(L,wxCOMPOSITION_OVER); lua_setfield(L,-2,"wxCOMPOSITION_OVER");
	lua_pushnumber(L,wxCOMPOSITION_IN); lua_setfield(L,-2,"wxCOMPOSITION_IN");
	lua_pushnumber(L,wxCOMPOSITION_OUT); lua_setfield(L,-2,"wxCOMPOSITION_OUT");
	lua_pushnumber(L,wxCOMPOSITION_ATOP); lua_setfield(L,-2,"wxCOMPOSITION_ATOP");
	lua_pushnumber(L,wxCOMPOSITION_DEST); lua_setfield(L,-2,"wxCOMPOSITION_DEST");
	lua_pushnumber(L,wxCOMPOSITION_DEST_OVER); lua_setfield(L,-2,"wxCOMPOSITION_DEST_OVER");
	lua_pushnumber(L,wxCOMPOSITION_DEST_IN); lua_setfield(L,-2,"wxCOMPOSITION_DEST_IN");
	lua_pushnumber(L,wxCOMPOSITION_DEST_OUT); lua_setfield(L,-2,"wxCOMPOSITION_DEST_OUT");
	lua_pushnumber(L,wxCOMPOSITION_DEST_ATOP); lua_setfield(L,-2,"wxCOMPOSITION_DEST_ATOP");
	lua_pushnumber(L,wxCOMPOSITION_XOR); lua_setfield(L,-2,"wxCOMPOSITION_XOR");
	lua_pushnumber(L,wxCOMPOSITION_ADD); lua_setfield(L,-2,"wxCOMPOSITION_ADD");

	lua_setfield(L,-2,"wxCompositionMode");

	lua_pushnumber(L,wxCOMPOSITION_INVALID); lua_setfield(L,-2,"wxCOMPOSITION_INVALID");
	lua_pushnumber(L,wxCOMPOSITION_CLEAR); lua_setfield(L,-2,"wxCOMPOSITION_CLEAR");
	lua_pushnumber(L,wxCOMPOSITION_SOURCE); lua_setfield(L,-2,"wxCOMPOSITION_SOURCE");
	lua_pushnumber(L,wxCOMPOSITION_OVER); lua_setfield(L,-2,"wxCOMPOSITION_OVER");
	lua_pushnumber(L,wxCOMPOSITION_IN); lua_setfield(L,-2,"wxCOMPOSITION_IN");
	lua_pushnumber(L,wxCOMPOSITION_OUT); lua_setfield(L,-2,"wxCOMPOSITION_OUT");
	lua_pushnumber(L,wxCOMPOSITION_ATOP); lua_setfield(L,-2,"wxCOMPOSITION_ATOP");
	lua_pushnumber(L,wxCOMPOSITION_DEST); lua_setfield(L,-2,"wxCOMPOSITION_DEST");
	lua_pushnumber(L,wxCOMPOSITION_DEST_OVER); lua_setfield(L,-2,"wxCOMPOSITION_DEST_OVER");
	lua_pushnumber(L,wxCOMPOSITION_DEST_IN); lua_setfield(L,-2,"wxCOMPOSITION_DEST_IN");
	lua_pushnumber(L,wxCOMPOSITION_DEST_OUT); lua_setfield(L,-2,"wxCOMPOSITION_DEST_OUT");
	lua_pushnumber(L,wxCOMPOSITION_DEST_ATOP); lua_setfield(L,-2,"wxCOMPOSITION_DEST_ATOP");
	lua_pushnumber(L,wxCOMPOSITION_XOR); lua_setfield(L,-2,"wxCOMPOSITION_XOR");
	lua_pushnumber(L,wxCOMPOSITION_ADD); lua_setfield(L,-2,"wxCOMPOSITION_ADD");


	lua_newtable(L); // enum wxGridCellFloatFormat

	lua_pushnumber(L,wxGRID_FLOAT_FORMAT_FIXED); lua_setfield(L,-2,"wxGRID_FLOAT_FORMAT_FIXED");
	lua_pushnumber(L,wxGRID_FLOAT_FORMAT_SCIENTIFIC); lua_setfield(L,-2,"wxGRID_FLOAT_FORMAT_SCIENTIFIC");
	lua_pushnumber(L,wxGRID_FLOAT_FORMAT_COMPACT); lua_setfield(L,-2,"wxGRID_FLOAT_FORMAT_COMPACT");
	lua_pushnumber(L,wxGRID_FLOAT_FORMAT_UPPER); lua_setfield(L,-2,"wxGRID_FLOAT_FORMAT_UPPER");
	lua_pushnumber(L,wxGRID_FLOAT_FORMAT_DEFAULT); lua_setfield(L,-2,"wxGRID_FLOAT_FORMAT_DEFAULT");

	lua_setfield(L,-2,"wxGridCellFloatFormat");

	lua_pushnumber(L,wxGRID_FLOAT_FORMAT_FIXED); lua_setfield(L,-2,"wxGRID_FLOAT_FORMAT_FIXED");
	lua_pushnumber(L,wxGRID_FLOAT_FORMAT_SCIENTIFIC); lua_setfield(L,-2,"wxGRID_FLOAT_FORMAT_SCIENTIFIC");
	lua_pushnumber(L,wxGRID_FLOAT_FORMAT_COMPACT); lua_setfield(L,-2,"wxGRID_FLOAT_FORMAT_COMPACT");
	lua_pushnumber(L,wxGRID_FLOAT_FORMAT_UPPER); lua_setfield(L,-2,"wxGRID_FLOAT_FORMAT_UPPER");
	lua_pushnumber(L,wxGRID_FLOAT_FORMAT_DEFAULT); lua_setfield(L,-2,"wxGRID_FLOAT_FORMAT_DEFAULT");


	lua_newtable(L); // enum unnamed_9

	lua_pushnumber(L,wxCOL_WIDTH_DEFAULT); lua_setfield(L,-2,"wxCOL_WIDTH_DEFAULT");
	lua_pushnumber(L,wxCOL_WIDTH_AUTOSIZE); lua_setfield(L,-2,"wxCOL_WIDTH_AUTOSIZE");

	lua_setfield(L,-2,"unnamed_9");

	lua_pushnumber(L,wxCOL_WIDTH_DEFAULT); lua_setfield(L,-2,"wxCOL_WIDTH_DEFAULT");
	lua_pushnumber(L,wxCOL_WIDTH_AUTOSIZE); lua_setfield(L,-2,"wxCOL_WIDTH_AUTOSIZE");


	lua_newtable(L); // enum unnamed_10

	lua_pushnumber(L,wxCOL_RESIZABLE); lua_setfield(L,-2,"wxCOL_RESIZABLE");
	lua_pushnumber(L,wxCOL_SORTABLE); lua_setfield(L,-2,"wxCOL_SORTABLE");
	lua_pushnumber(L,wxCOL_REORDERABLE); lua_setfield(L,-2,"wxCOL_REORDERABLE");
	lua_pushnumber(L,wxCOL_HIDDEN); lua_setfield(L,-2,"wxCOL_HIDDEN");
	lua_pushnumber(L,wxCOL_DEFAULT_FLAGS); lua_setfield(L,-2,"wxCOL_DEFAULT_FLAGS");

	lua_setfield(L,-2,"unnamed_10");

	lua_pushnumber(L,wxCOL_RESIZABLE); lua_setfield(L,-2,"wxCOL_RESIZABLE");
	lua_pushnumber(L,wxCOL_SORTABLE); lua_setfield(L,-2,"wxCOL_SORTABLE");
	lua_pushnumber(L,wxCOL_REORDERABLE); lua_setfield(L,-2,"wxCOL_REORDERABLE");
	lua_pushnumber(L,wxCOL_HIDDEN); lua_setfield(L,-2,"wxCOL_HIDDEN");
	lua_pushnumber(L,wxCOL_DEFAULT_FLAGS); lua_setfield(L,-2,"wxCOL_DEFAULT_FLAGS");


	lua_newtable(L); // enum wxHelpSearchMode

	lua_pushnumber(L,wxHELP_SEARCH_INDEX); lua_setfield(L,-2,"wxHELP_SEARCH_INDEX");
	lua_pushnumber(L,wxHELP_SEARCH_ALL); lua_setfield(L,-2,"wxHELP_SEARCH_ALL");

	lua_setfield(L,-2,"wxHelpSearchMode");

	lua_pushnumber(L,wxHELP_SEARCH_INDEX); lua_setfield(L,-2,"wxHELP_SEARCH_INDEX");
	lua_pushnumber(L,wxHELP_SEARCH_ALL); lua_setfield(L,-2,"wxHELP_SEARCH_ALL");


	lua_newtable(L); // enum wxImageResolution

	lua_pushnumber(L,wxIMAGE_RESOLUTION_NONE); lua_setfield(L,-2,"wxIMAGE_RESOLUTION_NONE");
	lua_pushnumber(L,wxIMAGE_RESOLUTION_INCHES); lua_setfield(L,-2,"wxIMAGE_RESOLUTION_INCHES");
	lua_pushnumber(L,wxIMAGE_RESOLUTION_CM); lua_setfield(L,-2,"wxIMAGE_RESOLUTION_CM");

	lua_setfield(L,-2,"wxImageResolution");

	lua_pushnumber(L,wxIMAGE_RESOLUTION_NONE); lua_setfield(L,-2,"wxIMAGE_RESOLUTION_NONE");
	lua_pushnumber(L,wxIMAGE_RESOLUTION_INCHES); lua_setfield(L,-2,"wxIMAGE_RESOLUTION_INCHES");
	lua_pushnumber(L,wxIMAGE_RESOLUTION_CM); lua_setfield(L,-2,"wxIMAGE_RESOLUTION_CM");


	lua_newtable(L); // enum wxImageResizeQuality

	lua_pushnumber(L,wxIMAGE_QUALITY_NEAREST); lua_setfield(L,-2,"wxIMAGE_QUALITY_NEAREST");
	lua_pushnumber(L,wxIMAGE_QUALITY_BILINEAR); lua_setfield(L,-2,"wxIMAGE_QUALITY_BILINEAR");
	lua_pushnumber(L,wxIMAGE_QUALITY_BICUBIC); lua_setfield(L,-2,"wxIMAGE_QUALITY_BICUBIC");
	lua_pushnumber(L,wxIMAGE_QUALITY_BOX_AVERAGE); lua_setfield(L,-2,"wxIMAGE_QUALITY_BOX_AVERAGE");
	lua_pushnumber(L,wxIMAGE_QUALITY_NORMAL); lua_setfield(L,-2,"wxIMAGE_QUALITY_NORMAL");
	lua_pushnumber(L,wxIMAGE_QUALITY_HIGH); lua_setfield(L,-2,"wxIMAGE_QUALITY_HIGH");

	lua_setfield(L,-2,"wxImageResizeQuality");

	lua_pushnumber(L,wxIMAGE_QUALITY_NEAREST); lua_setfield(L,-2,"wxIMAGE_QUALITY_NEAREST");
	lua_pushnumber(L,wxIMAGE_QUALITY_BILINEAR); lua_setfield(L,-2,"wxIMAGE_QUALITY_BILINEAR");
	lua_pushnumber(L,wxIMAGE_QUALITY_BICUBIC); lua_setfield(L,-2,"wxIMAGE_QUALITY_BICUBIC");
	lua_pushnumber(L,wxIMAGE_QUALITY_BOX_AVERAGE); lua_setfield(L,-2,"wxIMAGE_QUALITY_BOX_AVERAGE");
	lua_pushnumber(L,wxIMAGE_QUALITY_NORMAL); lua_setfield(L,-2,"wxIMAGE_QUALITY_NORMAL");
	lua_pushnumber(L,wxIMAGE_QUALITY_HIGH); lua_setfield(L,-2,"wxIMAGE_QUALITY_HIGH");


	lua_newtable(L); // enum wxImagePNGType

	lua_pushnumber(L,wxPNG_TYPE_COLOUR); lua_setfield(L,-2,"wxPNG_TYPE_COLOUR");
	lua_pushnumber(L,wxPNG_TYPE_GREY); lua_setfield(L,-2,"wxPNG_TYPE_GREY");
	lua_pushnumber(L,wxPNG_TYPE_GREY_RED); lua_setfield(L,-2,"wxPNG_TYPE_GREY_RED");
	lua_pushnumber(L,wxPNG_TYPE_PALETTE); lua_setfield(L,-2,"wxPNG_TYPE_PALETTE");

	lua_setfield(L,-2,"wxImagePNGType");

	lua_pushnumber(L,wxPNG_TYPE_COLOUR); lua_setfield(L,-2,"wxPNG_TYPE_COLOUR");
	lua_pushnumber(L,wxPNG_TYPE_GREY); lua_setfield(L,-2,"wxPNG_TYPE_GREY");
	lua_pushnumber(L,wxPNG_TYPE_GREY_RED); lua_setfield(L,-2,"wxPNG_TYPE_GREY_RED");
	lua_pushnumber(L,wxPNG_TYPE_PALETTE); lua_setfield(L,-2,"wxPNG_TYPE_PALETTE");


	lua_newtable(L); // enum unnamed_11

	lua_pushnumber(L,wxBMP_24BPP); lua_setfield(L,-2,"wxBMP_24BPP");
	lua_pushnumber(L,wxBMP_8BPP); lua_setfield(L,-2,"wxBMP_8BPP");
	lua_pushnumber(L,wxBMP_8BPP_GREY); lua_setfield(L,-2,"wxBMP_8BPP_GREY");
	lua_pushnumber(L,wxBMP_8BPP_GRAY); lua_setfield(L,-2,"wxBMP_8BPP_GRAY");
	lua_pushnumber(L,wxBMP_8BPP_RED); lua_setfield(L,-2,"wxBMP_8BPP_RED");
	lua_pushnumber(L,wxBMP_8BPP_PALETTE); lua_setfield(L,-2,"wxBMP_8BPP_PALETTE");
	lua_pushnumber(L,wxBMP_4BPP); lua_setfield(L,-2,"wxBMP_4BPP");
	lua_pushnumber(L,wxBMP_1BPP); lua_setfield(L,-2,"wxBMP_1BPP");
	lua_pushnumber(L,wxBMP_1BPP_BW); lua_setfield(L,-2,"wxBMP_1BPP_BW");

	lua_setfield(L,-2,"unnamed_11");

	lua_pushnumber(L,wxBMP_24BPP); lua_setfield(L,-2,"wxBMP_24BPP");
	lua_pushnumber(L,wxBMP_8BPP); lua_setfield(L,-2,"wxBMP_8BPP");
	lua_pushnumber(L,wxBMP_8BPP_GREY); lua_setfield(L,-2,"wxBMP_8BPP_GREY");
	lua_pushnumber(L,wxBMP_8BPP_GRAY); lua_setfield(L,-2,"wxBMP_8BPP_GRAY");
	lua_pushnumber(L,wxBMP_8BPP_RED); lua_setfield(L,-2,"wxBMP_8BPP_RED");
	lua_pushnumber(L,wxBMP_8BPP_PALETTE); lua_setfield(L,-2,"wxBMP_8BPP_PALETTE");
	lua_pushnumber(L,wxBMP_4BPP); lua_setfield(L,-2,"wxBMP_4BPP");
	lua_pushnumber(L,wxBMP_1BPP); lua_setfield(L,-2,"wxBMP_1BPP");
	lua_pushnumber(L,wxBMP_1BPP_BW); lua_setfield(L,-2,"wxBMP_1BPP_BW");


	lua_newtable(L); // enum unnamed_12

	lua_pushnumber(L,wxIMAGE_LIST_NORMAL); lua_setfield(L,-2,"wxIMAGE_LIST_NORMAL");
	lua_pushnumber(L,wxIMAGE_LIST_SMALL); lua_setfield(L,-2,"wxIMAGE_LIST_SMALL");
	lua_pushnumber(L,wxIMAGE_LIST_STATE); lua_setfield(L,-2,"wxIMAGE_LIST_STATE");

	lua_setfield(L,-2,"unnamed_12");

	lua_pushnumber(L,wxIMAGE_LIST_NORMAL); lua_setfield(L,-2,"wxIMAGE_LIST_NORMAL");
	lua_pushnumber(L,wxIMAGE_LIST_SMALL); lua_setfield(L,-2,"wxIMAGE_LIST_SMALL");
	lua_pushnumber(L,wxIMAGE_LIST_STATE); lua_setfield(L,-2,"wxIMAGE_LIST_STATE");


	lua_newtable(L); // enum wxLayoutDirection

	lua_pushnumber(L,wxLayout_Default); lua_setfield(L,-2,"wxLayout_Default");
	lua_pushnumber(L,wxLayout_LeftToRight); lua_setfield(L,-2,"wxLayout_LeftToRight");
	lua_pushnumber(L,wxLayout_RightToLeft); lua_setfield(L,-2,"wxLayout_RightToLeft");

	lua_setfield(L,-2,"wxLayoutDirection");

	lua_pushnumber(L,wxLayout_Default); lua_setfield(L,-2,"wxLayout_Default");
	lua_pushnumber(L,wxLayout_LeftToRight); lua_setfield(L,-2,"wxLayout_LeftToRight");
	lua_pushnumber(L,wxLayout_RightToLeft); lua_setfield(L,-2,"wxLayout_RightToLeft");


	lua_newtable(L); // enum wxLocaleCategory

	lua_pushnumber(L,wxLOCALE_CAT_NUMBER); lua_setfield(L,-2,"wxLOCALE_CAT_NUMBER");
	lua_pushnumber(L,wxLOCALE_CAT_DATE); lua_setfield(L,-2,"wxLOCALE_CAT_DATE");
	lua_pushnumber(L,wxLOCALE_CAT_MONEY); lua_setfield(L,-2,"wxLOCALE_CAT_MONEY");
	lua_pushnumber(L,wxLOCALE_CAT_DEFAULT); lua_setfield(L,-2,"wxLOCALE_CAT_DEFAULT");

	lua_setfield(L,-2,"wxLocaleCategory");

	lua_pushnumber(L,wxLOCALE_CAT_NUMBER); lua_setfield(L,-2,"wxLOCALE_CAT_NUMBER");
	lua_pushnumber(L,wxLOCALE_CAT_DATE); lua_setfield(L,-2,"wxLOCALE_CAT_DATE");
	lua_pushnumber(L,wxLOCALE_CAT_MONEY); lua_setfield(L,-2,"wxLOCALE_CAT_MONEY");
	lua_pushnumber(L,wxLOCALE_CAT_DEFAULT); lua_setfield(L,-2,"wxLOCALE_CAT_DEFAULT");


	lua_newtable(L); // enum wxLocaleInfo

	lua_pushnumber(L,wxLOCALE_THOUSANDS_SEP); lua_setfield(L,-2,"wxLOCALE_THOUSANDS_SEP");
	lua_pushnumber(L,wxLOCALE_DECIMAL_POINT); lua_setfield(L,-2,"wxLOCALE_DECIMAL_POINT");
	lua_pushnumber(L,wxLOCALE_SHORT_DATE_FMT); lua_setfield(L,-2,"wxLOCALE_SHORT_DATE_FMT");
	lua_pushnumber(L,wxLOCALE_LONG_DATE_FMT); lua_setfield(L,-2,"wxLOCALE_LONG_DATE_FMT");
	lua_pushnumber(L,wxLOCALE_DATE_TIME_FMT); lua_setfield(L,-2,"wxLOCALE_DATE_TIME_FMT");
	lua_pushnumber(L,wxLOCALE_TIME_FMT); lua_setfield(L,-2,"wxLOCALE_TIME_FMT");

	lua_setfield(L,-2,"wxLocaleInfo");

	lua_pushnumber(L,wxLOCALE_THOUSANDS_SEP); lua_setfield(L,-2,"wxLOCALE_THOUSANDS_SEP");
	lua_pushnumber(L,wxLOCALE_DECIMAL_POINT); lua_setfield(L,-2,"wxLOCALE_DECIMAL_POINT");
	lua_pushnumber(L,wxLOCALE_SHORT_DATE_FMT); lua_setfield(L,-2,"wxLOCALE_SHORT_DATE_FMT");
	lua_pushnumber(L,wxLOCALE_LONG_DATE_FMT); lua_setfield(L,-2,"wxLOCALE_LONG_DATE_FMT");
	lua_pushnumber(L,wxLOCALE_DATE_TIME_FMT); lua_setfield(L,-2,"wxLOCALE_DATE_TIME_FMT");
	lua_pushnumber(L,wxLOCALE_TIME_FMT); lua_setfield(L,-2,"wxLOCALE_TIME_FMT");


	lua_newtable(L); // enum wxIPCFormat

	lua_pushnumber(L,wxIPC_INVALID); lua_setfield(L,-2,"wxIPC_INVALID");
	lua_pushnumber(L,wxIPC_TEXT); lua_setfield(L,-2,"wxIPC_TEXT");
	lua_pushnumber(L,wxIPC_BITMAP); lua_setfield(L,-2,"wxIPC_BITMAP");
	lua_pushnumber(L,wxIPC_METAFILE); lua_setfield(L,-2,"wxIPC_METAFILE");
	lua_pushnumber(L,wxIPC_SYLK); lua_setfield(L,-2,"wxIPC_SYLK");
	lua_pushnumber(L,wxIPC_DIF); lua_setfield(L,-2,"wxIPC_DIF");
	lua_pushnumber(L,wxIPC_TIFF); lua_setfield(L,-2,"wxIPC_TIFF");
	lua_pushnumber(L,wxIPC_OEMTEXT); lua_setfield(L,-2,"wxIPC_OEMTEXT");
	lua_pushnumber(L,wxIPC_DIB); lua_setfield(L,-2,"wxIPC_DIB");
	lua_pushnumber(L,wxIPC_PALETTE); lua_setfield(L,-2,"wxIPC_PALETTE");
	lua_pushnumber(L,wxIPC_PENDATA); lua_setfield(L,-2,"wxIPC_PENDATA");
	lua_pushnumber(L,wxIPC_RIFF); lua_setfield(L,-2,"wxIPC_RIFF");
	lua_pushnumber(L,wxIPC_WAVE); lua_setfield(L,-2,"wxIPC_WAVE");
	lua_pushnumber(L,wxIPC_UTF16TEXT); lua_setfield(L,-2,"wxIPC_UTF16TEXT");
	lua_pushnumber(L,wxIPC_ENHMETAFILE); lua_setfield(L,-2,"wxIPC_ENHMETAFILE");
	lua_pushnumber(L,wxIPC_FILENAME); lua_setfield(L,-2,"wxIPC_FILENAME");
	lua_pushnumber(L,wxIPC_LOCALE); lua_setfield(L,-2,"wxIPC_LOCALE");
	lua_pushnumber(L,wxIPC_UTF8TEXT); lua_setfield(L,-2,"wxIPC_UTF8TEXT");
	lua_pushnumber(L,wxIPC_UTF32TEXT); lua_setfield(L,-2,"wxIPC_UTF32TEXT");
	lua_pushnumber(L,wxIPC_UNICODETEXT); lua_setfield(L,-2,"wxIPC_UNICODETEXT");
	lua_pushnumber(L,wxIPC_PRIVATE); lua_setfield(L,-2,"wxIPC_PRIVATE");

	lua_setfield(L,-2,"wxIPCFormat");

	lua_pushnumber(L,wxIPC_INVALID); lua_setfield(L,-2,"wxIPC_INVALID");
	lua_pushnumber(L,wxIPC_TEXT); lua_setfield(L,-2,"wxIPC_TEXT");
	lua_pushnumber(L,wxIPC_BITMAP); lua_setfield(L,-2,"wxIPC_BITMAP");
	lua_pushnumber(L,wxIPC_METAFILE); lua_setfield(L,-2,"wxIPC_METAFILE");
	lua_pushnumber(L,wxIPC_SYLK); lua_setfield(L,-2,"wxIPC_SYLK");
	lua_pushnumber(L,wxIPC_DIF); lua_setfield(L,-2,"wxIPC_DIF");
	lua_pushnumber(L,wxIPC_TIFF); lua_setfield(L,-2,"wxIPC_TIFF");
	lua_pushnumber(L,wxIPC_OEMTEXT); lua_setfield(L,-2,"wxIPC_OEMTEXT");
	lua_pushnumber(L,wxIPC_DIB); lua_setfield(L,-2,"wxIPC_DIB");
	lua_pushnumber(L,wxIPC_PALETTE); lua_setfield(L,-2,"wxIPC_PALETTE");
	lua_pushnumber(L,wxIPC_PENDATA); lua_setfield(L,-2,"wxIPC_PENDATA");
	lua_pushnumber(L,wxIPC_RIFF); lua_setfield(L,-2,"wxIPC_RIFF");
	lua_pushnumber(L,wxIPC_WAVE); lua_setfield(L,-2,"wxIPC_WAVE");
	lua_pushnumber(L,wxIPC_UTF16TEXT); lua_setfield(L,-2,"wxIPC_UTF16TEXT");
	lua_pushnumber(L,wxIPC_ENHMETAFILE); lua_setfield(L,-2,"wxIPC_ENHMETAFILE");
	lua_pushnumber(L,wxIPC_FILENAME); lua_setfield(L,-2,"wxIPC_FILENAME");
	lua_pushnumber(L,wxIPC_LOCALE); lua_setfield(L,-2,"wxIPC_LOCALE");
	lua_pushnumber(L,wxIPC_UTF8TEXT); lua_setfield(L,-2,"wxIPC_UTF8TEXT");
	lua_pushnumber(L,wxIPC_UTF32TEXT); lua_setfield(L,-2,"wxIPC_UTF32TEXT");
	lua_pushnumber(L,wxIPC_UNICODETEXT); lua_setfield(L,-2,"wxIPC_UNICODETEXT");
	lua_pushnumber(L,wxIPC_PRIVATE); lua_setfield(L,-2,"wxIPC_PRIVATE");


	lua_newtable(L); // enum wxLanguage

	lua_pushnumber(L,wxLANGUAGE_DEFAULT); lua_setfield(L,-2,"wxLANGUAGE_DEFAULT");
	lua_pushnumber(L,wxLANGUAGE_UNKNOWN); lua_setfield(L,-2,"wxLANGUAGE_UNKNOWN");
	lua_pushnumber(L,wxLANGUAGE_ABKHAZIAN); lua_setfield(L,-2,"wxLANGUAGE_ABKHAZIAN");
	lua_pushnumber(L,wxLANGUAGE_AFAR); lua_setfield(L,-2,"wxLANGUAGE_AFAR");
	lua_pushnumber(L,wxLANGUAGE_AFRIKAANS); lua_setfield(L,-2,"wxLANGUAGE_AFRIKAANS");
	lua_pushnumber(L,wxLANGUAGE_ALBANIAN); lua_setfield(L,-2,"wxLANGUAGE_ALBANIAN");
	lua_pushnumber(L,wxLANGUAGE_AMHARIC); lua_setfield(L,-2,"wxLANGUAGE_AMHARIC");
	lua_pushnumber(L,wxLANGUAGE_ARABIC); lua_setfield(L,-2,"wxLANGUAGE_ARABIC");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_ALGERIA); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_ALGERIA");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_BAHRAIN); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_BAHRAIN");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_EGYPT); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_EGYPT");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_IRAQ); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_IRAQ");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_JORDAN); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_JORDAN");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_KUWAIT); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_KUWAIT");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_LEBANON); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_LEBANON");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_LIBYA); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_LIBYA");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_MOROCCO); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_MOROCCO");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_OMAN); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_OMAN");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_QATAR); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_QATAR");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_SAUDI_ARABIA); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_SAUDI_ARABIA");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_SUDAN); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_SUDAN");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_SYRIA); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_SYRIA");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_TUNISIA); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_TUNISIA");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_UAE); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_UAE");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_YEMEN); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_YEMEN");
	lua_pushnumber(L,wxLANGUAGE_ARMENIAN); lua_setfield(L,-2,"wxLANGUAGE_ARMENIAN");
	lua_pushnumber(L,wxLANGUAGE_ASSAMESE); lua_setfield(L,-2,"wxLANGUAGE_ASSAMESE");
	lua_pushnumber(L,wxLANGUAGE_ASTURIAN); lua_setfield(L,-2,"wxLANGUAGE_ASTURIAN");
	lua_pushnumber(L,wxLANGUAGE_AYMARA); lua_setfield(L,-2,"wxLANGUAGE_AYMARA");
	lua_pushnumber(L,wxLANGUAGE_AZERI); lua_setfield(L,-2,"wxLANGUAGE_AZERI");
	lua_pushnumber(L,wxLANGUAGE_AZERI_CYRILLIC); lua_setfield(L,-2,"wxLANGUAGE_AZERI_CYRILLIC");
	lua_pushnumber(L,wxLANGUAGE_AZERI_LATIN); lua_setfield(L,-2,"wxLANGUAGE_AZERI_LATIN");
	lua_pushnumber(L,wxLANGUAGE_BASHKIR); lua_setfield(L,-2,"wxLANGUAGE_BASHKIR");
	lua_pushnumber(L,wxLANGUAGE_BASQUE); lua_setfield(L,-2,"wxLANGUAGE_BASQUE");
	lua_pushnumber(L,wxLANGUAGE_BELARUSIAN); lua_setfield(L,-2,"wxLANGUAGE_BELARUSIAN");
	lua_pushnumber(L,wxLANGUAGE_BENGALI); lua_setfield(L,-2,"wxLANGUAGE_BENGALI");
	lua_pushnumber(L,wxLANGUAGE_BHUTANI); lua_setfield(L,-2,"wxLANGUAGE_BHUTANI");
	lua_pushnumber(L,wxLANGUAGE_BIHARI); lua_setfield(L,-2,"wxLANGUAGE_BIHARI");
	lua_pushnumber(L,wxLANGUAGE_BISLAMA); lua_setfield(L,-2,"wxLANGUAGE_BISLAMA");
	lua_pushnumber(L,wxLANGUAGE_BOSNIAN); lua_setfield(L,-2,"wxLANGUAGE_BOSNIAN");
	lua_pushnumber(L,wxLANGUAGE_BRETON); lua_setfield(L,-2,"wxLANGUAGE_BRETON");
	lua_pushnumber(L,wxLANGUAGE_BULGARIAN); lua_setfield(L,-2,"wxLANGUAGE_BULGARIAN");
	lua_pushnumber(L,wxLANGUAGE_BURMESE); lua_setfield(L,-2,"wxLANGUAGE_BURMESE");
	lua_pushnumber(L,wxLANGUAGE_CAMBODIAN); lua_setfield(L,-2,"wxLANGUAGE_CAMBODIAN");
	lua_pushnumber(L,wxLANGUAGE_CATALAN); lua_setfield(L,-2,"wxLANGUAGE_CATALAN");
	lua_pushnumber(L,wxLANGUAGE_CHINESE); lua_setfield(L,-2,"wxLANGUAGE_CHINESE");
	lua_pushnumber(L,wxLANGUAGE_CHINESE_SIMPLIFIED); lua_setfield(L,-2,"wxLANGUAGE_CHINESE_SIMPLIFIED");
	lua_pushnumber(L,wxLANGUAGE_CHINESE_TRADITIONAL); lua_setfield(L,-2,"wxLANGUAGE_CHINESE_TRADITIONAL");
	lua_pushnumber(L,wxLANGUAGE_CHINESE_HONGKONG); lua_setfield(L,-2,"wxLANGUAGE_CHINESE_HONGKONG");
	lua_pushnumber(L,wxLANGUAGE_CHINESE_MACAU); lua_setfield(L,-2,"wxLANGUAGE_CHINESE_MACAU");
	lua_pushnumber(L,wxLANGUAGE_CHINESE_SINGAPORE); lua_setfield(L,-2,"wxLANGUAGE_CHINESE_SINGAPORE");
	lua_pushnumber(L,wxLANGUAGE_CHINESE_TAIWAN); lua_setfield(L,-2,"wxLANGUAGE_CHINESE_TAIWAN");
	lua_pushnumber(L,wxLANGUAGE_CORSICAN); lua_setfield(L,-2,"wxLANGUAGE_CORSICAN");
	lua_pushnumber(L,wxLANGUAGE_CROATIAN); lua_setfield(L,-2,"wxLANGUAGE_CROATIAN");
	lua_pushnumber(L,wxLANGUAGE_CZECH); lua_setfield(L,-2,"wxLANGUAGE_CZECH");
	lua_pushnumber(L,wxLANGUAGE_DANISH); lua_setfield(L,-2,"wxLANGUAGE_DANISH");
	lua_pushnumber(L,wxLANGUAGE_DUTCH); lua_setfield(L,-2,"wxLANGUAGE_DUTCH");
	lua_pushnumber(L,wxLANGUAGE_DUTCH_BELGIAN); lua_setfield(L,-2,"wxLANGUAGE_DUTCH_BELGIAN");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_UK); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_UK");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_US); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_US");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_AUSTRALIA); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_AUSTRALIA");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_BELIZE); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_BELIZE");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_BOTSWANA); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_BOTSWANA");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_CANADA); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_CANADA");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_CARIBBEAN); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_CARIBBEAN");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_DENMARK); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_DENMARK");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_EIRE); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_EIRE");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_JAMAICA); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_JAMAICA");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_NEW_ZEALAND); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_NEW_ZEALAND");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_PHILIPPINES); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_PHILIPPINES");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_SOUTH_AFRICA); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_SOUTH_AFRICA");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_TRINIDAD); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_TRINIDAD");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_ZIMBABWE); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_ZIMBABWE");
	lua_pushnumber(L,wxLANGUAGE_ESPERANTO); lua_setfield(L,-2,"wxLANGUAGE_ESPERANTO");
	lua_pushnumber(L,wxLANGUAGE_ESTONIAN); lua_setfield(L,-2,"wxLANGUAGE_ESTONIAN");
	lua_pushnumber(L,wxLANGUAGE_FAEROESE); lua_setfield(L,-2,"wxLANGUAGE_FAEROESE");
	lua_pushnumber(L,wxLANGUAGE_FARSI); lua_setfield(L,-2,"wxLANGUAGE_FARSI");
	lua_pushnumber(L,wxLANGUAGE_FIJI); lua_setfield(L,-2,"wxLANGUAGE_FIJI");
	lua_pushnumber(L,wxLANGUAGE_FINNISH); lua_setfield(L,-2,"wxLANGUAGE_FINNISH");
	lua_pushnumber(L,wxLANGUAGE_FRENCH); lua_setfield(L,-2,"wxLANGUAGE_FRENCH");
	lua_pushnumber(L,wxLANGUAGE_FRENCH_BELGIAN); lua_setfield(L,-2,"wxLANGUAGE_FRENCH_BELGIAN");
	lua_pushnumber(L,wxLANGUAGE_FRENCH_CANADIAN); lua_setfield(L,-2,"wxLANGUAGE_FRENCH_CANADIAN");
	lua_pushnumber(L,wxLANGUAGE_FRENCH_LUXEMBOURG); lua_setfield(L,-2,"wxLANGUAGE_FRENCH_LUXEMBOURG");
	lua_pushnumber(L,wxLANGUAGE_FRENCH_MONACO); lua_setfield(L,-2,"wxLANGUAGE_FRENCH_MONACO");
	lua_pushnumber(L,wxLANGUAGE_FRENCH_SWISS); lua_setfield(L,-2,"wxLANGUAGE_FRENCH_SWISS");
	lua_pushnumber(L,wxLANGUAGE_FRISIAN); lua_setfield(L,-2,"wxLANGUAGE_FRISIAN");
	lua_pushnumber(L,wxLANGUAGE_GALICIAN); lua_setfield(L,-2,"wxLANGUAGE_GALICIAN");
	lua_pushnumber(L,wxLANGUAGE_GEORGIAN); lua_setfield(L,-2,"wxLANGUAGE_GEORGIAN");
	lua_pushnumber(L,wxLANGUAGE_GERMAN); lua_setfield(L,-2,"wxLANGUAGE_GERMAN");
	lua_pushnumber(L,wxLANGUAGE_GERMAN_AUSTRIAN); lua_setfield(L,-2,"wxLANGUAGE_GERMAN_AUSTRIAN");
	lua_pushnumber(L,wxLANGUAGE_GERMAN_BELGIUM); lua_setfield(L,-2,"wxLANGUAGE_GERMAN_BELGIUM");
	lua_pushnumber(L,wxLANGUAGE_GERMAN_LIECHTENSTEIN); lua_setfield(L,-2,"wxLANGUAGE_GERMAN_LIECHTENSTEIN");
	lua_pushnumber(L,wxLANGUAGE_GERMAN_LUXEMBOURG); lua_setfield(L,-2,"wxLANGUAGE_GERMAN_LUXEMBOURG");
	lua_pushnumber(L,wxLANGUAGE_GERMAN_SWISS); lua_setfield(L,-2,"wxLANGUAGE_GERMAN_SWISS");
	lua_pushnumber(L,wxLANGUAGE_GREEK); lua_setfield(L,-2,"wxLANGUAGE_GREEK");
	lua_pushnumber(L,wxLANGUAGE_GREENLANDIC); lua_setfield(L,-2,"wxLANGUAGE_GREENLANDIC");
	lua_pushnumber(L,wxLANGUAGE_GUARANI); lua_setfield(L,-2,"wxLANGUAGE_GUARANI");
	lua_pushnumber(L,wxLANGUAGE_GUJARATI); lua_setfield(L,-2,"wxLANGUAGE_GUJARATI");
	lua_pushnumber(L,wxLANGUAGE_HAUSA); lua_setfield(L,-2,"wxLANGUAGE_HAUSA");
	lua_pushnumber(L,wxLANGUAGE_HEBREW); lua_setfield(L,-2,"wxLANGUAGE_HEBREW");
	lua_pushnumber(L,wxLANGUAGE_HINDI); lua_setfield(L,-2,"wxLANGUAGE_HINDI");
	lua_pushnumber(L,wxLANGUAGE_HUNGARIAN); lua_setfield(L,-2,"wxLANGUAGE_HUNGARIAN");
	lua_pushnumber(L,wxLANGUAGE_ICELANDIC); lua_setfield(L,-2,"wxLANGUAGE_ICELANDIC");
	lua_pushnumber(L,wxLANGUAGE_INDONESIAN); lua_setfield(L,-2,"wxLANGUAGE_INDONESIAN");
	lua_pushnumber(L,wxLANGUAGE_INTERLINGUA); lua_setfield(L,-2,"wxLANGUAGE_INTERLINGUA");
	lua_pushnumber(L,wxLANGUAGE_INTERLINGUE); lua_setfield(L,-2,"wxLANGUAGE_INTERLINGUE");
	lua_pushnumber(L,wxLANGUAGE_INUKTITUT); lua_setfield(L,-2,"wxLANGUAGE_INUKTITUT");
	lua_pushnumber(L,wxLANGUAGE_INUPIAK); lua_setfield(L,-2,"wxLANGUAGE_INUPIAK");
	lua_pushnumber(L,wxLANGUAGE_IRISH); lua_setfield(L,-2,"wxLANGUAGE_IRISH");
	lua_pushnumber(L,wxLANGUAGE_ITALIAN); lua_setfield(L,-2,"wxLANGUAGE_ITALIAN");
	lua_pushnumber(L,wxLANGUAGE_ITALIAN_SWISS); lua_setfield(L,-2,"wxLANGUAGE_ITALIAN_SWISS");
	lua_pushnumber(L,wxLANGUAGE_JAPANESE); lua_setfield(L,-2,"wxLANGUAGE_JAPANESE");
	lua_pushnumber(L,wxLANGUAGE_JAVANESE); lua_setfield(L,-2,"wxLANGUAGE_JAVANESE");
	lua_pushnumber(L,wxLANGUAGE_KANNADA); lua_setfield(L,-2,"wxLANGUAGE_KANNADA");
	lua_pushnumber(L,wxLANGUAGE_KASHMIRI); lua_setfield(L,-2,"wxLANGUAGE_KASHMIRI");
	lua_pushnumber(L,wxLANGUAGE_KASHMIRI_INDIA); lua_setfield(L,-2,"wxLANGUAGE_KASHMIRI_INDIA");
	lua_pushnumber(L,wxLANGUAGE_KAZAKH); lua_setfield(L,-2,"wxLANGUAGE_KAZAKH");
	lua_pushnumber(L,wxLANGUAGE_KERNEWEK); lua_setfield(L,-2,"wxLANGUAGE_KERNEWEK");
	lua_pushnumber(L,wxLANGUAGE_KINYARWANDA); lua_setfield(L,-2,"wxLANGUAGE_KINYARWANDA");
	lua_pushnumber(L,wxLANGUAGE_KIRGHIZ); lua_setfield(L,-2,"wxLANGUAGE_KIRGHIZ");
	lua_pushnumber(L,wxLANGUAGE_KIRUNDI); lua_setfield(L,-2,"wxLANGUAGE_KIRUNDI");
	lua_pushnumber(L,wxLANGUAGE_KONKANI); lua_setfield(L,-2,"wxLANGUAGE_KONKANI");
	lua_pushnumber(L,wxLANGUAGE_KOREAN); lua_setfield(L,-2,"wxLANGUAGE_KOREAN");
	lua_pushnumber(L,wxLANGUAGE_KURDISH); lua_setfield(L,-2,"wxLANGUAGE_KURDISH");
	lua_pushnumber(L,wxLANGUAGE_LAOTHIAN); lua_setfield(L,-2,"wxLANGUAGE_LAOTHIAN");
	lua_pushnumber(L,wxLANGUAGE_LATIN); lua_setfield(L,-2,"wxLANGUAGE_LATIN");
	lua_pushnumber(L,wxLANGUAGE_LATVIAN); lua_setfield(L,-2,"wxLANGUAGE_LATVIAN");
	lua_pushnumber(L,wxLANGUAGE_LINGALA); lua_setfield(L,-2,"wxLANGUAGE_LINGALA");
	lua_pushnumber(L,wxLANGUAGE_LITHUANIAN); lua_setfield(L,-2,"wxLANGUAGE_LITHUANIAN");
	lua_pushnumber(L,wxLANGUAGE_MACEDONIAN); lua_setfield(L,-2,"wxLANGUAGE_MACEDONIAN");
	lua_pushnumber(L,wxLANGUAGE_MALAGASY); lua_setfield(L,-2,"wxLANGUAGE_MALAGASY");
	lua_pushnumber(L,wxLANGUAGE_MALAY); lua_setfield(L,-2,"wxLANGUAGE_MALAY");
	lua_pushnumber(L,wxLANGUAGE_MALAYALAM); lua_setfield(L,-2,"wxLANGUAGE_MALAYALAM");
	lua_pushnumber(L,wxLANGUAGE_MALAY_BRUNEI_DARUSSALAM); lua_setfield(L,-2,"wxLANGUAGE_MALAY_BRUNEI_DARUSSALAM");
	lua_pushnumber(L,wxLANGUAGE_MALAY_MALAYSIA); lua_setfield(L,-2,"wxLANGUAGE_MALAY_MALAYSIA");
	lua_pushnumber(L,wxLANGUAGE_MALTESE); lua_setfield(L,-2,"wxLANGUAGE_MALTESE");
	lua_pushnumber(L,wxLANGUAGE_MANIPURI); lua_setfield(L,-2,"wxLANGUAGE_MANIPURI");
	lua_pushnumber(L,wxLANGUAGE_MAORI); lua_setfield(L,-2,"wxLANGUAGE_MAORI");
	lua_pushnumber(L,wxLANGUAGE_MARATHI); lua_setfield(L,-2,"wxLANGUAGE_MARATHI");
	lua_pushnumber(L,wxLANGUAGE_MOLDAVIAN); lua_setfield(L,-2,"wxLANGUAGE_MOLDAVIAN");
	lua_pushnumber(L,wxLANGUAGE_MONGOLIAN); lua_setfield(L,-2,"wxLANGUAGE_MONGOLIAN");
	lua_pushnumber(L,wxLANGUAGE_NAURU); lua_setfield(L,-2,"wxLANGUAGE_NAURU");
	lua_pushnumber(L,wxLANGUAGE_NEPALI); lua_setfield(L,-2,"wxLANGUAGE_NEPALI");
	lua_pushnumber(L,wxLANGUAGE_NEPALI_INDIA); lua_setfield(L,-2,"wxLANGUAGE_NEPALI_INDIA");
	lua_pushnumber(L,wxLANGUAGE_NORWEGIAN_BOKMAL); lua_setfield(L,-2,"wxLANGUAGE_NORWEGIAN_BOKMAL");
	lua_pushnumber(L,wxLANGUAGE_NORWEGIAN_NYNORSK); lua_setfield(L,-2,"wxLANGUAGE_NORWEGIAN_NYNORSK");
	lua_pushnumber(L,wxLANGUAGE_OCCITAN); lua_setfield(L,-2,"wxLANGUAGE_OCCITAN");
	lua_pushnumber(L,wxLANGUAGE_ORIYA); lua_setfield(L,-2,"wxLANGUAGE_ORIYA");
	lua_pushnumber(L,wxLANGUAGE_OROMO); lua_setfield(L,-2,"wxLANGUAGE_OROMO");
	lua_pushnumber(L,wxLANGUAGE_PASHTO); lua_setfield(L,-2,"wxLANGUAGE_PASHTO");
	lua_pushnumber(L,wxLANGUAGE_POLISH); lua_setfield(L,-2,"wxLANGUAGE_POLISH");
	lua_pushnumber(L,wxLANGUAGE_PORTUGUESE); lua_setfield(L,-2,"wxLANGUAGE_PORTUGUESE");
	lua_pushnumber(L,wxLANGUAGE_PORTUGUESE_BRAZILIAN); lua_setfield(L,-2,"wxLANGUAGE_PORTUGUESE_BRAZILIAN");
	lua_pushnumber(L,wxLANGUAGE_PUNJABI); lua_setfield(L,-2,"wxLANGUAGE_PUNJABI");
	lua_pushnumber(L,wxLANGUAGE_QUECHUA); lua_setfield(L,-2,"wxLANGUAGE_QUECHUA");
	lua_pushnumber(L,wxLANGUAGE_RHAETO_ROMANCE); lua_setfield(L,-2,"wxLANGUAGE_RHAETO_ROMANCE");
	lua_pushnumber(L,wxLANGUAGE_ROMANIAN); lua_setfield(L,-2,"wxLANGUAGE_ROMANIAN");
	lua_pushnumber(L,wxLANGUAGE_RUSSIAN); lua_setfield(L,-2,"wxLANGUAGE_RUSSIAN");
	lua_pushnumber(L,wxLANGUAGE_RUSSIAN_UKRAINE); lua_setfield(L,-2,"wxLANGUAGE_RUSSIAN_UKRAINE");
	lua_pushnumber(L,wxLANGUAGE_SAMI); lua_setfield(L,-2,"wxLANGUAGE_SAMI");
	lua_pushnumber(L,wxLANGUAGE_SAMOAN); lua_setfield(L,-2,"wxLANGUAGE_SAMOAN");
	lua_pushnumber(L,wxLANGUAGE_SANGHO); lua_setfield(L,-2,"wxLANGUAGE_SANGHO");
	lua_pushnumber(L,wxLANGUAGE_SANSKRIT); lua_setfield(L,-2,"wxLANGUAGE_SANSKRIT");
	lua_pushnumber(L,wxLANGUAGE_SCOTS_GAELIC); lua_setfield(L,-2,"wxLANGUAGE_SCOTS_GAELIC");
	lua_pushnumber(L,wxLANGUAGE_SERBIAN); lua_setfield(L,-2,"wxLANGUAGE_SERBIAN");
	lua_pushnumber(L,wxLANGUAGE_SERBIAN_CYRILLIC); lua_setfield(L,-2,"wxLANGUAGE_SERBIAN_CYRILLIC");
	lua_pushnumber(L,wxLANGUAGE_SERBIAN_LATIN); lua_setfield(L,-2,"wxLANGUAGE_SERBIAN_LATIN");
	lua_pushnumber(L,wxLANGUAGE_SERBO_CROATIAN); lua_setfield(L,-2,"wxLANGUAGE_SERBO_CROATIAN");
	lua_pushnumber(L,wxLANGUAGE_SESOTHO); lua_setfield(L,-2,"wxLANGUAGE_SESOTHO");
	lua_pushnumber(L,wxLANGUAGE_SETSWANA); lua_setfield(L,-2,"wxLANGUAGE_SETSWANA");
	lua_pushnumber(L,wxLANGUAGE_SHONA); lua_setfield(L,-2,"wxLANGUAGE_SHONA");
	lua_pushnumber(L,wxLANGUAGE_SINDHI); lua_setfield(L,-2,"wxLANGUAGE_SINDHI");
	lua_pushnumber(L,wxLANGUAGE_SINHALESE); lua_setfield(L,-2,"wxLANGUAGE_SINHALESE");
	lua_pushnumber(L,wxLANGUAGE_SISWATI); lua_setfield(L,-2,"wxLANGUAGE_SISWATI");
	lua_pushnumber(L,wxLANGUAGE_SLOVAK); lua_setfield(L,-2,"wxLANGUAGE_SLOVAK");
	lua_pushnumber(L,wxLANGUAGE_SLOVENIAN); lua_setfield(L,-2,"wxLANGUAGE_SLOVENIAN");
	lua_pushnumber(L,wxLANGUAGE_SOMALI); lua_setfield(L,-2,"wxLANGUAGE_SOMALI");
	lua_pushnumber(L,wxLANGUAGE_SPANISH); lua_setfield(L,-2,"wxLANGUAGE_SPANISH");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_ARGENTINA); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_ARGENTINA");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_BOLIVIA); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_BOLIVIA");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_CHILE); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_CHILE");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_COLOMBIA); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_COLOMBIA");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_COSTA_RICA); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_COSTA_RICA");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_DOMINICAN_REPUBLIC); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_DOMINICAN_REPUBLIC");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_ECUADOR); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_ECUADOR");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_EL_SALVADOR); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_EL_SALVADOR");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_GUATEMALA); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_GUATEMALA");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_HONDURAS); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_HONDURAS");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_MEXICAN); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_MEXICAN");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_MODERN); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_MODERN");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_NICARAGUA); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_NICARAGUA");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_PANAMA); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_PANAMA");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_PARAGUAY); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_PARAGUAY");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_PERU); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_PERU");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_PUERTO_RICO); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_PUERTO_RICO");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_URUGUAY); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_URUGUAY");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_US); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_US");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_VENEZUELA); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_VENEZUELA");
	lua_pushnumber(L,wxLANGUAGE_SUNDANESE); lua_setfield(L,-2,"wxLANGUAGE_SUNDANESE");
	lua_pushnumber(L,wxLANGUAGE_SWAHILI); lua_setfield(L,-2,"wxLANGUAGE_SWAHILI");
	lua_pushnumber(L,wxLANGUAGE_SWEDISH); lua_setfield(L,-2,"wxLANGUAGE_SWEDISH");
	lua_pushnumber(L,wxLANGUAGE_SWEDISH_FINLAND); lua_setfield(L,-2,"wxLANGUAGE_SWEDISH_FINLAND");
	lua_pushnumber(L,wxLANGUAGE_TAGALOG); lua_setfield(L,-2,"wxLANGUAGE_TAGALOG");
	lua_pushnumber(L,wxLANGUAGE_TAJIK); lua_setfield(L,-2,"wxLANGUAGE_TAJIK");
	lua_pushnumber(L,wxLANGUAGE_TAMIL); lua_setfield(L,-2,"wxLANGUAGE_TAMIL");
	lua_pushnumber(L,wxLANGUAGE_TATAR); lua_setfield(L,-2,"wxLANGUAGE_TATAR");
	lua_pushnumber(L,wxLANGUAGE_TELUGU); lua_setfield(L,-2,"wxLANGUAGE_TELUGU");
	lua_pushnumber(L,wxLANGUAGE_THAI); lua_setfield(L,-2,"wxLANGUAGE_THAI");
	lua_pushnumber(L,wxLANGUAGE_TIBETAN); lua_setfield(L,-2,"wxLANGUAGE_TIBETAN");
	lua_pushnumber(L,wxLANGUAGE_TIGRINYA); lua_setfield(L,-2,"wxLANGUAGE_TIGRINYA");
	lua_pushnumber(L,wxLANGUAGE_TONGA); lua_setfield(L,-2,"wxLANGUAGE_TONGA");
	lua_pushnumber(L,wxLANGUAGE_TSONGA); lua_setfield(L,-2,"wxLANGUAGE_TSONGA");
	lua_pushnumber(L,wxLANGUAGE_TURKISH); lua_setfield(L,-2,"wxLANGUAGE_TURKISH");
	lua_pushnumber(L,wxLANGUAGE_TURKMEN); lua_setfield(L,-2,"wxLANGUAGE_TURKMEN");
	lua_pushnumber(L,wxLANGUAGE_TWI); lua_setfield(L,-2,"wxLANGUAGE_TWI");
	lua_pushnumber(L,wxLANGUAGE_UIGHUR); lua_setfield(L,-2,"wxLANGUAGE_UIGHUR");
	lua_pushnumber(L,wxLANGUAGE_UKRAINIAN); lua_setfield(L,-2,"wxLANGUAGE_UKRAINIAN");
	lua_pushnumber(L,wxLANGUAGE_URDU); lua_setfield(L,-2,"wxLANGUAGE_URDU");
	lua_pushnumber(L,wxLANGUAGE_URDU_INDIA); lua_setfield(L,-2,"wxLANGUAGE_URDU_INDIA");
	lua_pushnumber(L,wxLANGUAGE_URDU_PAKISTAN); lua_setfield(L,-2,"wxLANGUAGE_URDU_PAKISTAN");
	lua_pushnumber(L,wxLANGUAGE_UZBEK); lua_setfield(L,-2,"wxLANGUAGE_UZBEK");
	lua_pushnumber(L,wxLANGUAGE_UZBEK_CYRILLIC); lua_setfield(L,-2,"wxLANGUAGE_UZBEK_CYRILLIC");
	lua_pushnumber(L,wxLANGUAGE_UZBEK_LATIN); lua_setfield(L,-2,"wxLANGUAGE_UZBEK_LATIN");
	lua_pushnumber(L,wxLANGUAGE_VALENCIAN); lua_setfield(L,-2,"wxLANGUAGE_VALENCIAN");
	lua_pushnumber(L,wxLANGUAGE_VIETNAMESE); lua_setfield(L,-2,"wxLANGUAGE_VIETNAMESE");
	lua_pushnumber(L,wxLANGUAGE_VOLAPUK); lua_setfield(L,-2,"wxLANGUAGE_VOLAPUK");
	lua_pushnumber(L,wxLANGUAGE_WELSH); lua_setfield(L,-2,"wxLANGUAGE_WELSH");
	lua_pushnumber(L,wxLANGUAGE_WOLOF); lua_setfield(L,-2,"wxLANGUAGE_WOLOF");
	lua_pushnumber(L,wxLANGUAGE_XHOSA); lua_setfield(L,-2,"wxLANGUAGE_XHOSA");
	lua_pushnumber(L,wxLANGUAGE_YIDDISH); lua_setfield(L,-2,"wxLANGUAGE_YIDDISH");
	lua_pushnumber(L,wxLANGUAGE_YORUBA); lua_setfield(L,-2,"wxLANGUAGE_YORUBA");
	lua_pushnumber(L,wxLANGUAGE_ZHUANG); lua_setfield(L,-2,"wxLANGUAGE_ZHUANG");
	lua_pushnumber(L,wxLANGUAGE_ZULU); lua_setfield(L,-2,"wxLANGUAGE_ZULU");
	lua_pushnumber(L,wxLANGUAGE_USER_DEFINED); lua_setfield(L,-2,"wxLANGUAGE_USER_DEFINED");

	lua_setfield(L,-2,"wxLanguage");

	lua_pushnumber(L,wxLANGUAGE_DEFAULT); lua_setfield(L,-2,"wxLANGUAGE_DEFAULT");
	lua_pushnumber(L,wxLANGUAGE_UNKNOWN); lua_setfield(L,-2,"wxLANGUAGE_UNKNOWN");
	lua_pushnumber(L,wxLANGUAGE_ABKHAZIAN); lua_setfield(L,-2,"wxLANGUAGE_ABKHAZIAN");
	lua_pushnumber(L,wxLANGUAGE_AFAR); lua_setfield(L,-2,"wxLANGUAGE_AFAR");
	lua_pushnumber(L,wxLANGUAGE_AFRIKAANS); lua_setfield(L,-2,"wxLANGUAGE_AFRIKAANS");
	lua_pushnumber(L,wxLANGUAGE_ALBANIAN); lua_setfield(L,-2,"wxLANGUAGE_ALBANIAN");
	lua_pushnumber(L,wxLANGUAGE_AMHARIC); lua_setfield(L,-2,"wxLANGUAGE_AMHARIC");
	lua_pushnumber(L,wxLANGUAGE_ARABIC); lua_setfield(L,-2,"wxLANGUAGE_ARABIC");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_ALGERIA); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_ALGERIA");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_BAHRAIN); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_BAHRAIN");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_EGYPT); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_EGYPT");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_IRAQ); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_IRAQ");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_JORDAN); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_JORDAN");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_KUWAIT); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_KUWAIT");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_LEBANON); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_LEBANON");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_LIBYA); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_LIBYA");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_MOROCCO); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_MOROCCO");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_OMAN); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_OMAN");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_QATAR); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_QATAR");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_SAUDI_ARABIA); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_SAUDI_ARABIA");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_SUDAN); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_SUDAN");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_SYRIA); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_SYRIA");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_TUNISIA); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_TUNISIA");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_UAE); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_UAE");
	lua_pushnumber(L,wxLANGUAGE_ARABIC_YEMEN); lua_setfield(L,-2,"wxLANGUAGE_ARABIC_YEMEN");
	lua_pushnumber(L,wxLANGUAGE_ARMENIAN); lua_setfield(L,-2,"wxLANGUAGE_ARMENIAN");
	lua_pushnumber(L,wxLANGUAGE_ASSAMESE); lua_setfield(L,-2,"wxLANGUAGE_ASSAMESE");
	lua_pushnumber(L,wxLANGUAGE_ASTURIAN); lua_setfield(L,-2,"wxLANGUAGE_ASTURIAN");
	lua_pushnumber(L,wxLANGUAGE_AYMARA); lua_setfield(L,-2,"wxLANGUAGE_AYMARA");
	lua_pushnumber(L,wxLANGUAGE_AZERI); lua_setfield(L,-2,"wxLANGUAGE_AZERI");
	lua_pushnumber(L,wxLANGUAGE_AZERI_CYRILLIC); lua_setfield(L,-2,"wxLANGUAGE_AZERI_CYRILLIC");
	lua_pushnumber(L,wxLANGUAGE_AZERI_LATIN); lua_setfield(L,-2,"wxLANGUAGE_AZERI_LATIN");
	lua_pushnumber(L,wxLANGUAGE_BASHKIR); lua_setfield(L,-2,"wxLANGUAGE_BASHKIR");
	lua_pushnumber(L,wxLANGUAGE_BASQUE); lua_setfield(L,-2,"wxLANGUAGE_BASQUE");
	lua_pushnumber(L,wxLANGUAGE_BELARUSIAN); lua_setfield(L,-2,"wxLANGUAGE_BELARUSIAN");
	lua_pushnumber(L,wxLANGUAGE_BENGALI); lua_setfield(L,-2,"wxLANGUAGE_BENGALI");
	lua_pushnumber(L,wxLANGUAGE_BHUTANI); lua_setfield(L,-2,"wxLANGUAGE_BHUTANI");
	lua_pushnumber(L,wxLANGUAGE_BIHARI); lua_setfield(L,-2,"wxLANGUAGE_BIHARI");
	lua_pushnumber(L,wxLANGUAGE_BISLAMA); lua_setfield(L,-2,"wxLANGUAGE_BISLAMA");
	lua_pushnumber(L,wxLANGUAGE_BOSNIAN); lua_setfield(L,-2,"wxLANGUAGE_BOSNIAN");
	lua_pushnumber(L,wxLANGUAGE_BRETON); lua_setfield(L,-2,"wxLANGUAGE_BRETON");
	lua_pushnumber(L,wxLANGUAGE_BULGARIAN); lua_setfield(L,-2,"wxLANGUAGE_BULGARIAN");
	lua_pushnumber(L,wxLANGUAGE_BURMESE); lua_setfield(L,-2,"wxLANGUAGE_BURMESE");
	lua_pushnumber(L,wxLANGUAGE_CAMBODIAN); lua_setfield(L,-2,"wxLANGUAGE_CAMBODIAN");
	lua_pushnumber(L,wxLANGUAGE_CATALAN); lua_setfield(L,-2,"wxLANGUAGE_CATALAN");
	lua_pushnumber(L,wxLANGUAGE_CHINESE); lua_setfield(L,-2,"wxLANGUAGE_CHINESE");
	lua_pushnumber(L,wxLANGUAGE_CHINESE_SIMPLIFIED); lua_setfield(L,-2,"wxLANGUAGE_CHINESE_SIMPLIFIED");
	lua_pushnumber(L,wxLANGUAGE_CHINESE_TRADITIONAL); lua_setfield(L,-2,"wxLANGUAGE_CHINESE_TRADITIONAL");
	lua_pushnumber(L,wxLANGUAGE_CHINESE_HONGKONG); lua_setfield(L,-2,"wxLANGUAGE_CHINESE_HONGKONG");
	lua_pushnumber(L,wxLANGUAGE_CHINESE_MACAU); lua_setfield(L,-2,"wxLANGUAGE_CHINESE_MACAU");
	lua_pushnumber(L,wxLANGUAGE_CHINESE_SINGAPORE); lua_setfield(L,-2,"wxLANGUAGE_CHINESE_SINGAPORE");
	lua_pushnumber(L,wxLANGUAGE_CHINESE_TAIWAN); lua_setfield(L,-2,"wxLANGUAGE_CHINESE_TAIWAN");
	lua_pushnumber(L,wxLANGUAGE_CORSICAN); lua_setfield(L,-2,"wxLANGUAGE_CORSICAN");
	lua_pushnumber(L,wxLANGUAGE_CROATIAN); lua_setfield(L,-2,"wxLANGUAGE_CROATIAN");
	lua_pushnumber(L,wxLANGUAGE_CZECH); lua_setfield(L,-2,"wxLANGUAGE_CZECH");
	lua_pushnumber(L,wxLANGUAGE_DANISH); lua_setfield(L,-2,"wxLANGUAGE_DANISH");
	lua_pushnumber(L,wxLANGUAGE_DUTCH); lua_setfield(L,-2,"wxLANGUAGE_DUTCH");
	lua_pushnumber(L,wxLANGUAGE_DUTCH_BELGIAN); lua_setfield(L,-2,"wxLANGUAGE_DUTCH_BELGIAN");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_UK); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_UK");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_US); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_US");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_AUSTRALIA); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_AUSTRALIA");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_BELIZE); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_BELIZE");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_BOTSWANA); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_BOTSWANA");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_CANADA); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_CANADA");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_CARIBBEAN); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_CARIBBEAN");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_DENMARK); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_DENMARK");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_EIRE); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_EIRE");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_JAMAICA); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_JAMAICA");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_NEW_ZEALAND); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_NEW_ZEALAND");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_PHILIPPINES); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_PHILIPPINES");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_SOUTH_AFRICA); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_SOUTH_AFRICA");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_TRINIDAD); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_TRINIDAD");
	lua_pushnumber(L,wxLANGUAGE_ENGLISH_ZIMBABWE); lua_setfield(L,-2,"wxLANGUAGE_ENGLISH_ZIMBABWE");
	lua_pushnumber(L,wxLANGUAGE_ESPERANTO); lua_setfield(L,-2,"wxLANGUAGE_ESPERANTO");
	lua_pushnumber(L,wxLANGUAGE_ESTONIAN); lua_setfield(L,-2,"wxLANGUAGE_ESTONIAN");
	lua_pushnumber(L,wxLANGUAGE_FAEROESE); lua_setfield(L,-2,"wxLANGUAGE_FAEROESE");
	lua_pushnumber(L,wxLANGUAGE_FARSI); lua_setfield(L,-2,"wxLANGUAGE_FARSI");
	lua_pushnumber(L,wxLANGUAGE_FIJI); lua_setfield(L,-2,"wxLANGUAGE_FIJI");
	lua_pushnumber(L,wxLANGUAGE_FINNISH); lua_setfield(L,-2,"wxLANGUAGE_FINNISH");
	lua_pushnumber(L,wxLANGUAGE_FRENCH); lua_setfield(L,-2,"wxLANGUAGE_FRENCH");
	lua_pushnumber(L,wxLANGUAGE_FRENCH_BELGIAN); lua_setfield(L,-2,"wxLANGUAGE_FRENCH_BELGIAN");
	lua_pushnumber(L,wxLANGUAGE_FRENCH_CANADIAN); lua_setfield(L,-2,"wxLANGUAGE_FRENCH_CANADIAN");
	lua_pushnumber(L,wxLANGUAGE_FRENCH_LUXEMBOURG); lua_setfield(L,-2,"wxLANGUAGE_FRENCH_LUXEMBOURG");
	lua_pushnumber(L,wxLANGUAGE_FRENCH_MONACO); lua_setfield(L,-2,"wxLANGUAGE_FRENCH_MONACO");
	lua_pushnumber(L,wxLANGUAGE_FRENCH_SWISS); lua_setfield(L,-2,"wxLANGUAGE_FRENCH_SWISS");
	lua_pushnumber(L,wxLANGUAGE_FRISIAN); lua_setfield(L,-2,"wxLANGUAGE_FRISIAN");
	lua_pushnumber(L,wxLANGUAGE_GALICIAN); lua_setfield(L,-2,"wxLANGUAGE_GALICIAN");
	lua_pushnumber(L,wxLANGUAGE_GEORGIAN); lua_setfield(L,-2,"wxLANGUAGE_GEORGIAN");
	lua_pushnumber(L,wxLANGUAGE_GERMAN); lua_setfield(L,-2,"wxLANGUAGE_GERMAN");
	lua_pushnumber(L,wxLANGUAGE_GERMAN_AUSTRIAN); lua_setfield(L,-2,"wxLANGUAGE_GERMAN_AUSTRIAN");
	lua_pushnumber(L,wxLANGUAGE_GERMAN_BELGIUM); lua_setfield(L,-2,"wxLANGUAGE_GERMAN_BELGIUM");
	lua_pushnumber(L,wxLANGUAGE_GERMAN_LIECHTENSTEIN); lua_setfield(L,-2,"wxLANGUAGE_GERMAN_LIECHTENSTEIN");
	lua_pushnumber(L,wxLANGUAGE_GERMAN_LUXEMBOURG); lua_setfield(L,-2,"wxLANGUAGE_GERMAN_LUXEMBOURG");
	lua_pushnumber(L,wxLANGUAGE_GERMAN_SWISS); lua_setfield(L,-2,"wxLANGUAGE_GERMAN_SWISS");
	lua_pushnumber(L,wxLANGUAGE_GREEK); lua_setfield(L,-2,"wxLANGUAGE_GREEK");
	lua_pushnumber(L,wxLANGUAGE_GREENLANDIC); lua_setfield(L,-2,"wxLANGUAGE_GREENLANDIC");
	lua_pushnumber(L,wxLANGUAGE_GUARANI); lua_setfield(L,-2,"wxLANGUAGE_GUARANI");
	lua_pushnumber(L,wxLANGUAGE_GUJARATI); lua_setfield(L,-2,"wxLANGUAGE_GUJARATI");
	lua_pushnumber(L,wxLANGUAGE_HAUSA); lua_setfield(L,-2,"wxLANGUAGE_HAUSA");
	lua_pushnumber(L,wxLANGUAGE_HEBREW); lua_setfield(L,-2,"wxLANGUAGE_HEBREW");
	lua_pushnumber(L,wxLANGUAGE_HINDI); lua_setfield(L,-2,"wxLANGUAGE_HINDI");
	lua_pushnumber(L,wxLANGUAGE_HUNGARIAN); lua_setfield(L,-2,"wxLANGUAGE_HUNGARIAN");
	lua_pushnumber(L,wxLANGUAGE_ICELANDIC); lua_setfield(L,-2,"wxLANGUAGE_ICELANDIC");
	lua_pushnumber(L,wxLANGUAGE_INDONESIAN); lua_setfield(L,-2,"wxLANGUAGE_INDONESIAN");
	lua_pushnumber(L,wxLANGUAGE_INTERLINGUA); lua_setfield(L,-2,"wxLANGUAGE_INTERLINGUA");
	lua_pushnumber(L,wxLANGUAGE_INTERLINGUE); lua_setfield(L,-2,"wxLANGUAGE_INTERLINGUE");
	lua_pushnumber(L,wxLANGUAGE_INUKTITUT); lua_setfield(L,-2,"wxLANGUAGE_INUKTITUT");
	lua_pushnumber(L,wxLANGUAGE_INUPIAK); lua_setfield(L,-2,"wxLANGUAGE_INUPIAK");
	lua_pushnumber(L,wxLANGUAGE_IRISH); lua_setfield(L,-2,"wxLANGUAGE_IRISH");
	lua_pushnumber(L,wxLANGUAGE_ITALIAN); lua_setfield(L,-2,"wxLANGUAGE_ITALIAN");
	lua_pushnumber(L,wxLANGUAGE_ITALIAN_SWISS); lua_setfield(L,-2,"wxLANGUAGE_ITALIAN_SWISS");
	lua_pushnumber(L,wxLANGUAGE_JAPANESE); lua_setfield(L,-2,"wxLANGUAGE_JAPANESE");
	lua_pushnumber(L,wxLANGUAGE_JAVANESE); lua_setfield(L,-2,"wxLANGUAGE_JAVANESE");
	lua_pushnumber(L,wxLANGUAGE_KANNADA); lua_setfield(L,-2,"wxLANGUAGE_KANNADA");
	lua_pushnumber(L,wxLANGUAGE_KASHMIRI); lua_setfield(L,-2,"wxLANGUAGE_KASHMIRI");
	lua_pushnumber(L,wxLANGUAGE_KASHMIRI_INDIA); lua_setfield(L,-2,"wxLANGUAGE_KASHMIRI_INDIA");
	lua_pushnumber(L,wxLANGUAGE_KAZAKH); lua_setfield(L,-2,"wxLANGUAGE_KAZAKH");
	lua_pushnumber(L,wxLANGUAGE_KERNEWEK); lua_setfield(L,-2,"wxLANGUAGE_KERNEWEK");
	lua_pushnumber(L,wxLANGUAGE_KINYARWANDA); lua_setfield(L,-2,"wxLANGUAGE_KINYARWANDA");
	lua_pushnumber(L,wxLANGUAGE_KIRGHIZ); lua_setfield(L,-2,"wxLANGUAGE_KIRGHIZ");
	lua_pushnumber(L,wxLANGUAGE_KIRUNDI); lua_setfield(L,-2,"wxLANGUAGE_KIRUNDI");
	lua_pushnumber(L,wxLANGUAGE_KONKANI); lua_setfield(L,-2,"wxLANGUAGE_KONKANI");
	lua_pushnumber(L,wxLANGUAGE_KOREAN); lua_setfield(L,-2,"wxLANGUAGE_KOREAN");
	lua_pushnumber(L,wxLANGUAGE_KURDISH); lua_setfield(L,-2,"wxLANGUAGE_KURDISH");
	lua_pushnumber(L,wxLANGUAGE_LAOTHIAN); lua_setfield(L,-2,"wxLANGUAGE_LAOTHIAN");
	lua_pushnumber(L,wxLANGUAGE_LATIN); lua_setfield(L,-2,"wxLANGUAGE_LATIN");
	lua_pushnumber(L,wxLANGUAGE_LATVIAN); lua_setfield(L,-2,"wxLANGUAGE_LATVIAN");
	lua_pushnumber(L,wxLANGUAGE_LINGALA); lua_setfield(L,-2,"wxLANGUAGE_LINGALA");
	lua_pushnumber(L,wxLANGUAGE_LITHUANIAN); lua_setfield(L,-2,"wxLANGUAGE_LITHUANIAN");
	lua_pushnumber(L,wxLANGUAGE_MACEDONIAN); lua_setfield(L,-2,"wxLANGUAGE_MACEDONIAN");
	lua_pushnumber(L,wxLANGUAGE_MALAGASY); lua_setfield(L,-2,"wxLANGUAGE_MALAGASY");
	lua_pushnumber(L,wxLANGUAGE_MALAY); lua_setfield(L,-2,"wxLANGUAGE_MALAY");
	lua_pushnumber(L,wxLANGUAGE_MALAYALAM); lua_setfield(L,-2,"wxLANGUAGE_MALAYALAM");
	lua_pushnumber(L,wxLANGUAGE_MALAY_BRUNEI_DARUSSALAM); lua_setfield(L,-2,"wxLANGUAGE_MALAY_BRUNEI_DARUSSALAM");
	lua_pushnumber(L,wxLANGUAGE_MALAY_MALAYSIA); lua_setfield(L,-2,"wxLANGUAGE_MALAY_MALAYSIA");
	lua_pushnumber(L,wxLANGUAGE_MALTESE); lua_setfield(L,-2,"wxLANGUAGE_MALTESE");
	lua_pushnumber(L,wxLANGUAGE_MANIPURI); lua_setfield(L,-2,"wxLANGUAGE_MANIPURI");
	lua_pushnumber(L,wxLANGUAGE_MAORI); lua_setfield(L,-2,"wxLANGUAGE_MAORI");
	lua_pushnumber(L,wxLANGUAGE_MARATHI); lua_setfield(L,-2,"wxLANGUAGE_MARATHI");
	lua_pushnumber(L,wxLANGUAGE_MOLDAVIAN); lua_setfield(L,-2,"wxLANGUAGE_MOLDAVIAN");
	lua_pushnumber(L,wxLANGUAGE_MONGOLIAN); lua_setfield(L,-2,"wxLANGUAGE_MONGOLIAN");
	lua_pushnumber(L,wxLANGUAGE_NAURU); lua_setfield(L,-2,"wxLANGUAGE_NAURU");
	lua_pushnumber(L,wxLANGUAGE_NEPALI); lua_setfield(L,-2,"wxLANGUAGE_NEPALI");
	lua_pushnumber(L,wxLANGUAGE_NEPALI_INDIA); lua_setfield(L,-2,"wxLANGUAGE_NEPALI_INDIA");
	lua_pushnumber(L,wxLANGUAGE_NORWEGIAN_BOKMAL); lua_setfield(L,-2,"wxLANGUAGE_NORWEGIAN_BOKMAL");
	lua_pushnumber(L,wxLANGUAGE_NORWEGIAN_NYNORSK); lua_setfield(L,-2,"wxLANGUAGE_NORWEGIAN_NYNORSK");
	lua_pushnumber(L,wxLANGUAGE_OCCITAN); lua_setfield(L,-2,"wxLANGUAGE_OCCITAN");
	lua_pushnumber(L,wxLANGUAGE_ORIYA); lua_setfield(L,-2,"wxLANGUAGE_ORIYA");
	lua_pushnumber(L,wxLANGUAGE_OROMO); lua_setfield(L,-2,"wxLANGUAGE_OROMO");
	lua_pushnumber(L,wxLANGUAGE_PASHTO); lua_setfield(L,-2,"wxLANGUAGE_PASHTO");
	lua_pushnumber(L,wxLANGUAGE_POLISH); lua_setfield(L,-2,"wxLANGUAGE_POLISH");
	lua_pushnumber(L,wxLANGUAGE_PORTUGUESE); lua_setfield(L,-2,"wxLANGUAGE_PORTUGUESE");
	lua_pushnumber(L,wxLANGUAGE_PORTUGUESE_BRAZILIAN); lua_setfield(L,-2,"wxLANGUAGE_PORTUGUESE_BRAZILIAN");
	lua_pushnumber(L,wxLANGUAGE_PUNJABI); lua_setfield(L,-2,"wxLANGUAGE_PUNJABI");
	lua_pushnumber(L,wxLANGUAGE_QUECHUA); lua_setfield(L,-2,"wxLANGUAGE_QUECHUA");
	lua_pushnumber(L,wxLANGUAGE_RHAETO_ROMANCE); lua_setfield(L,-2,"wxLANGUAGE_RHAETO_ROMANCE");
	lua_pushnumber(L,wxLANGUAGE_ROMANIAN); lua_setfield(L,-2,"wxLANGUAGE_ROMANIAN");
	lua_pushnumber(L,wxLANGUAGE_RUSSIAN); lua_setfield(L,-2,"wxLANGUAGE_RUSSIAN");
	lua_pushnumber(L,wxLANGUAGE_RUSSIAN_UKRAINE); lua_setfield(L,-2,"wxLANGUAGE_RUSSIAN_UKRAINE");
	lua_pushnumber(L,wxLANGUAGE_SAMI); lua_setfield(L,-2,"wxLANGUAGE_SAMI");
	lua_pushnumber(L,wxLANGUAGE_SAMOAN); lua_setfield(L,-2,"wxLANGUAGE_SAMOAN");
	lua_pushnumber(L,wxLANGUAGE_SANGHO); lua_setfield(L,-2,"wxLANGUAGE_SANGHO");
	lua_pushnumber(L,wxLANGUAGE_SANSKRIT); lua_setfield(L,-2,"wxLANGUAGE_SANSKRIT");
	lua_pushnumber(L,wxLANGUAGE_SCOTS_GAELIC); lua_setfield(L,-2,"wxLANGUAGE_SCOTS_GAELIC");
	lua_pushnumber(L,wxLANGUAGE_SERBIAN); lua_setfield(L,-2,"wxLANGUAGE_SERBIAN");
	lua_pushnumber(L,wxLANGUAGE_SERBIAN_CYRILLIC); lua_setfield(L,-2,"wxLANGUAGE_SERBIAN_CYRILLIC");
	lua_pushnumber(L,wxLANGUAGE_SERBIAN_LATIN); lua_setfield(L,-2,"wxLANGUAGE_SERBIAN_LATIN");
	lua_pushnumber(L,wxLANGUAGE_SERBO_CROATIAN); lua_setfield(L,-2,"wxLANGUAGE_SERBO_CROATIAN");
	lua_pushnumber(L,wxLANGUAGE_SESOTHO); lua_setfield(L,-2,"wxLANGUAGE_SESOTHO");
	lua_pushnumber(L,wxLANGUAGE_SETSWANA); lua_setfield(L,-2,"wxLANGUAGE_SETSWANA");
	lua_pushnumber(L,wxLANGUAGE_SHONA); lua_setfield(L,-2,"wxLANGUAGE_SHONA");
	lua_pushnumber(L,wxLANGUAGE_SINDHI); lua_setfield(L,-2,"wxLANGUAGE_SINDHI");
	lua_pushnumber(L,wxLANGUAGE_SINHALESE); lua_setfield(L,-2,"wxLANGUAGE_SINHALESE");
	lua_pushnumber(L,wxLANGUAGE_SISWATI); lua_setfield(L,-2,"wxLANGUAGE_SISWATI");
	lua_pushnumber(L,wxLANGUAGE_SLOVAK); lua_setfield(L,-2,"wxLANGUAGE_SLOVAK");
	lua_pushnumber(L,wxLANGUAGE_SLOVENIAN); lua_setfield(L,-2,"wxLANGUAGE_SLOVENIAN");
	lua_pushnumber(L,wxLANGUAGE_SOMALI); lua_setfield(L,-2,"wxLANGUAGE_SOMALI");
	lua_pushnumber(L,wxLANGUAGE_SPANISH); lua_setfield(L,-2,"wxLANGUAGE_SPANISH");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_ARGENTINA); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_ARGENTINA");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_BOLIVIA); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_BOLIVIA");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_CHILE); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_CHILE");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_COLOMBIA); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_COLOMBIA");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_COSTA_RICA); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_COSTA_RICA");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_DOMINICAN_REPUBLIC); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_DOMINICAN_REPUBLIC");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_ECUADOR); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_ECUADOR");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_EL_SALVADOR); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_EL_SALVADOR");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_GUATEMALA); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_GUATEMALA");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_HONDURAS); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_HONDURAS");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_MEXICAN); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_MEXICAN");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_MODERN); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_MODERN");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_NICARAGUA); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_NICARAGUA");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_PANAMA); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_PANAMA");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_PARAGUAY); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_PARAGUAY");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_PERU); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_PERU");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_PUERTO_RICO); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_PUERTO_RICO");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_URUGUAY); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_URUGUAY");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_US); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_US");
	lua_pushnumber(L,wxLANGUAGE_SPANISH_VENEZUELA); lua_setfield(L,-2,"wxLANGUAGE_SPANISH_VENEZUELA");
	lua_pushnumber(L,wxLANGUAGE_SUNDANESE); lua_setfield(L,-2,"wxLANGUAGE_SUNDANESE");
	lua_pushnumber(L,wxLANGUAGE_SWAHILI); lua_setfield(L,-2,"wxLANGUAGE_SWAHILI");
	lua_pushnumber(L,wxLANGUAGE_SWEDISH); lua_setfield(L,-2,"wxLANGUAGE_SWEDISH");
	lua_pushnumber(L,wxLANGUAGE_SWEDISH_FINLAND); lua_setfield(L,-2,"wxLANGUAGE_SWEDISH_FINLAND");
	lua_pushnumber(L,wxLANGUAGE_TAGALOG); lua_setfield(L,-2,"wxLANGUAGE_TAGALOG");
	lua_pushnumber(L,wxLANGUAGE_TAJIK); lua_setfield(L,-2,"wxLANGUAGE_TAJIK");
	lua_pushnumber(L,wxLANGUAGE_TAMIL); lua_setfield(L,-2,"wxLANGUAGE_TAMIL");
	lua_pushnumber(L,wxLANGUAGE_TATAR); lua_setfield(L,-2,"wxLANGUAGE_TATAR");
	lua_pushnumber(L,wxLANGUAGE_TELUGU); lua_setfield(L,-2,"wxLANGUAGE_TELUGU");
	lua_pushnumber(L,wxLANGUAGE_THAI); lua_setfield(L,-2,"wxLANGUAGE_THAI");
	lua_pushnumber(L,wxLANGUAGE_TIBETAN); lua_setfield(L,-2,"wxLANGUAGE_TIBETAN");
	lua_pushnumber(L,wxLANGUAGE_TIGRINYA); lua_setfield(L,-2,"wxLANGUAGE_TIGRINYA");
	lua_pushnumber(L,wxLANGUAGE_TONGA); lua_setfield(L,-2,"wxLANGUAGE_TONGA");
	lua_pushnumber(L,wxLANGUAGE_TSONGA); lua_setfield(L,-2,"wxLANGUAGE_TSONGA");
	lua_pushnumber(L,wxLANGUAGE_TURKISH); lua_setfield(L,-2,"wxLANGUAGE_TURKISH");
	lua_pushnumber(L,wxLANGUAGE_TURKMEN); lua_setfield(L,-2,"wxLANGUAGE_TURKMEN");
	lua_pushnumber(L,wxLANGUAGE_TWI); lua_setfield(L,-2,"wxLANGUAGE_TWI");
	lua_pushnumber(L,wxLANGUAGE_UIGHUR); lua_setfield(L,-2,"wxLANGUAGE_UIGHUR");
	lua_pushnumber(L,wxLANGUAGE_UKRAINIAN); lua_setfield(L,-2,"wxLANGUAGE_UKRAINIAN");
	lua_pushnumber(L,wxLANGUAGE_URDU); lua_setfield(L,-2,"wxLANGUAGE_URDU");
	lua_pushnumber(L,wxLANGUAGE_URDU_INDIA); lua_setfield(L,-2,"wxLANGUAGE_URDU_INDIA");
	lua_pushnumber(L,wxLANGUAGE_URDU_PAKISTAN); lua_setfield(L,-2,"wxLANGUAGE_URDU_PAKISTAN");
	lua_pushnumber(L,wxLANGUAGE_UZBEK); lua_setfield(L,-2,"wxLANGUAGE_UZBEK");
	lua_pushnumber(L,wxLANGUAGE_UZBEK_CYRILLIC); lua_setfield(L,-2,"wxLANGUAGE_UZBEK_CYRILLIC");
	lua_pushnumber(L,wxLANGUAGE_UZBEK_LATIN); lua_setfield(L,-2,"wxLANGUAGE_UZBEK_LATIN");
	lua_pushnumber(L,wxLANGUAGE_VALENCIAN); lua_setfield(L,-2,"wxLANGUAGE_VALENCIAN");
	lua_pushnumber(L,wxLANGUAGE_VIETNAMESE); lua_setfield(L,-2,"wxLANGUAGE_VIETNAMESE");
	lua_pushnumber(L,wxLANGUAGE_VOLAPUK); lua_setfield(L,-2,"wxLANGUAGE_VOLAPUK");
	lua_pushnumber(L,wxLANGUAGE_WELSH); lua_setfield(L,-2,"wxLANGUAGE_WELSH");
	lua_pushnumber(L,wxLANGUAGE_WOLOF); lua_setfield(L,-2,"wxLANGUAGE_WOLOF");
	lua_pushnumber(L,wxLANGUAGE_XHOSA); lua_setfield(L,-2,"wxLANGUAGE_XHOSA");
	lua_pushnumber(L,wxLANGUAGE_YIDDISH); lua_setfield(L,-2,"wxLANGUAGE_YIDDISH");
	lua_pushnumber(L,wxLANGUAGE_YORUBA); lua_setfield(L,-2,"wxLANGUAGE_YORUBA");
	lua_pushnumber(L,wxLANGUAGE_ZHUANG); lua_setfield(L,-2,"wxLANGUAGE_ZHUANG");
	lua_pushnumber(L,wxLANGUAGE_ZULU); lua_setfield(L,-2,"wxLANGUAGE_ZULU");
	lua_pushnumber(L,wxLANGUAGE_USER_DEFINED); lua_setfield(L,-2,"wxLANGUAGE_USER_DEFINED");


	lua_newtable(L); // enum wxEdge

	lua_pushnumber(L,wxLeft); lua_setfield(L,-2,"wxLeft");
	lua_pushnumber(L,wxTop); lua_setfield(L,-2,"wxTop");
	lua_pushnumber(L,wxRight); lua_setfield(L,-2,"wxRight");
	lua_pushnumber(L,wxBottom); lua_setfield(L,-2,"wxBottom");
	lua_pushnumber(L,wxWidth); lua_setfield(L,-2,"wxWidth");
	lua_pushnumber(L,wxHeight); lua_setfield(L,-2,"wxHeight");
	lua_pushnumber(L,wxCentre); lua_setfield(L,-2,"wxCentre");
	lua_pushnumber(L,wxCenter); lua_setfield(L,-2,"wxCenter");
	lua_pushnumber(L,wxCentreX); lua_setfield(L,-2,"wxCentreX");
	lua_pushnumber(L,wxCentreY); lua_setfield(L,-2,"wxCentreY");

	lua_setfield(L,-2,"wxEdge");

	lua_pushnumber(L,wxLeft); lua_setfield(L,-2,"wxLeft");
	lua_pushnumber(L,wxTop); lua_setfield(L,-2,"wxTop");
	lua_pushnumber(L,wxRight); lua_setfield(L,-2,"wxRight");
	lua_pushnumber(L,wxBottom); lua_setfield(L,-2,"wxBottom");
	lua_pushnumber(L,wxWidth); lua_setfield(L,-2,"wxWidth");
	lua_pushnumber(L,wxHeight); lua_setfield(L,-2,"wxHeight");
	lua_pushnumber(L,wxCentre); lua_setfield(L,-2,"wxCentre");
	lua_pushnumber(L,wxCenter); lua_setfield(L,-2,"wxCenter");
	lua_pushnumber(L,wxCentreX); lua_setfield(L,-2,"wxCentreX");
	lua_pushnumber(L,wxCentreY); lua_setfield(L,-2,"wxCentreY");


	lua_newtable(L); // enum wxRelationship

	lua_pushnumber(L,wxUnconstrained); lua_setfield(L,-2,"wxUnconstrained");
	lua_pushnumber(L,wxAsIs); lua_setfield(L,-2,"wxAsIs");
	lua_pushnumber(L,wxPercentOf); lua_setfield(L,-2,"wxPercentOf");
	lua_pushnumber(L,wxAbove); lua_setfield(L,-2,"wxAbove");
	lua_pushnumber(L,wxBelow); lua_setfield(L,-2,"wxBelow");
	lua_pushnumber(L,wxLeftOf); lua_setfield(L,-2,"wxLeftOf");
	lua_pushnumber(L,wxRightOf); lua_setfield(L,-2,"wxRightOf");
	lua_pushnumber(L,wxSameAs); lua_setfield(L,-2,"wxSameAs");
	lua_pushnumber(L,wxAbsolute); lua_setfield(L,-2,"wxAbsolute");

	lua_setfield(L,-2,"wxRelationship");

	lua_pushnumber(L,wxUnconstrained); lua_setfield(L,-2,"wxUnconstrained");
	lua_pushnumber(L,wxAsIs); lua_setfield(L,-2,"wxAsIs");
	lua_pushnumber(L,wxPercentOf); lua_setfield(L,-2,"wxPercentOf");
	lua_pushnumber(L,wxAbove); lua_setfield(L,-2,"wxAbove");
	lua_pushnumber(L,wxBelow); lua_setfield(L,-2,"wxBelow");
	lua_pushnumber(L,wxLeftOf); lua_setfield(L,-2,"wxLeftOf");
	lua_pushnumber(L,wxRightOf); lua_setfield(L,-2,"wxRightOf");
	lua_pushnumber(L,wxSameAs); lua_setfield(L,-2,"wxSameAs");
	lua_pushnumber(L,wxAbsolute); lua_setfield(L,-2,"wxAbsolute");


	lua_newtable(L); // enum wxLayoutOrientation

	lua_pushnumber(L,wxLAYOUT_HORIZONTAL); lua_setfield(L,-2,"wxLAYOUT_HORIZONTAL");
	lua_pushnumber(L,wxLAYOUT_VERTICAL); lua_setfield(L,-2,"wxLAYOUT_VERTICAL");

	lua_setfield(L,-2,"wxLayoutOrientation");

	lua_pushnumber(L,wxLAYOUT_HORIZONTAL); lua_setfield(L,-2,"wxLAYOUT_HORIZONTAL");
	lua_pushnumber(L,wxLAYOUT_VERTICAL); lua_setfield(L,-2,"wxLAYOUT_VERTICAL");


	lua_newtable(L); // enum wxLayoutAlignment

	lua_pushnumber(L,wxLAYOUT_NONE); lua_setfield(L,-2,"wxLAYOUT_NONE");
	lua_pushnumber(L,wxLAYOUT_TOP); lua_setfield(L,-2,"wxLAYOUT_TOP");
	lua_pushnumber(L,wxLAYOUT_LEFT); lua_setfield(L,-2,"wxLAYOUT_LEFT");
	lua_pushnumber(L,wxLAYOUT_RIGHT); lua_setfield(L,-2,"wxLAYOUT_RIGHT");
	lua_pushnumber(L,wxLAYOUT_BOTTOM); lua_setfield(L,-2,"wxLAYOUT_BOTTOM");

	lua_setfield(L,-2,"wxLayoutAlignment");

	lua_pushnumber(L,wxLAYOUT_NONE); lua_setfield(L,-2,"wxLAYOUT_NONE");
	lua_pushnumber(L,wxLAYOUT_TOP); lua_setfield(L,-2,"wxLAYOUT_TOP");
	lua_pushnumber(L,wxLAYOUT_LEFT); lua_setfield(L,-2,"wxLAYOUT_LEFT");
	lua_pushnumber(L,wxLAYOUT_RIGHT); lua_setfield(L,-2,"wxLAYOUT_RIGHT");
	lua_pushnumber(L,wxLAYOUT_BOTTOM); lua_setfield(L,-2,"wxLAYOUT_BOTTOM");


	lua_newtable(L); // enum wxListColumnFormat

	lua_pushnumber(L,wxLIST_FORMAT_LEFT); lua_setfield(L,-2,"wxLIST_FORMAT_LEFT");
	lua_pushnumber(L,wxLIST_FORMAT_RIGHT); lua_setfield(L,-2,"wxLIST_FORMAT_RIGHT");
	lua_pushnumber(L,wxLIST_FORMAT_CENTRE); lua_setfield(L,-2,"wxLIST_FORMAT_CENTRE");
	lua_pushnumber(L,wxLIST_FORMAT_CENTER); lua_setfield(L,-2,"wxLIST_FORMAT_CENTER");

	lua_setfield(L,-2,"wxListColumnFormat");

	lua_pushnumber(L,wxLIST_FORMAT_LEFT); lua_setfield(L,-2,"wxLIST_FORMAT_LEFT");
	lua_pushnumber(L,wxLIST_FORMAT_RIGHT); lua_setfield(L,-2,"wxLIST_FORMAT_RIGHT");
	lua_pushnumber(L,wxLIST_FORMAT_CENTRE); lua_setfield(L,-2,"wxLIST_FORMAT_CENTRE");
	lua_pushnumber(L,wxLIST_FORMAT_CENTER); lua_setfield(L,-2,"wxLIST_FORMAT_CENTER");


	lua_newtable(L); // enum wxLogLevelValues

	lua_pushnumber(L,wxLOG_FatalError); lua_setfield(L,-2,"wxLOG_FatalError");
	lua_pushnumber(L,wxLOG_Error); lua_setfield(L,-2,"wxLOG_Error");
	lua_pushnumber(L,wxLOG_Warning); lua_setfield(L,-2,"wxLOG_Warning");
	lua_pushnumber(L,wxLOG_Message); lua_setfield(L,-2,"wxLOG_Message");
	lua_pushnumber(L,wxLOG_Status); lua_setfield(L,-2,"wxLOG_Status");
	lua_pushnumber(L,wxLOG_Info); lua_setfield(L,-2,"wxLOG_Info");
	lua_pushnumber(L,wxLOG_Debug); lua_setfield(L,-2,"wxLOG_Debug");
	lua_pushnumber(L,wxLOG_Trace); lua_setfield(L,-2,"wxLOG_Trace");
	lua_pushnumber(L,wxLOG_Progress); lua_setfield(L,-2,"wxLOG_Progress");
	lua_pushnumber(L,wxLOG_User); lua_setfield(L,-2,"wxLOG_User");
	lua_pushnumber(L,wxLOG_Max); lua_setfield(L,-2,"wxLOG_Max");

	lua_setfield(L,-2,"wxLogLevelValues");

	lua_pushnumber(L,wxLOG_FatalError); lua_setfield(L,-2,"wxLOG_FatalError");
	lua_pushnumber(L,wxLOG_Error); lua_setfield(L,-2,"wxLOG_Error");
	lua_pushnumber(L,wxLOG_Warning); lua_setfield(L,-2,"wxLOG_Warning");
	lua_pushnumber(L,wxLOG_Message); lua_setfield(L,-2,"wxLOG_Message");
	lua_pushnumber(L,wxLOG_Status); lua_setfield(L,-2,"wxLOG_Status");
	lua_pushnumber(L,wxLOG_Info); lua_setfield(L,-2,"wxLOG_Info");
	lua_pushnumber(L,wxLOG_Debug); lua_setfield(L,-2,"wxLOG_Debug");
	lua_pushnumber(L,wxLOG_Trace); lua_setfield(L,-2,"wxLOG_Trace");
	lua_pushnumber(L,wxLOG_Progress); lua_setfield(L,-2,"wxLOG_Progress");
	lua_pushnumber(L,wxLOG_User); lua_setfield(L,-2,"wxLOG_User");
	lua_pushnumber(L,wxLOG_Max); lua_setfield(L,-2,"wxLOG_Max");


	lua_newtable(L); // enum wxMediaCtrlPlayerControls

	lua_pushnumber(L,wxMEDIACTRLPLAYERCONTROLS_NONE); lua_setfield(L,-2,"wxMEDIACTRLPLAYERCONTROLS_NONE");
	lua_pushnumber(L,wxMEDIACTRLPLAYERCONTROLS_STEP); lua_setfield(L,-2,"wxMEDIACTRLPLAYERCONTROLS_STEP");
	lua_pushnumber(L,wxMEDIACTRLPLAYERCONTROLS_VOLUME); lua_setfield(L,-2,"wxMEDIACTRLPLAYERCONTROLS_VOLUME");
	lua_pushnumber(L,wxMEDIACTRLPLAYERCONTROLS_DEFAULT); lua_setfield(L,-2,"wxMEDIACTRLPLAYERCONTROLS_DEFAULT");

	lua_setfield(L,-2,"wxMediaCtrlPlayerControls");

	lua_pushnumber(L,wxMEDIACTRLPLAYERCONTROLS_NONE); lua_setfield(L,-2,"wxMEDIACTRLPLAYERCONTROLS_NONE");
	lua_pushnumber(L,wxMEDIACTRLPLAYERCONTROLS_STEP); lua_setfield(L,-2,"wxMEDIACTRLPLAYERCONTROLS_STEP");
	lua_pushnumber(L,wxMEDIACTRLPLAYERCONTROLS_VOLUME); lua_setfield(L,-2,"wxMEDIACTRLPLAYERCONTROLS_VOLUME");
	lua_pushnumber(L,wxMEDIACTRLPLAYERCONTROLS_DEFAULT); lua_setfield(L,-2,"wxMEDIACTRLPLAYERCONTROLS_DEFAULT");


	lua_newtable(L); // enum wxMouseButton

	lua_pushnumber(L,wxMOUSE_BTN_ANY); lua_setfield(L,-2,"wxMOUSE_BTN_ANY");
	lua_pushnumber(L,wxMOUSE_BTN_NONE); lua_setfield(L,-2,"wxMOUSE_BTN_NONE");
	lua_pushnumber(L,wxMOUSE_BTN_LEFT); lua_setfield(L,-2,"wxMOUSE_BTN_LEFT");
	lua_pushnumber(L,wxMOUSE_BTN_MIDDLE); lua_setfield(L,-2,"wxMOUSE_BTN_MIDDLE");
	lua_pushnumber(L,wxMOUSE_BTN_RIGHT); lua_setfield(L,-2,"wxMOUSE_BTN_RIGHT");
	lua_pushnumber(L,wxMOUSE_BTN_AUX1); lua_setfield(L,-2,"wxMOUSE_BTN_AUX1");
	lua_pushnumber(L,wxMOUSE_BTN_AUX2); lua_setfield(L,-2,"wxMOUSE_BTN_AUX2");
	lua_pushnumber(L,wxMOUSE_BTN_MAX); lua_setfield(L,-2,"wxMOUSE_BTN_MAX");

	lua_setfield(L,-2,"wxMouseButton");

	lua_pushnumber(L,wxMOUSE_BTN_ANY); lua_setfield(L,-2,"wxMOUSE_BTN_ANY");
	lua_pushnumber(L,wxMOUSE_BTN_NONE); lua_setfield(L,-2,"wxMOUSE_BTN_NONE");
	lua_pushnumber(L,wxMOUSE_BTN_LEFT); lua_setfield(L,-2,"wxMOUSE_BTN_LEFT");
	lua_pushnumber(L,wxMOUSE_BTN_MIDDLE); lua_setfield(L,-2,"wxMOUSE_BTN_MIDDLE");
	lua_pushnumber(L,wxMOUSE_BTN_RIGHT); lua_setfield(L,-2,"wxMOUSE_BTN_RIGHT");
	lua_pushnumber(L,wxMOUSE_BTN_AUX1); lua_setfield(L,-2,"wxMOUSE_BTN_AUX1");
	lua_pushnumber(L,wxMOUSE_BTN_AUX2); lua_setfield(L,-2,"wxMOUSE_BTN_AUX2");
	lua_pushnumber(L,wxMOUSE_BTN_MAX); lua_setfield(L,-2,"wxMOUSE_BTN_MAX");


	lua_newtable(L); // enum wxMessageQueueError

	lua_pushnumber(L,wxMSGQUEUE_NO_ERROR); lua_setfield(L,-2,"wxMSGQUEUE_NO_ERROR");
	lua_pushnumber(L,wxMSGQUEUE_TIMEOUT); lua_setfield(L,-2,"wxMSGQUEUE_TIMEOUT");
	lua_pushnumber(L,wxMSGQUEUE_MISC_ERROR); lua_setfield(L,-2,"wxMSGQUEUE_MISC_ERROR");

	lua_setfield(L,-2,"wxMessageQueueError");

	lua_pushnumber(L,wxMSGQUEUE_NO_ERROR); lua_setfield(L,-2,"wxMSGQUEUE_NO_ERROR");
	lua_pushnumber(L,wxMSGQUEUE_TIMEOUT); lua_setfield(L,-2,"wxMSGQUEUE_TIMEOUT");
	lua_pushnumber(L,wxMSGQUEUE_MISC_ERROR); lua_setfield(L,-2,"wxMSGQUEUE_MISC_ERROR");


	lua_newtable(L); // enum unnamed_13

	lua_pushnumber(L,wxNB_HITTEST_NOWHERE); lua_setfield(L,-2,"wxNB_HITTEST_NOWHERE");
	lua_pushnumber(L,wxNB_HITTEST_ONICON); lua_setfield(L,-2,"wxNB_HITTEST_ONICON");
	lua_pushnumber(L,wxNB_HITTEST_ONLABEL); lua_setfield(L,-2,"wxNB_HITTEST_ONLABEL");
	lua_pushnumber(L,wxNB_HITTEST_ONITEM); lua_setfield(L,-2,"wxNB_HITTEST_ONITEM");
	lua_pushnumber(L,wxNB_HITTEST_ONPAGE); lua_setfield(L,-2,"wxNB_HITTEST_ONPAGE");

	lua_setfield(L,-2,"unnamed_13");

	lua_pushnumber(L,wxNB_HITTEST_NOWHERE); lua_setfield(L,-2,"wxNB_HITTEST_NOWHERE");
	lua_pushnumber(L,wxNB_HITTEST_ONICON); lua_setfield(L,-2,"wxNB_HITTEST_ONICON");
	lua_pushnumber(L,wxNB_HITTEST_ONLABEL); lua_setfield(L,-2,"wxNB_HITTEST_ONLABEL");
	lua_pushnumber(L,wxNB_HITTEST_ONITEM); lua_setfield(L,-2,"wxNB_HITTEST_ONITEM");
	lua_pushnumber(L,wxNB_HITTEST_ONPAGE); lua_setfield(L,-2,"wxNB_HITTEST_ONPAGE");


	lua_newtable(L); // enum wxOwnerDrawnComboBoxPaintingFlags

	lua_pushnumber(L,wxODCB_PAINTING_CONTROL); lua_setfield(L,-2,"wxODCB_PAINTING_CONTROL");
	lua_pushnumber(L,wxODCB_PAINTING_SELECTED); lua_setfield(L,-2,"wxODCB_PAINTING_SELECTED");

	lua_setfield(L,-2,"wxOwnerDrawnComboBoxPaintingFlags");

	lua_pushnumber(L,wxODCB_PAINTING_CONTROL); lua_setfield(L,-2,"wxODCB_PAINTING_CONTROL");
	lua_pushnumber(L,wxODCB_PAINTING_SELECTED); lua_setfield(L,-2,"wxODCB_PAINTING_SELECTED");


	lua_newtable(L); // enum wxPenStyle

	lua_pushnumber(L,wxPENSTYLE_INVALID); lua_setfield(L,-2,"wxPENSTYLE_INVALID");
	lua_pushnumber(L,wxPENSTYLE_SOLID); lua_setfield(L,-2,"wxPENSTYLE_SOLID");
	lua_pushnumber(L,wxPENSTYLE_DOT); lua_setfield(L,-2,"wxPENSTYLE_DOT");
	lua_pushnumber(L,wxPENSTYLE_LONG_DASH); lua_setfield(L,-2,"wxPENSTYLE_LONG_DASH");
	lua_pushnumber(L,wxPENSTYLE_SHORT_DASH); lua_setfield(L,-2,"wxPENSTYLE_SHORT_DASH");
	lua_pushnumber(L,wxPENSTYLE_DOT_DASH); lua_setfield(L,-2,"wxPENSTYLE_DOT_DASH");
	lua_pushnumber(L,wxPENSTYLE_USER_DASH); lua_setfield(L,-2,"wxPENSTYLE_USER_DASH");
	lua_pushnumber(L,wxPENSTYLE_TRANSPARENT); lua_setfield(L,-2,"wxPENSTYLE_TRANSPARENT");
	lua_pushnumber(L,wxPENSTYLE_STIPPLE_MASK_OPAQUE); lua_setfield(L,-2,"wxPENSTYLE_STIPPLE_MASK_OPAQUE");
	lua_pushnumber(L,wxPENSTYLE_STIPPLE_MASK); lua_setfield(L,-2,"wxPENSTYLE_STIPPLE_MASK");
	lua_pushnumber(L,wxPENSTYLE_STIPPLE); lua_setfield(L,-2,"wxPENSTYLE_STIPPLE");
	lua_pushnumber(L,wxPENSTYLE_BDIAGONAL_HATCH); lua_setfield(L,-2,"wxPENSTYLE_BDIAGONAL_HATCH");
	lua_pushnumber(L,wxPENSTYLE_CROSSDIAG_HATCH); lua_setfield(L,-2,"wxPENSTYLE_CROSSDIAG_HATCH");
	lua_pushnumber(L,wxPENSTYLE_FDIAGONAL_HATCH); lua_setfield(L,-2,"wxPENSTYLE_FDIAGONAL_HATCH");
	lua_pushnumber(L,wxPENSTYLE_CROSS_HATCH); lua_setfield(L,-2,"wxPENSTYLE_CROSS_HATCH");
	lua_pushnumber(L,wxPENSTYLE_HORIZONTAL_HATCH); lua_setfield(L,-2,"wxPENSTYLE_HORIZONTAL_HATCH");
	lua_pushnumber(L,wxPENSTYLE_VERTICAL_HATCH); lua_setfield(L,-2,"wxPENSTYLE_VERTICAL_HATCH");
	lua_pushnumber(L,wxPENSTYLE_FIRST_HATCH); lua_setfield(L,-2,"wxPENSTYLE_FIRST_HATCH");
	lua_pushnumber(L,wxPENSTYLE_LAST_HATCH); lua_setfield(L,-2,"wxPENSTYLE_LAST_HATCH");

	lua_setfield(L,-2,"wxPenStyle");

	lua_pushnumber(L,wxPENSTYLE_INVALID); lua_setfield(L,-2,"wxPENSTYLE_INVALID");
	lua_pushnumber(L,wxPENSTYLE_SOLID); lua_setfield(L,-2,"wxPENSTYLE_SOLID");
	lua_pushnumber(L,wxPENSTYLE_DOT); lua_setfield(L,-2,"wxPENSTYLE_DOT");
	lua_pushnumber(L,wxPENSTYLE_LONG_DASH); lua_setfield(L,-2,"wxPENSTYLE_LONG_DASH");
	lua_pushnumber(L,wxPENSTYLE_SHORT_DASH); lua_setfield(L,-2,"wxPENSTYLE_SHORT_DASH");
	lua_pushnumber(L,wxPENSTYLE_DOT_DASH); lua_setfield(L,-2,"wxPENSTYLE_DOT_DASH");
	lua_pushnumber(L,wxPENSTYLE_USER_DASH); lua_setfield(L,-2,"wxPENSTYLE_USER_DASH");
	lua_pushnumber(L,wxPENSTYLE_TRANSPARENT); lua_setfield(L,-2,"wxPENSTYLE_TRANSPARENT");
	lua_pushnumber(L,wxPENSTYLE_STIPPLE_MASK_OPAQUE); lua_setfield(L,-2,"wxPENSTYLE_STIPPLE_MASK_OPAQUE");
	lua_pushnumber(L,wxPENSTYLE_STIPPLE_MASK); lua_setfield(L,-2,"wxPENSTYLE_STIPPLE_MASK");
	lua_pushnumber(L,wxPENSTYLE_STIPPLE); lua_setfield(L,-2,"wxPENSTYLE_STIPPLE");
	lua_pushnumber(L,wxPENSTYLE_BDIAGONAL_HATCH); lua_setfield(L,-2,"wxPENSTYLE_BDIAGONAL_HATCH");
	lua_pushnumber(L,wxPENSTYLE_CROSSDIAG_HATCH); lua_setfield(L,-2,"wxPENSTYLE_CROSSDIAG_HATCH");
	lua_pushnumber(L,wxPENSTYLE_FDIAGONAL_HATCH); lua_setfield(L,-2,"wxPENSTYLE_FDIAGONAL_HATCH");
	lua_pushnumber(L,wxPENSTYLE_CROSS_HATCH); lua_setfield(L,-2,"wxPENSTYLE_CROSS_HATCH");
	lua_pushnumber(L,wxPENSTYLE_HORIZONTAL_HATCH); lua_setfield(L,-2,"wxPENSTYLE_HORIZONTAL_HATCH");
	lua_pushnumber(L,wxPENSTYLE_VERTICAL_HATCH); lua_setfield(L,-2,"wxPENSTYLE_VERTICAL_HATCH");
	lua_pushnumber(L,wxPENSTYLE_FIRST_HATCH); lua_setfield(L,-2,"wxPENSTYLE_FIRST_HATCH");
	lua_pushnumber(L,wxPENSTYLE_LAST_HATCH); lua_setfield(L,-2,"wxPENSTYLE_LAST_HATCH");


	lua_newtable(L); // enum wxPenJoin

	lua_pushnumber(L,wxJOIN_INVALID); lua_setfield(L,-2,"wxJOIN_INVALID");
	lua_pushnumber(L,wxJOIN_BEVEL); lua_setfield(L,-2,"wxJOIN_BEVEL");
	lua_pushnumber(L,wxJOIN_MITER); lua_setfield(L,-2,"wxJOIN_MITER");
	lua_pushnumber(L,wxJOIN_ROUND); lua_setfield(L,-2,"wxJOIN_ROUND");

	lua_setfield(L,-2,"wxPenJoin");

	lua_pushnumber(L,wxJOIN_INVALID); lua_setfield(L,-2,"wxJOIN_INVALID");
	lua_pushnumber(L,wxJOIN_BEVEL); lua_setfield(L,-2,"wxJOIN_BEVEL");
	lua_pushnumber(L,wxJOIN_MITER); lua_setfield(L,-2,"wxJOIN_MITER");
	lua_pushnumber(L,wxJOIN_ROUND); lua_setfield(L,-2,"wxJOIN_ROUND");


	lua_newtable(L); // enum wxPenCap

	lua_pushnumber(L,wxCAP_INVALID); lua_setfield(L,-2,"wxCAP_INVALID");
	lua_pushnumber(L,wxCAP_ROUND); lua_setfield(L,-2,"wxCAP_ROUND");
	lua_pushnumber(L,wxCAP_PROJECTING); lua_setfield(L,-2,"wxCAP_PROJECTING");
	lua_pushnumber(L,wxCAP_BUTT); lua_setfield(L,-2,"wxCAP_BUTT");

	lua_setfield(L,-2,"wxPenCap");

	lua_pushnumber(L,wxCAP_INVALID); lua_setfield(L,-2,"wxCAP_INVALID");
	lua_pushnumber(L,wxCAP_ROUND); lua_setfield(L,-2,"wxCAP_ROUND");
	lua_pushnumber(L,wxCAP_PROJECTING); lua_setfield(L,-2,"wxCAP_PROJECTING");
	lua_pushnumber(L,wxCAP_BUTT); lua_setfield(L,-2,"wxCAP_BUTT");


	lua_newtable(L); // enum wxOperatingSystemId

	lua_pushnumber(L,wxOS_UNKNOWN); lua_setfield(L,-2,"wxOS_UNKNOWN");
	lua_pushnumber(L,wxOS_MAC_OS); lua_setfield(L,-2,"wxOS_MAC_OS");
	lua_pushnumber(L,wxOS_MAC_OSX_DARWIN); lua_setfield(L,-2,"wxOS_MAC_OSX_DARWIN");
	lua_pushnumber(L,wxOS_MAC); lua_setfield(L,-2,"wxOS_MAC");
	lua_pushnumber(L,wxOS_WINDOWS_9X); lua_setfield(L,-2,"wxOS_WINDOWS_9X");
	lua_pushnumber(L,wxOS_WINDOWS_NT); lua_setfield(L,-2,"wxOS_WINDOWS_NT");
	lua_pushnumber(L,wxOS_WINDOWS_MICRO); lua_setfield(L,-2,"wxOS_WINDOWS_MICRO");
	lua_pushnumber(L,wxOS_WINDOWS_CE); lua_setfield(L,-2,"wxOS_WINDOWS_CE");
	lua_pushnumber(L,wxOS_WINDOWS); lua_setfield(L,-2,"wxOS_WINDOWS");
	lua_pushnumber(L,wxOS_UNIX_LINUX); lua_setfield(L,-2,"wxOS_UNIX_LINUX");
	lua_pushnumber(L,wxOS_UNIX_FREEBSD); lua_setfield(L,-2,"wxOS_UNIX_FREEBSD");
	lua_pushnumber(L,wxOS_UNIX_OPENBSD); lua_setfield(L,-2,"wxOS_UNIX_OPENBSD");
	lua_pushnumber(L,wxOS_UNIX_NETBSD); lua_setfield(L,-2,"wxOS_UNIX_NETBSD");
	lua_pushnumber(L,wxOS_UNIX_SOLARIS); lua_setfield(L,-2,"wxOS_UNIX_SOLARIS");
	lua_pushnumber(L,wxOS_UNIX_AIX); lua_setfield(L,-2,"wxOS_UNIX_AIX");
	lua_pushnumber(L,wxOS_UNIX_HPUX); lua_setfield(L,-2,"wxOS_UNIX_HPUX");
	lua_pushnumber(L,wxOS_UNIX); lua_setfield(L,-2,"wxOS_UNIX");
	lua_pushnumber(L,wxOS_DOS); lua_setfield(L,-2,"wxOS_DOS");
	lua_pushnumber(L,wxOS_OS2); lua_setfield(L,-2,"wxOS_OS2");

	lua_setfield(L,-2,"wxOperatingSystemId");

	lua_pushnumber(L,wxOS_UNKNOWN); lua_setfield(L,-2,"wxOS_UNKNOWN");
	lua_pushnumber(L,wxOS_MAC_OS); lua_setfield(L,-2,"wxOS_MAC_OS");
	lua_pushnumber(L,wxOS_MAC_OSX_DARWIN); lua_setfield(L,-2,"wxOS_MAC_OSX_DARWIN");
	lua_pushnumber(L,wxOS_MAC); lua_setfield(L,-2,"wxOS_MAC");
	lua_pushnumber(L,wxOS_WINDOWS_9X); lua_setfield(L,-2,"wxOS_WINDOWS_9X");
	lua_pushnumber(L,wxOS_WINDOWS_NT); lua_setfield(L,-2,"wxOS_WINDOWS_NT");
	lua_pushnumber(L,wxOS_WINDOWS_MICRO); lua_setfield(L,-2,"wxOS_WINDOWS_MICRO");
	lua_pushnumber(L,wxOS_WINDOWS_CE); lua_setfield(L,-2,"wxOS_WINDOWS_CE");
	lua_pushnumber(L,wxOS_WINDOWS); lua_setfield(L,-2,"wxOS_WINDOWS");
	lua_pushnumber(L,wxOS_UNIX_LINUX); lua_setfield(L,-2,"wxOS_UNIX_LINUX");
	lua_pushnumber(L,wxOS_UNIX_FREEBSD); lua_setfield(L,-2,"wxOS_UNIX_FREEBSD");
	lua_pushnumber(L,wxOS_UNIX_OPENBSD); lua_setfield(L,-2,"wxOS_UNIX_OPENBSD");
	lua_pushnumber(L,wxOS_UNIX_NETBSD); lua_setfield(L,-2,"wxOS_UNIX_NETBSD");
	lua_pushnumber(L,wxOS_UNIX_SOLARIS); lua_setfield(L,-2,"wxOS_UNIX_SOLARIS");
	lua_pushnumber(L,wxOS_UNIX_AIX); lua_setfield(L,-2,"wxOS_UNIX_AIX");
	lua_pushnumber(L,wxOS_UNIX_HPUX); lua_setfield(L,-2,"wxOS_UNIX_HPUX");
	lua_pushnumber(L,wxOS_UNIX); lua_setfield(L,-2,"wxOS_UNIX");
	lua_pushnumber(L,wxOS_DOS); lua_setfield(L,-2,"wxOS_DOS");
	lua_pushnumber(L,wxOS_OS2); lua_setfield(L,-2,"wxOS_OS2");


	lua_newtable(L); // enum wxPortId

	lua_pushnumber(L,wxPORT_UNKNOWN); lua_setfield(L,-2,"wxPORT_UNKNOWN");
	lua_pushnumber(L,wxPORT_BASE); lua_setfield(L,-2,"wxPORT_BASE");
	lua_pushnumber(L,wxPORT_MSW); lua_setfield(L,-2,"wxPORT_MSW");
	lua_pushnumber(L,wxPORT_MOTIF); lua_setfield(L,-2,"wxPORT_MOTIF");
	lua_pushnumber(L,wxPORT_GTK); lua_setfield(L,-2,"wxPORT_GTK");
	lua_pushnumber(L,wxPORT_MGL); lua_setfield(L,-2,"wxPORT_MGL");
	lua_pushnumber(L,wxPORT_X11); lua_setfield(L,-2,"wxPORT_X11");
	lua_pushnumber(L,wxPORT_OS2); lua_setfield(L,-2,"wxPORT_OS2");
	lua_pushnumber(L,wxPORT_MAC); lua_setfield(L,-2,"wxPORT_MAC");
	lua_pushnumber(L,wxPORT_COCOA); lua_setfield(L,-2,"wxPORT_COCOA");
	lua_pushnumber(L,wxPORT_WINCE); lua_setfield(L,-2,"wxPORT_WINCE");
	lua_pushnumber(L,wxPORT_PALMOS); lua_setfield(L,-2,"wxPORT_PALMOS");
	lua_pushnumber(L,wxPORT_DFB); lua_setfield(L,-2,"wxPORT_DFB");

	lua_setfield(L,-2,"wxPortId");

	lua_pushnumber(L,wxPORT_UNKNOWN); lua_setfield(L,-2,"wxPORT_UNKNOWN");
	lua_pushnumber(L,wxPORT_BASE); lua_setfield(L,-2,"wxPORT_BASE");
	lua_pushnumber(L,wxPORT_MSW); lua_setfield(L,-2,"wxPORT_MSW");
	lua_pushnumber(L,wxPORT_MOTIF); lua_setfield(L,-2,"wxPORT_MOTIF");
	lua_pushnumber(L,wxPORT_GTK); lua_setfield(L,-2,"wxPORT_GTK");
	lua_pushnumber(L,wxPORT_MGL); lua_setfield(L,-2,"wxPORT_MGL");
	lua_pushnumber(L,wxPORT_X11); lua_setfield(L,-2,"wxPORT_X11");
	lua_pushnumber(L,wxPORT_OS2); lua_setfield(L,-2,"wxPORT_OS2");
	lua_pushnumber(L,wxPORT_MAC); lua_setfield(L,-2,"wxPORT_MAC");
	lua_pushnumber(L,wxPORT_COCOA); lua_setfield(L,-2,"wxPORT_COCOA");
	lua_pushnumber(L,wxPORT_WINCE); lua_setfield(L,-2,"wxPORT_WINCE");
	lua_pushnumber(L,wxPORT_PALMOS); lua_setfield(L,-2,"wxPORT_PALMOS");
	lua_pushnumber(L,wxPORT_DFB); lua_setfield(L,-2,"wxPORT_DFB");


	lua_newtable(L); // enum wxArchitecture

	lua_pushnumber(L,wxARCH_INVALID); lua_setfield(L,-2,"wxARCH_INVALID");
	lua_pushnumber(L,wxARCH_32); lua_setfield(L,-2,"wxARCH_32");
	lua_pushnumber(L,wxARCH_64); lua_setfield(L,-2,"wxARCH_64");
	lua_pushnumber(L,wxARCH_MAX); lua_setfield(L,-2,"wxARCH_MAX");

	lua_setfield(L,-2,"wxArchitecture");

	lua_pushnumber(L,wxARCH_INVALID); lua_setfield(L,-2,"wxARCH_INVALID");
	lua_pushnumber(L,wxARCH_32); lua_setfield(L,-2,"wxARCH_32");
	lua_pushnumber(L,wxARCH_64); lua_setfield(L,-2,"wxARCH_64");
	lua_pushnumber(L,wxARCH_MAX); lua_setfield(L,-2,"wxARCH_MAX");


	lua_newtable(L); // enum wxEndianness

	lua_pushnumber(L,wxENDIAN_INVALID); lua_setfield(L,-2,"wxENDIAN_INVALID");
	lua_pushnumber(L,wxENDIAN_BIG); lua_setfield(L,-2,"wxENDIAN_BIG");
	lua_pushnumber(L,wxENDIAN_LITTLE); lua_setfield(L,-2,"wxENDIAN_LITTLE");
	lua_pushnumber(L,wxENDIAN_PDP); lua_setfield(L,-2,"wxENDIAN_PDP");
	lua_pushnumber(L,wxENDIAN_MAX); lua_setfield(L,-2,"wxENDIAN_MAX");

	lua_setfield(L,-2,"wxEndianness");

	lua_pushnumber(L,wxENDIAN_INVALID); lua_setfield(L,-2,"wxENDIAN_INVALID");
	lua_pushnumber(L,wxENDIAN_BIG); lua_setfield(L,-2,"wxENDIAN_BIG");
	lua_pushnumber(L,wxENDIAN_LITTLE); lua_setfield(L,-2,"wxENDIAN_LITTLE");
	lua_pushnumber(L,wxENDIAN_PDP); lua_setfield(L,-2,"wxENDIAN_PDP");
	lua_pushnumber(L,wxENDIAN_MAX); lua_setfield(L,-2,"wxENDIAN_MAX");


	lua_newtable(L); // enum wxPowerType

	lua_pushnumber(L,wxPOWER_SOCKET); lua_setfield(L,-2,"wxPOWER_SOCKET");
	lua_pushnumber(L,wxPOWER_BATTERY); lua_setfield(L,-2,"wxPOWER_BATTERY");
	lua_pushnumber(L,wxPOWER_UNKNOWN); lua_setfield(L,-2,"wxPOWER_UNKNOWN");

	lua_setfield(L,-2,"wxPowerType");

	lua_pushnumber(L,wxPOWER_SOCKET); lua_setfield(L,-2,"wxPOWER_SOCKET");
	lua_pushnumber(L,wxPOWER_BATTERY); lua_setfield(L,-2,"wxPOWER_BATTERY");
	lua_pushnumber(L,wxPOWER_UNKNOWN); lua_setfield(L,-2,"wxPOWER_UNKNOWN");


	lua_newtable(L); // enum wxBatteryState

	lua_pushnumber(L,wxBATTERY_NORMAL_STATE); lua_setfield(L,-2,"wxBATTERY_NORMAL_STATE");
	lua_pushnumber(L,wxBATTERY_LOW_STATE); lua_setfield(L,-2,"wxBATTERY_LOW_STATE");
	lua_pushnumber(L,wxBATTERY_CRITICAL_STATE); lua_setfield(L,-2,"wxBATTERY_CRITICAL_STATE");
	lua_pushnumber(L,wxBATTERY_SHUTDOWN_STATE); lua_setfield(L,-2,"wxBATTERY_SHUTDOWN_STATE");
	lua_pushnumber(L,wxBATTERY_UNKNOWN_STATE); lua_setfield(L,-2,"wxBATTERY_UNKNOWN_STATE");

	lua_setfield(L,-2,"wxBatteryState");

	lua_pushnumber(L,wxBATTERY_NORMAL_STATE); lua_setfield(L,-2,"wxBATTERY_NORMAL_STATE");
	lua_pushnumber(L,wxBATTERY_LOW_STATE); lua_setfield(L,-2,"wxBATTERY_LOW_STATE");
	lua_pushnumber(L,wxBATTERY_CRITICAL_STATE); lua_setfield(L,-2,"wxBATTERY_CRITICAL_STATE");
	lua_pushnumber(L,wxBATTERY_SHUTDOWN_STATE); lua_setfield(L,-2,"wxBATTERY_SHUTDOWN_STATE");
	lua_pushnumber(L,wxBATTERY_UNKNOWN_STATE); lua_setfield(L,-2,"wxBATTERY_UNKNOWN_STATE");


	lua_newtable(L); // enum wxPreviewFrameModalityKind

	lua_pushnumber(L,wxPreviewFrame_AppModal); lua_setfield(L,-2,"wxPreviewFrame_AppModal");
	lua_pushnumber(L,wxPreviewFrame_WindowModal); lua_setfield(L,-2,"wxPreviewFrame_WindowModal");
	lua_pushnumber(L,wxPreviewFrame_NonModal); lua_setfield(L,-2,"wxPreviewFrame_NonModal");

	lua_setfield(L,-2,"wxPreviewFrameModalityKind");

	lua_pushnumber(L,wxPreviewFrame_AppModal); lua_setfield(L,-2,"wxPreviewFrame_AppModal");
	lua_pushnumber(L,wxPreviewFrame_WindowModal); lua_setfield(L,-2,"wxPreviewFrame_WindowModal");
	lua_pushnumber(L,wxPreviewFrame_NonModal); lua_setfield(L,-2,"wxPreviewFrame_NonModal");


	lua_newtable(L); // enum wxSignal

	lua_pushnumber(L,wxSIGNONE); lua_setfield(L,-2,"wxSIGNONE");
	lua_pushnumber(L,wxSIGHUP); lua_setfield(L,-2,"wxSIGHUP");
	lua_pushnumber(L,wxSIGINT); lua_setfield(L,-2,"wxSIGINT");
	lua_pushnumber(L,wxSIGQUIT); lua_setfield(L,-2,"wxSIGQUIT");
	lua_pushnumber(L,wxSIGILL); lua_setfield(L,-2,"wxSIGILL");
	lua_pushnumber(L,wxSIGTRAP); lua_setfield(L,-2,"wxSIGTRAP");
	lua_pushnumber(L,wxSIGABRT); lua_setfield(L,-2,"wxSIGABRT");
	lua_pushnumber(L,wxSIGEMT); lua_setfield(L,-2,"wxSIGEMT");
	lua_pushnumber(L,wxSIGFPE); lua_setfield(L,-2,"wxSIGFPE");
	lua_pushnumber(L,wxSIGKILL); lua_setfield(L,-2,"wxSIGKILL");
	lua_pushnumber(L,wxSIGBUS); lua_setfield(L,-2,"wxSIGBUS");
	lua_pushnumber(L,wxSIGSEGV); lua_setfield(L,-2,"wxSIGSEGV");
	lua_pushnumber(L,wxSIGSYS); lua_setfield(L,-2,"wxSIGSYS");
	lua_pushnumber(L,wxSIGPIPE); lua_setfield(L,-2,"wxSIGPIPE");
	lua_pushnumber(L,wxSIGALRM); lua_setfield(L,-2,"wxSIGALRM");
	lua_pushnumber(L,wxSIGTERM); lua_setfield(L,-2,"wxSIGTERM");

	lua_setfield(L,-2,"wxSignal");

	lua_pushnumber(L,wxSIGNONE); lua_setfield(L,-2,"wxSIGNONE");
	lua_pushnumber(L,wxSIGHUP); lua_setfield(L,-2,"wxSIGHUP");
	lua_pushnumber(L,wxSIGINT); lua_setfield(L,-2,"wxSIGINT");
	lua_pushnumber(L,wxSIGQUIT); lua_setfield(L,-2,"wxSIGQUIT");
	lua_pushnumber(L,wxSIGILL); lua_setfield(L,-2,"wxSIGILL");
	lua_pushnumber(L,wxSIGTRAP); lua_setfield(L,-2,"wxSIGTRAP");
	lua_pushnumber(L,wxSIGABRT); lua_setfield(L,-2,"wxSIGABRT");
	lua_pushnumber(L,wxSIGEMT); lua_setfield(L,-2,"wxSIGEMT");
	lua_pushnumber(L,wxSIGFPE); lua_setfield(L,-2,"wxSIGFPE");
	lua_pushnumber(L,wxSIGKILL); lua_setfield(L,-2,"wxSIGKILL");
	lua_pushnumber(L,wxSIGBUS); lua_setfield(L,-2,"wxSIGBUS");
	lua_pushnumber(L,wxSIGSEGV); lua_setfield(L,-2,"wxSIGSEGV");
	lua_pushnumber(L,wxSIGSYS); lua_setfield(L,-2,"wxSIGSYS");
	lua_pushnumber(L,wxSIGPIPE); lua_setfield(L,-2,"wxSIGPIPE");
	lua_pushnumber(L,wxSIGALRM); lua_setfield(L,-2,"wxSIGALRM");
	lua_pushnumber(L,wxSIGTERM); lua_setfield(L,-2,"wxSIGTERM");


	lua_newtable(L); // enum wxKillError

	lua_pushnumber(L,wxKILL_OK); lua_setfield(L,-2,"wxKILL_OK");
	lua_pushnumber(L,wxKILL_BAD_SIGNAL); lua_setfield(L,-2,"wxKILL_BAD_SIGNAL");
	lua_pushnumber(L,wxKILL_ACCESS_DENIED); lua_setfield(L,-2,"wxKILL_ACCESS_DENIED");
	lua_pushnumber(L,wxKILL_NO_PROCESS); lua_setfield(L,-2,"wxKILL_NO_PROCESS");
	lua_pushnumber(L,wxKILL_ERROR); lua_setfield(L,-2,"wxKILL_ERROR");

	lua_setfield(L,-2,"wxKillError");

	lua_pushnumber(L,wxKILL_OK); lua_setfield(L,-2,"wxKILL_OK");
	lua_pushnumber(L,wxKILL_BAD_SIGNAL); lua_setfield(L,-2,"wxKILL_BAD_SIGNAL");
	lua_pushnumber(L,wxKILL_ACCESS_DENIED); lua_setfield(L,-2,"wxKILL_ACCESS_DENIED");
	lua_pushnumber(L,wxKILL_NO_PROCESS); lua_setfield(L,-2,"wxKILL_NO_PROCESS");
	lua_pushnumber(L,wxKILL_ERROR); lua_setfield(L,-2,"wxKILL_ERROR");


	lua_newtable(L); // enum wxPropertySheetDialogFlags

	lua_pushnumber(L,wxPROPSHEET_DEFAULT); lua_setfield(L,-2,"wxPROPSHEET_DEFAULT");
	lua_pushnumber(L,wxPROPSHEET_NOTEBOOK); lua_setfield(L,-2,"wxPROPSHEET_NOTEBOOK");
	lua_pushnumber(L,wxPROPSHEET_TOOLBOOK); lua_setfield(L,-2,"wxPROPSHEET_TOOLBOOK");
	lua_pushnumber(L,wxPROPSHEET_CHOICEBOOK); lua_setfield(L,-2,"wxPROPSHEET_CHOICEBOOK");
	lua_pushnumber(L,wxPROPSHEET_LISTBOOK); lua_setfield(L,-2,"wxPROPSHEET_LISTBOOK");
	lua_pushnumber(L,wxPROPSHEET_BUTTONTOOLBOOK); lua_setfield(L,-2,"wxPROPSHEET_BUTTONTOOLBOOK");
	lua_pushnumber(L,wxPROPSHEET_TREEBOOK); lua_setfield(L,-2,"wxPROPSHEET_TREEBOOK");
	lua_pushnumber(L,wxPROPSHEET_SHRINKTOFIT); lua_setfield(L,-2,"wxPROPSHEET_SHRINKTOFIT");

	lua_setfield(L,-2,"wxPropertySheetDialogFlags");

	lua_pushnumber(L,wxPROPSHEET_DEFAULT); lua_setfield(L,-2,"wxPROPSHEET_DEFAULT");
	lua_pushnumber(L,wxPROPSHEET_NOTEBOOK); lua_setfield(L,-2,"wxPROPSHEET_NOTEBOOK");
	lua_pushnumber(L,wxPROPSHEET_TOOLBOOK); lua_setfield(L,-2,"wxPROPSHEET_TOOLBOOK");
	lua_pushnumber(L,wxPROPSHEET_CHOICEBOOK); lua_setfield(L,-2,"wxPROPSHEET_CHOICEBOOK");
	lua_pushnumber(L,wxPROPSHEET_LISTBOOK); lua_setfield(L,-2,"wxPROPSHEET_LISTBOOK");
	lua_pushnumber(L,wxPROPSHEET_BUTTONTOOLBOOK); lua_setfield(L,-2,"wxPROPSHEET_BUTTONTOOLBOOK");
	lua_pushnumber(L,wxPROPSHEET_TREEBOOK); lua_setfield(L,-2,"wxPROPSHEET_TREEBOOK");
	lua_pushnumber(L,wxPROPSHEET_SHRINKTOFIT); lua_setfield(L,-2,"wxPROPSHEET_SHRINKTOFIT");


	lua_newtable(L); // enum wxPGPropertyFlags

	lua_pushnumber(L,wxPG_PROP_MODIFIED); lua_setfield(L,-2,"wxPG_PROP_MODIFIED");
	lua_pushnumber(L,wxPG_PROP_DISABLED); lua_setfield(L,-2,"wxPG_PROP_DISABLED");
	lua_pushnumber(L,wxPG_PROP_HIDDEN); lua_setfield(L,-2,"wxPG_PROP_HIDDEN");
	lua_pushnumber(L,wxPG_PROP_CUSTOMIMAGE); lua_setfield(L,-2,"wxPG_PROP_CUSTOMIMAGE");
	lua_pushnumber(L,wxPG_PROP_NOEDITOR); lua_setfield(L,-2,"wxPG_PROP_NOEDITOR");
	lua_pushnumber(L,wxPG_PROP_COLLAPSED); lua_setfield(L,-2,"wxPG_PROP_COLLAPSED");
	lua_pushnumber(L,wxPG_PROP_INVALID_VALUE); lua_setfield(L,-2,"wxPG_PROP_INVALID_VALUE");
	lua_pushnumber(L,wxPG_PROP_WAS_MODIFIED); lua_setfield(L,-2,"wxPG_PROP_WAS_MODIFIED");
	lua_pushnumber(L,wxPG_PROP_AGGREGATE); lua_setfield(L,-2,"wxPG_PROP_AGGREGATE");
	lua_pushnumber(L,wxPG_PROP_CHILDREN_ARE_COPIES); lua_setfield(L,-2,"wxPG_PROP_CHILDREN_ARE_COPIES");
	lua_pushnumber(L,wxPG_PROP_PROPERTY); lua_setfield(L,-2,"wxPG_PROP_PROPERTY");
	lua_pushnumber(L,wxPG_PROP_CATEGORY); lua_setfield(L,-2,"wxPG_PROP_CATEGORY");
	lua_pushnumber(L,wxPG_PROP_MISC_PARENT); lua_setfield(L,-2,"wxPG_PROP_MISC_PARENT");
	lua_pushnumber(L,wxPG_PROP_READONLY); lua_setfield(L,-2,"wxPG_PROP_READONLY");
	lua_pushnumber(L,wxPG_PROP_COMPOSED_VALUE); lua_setfield(L,-2,"wxPG_PROP_COMPOSED_VALUE");
	lua_pushnumber(L,wxPG_PROP_USES_COMMON_VALUE); lua_setfield(L,-2,"wxPG_PROP_USES_COMMON_VALUE");
	lua_pushnumber(L,wxPG_PROP_AUTO_UNSPECIFIED); lua_setfield(L,-2,"wxPG_PROP_AUTO_UNSPECIFIED");
	lua_pushnumber(L,wxPG_PROP_CLASS_SPECIFIC_1); lua_setfield(L,-2,"wxPG_PROP_CLASS_SPECIFIC_1");
	lua_pushnumber(L,wxPG_PROP_CLASS_SPECIFIC_2); lua_setfield(L,-2,"wxPG_PROP_CLASS_SPECIFIC_2");
	lua_pushnumber(L,wxPG_PROP_BEING_DELETED); lua_setfield(L,-2,"wxPG_PROP_BEING_DELETED");

	lua_setfield(L,-2,"wxPGPropertyFlags");

	lua_pushnumber(L,wxPG_PROP_MODIFIED); lua_setfield(L,-2,"wxPG_PROP_MODIFIED");
	lua_pushnumber(L,wxPG_PROP_DISABLED); lua_setfield(L,-2,"wxPG_PROP_DISABLED");
	lua_pushnumber(L,wxPG_PROP_HIDDEN); lua_setfield(L,-2,"wxPG_PROP_HIDDEN");
	lua_pushnumber(L,wxPG_PROP_CUSTOMIMAGE); lua_setfield(L,-2,"wxPG_PROP_CUSTOMIMAGE");
	lua_pushnumber(L,wxPG_PROP_NOEDITOR); lua_setfield(L,-2,"wxPG_PROP_NOEDITOR");
	lua_pushnumber(L,wxPG_PROP_COLLAPSED); lua_setfield(L,-2,"wxPG_PROP_COLLAPSED");
	lua_pushnumber(L,wxPG_PROP_INVALID_VALUE); lua_setfield(L,-2,"wxPG_PROP_INVALID_VALUE");
	lua_pushnumber(L,wxPG_PROP_WAS_MODIFIED); lua_setfield(L,-2,"wxPG_PROP_WAS_MODIFIED");
	lua_pushnumber(L,wxPG_PROP_AGGREGATE); lua_setfield(L,-2,"wxPG_PROP_AGGREGATE");
	lua_pushnumber(L,wxPG_PROP_CHILDREN_ARE_COPIES); lua_setfield(L,-2,"wxPG_PROP_CHILDREN_ARE_COPIES");
	lua_pushnumber(L,wxPG_PROP_PROPERTY); lua_setfield(L,-2,"wxPG_PROP_PROPERTY");
	lua_pushnumber(L,wxPG_PROP_CATEGORY); lua_setfield(L,-2,"wxPG_PROP_CATEGORY");
	lua_pushnumber(L,wxPG_PROP_MISC_PARENT); lua_setfield(L,-2,"wxPG_PROP_MISC_PARENT");
	lua_pushnumber(L,wxPG_PROP_READONLY); lua_setfield(L,-2,"wxPG_PROP_READONLY");
	lua_pushnumber(L,wxPG_PROP_COMPOSED_VALUE); lua_setfield(L,-2,"wxPG_PROP_COMPOSED_VALUE");
	lua_pushnumber(L,wxPG_PROP_USES_COMMON_VALUE); lua_setfield(L,-2,"wxPG_PROP_USES_COMMON_VALUE");
	lua_pushnumber(L,wxPG_PROP_AUTO_UNSPECIFIED); lua_setfield(L,-2,"wxPG_PROP_AUTO_UNSPECIFIED");
	lua_pushnumber(L,wxPG_PROP_CLASS_SPECIFIC_1); lua_setfield(L,-2,"wxPG_PROP_CLASS_SPECIFIC_1");
	lua_pushnumber(L,wxPG_PROP_CLASS_SPECIFIC_2); lua_setfield(L,-2,"wxPG_PROP_CLASS_SPECIFIC_2");
	lua_pushnumber(L,wxPG_PROP_BEING_DELETED); lua_setfield(L,-2,"wxPG_PROP_BEING_DELETED");


	lua_newtable(L); // enum wxPG_WINDOW_STYLES

	lua_pushnumber(L,wxPG_AUTO_SORT); lua_setfield(L,-2,"wxPG_AUTO_SORT");
	lua_pushnumber(L,wxPG_HIDE_CATEGORIES); lua_setfield(L,-2,"wxPG_HIDE_CATEGORIES");
	lua_pushnumber(L,wxPG_ALPHABETIC_MODE); lua_setfield(L,-2,"wxPG_ALPHABETIC_MODE");
	lua_pushnumber(L,wxPG_BOLD_MODIFIED); lua_setfield(L,-2,"wxPG_BOLD_MODIFIED");
	lua_pushnumber(L,wxPG_SPLITTER_AUTO_CENTER); lua_setfield(L,-2,"wxPG_SPLITTER_AUTO_CENTER");
	lua_pushnumber(L,wxPG_TOOLTIPS); lua_setfield(L,-2,"wxPG_TOOLTIPS");
	lua_pushnumber(L,wxPG_HIDE_MARGIN); lua_setfield(L,-2,"wxPG_HIDE_MARGIN");
	lua_pushnumber(L,wxPG_STATIC_SPLITTER); lua_setfield(L,-2,"wxPG_STATIC_SPLITTER");
	lua_pushnumber(L,wxPG_STATIC_LAYOUT); lua_setfield(L,-2,"wxPG_STATIC_LAYOUT");
	lua_pushnumber(L,wxPG_LIMITED_EDITING); lua_setfield(L,-2,"wxPG_LIMITED_EDITING");
	lua_pushnumber(L,wxPG_TOOLBAR); lua_setfield(L,-2,"wxPG_TOOLBAR");
	lua_pushnumber(L,wxPG_DESCRIPTION); lua_setfield(L,-2,"wxPG_DESCRIPTION");
	lua_pushnumber(L,wxPG_NO_INTERNAL_BORDER); lua_setfield(L,-2,"wxPG_NO_INTERNAL_BORDER");

	lua_setfield(L,-2,"wxPG_WINDOW_STYLES");

	lua_pushnumber(L,wxPG_AUTO_SORT); lua_setfield(L,-2,"wxPG_AUTO_SORT");
	lua_pushnumber(L,wxPG_HIDE_CATEGORIES); lua_setfield(L,-2,"wxPG_HIDE_CATEGORIES");
	lua_pushnumber(L,wxPG_ALPHABETIC_MODE); lua_setfield(L,-2,"wxPG_ALPHABETIC_MODE");
	lua_pushnumber(L,wxPG_BOLD_MODIFIED); lua_setfield(L,-2,"wxPG_BOLD_MODIFIED");
	lua_pushnumber(L,wxPG_SPLITTER_AUTO_CENTER); lua_setfield(L,-2,"wxPG_SPLITTER_AUTO_CENTER");
	lua_pushnumber(L,wxPG_TOOLTIPS); lua_setfield(L,-2,"wxPG_TOOLTIPS");
	lua_pushnumber(L,wxPG_HIDE_MARGIN); lua_setfield(L,-2,"wxPG_HIDE_MARGIN");
	lua_pushnumber(L,wxPG_STATIC_SPLITTER); lua_setfield(L,-2,"wxPG_STATIC_SPLITTER");
	lua_pushnumber(L,wxPG_STATIC_LAYOUT); lua_setfield(L,-2,"wxPG_STATIC_LAYOUT");
	lua_pushnumber(L,wxPG_LIMITED_EDITING); lua_setfield(L,-2,"wxPG_LIMITED_EDITING");
	lua_pushnumber(L,wxPG_TOOLBAR); lua_setfield(L,-2,"wxPG_TOOLBAR");
	lua_pushnumber(L,wxPG_DESCRIPTION); lua_setfield(L,-2,"wxPG_DESCRIPTION");
	lua_pushnumber(L,wxPG_NO_INTERNAL_BORDER); lua_setfield(L,-2,"wxPG_NO_INTERNAL_BORDER");


	lua_newtable(L); // enum wxPG_EX_WINDOW_STYLES

	lua_pushnumber(L,wxPG_EX_INIT_NOCAT); lua_setfield(L,-2,"wxPG_EX_INIT_NOCAT");
	lua_pushnumber(L,wxPG_EX_NO_FLAT_TOOLBAR); lua_setfield(L,-2,"wxPG_EX_NO_FLAT_TOOLBAR");
	lua_pushnumber(L,wxPG_EX_MODE_BUTTONS); lua_setfield(L,-2,"wxPG_EX_MODE_BUTTONS");
	lua_pushnumber(L,wxPG_EX_HELP_AS_TOOLTIPS); lua_setfield(L,-2,"wxPG_EX_HELP_AS_TOOLTIPS");
	lua_pushnumber(L,wxPG_EX_NATIVE_DOUBLE_BUFFERING); lua_setfield(L,-2,"wxPG_EX_NATIVE_DOUBLE_BUFFERING");
	lua_pushnumber(L,wxPG_EX_AUTO_UNSPECIFIED_VALUES); lua_setfield(L,-2,"wxPG_EX_AUTO_UNSPECIFIED_VALUES");
	lua_pushnumber(L,wxPG_EX_WRITEONLY_BUILTIN_ATTRIBUTES); lua_setfield(L,-2,"wxPG_EX_WRITEONLY_BUILTIN_ATTRIBUTES");
	lua_pushnumber(L,wxPG_EX_HIDE_PAGE_BUTTONS); lua_setfield(L,-2,"wxPG_EX_HIDE_PAGE_BUTTONS");
	lua_pushnumber(L,wxPG_EX_MULTIPLE_SELECTION); lua_setfield(L,-2,"wxPG_EX_MULTIPLE_SELECTION");
	lua_pushnumber(L,wxPG_EX_ENABLE_TLP_TRACKING); lua_setfield(L,-2,"wxPG_EX_ENABLE_TLP_TRACKING");
	lua_pushnumber(L,wxPG_EX_NO_TOOLBAR_DIVIDER); lua_setfield(L,-2,"wxPG_EX_NO_TOOLBAR_DIVIDER");
	lua_pushnumber(L,wxPG_EX_TOOLBAR_SEPARATOR); lua_setfield(L,-2,"wxPG_EX_TOOLBAR_SEPARATOR");

	lua_setfield(L,-2,"wxPG_EX_WINDOW_STYLES");

	lua_pushnumber(L,wxPG_EX_INIT_NOCAT); lua_setfield(L,-2,"wxPG_EX_INIT_NOCAT");
	lua_pushnumber(L,wxPG_EX_NO_FLAT_TOOLBAR); lua_setfield(L,-2,"wxPG_EX_NO_FLAT_TOOLBAR");
	lua_pushnumber(L,wxPG_EX_MODE_BUTTONS); lua_setfield(L,-2,"wxPG_EX_MODE_BUTTONS");
	lua_pushnumber(L,wxPG_EX_HELP_AS_TOOLTIPS); lua_setfield(L,-2,"wxPG_EX_HELP_AS_TOOLTIPS");
	lua_pushnumber(L,wxPG_EX_NATIVE_DOUBLE_BUFFERING); lua_setfield(L,-2,"wxPG_EX_NATIVE_DOUBLE_BUFFERING");
	lua_pushnumber(L,wxPG_EX_AUTO_UNSPECIFIED_VALUES); lua_setfield(L,-2,"wxPG_EX_AUTO_UNSPECIFIED_VALUES");
	lua_pushnumber(L,wxPG_EX_WRITEONLY_BUILTIN_ATTRIBUTES); lua_setfield(L,-2,"wxPG_EX_WRITEONLY_BUILTIN_ATTRIBUTES");
	lua_pushnumber(L,wxPG_EX_HIDE_PAGE_BUTTONS); lua_setfield(L,-2,"wxPG_EX_HIDE_PAGE_BUTTONS");
	lua_pushnumber(L,wxPG_EX_MULTIPLE_SELECTION); lua_setfield(L,-2,"wxPG_EX_MULTIPLE_SELECTION");
	lua_pushnumber(L,wxPG_EX_ENABLE_TLP_TRACKING); lua_setfield(L,-2,"wxPG_EX_ENABLE_TLP_TRACKING");
	lua_pushnumber(L,wxPG_EX_NO_TOOLBAR_DIVIDER); lua_setfield(L,-2,"wxPG_EX_NO_TOOLBAR_DIVIDER");
	lua_pushnumber(L,wxPG_EX_TOOLBAR_SEPARATOR); lua_setfield(L,-2,"wxPG_EX_TOOLBAR_SEPARATOR");


	lua_newtable(L); // enum wxPG_VALIDATION_FAILURE_BEHAVIOR_FLAGS

	lua_pushnumber(L,wxPG_VFB_STAY_IN_PROPERTY); lua_setfield(L,-2,"wxPG_VFB_STAY_IN_PROPERTY");
	lua_pushnumber(L,wxPG_VFB_BEEP); lua_setfield(L,-2,"wxPG_VFB_BEEP");
	lua_pushnumber(L,wxPG_VFB_MARK_CELL); lua_setfield(L,-2,"wxPG_VFB_MARK_CELL");
	lua_pushnumber(L,wxPG_VFB_SHOW_MESSAGE); lua_setfield(L,-2,"wxPG_VFB_SHOW_MESSAGE");
	lua_pushnumber(L,wxPG_VFB_SHOW_MESSAGEBOX); lua_setfield(L,-2,"wxPG_VFB_SHOW_MESSAGEBOX");
	lua_pushnumber(L,wxPG_VFB_SHOW_MESSAGE_ON_STATUSBAR); lua_setfield(L,-2,"wxPG_VFB_SHOW_MESSAGE_ON_STATUSBAR");
	lua_pushnumber(L,wxPG_VFB_DEFAULT); lua_setfield(L,-2,"wxPG_VFB_DEFAULT");

	lua_setfield(L,-2,"wxPG_VALIDATION_FAILURE_BEHAVIOR_FLAGS");

	lua_pushnumber(L,wxPG_VFB_STAY_IN_PROPERTY); lua_setfield(L,-2,"wxPG_VFB_STAY_IN_PROPERTY");
	lua_pushnumber(L,wxPG_VFB_BEEP); lua_setfield(L,-2,"wxPG_VFB_BEEP");
	lua_pushnumber(L,wxPG_VFB_MARK_CELL); lua_setfield(L,-2,"wxPG_VFB_MARK_CELL");
	lua_pushnumber(L,wxPG_VFB_SHOW_MESSAGE); lua_setfield(L,-2,"wxPG_VFB_SHOW_MESSAGE");
	lua_pushnumber(L,wxPG_VFB_SHOW_MESSAGEBOX); lua_setfield(L,-2,"wxPG_VFB_SHOW_MESSAGEBOX");
	lua_pushnumber(L,wxPG_VFB_SHOW_MESSAGE_ON_STATUSBAR); lua_setfield(L,-2,"wxPG_VFB_SHOW_MESSAGE_ON_STATUSBAR");
	lua_pushnumber(L,wxPG_VFB_DEFAULT); lua_setfield(L,-2,"wxPG_VFB_DEFAULT");


	lua_newtable(L); // enum wxPG_KEYBOARD_ACTIONS

	lua_pushnumber(L,wxPG_ACTION_INVALID); lua_setfield(L,-2,"wxPG_ACTION_INVALID");
	lua_pushnumber(L,wxPG_ACTION_NEXT_PROPERTY); lua_setfield(L,-2,"wxPG_ACTION_NEXT_PROPERTY");
	lua_pushnumber(L,wxPG_ACTION_PREV_PROPERTY); lua_setfield(L,-2,"wxPG_ACTION_PREV_PROPERTY");
	lua_pushnumber(L,wxPG_ACTION_EXPAND_PROPERTY); lua_setfield(L,-2,"wxPG_ACTION_EXPAND_PROPERTY");
	lua_pushnumber(L,wxPG_ACTION_COLLAPSE_PROPERTY); lua_setfield(L,-2,"wxPG_ACTION_COLLAPSE_PROPERTY");
	lua_pushnumber(L,wxPG_ACTION_CANCEL_EDIT); lua_setfield(L,-2,"wxPG_ACTION_CANCEL_EDIT");
	lua_pushnumber(L,wxPG_ACTION_EDIT); lua_setfield(L,-2,"wxPG_ACTION_EDIT");
	lua_pushnumber(L,wxPG_ACTION_PRESS_BUTTON); lua_setfield(L,-2,"wxPG_ACTION_PRESS_BUTTON");
	lua_pushnumber(L,wxPG_ACTION_MAX); lua_setfield(L,-2,"wxPG_ACTION_MAX");

	lua_setfield(L,-2,"wxPG_KEYBOARD_ACTIONS");

	lua_pushnumber(L,wxPG_ACTION_INVALID); lua_setfield(L,-2,"wxPG_ACTION_INVALID");
	lua_pushnumber(L,wxPG_ACTION_NEXT_PROPERTY); lua_setfield(L,-2,"wxPG_ACTION_NEXT_PROPERTY");
	lua_pushnumber(L,wxPG_ACTION_PREV_PROPERTY); lua_setfield(L,-2,"wxPG_ACTION_PREV_PROPERTY");
	lua_pushnumber(L,wxPG_ACTION_EXPAND_PROPERTY); lua_setfield(L,-2,"wxPG_ACTION_EXPAND_PROPERTY");
	lua_pushnumber(L,wxPG_ACTION_COLLAPSE_PROPERTY); lua_setfield(L,-2,"wxPG_ACTION_COLLAPSE_PROPERTY");
	lua_pushnumber(L,wxPG_ACTION_CANCEL_EDIT); lua_setfield(L,-2,"wxPG_ACTION_CANCEL_EDIT");
	lua_pushnumber(L,wxPG_ACTION_EDIT); lua_setfield(L,-2,"wxPG_ACTION_EDIT");
	lua_pushnumber(L,wxPG_ACTION_PRESS_BUTTON); lua_setfield(L,-2,"wxPG_ACTION_PRESS_BUTTON");
	lua_pushnumber(L,wxPG_ACTION_MAX); lua_setfield(L,-2,"wxPG_ACTION_MAX");


	lua_newtable(L); // enum wxPG_ITERATOR_FLAGS

	lua_pushnumber(L,wxPG_ITERATE_PROPERTIES); lua_setfield(L,-2,"wxPG_ITERATE_PROPERTIES");
	lua_pushnumber(L,wxPG_ITERATE_HIDDEN); lua_setfield(L,-2,"wxPG_ITERATE_HIDDEN");
	lua_pushnumber(L,wxPG_ITERATE_FIXED_CHILDREN); lua_setfield(L,-2,"wxPG_ITERATE_FIXED_CHILDREN");
	lua_pushnumber(L,wxPG_ITERATE_CATEGORIES); lua_setfield(L,-2,"wxPG_ITERATE_CATEGORIES");
	lua_pushnumber(L,wxPG_ITERATE_ALL_PARENTS); lua_setfield(L,-2,"wxPG_ITERATE_ALL_PARENTS");
	lua_pushnumber(L,wxPG_ITERATE_ALL_PARENTS_RECURSIVELY); lua_setfield(L,-2,"wxPG_ITERATE_ALL_PARENTS_RECURSIVELY");
	lua_pushnumber(L,wxPG_ITERATOR_FLAGS_ALL); lua_setfield(L,-2,"wxPG_ITERATOR_FLAGS_ALL");
	lua_pushnumber(L,wxPG_ITERATOR_MASK_OP_ITEM); lua_setfield(L,-2,"wxPG_ITERATOR_MASK_OP_ITEM");
	lua_pushnumber(L,wxPG_ITERATOR_MASK_OP_PARENT); lua_setfield(L,-2,"wxPG_ITERATOR_MASK_OP_PARENT");
	lua_pushnumber(L,wxPG_ITERATE_VISIBLE); lua_setfield(L,-2,"wxPG_ITERATE_VISIBLE");
	lua_pushnumber(L,wxPG_ITERATE_ALL); lua_setfield(L,-2,"wxPG_ITERATE_ALL");
	lua_pushnumber(L,wxPG_ITERATE_NORMAL); lua_setfield(L,-2,"wxPG_ITERATE_NORMAL");
	lua_pushnumber(L,wxPG_ITERATE_DEFAULT); lua_setfield(L,-2,"wxPG_ITERATE_DEFAULT");

	lua_setfield(L,-2,"wxPG_ITERATOR_FLAGS");

	lua_pushnumber(L,wxPG_ITERATE_PROPERTIES); lua_setfield(L,-2,"wxPG_ITERATE_PROPERTIES");
	lua_pushnumber(L,wxPG_ITERATE_HIDDEN); lua_setfield(L,-2,"wxPG_ITERATE_HIDDEN");
	lua_pushnumber(L,wxPG_ITERATE_FIXED_CHILDREN); lua_setfield(L,-2,"wxPG_ITERATE_FIXED_CHILDREN");
	lua_pushnumber(L,wxPG_ITERATE_CATEGORIES); lua_setfield(L,-2,"wxPG_ITERATE_CATEGORIES");
	lua_pushnumber(L,wxPG_ITERATE_ALL_PARENTS); lua_setfield(L,-2,"wxPG_ITERATE_ALL_PARENTS");
	lua_pushnumber(L,wxPG_ITERATE_ALL_PARENTS_RECURSIVELY); lua_setfield(L,-2,"wxPG_ITERATE_ALL_PARENTS_RECURSIVELY");
	lua_pushnumber(L,wxPG_ITERATOR_FLAGS_ALL); lua_setfield(L,-2,"wxPG_ITERATOR_FLAGS_ALL");
	lua_pushnumber(L,wxPG_ITERATOR_MASK_OP_ITEM); lua_setfield(L,-2,"wxPG_ITERATOR_MASK_OP_ITEM");
	lua_pushnumber(L,wxPG_ITERATOR_MASK_OP_PARENT); lua_setfield(L,-2,"wxPG_ITERATOR_MASK_OP_PARENT");
	lua_pushnumber(L,wxPG_ITERATE_VISIBLE); lua_setfield(L,-2,"wxPG_ITERATE_VISIBLE");
	lua_pushnumber(L,wxPG_ITERATE_ALL); lua_setfield(L,-2,"wxPG_ITERATE_ALL");
	lua_pushnumber(L,wxPG_ITERATE_NORMAL); lua_setfield(L,-2,"wxPG_ITERATE_NORMAL");
	lua_pushnumber(L,wxPG_ITERATE_DEFAULT); lua_setfield(L,-2,"wxPG_ITERATE_DEFAULT");


	lua_newtable(L); // enum wxProtocolError

	lua_pushnumber(L,wxPROTO_NOERR); lua_setfield(L,-2,"wxPROTO_NOERR");
	lua_pushnumber(L,wxPROTO_NETERR); lua_setfield(L,-2,"wxPROTO_NETERR");
	lua_pushnumber(L,wxPROTO_PROTERR); lua_setfield(L,-2,"wxPROTO_PROTERR");
	lua_pushnumber(L,wxPROTO_CONNERR); lua_setfield(L,-2,"wxPROTO_CONNERR");
	lua_pushnumber(L,wxPROTO_INVVAL); lua_setfield(L,-2,"wxPROTO_INVVAL");
	lua_pushnumber(L,wxPROTO_NOHNDLR); lua_setfield(L,-2,"wxPROTO_NOHNDLR");
	lua_pushnumber(L,wxPROTO_NOFILE); lua_setfield(L,-2,"wxPROTO_NOFILE");
	lua_pushnumber(L,wxPROTO_ABRT); lua_setfield(L,-2,"wxPROTO_ABRT");
	lua_pushnumber(L,wxPROTO_RCNCT); lua_setfield(L,-2,"wxPROTO_RCNCT");
	lua_pushnumber(L,wxPROTO_STREAMING); lua_setfield(L,-2,"wxPROTO_STREAMING");

	lua_setfield(L,-2,"wxProtocolError");

	lua_pushnumber(L,wxPROTO_NOERR); lua_setfield(L,-2,"wxPROTO_NOERR");
	lua_pushnumber(L,wxPROTO_NETERR); lua_setfield(L,-2,"wxPROTO_NETERR");
	lua_pushnumber(L,wxPROTO_PROTERR); lua_setfield(L,-2,"wxPROTO_PROTERR");
	lua_pushnumber(L,wxPROTO_CONNERR); lua_setfield(L,-2,"wxPROTO_CONNERR");
	lua_pushnumber(L,wxPROTO_INVVAL); lua_setfield(L,-2,"wxPROTO_INVVAL");
	lua_pushnumber(L,wxPROTO_NOHNDLR); lua_setfield(L,-2,"wxPROTO_NOHNDLR");
	lua_pushnumber(L,wxPROTO_NOFILE); lua_setfield(L,-2,"wxPROTO_NOFILE");
	lua_pushnumber(L,wxPROTO_ABRT); lua_setfield(L,-2,"wxPROTO_ABRT");
	lua_pushnumber(L,wxPROTO_RCNCT); lua_setfield(L,-2,"wxPROTO_RCNCT");
	lua_pushnumber(L,wxPROTO_STREAMING); lua_setfield(L,-2,"wxPROTO_STREAMING");


	lua_newtable(L); // enum unnamed_14

	lua_pushnumber(L,wxRE_EXTENDED); lua_setfield(L,-2,"wxRE_EXTENDED");
	lua_pushnumber(L,wxRE_ADVANCED); lua_setfield(L,-2,"wxRE_ADVANCED");
	lua_pushnumber(L,wxRE_BASIC); lua_setfield(L,-2,"wxRE_BASIC");
	lua_pushnumber(L,wxRE_ICASE); lua_setfield(L,-2,"wxRE_ICASE");
	lua_pushnumber(L,wxRE_NOSUB); lua_setfield(L,-2,"wxRE_NOSUB");
	lua_pushnumber(L,wxRE_NEWLINE); lua_setfield(L,-2,"wxRE_NEWLINE");
	lua_pushnumber(L,wxRE_DEFAULT); lua_setfield(L,-2,"wxRE_DEFAULT");

	lua_setfield(L,-2,"unnamed_14");

	lua_pushnumber(L,wxRE_EXTENDED); lua_setfield(L,-2,"wxRE_EXTENDED");
	lua_pushnumber(L,wxRE_ADVANCED); lua_setfield(L,-2,"wxRE_ADVANCED");
	lua_pushnumber(L,wxRE_BASIC); lua_setfield(L,-2,"wxRE_BASIC");
	lua_pushnumber(L,wxRE_ICASE); lua_setfield(L,-2,"wxRE_ICASE");
	lua_pushnumber(L,wxRE_NOSUB); lua_setfield(L,-2,"wxRE_NOSUB");
	lua_pushnumber(L,wxRE_NEWLINE); lua_setfield(L,-2,"wxRE_NEWLINE");
	lua_pushnumber(L,wxRE_DEFAULT); lua_setfield(L,-2,"wxRE_DEFAULT");


	lua_newtable(L); // enum unnamed_15

	lua_pushnumber(L,wxRE_NOTBOL); lua_setfield(L,-2,"wxRE_NOTBOL");
	lua_pushnumber(L,wxRE_NOTEOL); lua_setfield(L,-2,"wxRE_NOTEOL");

	lua_setfield(L,-2,"unnamed_15");

	lua_pushnumber(L,wxRE_NOTBOL); lua_setfield(L,-2,"wxRE_NOTBOL");
	lua_pushnumber(L,wxRE_NOTEOL); lua_setfield(L,-2,"wxRE_NOTEOL");


	lua_newtable(L); // enum wxRegionContain

	lua_pushnumber(L,wxOutRegion); lua_setfield(L,-2,"wxOutRegion");
	lua_pushnumber(L,wxPartRegion); lua_setfield(L,-2,"wxPartRegion");
	lua_pushnumber(L,wxInRegion); lua_setfield(L,-2,"wxInRegion");

	lua_setfield(L,-2,"wxRegionContain");

	lua_pushnumber(L,wxOutRegion); lua_setfield(L,-2,"wxOutRegion");
	lua_pushnumber(L,wxPartRegion); lua_setfield(L,-2,"wxPartRegion");
	lua_pushnumber(L,wxInRegion); lua_setfield(L,-2,"wxInRegion");


	lua_newtable(L); // enum unnamed_16

	lua_pushnumber(L,wxCONTROL_DISABLED); lua_setfield(L,-2,"wxCONTROL_DISABLED");
	lua_pushnumber(L,wxCONTROL_FOCUSED); lua_setfield(L,-2,"wxCONTROL_FOCUSED");
	lua_pushnumber(L,wxCONTROL_PRESSED); lua_setfield(L,-2,"wxCONTROL_PRESSED");
	lua_pushnumber(L,wxCONTROL_SPECIAL); lua_setfield(L,-2,"wxCONTROL_SPECIAL");
	lua_pushnumber(L,wxCONTROL_ISDEFAULT); lua_setfield(L,-2,"wxCONTROL_ISDEFAULT");
	lua_pushnumber(L,wxCONTROL_ISSUBMENU); lua_setfield(L,-2,"wxCONTROL_ISSUBMENU");
	lua_pushnumber(L,wxCONTROL_EXPANDED); lua_setfield(L,-2,"wxCONTROL_EXPANDED");
	lua_pushnumber(L,wxCONTROL_SIZEGRIP); lua_setfield(L,-2,"wxCONTROL_SIZEGRIP");
	lua_pushnumber(L,wxCONTROL_FLAT); lua_setfield(L,-2,"wxCONTROL_FLAT");
	lua_pushnumber(L,wxCONTROL_CURRENT); lua_setfield(L,-2,"wxCONTROL_CURRENT");
	lua_pushnumber(L,wxCONTROL_SELECTED); lua_setfield(L,-2,"wxCONTROL_SELECTED");
	lua_pushnumber(L,wxCONTROL_CHECKED); lua_setfield(L,-2,"wxCONTROL_CHECKED");
	lua_pushnumber(L,wxCONTROL_CHECKABLE); lua_setfield(L,-2,"wxCONTROL_CHECKABLE");
	lua_pushnumber(L,wxCONTROL_UNDETERMINED); lua_setfield(L,-2,"wxCONTROL_UNDETERMINED");

	lua_setfield(L,-2,"unnamed_16");

	lua_pushnumber(L,wxCONTROL_DISABLED); lua_setfield(L,-2,"wxCONTROL_DISABLED");
	lua_pushnumber(L,wxCONTROL_FOCUSED); lua_setfield(L,-2,"wxCONTROL_FOCUSED");
	lua_pushnumber(L,wxCONTROL_PRESSED); lua_setfield(L,-2,"wxCONTROL_PRESSED");
	lua_pushnumber(L,wxCONTROL_SPECIAL); lua_setfield(L,-2,"wxCONTROL_SPECIAL");
	lua_pushnumber(L,wxCONTROL_ISDEFAULT); lua_setfield(L,-2,"wxCONTROL_ISDEFAULT");
	lua_pushnumber(L,wxCONTROL_ISSUBMENU); lua_setfield(L,-2,"wxCONTROL_ISSUBMENU");
	lua_pushnumber(L,wxCONTROL_EXPANDED); lua_setfield(L,-2,"wxCONTROL_EXPANDED");
	lua_pushnumber(L,wxCONTROL_SIZEGRIP); lua_setfield(L,-2,"wxCONTROL_SIZEGRIP");
	lua_pushnumber(L,wxCONTROL_FLAT); lua_setfield(L,-2,"wxCONTROL_FLAT");
	lua_pushnumber(L,wxCONTROL_CURRENT); lua_setfield(L,-2,"wxCONTROL_CURRENT");
	lua_pushnumber(L,wxCONTROL_SELECTED); lua_setfield(L,-2,"wxCONTROL_SELECTED");
	lua_pushnumber(L,wxCONTROL_CHECKED); lua_setfield(L,-2,"wxCONTROL_CHECKED");
	lua_pushnumber(L,wxCONTROL_CHECKABLE); lua_setfield(L,-2,"wxCONTROL_CHECKABLE");
	lua_pushnumber(L,wxCONTROL_UNDETERMINED); lua_setfield(L,-2,"wxCONTROL_UNDETERMINED");


	lua_newtable(L); // enum wxTitleBarButton

	lua_pushnumber(L,wxTITLEBAR_BUTTON_CLOSE); lua_setfield(L,-2,"wxTITLEBAR_BUTTON_CLOSE");
	lua_pushnumber(L,wxTITLEBAR_BUTTON_MAXIMIZE); lua_setfield(L,-2,"wxTITLEBAR_BUTTON_MAXIMIZE");
	lua_pushnumber(L,wxTITLEBAR_BUTTON_ICONIZE); lua_setfield(L,-2,"wxTITLEBAR_BUTTON_ICONIZE");
	lua_pushnumber(L,wxTITLEBAR_BUTTON_RESTORE); lua_setfield(L,-2,"wxTITLEBAR_BUTTON_RESTORE");
	lua_pushnumber(L,wxTITLEBAR_BUTTON_HELP); lua_setfield(L,-2,"wxTITLEBAR_BUTTON_HELP");

	lua_setfield(L,-2,"wxTitleBarButton");

	lua_pushnumber(L,wxTITLEBAR_BUTTON_CLOSE); lua_setfield(L,-2,"wxTITLEBAR_BUTTON_CLOSE");
	lua_pushnumber(L,wxTITLEBAR_BUTTON_MAXIMIZE); lua_setfield(L,-2,"wxTITLEBAR_BUTTON_MAXIMIZE");
	lua_pushnumber(L,wxTITLEBAR_BUTTON_ICONIZE); lua_setfield(L,-2,"wxTITLEBAR_BUTTON_ICONIZE");
	lua_pushnumber(L,wxTITLEBAR_BUTTON_RESTORE); lua_setfield(L,-2,"wxTITLEBAR_BUTTON_RESTORE");
	lua_pushnumber(L,wxTITLEBAR_BUTTON_HELP); lua_setfield(L,-2,"wxTITLEBAR_BUTTON_HELP");


	lua_newtable(L); // enum wxHeaderSortIconType

	lua_pushnumber(L,wxHDR_SORT_ICON_NONE); lua_setfield(L,-2,"wxHDR_SORT_ICON_NONE");
	lua_pushnumber(L,wxHDR_SORT_ICON_UP); lua_setfield(L,-2,"wxHDR_SORT_ICON_UP");
	lua_pushnumber(L,wxHDR_SORT_ICON_DOWN); lua_setfield(L,-2,"wxHDR_SORT_ICON_DOWN");

	lua_setfield(L,-2,"wxHeaderSortIconType");

	lua_pushnumber(L,wxHDR_SORT_ICON_NONE); lua_setfield(L,-2,"wxHDR_SORT_ICON_NONE");
	lua_pushnumber(L,wxHDR_SORT_ICON_UP); lua_setfield(L,-2,"wxHDR_SORT_ICON_UP");
	lua_pushnumber(L,wxHDR_SORT_ICON_DOWN); lua_setfield(L,-2,"wxHDR_SORT_ICON_DOWN");


	lua_newtable(L); // enum wxRichTextFileType

	lua_pushnumber(L,wxRICHTEXT_TYPE_ANY); lua_setfield(L,-2,"wxRICHTEXT_TYPE_ANY");
	lua_pushnumber(L,wxRICHTEXT_TYPE_TEXT); lua_setfield(L,-2,"wxRICHTEXT_TYPE_TEXT");
	lua_pushnumber(L,wxRICHTEXT_TYPE_XML); lua_setfield(L,-2,"wxRICHTEXT_TYPE_XML");
	lua_pushnumber(L,wxRICHTEXT_TYPE_HTML); lua_setfield(L,-2,"wxRICHTEXT_TYPE_HTML");
	lua_pushnumber(L,wxRICHTEXT_TYPE_RTF); lua_setfield(L,-2,"wxRICHTEXT_TYPE_RTF");
	lua_pushnumber(L,wxRICHTEXT_TYPE_PDF); lua_setfield(L,-2,"wxRICHTEXT_TYPE_PDF");

	lua_setfield(L,-2,"wxRichTextFileType");

	lua_pushnumber(L,wxRICHTEXT_TYPE_ANY); lua_setfield(L,-2,"wxRICHTEXT_TYPE_ANY");
	lua_pushnumber(L,wxRICHTEXT_TYPE_TEXT); lua_setfield(L,-2,"wxRICHTEXT_TYPE_TEXT");
	lua_pushnumber(L,wxRICHTEXT_TYPE_XML); lua_setfield(L,-2,"wxRICHTEXT_TYPE_XML");
	lua_pushnumber(L,wxRICHTEXT_TYPE_HTML); lua_setfield(L,-2,"wxRICHTEXT_TYPE_HTML");
	lua_pushnumber(L,wxRICHTEXT_TYPE_RTF); lua_setfield(L,-2,"wxRICHTEXT_TYPE_RTF");
	lua_pushnumber(L,wxRICHTEXT_TYPE_PDF); lua_setfield(L,-2,"wxRICHTEXT_TYPE_PDF");


	lua_newtable(L); // enum wxRichTextHitTestFlags

	lua_pushnumber(L,wxRICHTEXT_HITTEST_NONE); lua_setfield(L,-2,"wxRICHTEXT_HITTEST_NONE");
	lua_pushnumber(L,wxRICHTEXT_HITTEST_BEFORE); lua_setfield(L,-2,"wxRICHTEXT_HITTEST_BEFORE");
	lua_pushnumber(L,wxRICHTEXT_HITTEST_AFTER); lua_setfield(L,-2,"wxRICHTEXT_HITTEST_AFTER");
	lua_pushnumber(L,wxRICHTEXT_HITTEST_ON); lua_setfield(L,-2,"wxRICHTEXT_HITTEST_ON");
	lua_pushnumber(L,wxRICHTEXT_HITTEST_OUTSIDE); lua_setfield(L,-2,"wxRICHTEXT_HITTEST_OUTSIDE");
	lua_pushnumber(L,wxRICHTEXT_HITTEST_NO_NESTED_OBJECTS); lua_setfield(L,-2,"wxRICHTEXT_HITTEST_NO_NESTED_OBJECTS");
	lua_pushnumber(L,wxRICHTEXT_HITTEST_NO_FLOATING_OBJECTS); lua_setfield(L,-2,"wxRICHTEXT_HITTEST_NO_FLOATING_OBJECTS");

	lua_setfield(L,-2,"wxRichTextHitTestFlags");

	lua_pushnumber(L,wxRICHTEXT_HITTEST_NONE); lua_setfield(L,-2,"wxRICHTEXT_HITTEST_NONE");
	lua_pushnumber(L,wxRICHTEXT_HITTEST_BEFORE); lua_setfield(L,-2,"wxRICHTEXT_HITTEST_BEFORE");
	lua_pushnumber(L,wxRICHTEXT_HITTEST_AFTER); lua_setfield(L,-2,"wxRICHTEXT_HITTEST_AFTER");
	lua_pushnumber(L,wxRICHTEXT_HITTEST_ON); lua_setfield(L,-2,"wxRICHTEXT_HITTEST_ON");
	lua_pushnumber(L,wxRICHTEXT_HITTEST_OUTSIDE); lua_setfield(L,-2,"wxRICHTEXT_HITTEST_OUTSIDE");
	lua_pushnumber(L,wxRICHTEXT_HITTEST_NO_NESTED_OBJECTS); lua_setfield(L,-2,"wxRICHTEXT_HITTEST_NO_NESTED_OBJECTS");
	lua_pushnumber(L,wxRICHTEXT_HITTEST_NO_FLOATING_OBJECTS); lua_setfield(L,-2,"wxRICHTEXT_HITTEST_NO_FLOATING_OBJECTS");


	lua_newtable(L); // enum wxTextBoxAttrFlags

	lua_pushnumber(L,wxTEXT_BOX_ATTR_FLOAT); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_FLOAT");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_CLEAR); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_CLEAR");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_COLLAPSE_BORDERS); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_COLLAPSE_BORDERS");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT");

	lua_setfield(L,-2,"wxTextBoxAttrFlags");

	lua_pushnumber(L,wxTEXT_BOX_ATTR_FLOAT); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_FLOAT");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_CLEAR); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_CLEAR");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_COLLAPSE_BORDERS); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_COLLAPSE_BORDERS");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT");


	lua_newtable(L); // enum wxTextAttrValueFlags

	lua_pushnumber(L,wxTEXT_ATTR_VALUE_VALID); lua_setfield(L,-2,"wxTEXT_ATTR_VALUE_VALID");
	lua_pushnumber(L,wxTEXT_ATTR_VALUE_VALID_MASK); lua_setfield(L,-2,"wxTEXT_ATTR_VALUE_VALID_MASK");

	lua_setfield(L,-2,"wxTextAttrValueFlags");

	lua_pushnumber(L,wxTEXT_ATTR_VALUE_VALID); lua_setfield(L,-2,"wxTEXT_ATTR_VALUE_VALID");
	lua_pushnumber(L,wxTEXT_ATTR_VALUE_VALID_MASK); lua_setfield(L,-2,"wxTEXT_ATTR_VALUE_VALID_MASK");


	lua_newtable(L); // enum wxTextAttrUnits

	lua_pushnumber(L,wxTEXT_ATTR_UNITS_TENTHS_MM); lua_setfield(L,-2,"wxTEXT_ATTR_UNITS_TENTHS_MM");
	lua_pushnumber(L,wxTEXT_ATTR_UNITS_PIXELS); lua_setfield(L,-2,"wxTEXT_ATTR_UNITS_PIXELS");
	lua_pushnumber(L,wxTEXT_ATTR_UNITS_PERCENTAGE); lua_setfield(L,-2,"wxTEXT_ATTR_UNITS_PERCENTAGE");
	lua_pushnumber(L,wxTEXT_ATTR_UNITS_POINTS); lua_setfield(L,-2,"wxTEXT_ATTR_UNITS_POINTS");
	lua_pushnumber(L,wxTEXT_ATTR_UNITS_MASK); lua_setfield(L,-2,"wxTEXT_ATTR_UNITS_MASK");

	lua_setfield(L,-2,"wxTextAttrUnits");

	lua_pushnumber(L,wxTEXT_ATTR_UNITS_TENTHS_MM); lua_setfield(L,-2,"wxTEXT_ATTR_UNITS_TENTHS_MM");
	lua_pushnumber(L,wxTEXT_ATTR_UNITS_PIXELS); lua_setfield(L,-2,"wxTEXT_ATTR_UNITS_PIXELS");
	lua_pushnumber(L,wxTEXT_ATTR_UNITS_PERCENTAGE); lua_setfield(L,-2,"wxTEXT_ATTR_UNITS_PERCENTAGE");
	lua_pushnumber(L,wxTEXT_ATTR_UNITS_POINTS); lua_setfield(L,-2,"wxTEXT_ATTR_UNITS_POINTS");
	lua_pushnumber(L,wxTEXT_ATTR_UNITS_MASK); lua_setfield(L,-2,"wxTEXT_ATTR_UNITS_MASK");


	lua_newtable(L); // enum wxTextBoxAttrPosition

	lua_pushnumber(L,wxTEXT_BOX_ATTR_POSITION_STATIC); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_POSITION_STATIC");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_POSITION_RELATIVE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_POSITION_RELATIVE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_POSITION_ABSOLUTE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_POSITION_ABSOLUTE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_POSITION_MASK); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_POSITION_MASK");

	lua_setfield(L,-2,"wxTextBoxAttrPosition");

	lua_pushnumber(L,wxTEXT_BOX_ATTR_POSITION_STATIC); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_POSITION_STATIC");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_POSITION_RELATIVE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_POSITION_RELATIVE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_POSITION_ABSOLUTE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_POSITION_ABSOLUTE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_POSITION_MASK); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_POSITION_MASK");


	lua_newtable(L); // enum wxTextAttrBorderStyle

	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_NONE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_NONE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_SOLID); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_SOLID");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_DOTTED); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_DOTTED");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_DASHED); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_DASHED");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_DOUBLE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_DOUBLE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_GROOVE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_GROOVE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_RIDGE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_RIDGE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_INSET); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_INSET");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_OUTSET); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_OUTSET");

	lua_setfield(L,-2,"wxTextAttrBorderStyle");

	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_NONE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_NONE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_SOLID); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_SOLID");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_DOTTED); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_DOTTED");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_DASHED); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_DASHED");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_DOUBLE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_DOUBLE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_GROOVE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_GROOVE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_RIDGE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_RIDGE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_INSET); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_INSET");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_OUTSET); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_OUTSET");


	lua_newtable(L); // enum wxTextAttrBorderFlags

	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_STYLE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_STYLE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_COLOUR); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_COLOUR");

	lua_setfield(L,-2,"wxTextAttrBorderFlags");

	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_STYLE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_STYLE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_COLOUR); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_COLOUR");


	lua_newtable(L); // enum wxTextAttrBorderWidth

	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_THIN); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_THIN");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_MEDIUM); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_MEDIUM");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_THICK); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_THICK");

	lua_setfield(L,-2,"wxTextAttrBorderWidth");

	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_THIN); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_THIN");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_MEDIUM); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_MEDIUM");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_BORDER_THICK); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_BORDER_THICK");


	lua_newtable(L); // enum wxTextBoxAttrFloatStyle

	lua_pushnumber(L,wxTEXT_BOX_ATTR_FLOAT_NONE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_FLOAT_NONE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_FLOAT_LEFT); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_FLOAT_LEFT");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_FLOAT_RIGHT); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_FLOAT_RIGHT");

	lua_setfield(L,-2,"wxTextBoxAttrFloatStyle");

	lua_pushnumber(L,wxTEXT_BOX_ATTR_FLOAT_NONE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_FLOAT_NONE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_FLOAT_LEFT); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_FLOAT_LEFT");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_FLOAT_RIGHT); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_FLOAT_RIGHT");


	lua_newtable(L); // enum wxTextBoxAttrClearStyle

	lua_pushnumber(L,wxTEXT_BOX_ATTR_CLEAR_NONE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_CLEAR_NONE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_CLEAR_LEFT); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_CLEAR_LEFT");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_CLEAR_RIGHT); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_CLEAR_RIGHT");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_CLEAR_BOTH); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_CLEAR_BOTH");

	lua_setfield(L,-2,"wxTextBoxAttrClearStyle");

	lua_pushnumber(L,wxTEXT_BOX_ATTR_CLEAR_NONE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_CLEAR_NONE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_CLEAR_LEFT); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_CLEAR_LEFT");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_CLEAR_RIGHT); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_CLEAR_RIGHT");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_CLEAR_BOTH); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_CLEAR_BOTH");


	lua_newtable(L); // enum wxTextBoxAttrCollapseMode

	lua_pushnumber(L,wxTEXT_BOX_ATTR_COLLAPSE_NONE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_COLLAPSE_NONE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_COLLAPSE_FULL); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_COLLAPSE_FULL");

	lua_setfield(L,-2,"wxTextBoxAttrCollapseMode");

	lua_pushnumber(L,wxTEXT_BOX_ATTR_COLLAPSE_NONE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_COLLAPSE_NONE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_COLLAPSE_FULL); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_COLLAPSE_FULL");


	lua_newtable(L); // enum wxTextBoxAttrVerticalAlignment

	lua_pushnumber(L,wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_NONE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_NONE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_TOP); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_TOP");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_CENTRE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_CENTRE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_BOTTOM); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_BOTTOM");

	lua_setfield(L,-2,"wxTextBoxAttrVerticalAlignment");

	lua_pushnumber(L,wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_NONE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_NONE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_TOP); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_TOP");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_CENTRE); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_CENTRE");
	lua_pushnumber(L,wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_BOTTOM); lua_setfield(L,-2,"wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_BOTTOM");


	lua_newtable(L); // enum wxRichTextCommandId

	lua_pushnumber(L,wxRICHTEXT_INSERT); lua_setfield(L,-2,"wxRICHTEXT_INSERT");
	lua_pushnumber(L,wxRICHTEXT_DELETE); lua_setfield(L,-2,"wxRICHTEXT_DELETE");
	lua_pushnumber(L,wxRICHTEXT_CHANGE_ATTRIBUTES); lua_setfield(L,-2,"wxRICHTEXT_CHANGE_ATTRIBUTES");
	lua_pushnumber(L,wxRICHTEXT_CHANGE_STYLE); lua_setfield(L,-2,"wxRICHTEXT_CHANGE_STYLE");
	lua_pushnumber(L,wxRICHTEXT_CHANGE_OBJECT); lua_setfield(L,-2,"wxRICHTEXT_CHANGE_OBJECT");

	lua_setfield(L,-2,"wxRichTextCommandId");

	lua_pushnumber(L,wxRICHTEXT_INSERT); lua_setfield(L,-2,"wxRICHTEXT_INSERT");
	lua_pushnumber(L,wxRICHTEXT_DELETE); lua_setfield(L,-2,"wxRICHTEXT_DELETE");
	lua_pushnumber(L,wxRICHTEXT_CHANGE_ATTRIBUTES); lua_setfield(L,-2,"wxRICHTEXT_CHANGE_ATTRIBUTES");
	lua_pushnumber(L,wxRICHTEXT_CHANGE_STYLE); lua_setfield(L,-2,"wxRICHTEXT_CHANGE_STYLE");
	lua_pushnumber(L,wxRICHTEXT_CHANGE_OBJECT); lua_setfield(L,-2,"wxRICHTEXT_CHANGE_OBJECT");


	lua_newtable(L); // enum wxRichTextCtrlSelectionState

	lua_pushnumber(L,wxRichTextCtrlSelectionState_Normal); lua_setfield(L,-2,"wxRichTextCtrlSelectionState_Normal");
	lua_pushnumber(L,wxRichTextCtrlSelectionState_CommonAncestor); lua_setfield(L,-2,"wxRichTextCtrlSelectionState_CommonAncestor");

	lua_setfield(L,-2,"wxRichTextCtrlSelectionState");

	lua_pushnumber(L,wxRichTextCtrlSelectionState_Normal); lua_setfield(L,-2,"wxRichTextCtrlSelectionState_Normal");
	lua_pushnumber(L,wxRichTextCtrlSelectionState_CommonAncestor); lua_setfield(L,-2,"wxRichTextCtrlSelectionState_CommonAncestor");


	lua_newtable(L); // enum wxTipKind

	lua_pushnumber(L,wxTipKind_None); lua_setfield(L,-2,"wxTipKind_None");
	lua_pushnumber(L,wxTipKind_TopLeft); lua_setfield(L,-2,"wxTipKind_TopLeft");
	lua_pushnumber(L,wxTipKind_Top); lua_setfield(L,-2,"wxTipKind_Top");
	lua_pushnumber(L,wxTipKind_TopRight); lua_setfield(L,-2,"wxTipKind_TopRight");
	lua_pushnumber(L,wxTipKind_BottomLeft); lua_setfield(L,-2,"wxTipKind_BottomLeft");
	lua_pushnumber(L,wxTipKind_Bottom); lua_setfield(L,-2,"wxTipKind_Bottom");
	lua_pushnumber(L,wxTipKind_BottomRight); lua_setfield(L,-2,"wxTipKind_BottomRight");
	lua_pushnumber(L,wxTipKind_Auto); lua_setfield(L,-2,"wxTipKind_Auto");

	lua_setfield(L,-2,"wxTipKind");

	lua_pushnumber(L,wxTipKind_None); lua_setfield(L,-2,"wxTipKind_None");
	lua_pushnumber(L,wxTipKind_TopLeft); lua_setfield(L,-2,"wxTipKind_TopLeft");
	lua_pushnumber(L,wxTipKind_Top); lua_setfield(L,-2,"wxTipKind_Top");
	lua_pushnumber(L,wxTipKind_TopRight); lua_setfield(L,-2,"wxTipKind_TopRight");
	lua_pushnumber(L,wxTipKind_BottomLeft); lua_setfield(L,-2,"wxTipKind_BottomLeft");
	lua_pushnumber(L,wxTipKind_Bottom); lua_setfield(L,-2,"wxTipKind_Bottom");
	lua_pushnumber(L,wxTipKind_BottomRight); lua_setfield(L,-2,"wxTipKind_BottomRight");
	lua_pushnumber(L,wxTipKind_Auto); lua_setfield(L,-2,"wxTipKind_Auto");


	lua_newtable(L); // enum wxSashEdgePosition

	lua_pushnumber(L,wxSASH_TOP); lua_setfield(L,-2,"wxSASH_TOP");
	lua_pushnumber(L,wxSASH_RIGHT); lua_setfield(L,-2,"wxSASH_RIGHT");
	lua_pushnumber(L,wxSASH_BOTTOM); lua_setfield(L,-2,"wxSASH_BOTTOM");
	lua_pushnumber(L,wxSASH_LEFT); lua_setfield(L,-2,"wxSASH_LEFT");
	lua_pushnumber(L,wxSASH_NONE); lua_setfield(L,-2,"wxSASH_NONE");

	lua_setfield(L,-2,"wxSashEdgePosition");

	lua_pushnumber(L,wxSASH_TOP); lua_setfield(L,-2,"wxSASH_TOP");
	lua_pushnumber(L,wxSASH_RIGHT); lua_setfield(L,-2,"wxSASH_RIGHT");
	lua_pushnumber(L,wxSASH_BOTTOM); lua_setfield(L,-2,"wxSASH_BOTTOM");
	lua_pushnumber(L,wxSASH_LEFT); lua_setfield(L,-2,"wxSASH_LEFT");
	lua_pushnumber(L,wxSASH_NONE); lua_setfield(L,-2,"wxSASH_NONE");


	lua_newtable(L); // enum wxSashDragStatus

	lua_pushnumber(L,wxSASH_STATUS_OK); lua_setfield(L,-2,"wxSASH_STATUS_OK");
	lua_pushnumber(L,wxSASH_STATUS_OUT_OF_RANGE); lua_setfield(L,-2,"wxSASH_STATUS_OUT_OF_RANGE");

	lua_setfield(L,-2,"wxSashDragStatus");

	lua_pushnumber(L,wxSASH_STATUS_OK); lua_setfield(L,-2,"wxSASH_STATUS_OK");
	lua_pushnumber(L,wxSASH_STATUS_OUT_OF_RANGE); lua_setfield(L,-2,"wxSASH_STATUS_OUT_OF_RANGE");


	lua_newtable(L); // enum wxIPCFormat

	lua_pushnumber(L,wxIPC_INVALID); lua_setfield(L,-2,"wxIPC_INVALID");
	lua_pushnumber(L,wxIPC_TEXT); lua_setfield(L,-2,"wxIPC_TEXT");
	lua_pushnumber(L,wxIPC_BITMAP); lua_setfield(L,-2,"wxIPC_BITMAP");
	lua_pushnumber(L,wxIPC_METAFILE); lua_setfield(L,-2,"wxIPC_METAFILE");
	lua_pushnumber(L,wxIPC_SYLK); lua_setfield(L,-2,"wxIPC_SYLK");
	lua_pushnumber(L,wxIPC_DIF); lua_setfield(L,-2,"wxIPC_DIF");
	lua_pushnumber(L,wxIPC_TIFF); lua_setfield(L,-2,"wxIPC_TIFF");
	lua_pushnumber(L,wxIPC_OEMTEXT); lua_setfield(L,-2,"wxIPC_OEMTEXT");
	lua_pushnumber(L,wxIPC_DIB); lua_setfield(L,-2,"wxIPC_DIB");
	lua_pushnumber(L,wxIPC_PALETTE); lua_setfield(L,-2,"wxIPC_PALETTE");
	lua_pushnumber(L,wxIPC_PENDATA); lua_setfield(L,-2,"wxIPC_PENDATA");
	lua_pushnumber(L,wxIPC_RIFF); lua_setfield(L,-2,"wxIPC_RIFF");
	lua_pushnumber(L,wxIPC_WAVE); lua_setfield(L,-2,"wxIPC_WAVE");
	lua_pushnumber(L,wxIPC_UTF16TEXT); lua_setfield(L,-2,"wxIPC_UTF16TEXT");
	lua_pushnumber(L,wxIPC_ENHMETAFILE); lua_setfield(L,-2,"wxIPC_ENHMETAFILE");
	lua_pushnumber(L,wxIPC_FILENAME); lua_setfield(L,-2,"wxIPC_FILENAME");
	lua_pushnumber(L,wxIPC_LOCALE); lua_setfield(L,-2,"wxIPC_LOCALE");
	lua_pushnumber(L,wxIPC_UTF8TEXT); lua_setfield(L,-2,"wxIPC_UTF8TEXT");
	lua_pushnumber(L,wxIPC_UTF32TEXT); lua_setfield(L,-2,"wxIPC_UTF32TEXT");
	lua_pushnumber(L,wxIPC_UNICODETEXT); lua_setfield(L,-2,"wxIPC_UNICODETEXT");
	lua_pushnumber(L,wxIPC_PRIVATE); lua_setfield(L,-2,"wxIPC_PRIVATE");

	lua_setfield(L,-2,"wxIPCFormat");

	lua_pushnumber(L,wxIPC_INVALID); lua_setfield(L,-2,"wxIPC_INVALID");
	lua_pushnumber(L,wxIPC_TEXT); lua_setfield(L,-2,"wxIPC_TEXT");
	lua_pushnumber(L,wxIPC_BITMAP); lua_setfield(L,-2,"wxIPC_BITMAP");
	lua_pushnumber(L,wxIPC_METAFILE); lua_setfield(L,-2,"wxIPC_METAFILE");
	lua_pushnumber(L,wxIPC_SYLK); lua_setfield(L,-2,"wxIPC_SYLK");
	lua_pushnumber(L,wxIPC_DIF); lua_setfield(L,-2,"wxIPC_DIF");
	lua_pushnumber(L,wxIPC_TIFF); lua_setfield(L,-2,"wxIPC_TIFF");
	lua_pushnumber(L,wxIPC_OEMTEXT); lua_setfield(L,-2,"wxIPC_OEMTEXT");
	lua_pushnumber(L,wxIPC_DIB); lua_setfield(L,-2,"wxIPC_DIB");
	lua_pushnumber(L,wxIPC_PALETTE); lua_setfield(L,-2,"wxIPC_PALETTE");
	lua_pushnumber(L,wxIPC_PENDATA); lua_setfield(L,-2,"wxIPC_PENDATA");
	lua_pushnumber(L,wxIPC_RIFF); lua_setfield(L,-2,"wxIPC_RIFF");
	lua_pushnumber(L,wxIPC_WAVE); lua_setfield(L,-2,"wxIPC_WAVE");
	lua_pushnumber(L,wxIPC_UTF16TEXT); lua_setfield(L,-2,"wxIPC_UTF16TEXT");
	lua_pushnumber(L,wxIPC_ENHMETAFILE); lua_setfield(L,-2,"wxIPC_ENHMETAFILE");
	lua_pushnumber(L,wxIPC_FILENAME); lua_setfield(L,-2,"wxIPC_FILENAME");
	lua_pushnumber(L,wxIPC_LOCALE); lua_setfield(L,-2,"wxIPC_LOCALE");
	lua_pushnumber(L,wxIPC_UTF8TEXT); lua_setfield(L,-2,"wxIPC_UTF8TEXT");
	lua_pushnumber(L,wxIPC_UTF32TEXT); lua_setfield(L,-2,"wxIPC_UTF32TEXT");
	lua_pushnumber(L,wxIPC_UNICODETEXT); lua_setfield(L,-2,"wxIPC_UNICODETEXT");
	lua_pushnumber(L,wxIPC_PRIVATE); lua_setfield(L,-2,"wxIPC_PRIVATE");


	lua_newtable(L); // enum wxScrollbarVisibility

	lua_pushnumber(L,wxSHOW_SB_NEVER); lua_setfield(L,-2,"wxSHOW_SB_NEVER");
	lua_pushnumber(L,wxSHOW_SB_DEFAULT); lua_setfield(L,-2,"wxSHOW_SB_DEFAULT");
	lua_pushnumber(L,wxSHOW_SB_ALWAYS); lua_setfield(L,-2,"wxSHOW_SB_ALWAYS");

	lua_setfield(L,-2,"wxScrollbarVisibility");

	lua_pushnumber(L,wxSHOW_SB_NEVER); lua_setfield(L,-2,"wxSHOW_SB_NEVER");
	lua_pushnumber(L,wxSHOW_SB_DEFAULT); lua_setfield(L,-2,"wxSHOW_SB_DEFAULT");
	lua_pushnumber(L,wxSHOW_SB_ALWAYS); lua_setfield(L,-2,"wxSHOW_SB_ALWAYS");


	lua_newtable(L); // enum wxSystemFont

	lua_pushnumber(L,wxSYS_OEM_FIXED_FONT); lua_setfield(L,-2,"wxSYS_OEM_FIXED_FONT");
	lua_pushnumber(L,wxSYS_ANSI_FIXED_FONT); lua_setfield(L,-2,"wxSYS_ANSI_FIXED_FONT");
	lua_pushnumber(L,wxSYS_ANSI_VAR_FONT); lua_setfield(L,-2,"wxSYS_ANSI_VAR_FONT");
	lua_pushnumber(L,wxSYS_SYSTEM_FONT); lua_setfield(L,-2,"wxSYS_SYSTEM_FONT");
	lua_pushnumber(L,wxSYS_DEVICE_DEFAULT_FONT); lua_setfield(L,-2,"wxSYS_DEVICE_DEFAULT_FONT");
	lua_pushnumber(L,wxSYS_DEFAULT_GUI_FONT); lua_setfield(L,-2,"wxSYS_DEFAULT_GUI_FONT");

	lua_setfield(L,-2,"wxSystemFont");

	lua_pushnumber(L,wxSYS_OEM_FIXED_FONT); lua_setfield(L,-2,"wxSYS_OEM_FIXED_FONT");
	lua_pushnumber(L,wxSYS_ANSI_FIXED_FONT); lua_setfield(L,-2,"wxSYS_ANSI_FIXED_FONT");
	lua_pushnumber(L,wxSYS_ANSI_VAR_FONT); lua_setfield(L,-2,"wxSYS_ANSI_VAR_FONT");
	lua_pushnumber(L,wxSYS_SYSTEM_FONT); lua_setfield(L,-2,"wxSYS_SYSTEM_FONT");
	lua_pushnumber(L,wxSYS_DEVICE_DEFAULT_FONT); lua_setfield(L,-2,"wxSYS_DEVICE_DEFAULT_FONT");
	lua_pushnumber(L,wxSYS_DEFAULT_GUI_FONT); lua_setfield(L,-2,"wxSYS_DEFAULT_GUI_FONT");


	lua_newtable(L); // enum wxSystemColour

	lua_pushnumber(L,wxSYS_COLOUR_SCROLLBAR); lua_setfield(L,-2,"wxSYS_COLOUR_SCROLLBAR");
	lua_pushnumber(L,wxSYS_COLOUR_DESKTOP); lua_setfield(L,-2,"wxSYS_COLOUR_DESKTOP");
	lua_pushnumber(L,wxSYS_COLOUR_ACTIVECAPTION); lua_setfield(L,-2,"wxSYS_COLOUR_ACTIVECAPTION");
	lua_pushnumber(L,wxSYS_COLOUR_INACTIVECAPTION); lua_setfield(L,-2,"wxSYS_COLOUR_INACTIVECAPTION");
	lua_pushnumber(L,wxSYS_COLOUR_MENU); lua_setfield(L,-2,"wxSYS_COLOUR_MENU");
	lua_pushnumber(L,wxSYS_COLOUR_WINDOW); lua_setfield(L,-2,"wxSYS_COLOUR_WINDOW");
	lua_pushnumber(L,wxSYS_COLOUR_WINDOWFRAME); lua_setfield(L,-2,"wxSYS_COLOUR_WINDOWFRAME");
	lua_pushnumber(L,wxSYS_COLOUR_MENUTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_MENUTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_WINDOWTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_WINDOWTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_CAPTIONTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_CAPTIONTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_ACTIVEBORDER); lua_setfield(L,-2,"wxSYS_COLOUR_ACTIVEBORDER");
	lua_pushnumber(L,wxSYS_COLOUR_INACTIVEBORDER); lua_setfield(L,-2,"wxSYS_COLOUR_INACTIVEBORDER");
	lua_pushnumber(L,wxSYS_COLOUR_APPWORKSPACE); lua_setfield(L,-2,"wxSYS_COLOUR_APPWORKSPACE");
	lua_pushnumber(L,wxSYS_COLOUR_HIGHLIGHT); lua_setfield(L,-2,"wxSYS_COLOUR_HIGHLIGHT");
	lua_pushnumber(L,wxSYS_COLOUR_HIGHLIGHTTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_HIGHLIGHTTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_BTNFACE); lua_setfield(L,-2,"wxSYS_COLOUR_BTNFACE");
	lua_pushnumber(L,wxSYS_COLOUR_BTNSHADOW); lua_setfield(L,-2,"wxSYS_COLOUR_BTNSHADOW");
	lua_pushnumber(L,wxSYS_COLOUR_GRAYTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_GRAYTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_BTNTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_BTNTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_INACTIVECAPTIONTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_INACTIVECAPTIONTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_BTNHIGHLIGHT); lua_setfield(L,-2,"wxSYS_COLOUR_BTNHIGHLIGHT");
	lua_pushnumber(L,wxSYS_COLOUR_3DDKSHADOW); lua_setfield(L,-2,"wxSYS_COLOUR_3DDKSHADOW");
	lua_pushnumber(L,wxSYS_COLOUR_3DLIGHT); lua_setfield(L,-2,"wxSYS_COLOUR_3DLIGHT");
	lua_pushnumber(L,wxSYS_COLOUR_INFOTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_INFOTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_INFOBK); lua_setfield(L,-2,"wxSYS_COLOUR_INFOBK");
	lua_pushnumber(L,wxSYS_COLOUR_LISTBOX); lua_setfield(L,-2,"wxSYS_COLOUR_LISTBOX");
	lua_pushnumber(L,wxSYS_COLOUR_HOTLIGHT); lua_setfield(L,-2,"wxSYS_COLOUR_HOTLIGHT");
	lua_pushnumber(L,wxSYS_COLOUR_GRADIENTACTIVECAPTION); lua_setfield(L,-2,"wxSYS_COLOUR_GRADIENTACTIVECAPTION");
	lua_pushnumber(L,wxSYS_COLOUR_GRADIENTINACTIVECAPTION); lua_setfield(L,-2,"wxSYS_COLOUR_GRADIENTINACTIVECAPTION");
	lua_pushnumber(L,wxSYS_COLOUR_MENUHILIGHT); lua_setfield(L,-2,"wxSYS_COLOUR_MENUHILIGHT");
	lua_pushnumber(L,wxSYS_COLOUR_MENUBAR); lua_setfield(L,-2,"wxSYS_COLOUR_MENUBAR");
	lua_pushnumber(L,wxSYS_COLOUR_LISTBOXTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_LISTBOXTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_LISTBOXHIGHLIGHTTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_LISTBOXHIGHLIGHTTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_BACKGROUND); lua_setfield(L,-2,"wxSYS_COLOUR_BACKGROUND");
	lua_pushnumber(L,wxSYS_COLOUR_3DFACE); lua_setfield(L,-2,"wxSYS_COLOUR_3DFACE");
	lua_pushnumber(L,wxSYS_COLOUR_3DSHADOW); lua_setfield(L,-2,"wxSYS_COLOUR_3DSHADOW");
	lua_pushnumber(L,wxSYS_COLOUR_BTNHILIGHT); lua_setfield(L,-2,"wxSYS_COLOUR_BTNHILIGHT");
	lua_pushnumber(L,wxSYS_COLOUR_3DHIGHLIGHT); lua_setfield(L,-2,"wxSYS_COLOUR_3DHIGHLIGHT");
	lua_pushnumber(L,wxSYS_COLOUR_3DHILIGHT); lua_setfield(L,-2,"wxSYS_COLOUR_3DHILIGHT");
	lua_pushnumber(L,wxSYS_COLOUR_FRAMEBK); lua_setfield(L,-2,"wxSYS_COLOUR_FRAMEBK");

	lua_setfield(L,-2,"wxSystemColour");

	lua_pushnumber(L,wxSYS_COLOUR_SCROLLBAR); lua_setfield(L,-2,"wxSYS_COLOUR_SCROLLBAR");
	lua_pushnumber(L,wxSYS_COLOUR_DESKTOP); lua_setfield(L,-2,"wxSYS_COLOUR_DESKTOP");
	lua_pushnumber(L,wxSYS_COLOUR_ACTIVECAPTION); lua_setfield(L,-2,"wxSYS_COLOUR_ACTIVECAPTION");
	lua_pushnumber(L,wxSYS_COLOUR_INACTIVECAPTION); lua_setfield(L,-2,"wxSYS_COLOUR_INACTIVECAPTION");
	lua_pushnumber(L,wxSYS_COLOUR_MENU); lua_setfield(L,-2,"wxSYS_COLOUR_MENU");
	lua_pushnumber(L,wxSYS_COLOUR_WINDOW); lua_setfield(L,-2,"wxSYS_COLOUR_WINDOW");
	lua_pushnumber(L,wxSYS_COLOUR_WINDOWFRAME); lua_setfield(L,-2,"wxSYS_COLOUR_WINDOWFRAME");
	lua_pushnumber(L,wxSYS_COLOUR_MENUTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_MENUTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_WINDOWTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_WINDOWTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_CAPTIONTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_CAPTIONTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_ACTIVEBORDER); lua_setfield(L,-2,"wxSYS_COLOUR_ACTIVEBORDER");
	lua_pushnumber(L,wxSYS_COLOUR_INACTIVEBORDER); lua_setfield(L,-2,"wxSYS_COLOUR_INACTIVEBORDER");
	lua_pushnumber(L,wxSYS_COLOUR_APPWORKSPACE); lua_setfield(L,-2,"wxSYS_COLOUR_APPWORKSPACE");
	lua_pushnumber(L,wxSYS_COLOUR_HIGHLIGHT); lua_setfield(L,-2,"wxSYS_COLOUR_HIGHLIGHT");
	lua_pushnumber(L,wxSYS_COLOUR_HIGHLIGHTTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_HIGHLIGHTTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_BTNFACE); lua_setfield(L,-2,"wxSYS_COLOUR_BTNFACE");
	lua_pushnumber(L,wxSYS_COLOUR_BTNSHADOW); lua_setfield(L,-2,"wxSYS_COLOUR_BTNSHADOW");
	lua_pushnumber(L,wxSYS_COLOUR_GRAYTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_GRAYTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_BTNTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_BTNTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_INACTIVECAPTIONTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_INACTIVECAPTIONTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_BTNHIGHLIGHT); lua_setfield(L,-2,"wxSYS_COLOUR_BTNHIGHLIGHT");
	lua_pushnumber(L,wxSYS_COLOUR_3DDKSHADOW); lua_setfield(L,-2,"wxSYS_COLOUR_3DDKSHADOW");
	lua_pushnumber(L,wxSYS_COLOUR_3DLIGHT); lua_setfield(L,-2,"wxSYS_COLOUR_3DLIGHT");
	lua_pushnumber(L,wxSYS_COLOUR_INFOTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_INFOTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_INFOBK); lua_setfield(L,-2,"wxSYS_COLOUR_INFOBK");
	lua_pushnumber(L,wxSYS_COLOUR_LISTBOX); lua_setfield(L,-2,"wxSYS_COLOUR_LISTBOX");
	lua_pushnumber(L,wxSYS_COLOUR_HOTLIGHT); lua_setfield(L,-2,"wxSYS_COLOUR_HOTLIGHT");
	lua_pushnumber(L,wxSYS_COLOUR_GRADIENTACTIVECAPTION); lua_setfield(L,-2,"wxSYS_COLOUR_GRADIENTACTIVECAPTION");
	lua_pushnumber(L,wxSYS_COLOUR_GRADIENTINACTIVECAPTION); lua_setfield(L,-2,"wxSYS_COLOUR_GRADIENTINACTIVECAPTION");
	lua_pushnumber(L,wxSYS_COLOUR_MENUHILIGHT); lua_setfield(L,-2,"wxSYS_COLOUR_MENUHILIGHT");
	lua_pushnumber(L,wxSYS_COLOUR_MENUBAR); lua_setfield(L,-2,"wxSYS_COLOUR_MENUBAR");
	lua_pushnumber(L,wxSYS_COLOUR_LISTBOXTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_LISTBOXTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_LISTBOXHIGHLIGHTTEXT); lua_setfield(L,-2,"wxSYS_COLOUR_LISTBOXHIGHLIGHTTEXT");
	lua_pushnumber(L,wxSYS_COLOUR_BACKGROUND); lua_setfield(L,-2,"wxSYS_COLOUR_BACKGROUND");
	lua_pushnumber(L,wxSYS_COLOUR_3DFACE); lua_setfield(L,-2,"wxSYS_COLOUR_3DFACE");
	lua_pushnumber(L,wxSYS_COLOUR_3DSHADOW); lua_setfield(L,-2,"wxSYS_COLOUR_3DSHADOW");
	lua_pushnumber(L,wxSYS_COLOUR_BTNHILIGHT); lua_setfield(L,-2,"wxSYS_COLOUR_BTNHILIGHT");
	lua_pushnumber(L,wxSYS_COLOUR_3DHIGHLIGHT); lua_setfield(L,-2,"wxSYS_COLOUR_3DHIGHLIGHT");
	lua_pushnumber(L,wxSYS_COLOUR_3DHILIGHT); lua_setfield(L,-2,"wxSYS_COLOUR_3DHILIGHT");
	lua_pushnumber(L,wxSYS_COLOUR_FRAMEBK); lua_setfield(L,-2,"wxSYS_COLOUR_FRAMEBK");


	lua_newtable(L); // enum wxSystemMetric

	lua_pushnumber(L,wxSYS_MOUSE_BUTTONS); lua_setfield(L,-2,"wxSYS_MOUSE_BUTTONS");
	lua_pushnumber(L,wxSYS_BORDER_X); lua_setfield(L,-2,"wxSYS_BORDER_X");
	lua_pushnumber(L,wxSYS_BORDER_Y); lua_setfield(L,-2,"wxSYS_BORDER_Y");
	lua_pushnumber(L,wxSYS_CURSOR_X); lua_setfield(L,-2,"wxSYS_CURSOR_X");
	lua_pushnumber(L,wxSYS_CURSOR_Y); lua_setfield(L,-2,"wxSYS_CURSOR_Y");
	lua_pushnumber(L,wxSYS_DCLICK_X); lua_setfield(L,-2,"wxSYS_DCLICK_X");
	lua_pushnumber(L,wxSYS_DCLICK_Y); lua_setfield(L,-2,"wxSYS_DCLICK_Y");
	lua_pushnumber(L,wxSYS_DCLICK_MSEC); lua_setfield(L,-2,"wxSYS_DCLICK_MSEC");
	lua_pushnumber(L,wxSYS_DRAG_X); lua_setfield(L,-2,"wxSYS_DRAG_X");
	lua_pushnumber(L,wxSYS_DRAG_Y); lua_setfield(L,-2,"wxSYS_DRAG_Y");
	lua_pushnumber(L,wxSYS_EDGE_X); lua_setfield(L,-2,"wxSYS_EDGE_X");
	lua_pushnumber(L,wxSYS_EDGE_Y); lua_setfield(L,-2,"wxSYS_EDGE_Y");
	lua_pushnumber(L,wxSYS_HSCROLL_ARROW_X); lua_setfield(L,-2,"wxSYS_HSCROLL_ARROW_X");
	lua_pushnumber(L,wxSYS_HSCROLL_ARROW_Y); lua_setfield(L,-2,"wxSYS_HSCROLL_ARROW_Y");
	lua_pushnumber(L,wxSYS_HTHUMB_X); lua_setfield(L,-2,"wxSYS_HTHUMB_X");
	lua_pushnumber(L,wxSYS_ICON_X); lua_setfield(L,-2,"wxSYS_ICON_X");
	lua_pushnumber(L,wxSYS_ICON_Y); lua_setfield(L,-2,"wxSYS_ICON_Y");
	lua_pushnumber(L,wxSYS_ICONSPACING_X); lua_setfield(L,-2,"wxSYS_ICONSPACING_X");
	lua_pushnumber(L,wxSYS_ICONSPACING_Y); lua_setfield(L,-2,"wxSYS_ICONSPACING_Y");
	lua_pushnumber(L,wxSYS_WINDOWMIN_X); lua_setfield(L,-2,"wxSYS_WINDOWMIN_X");
	lua_pushnumber(L,wxSYS_WINDOWMIN_Y); lua_setfield(L,-2,"wxSYS_WINDOWMIN_Y");
	lua_pushnumber(L,wxSYS_SCREEN_X); lua_setfield(L,-2,"wxSYS_SCREEN_X");
	lua_pushnumber(L,wxSYS_SCREEN_Y); lua_setfield(L,-2,"wxSYS_SCREEN_Y");
	lua_pushnumber(L,wxSYS_FRAMESIZE_X); lua_setfield(L,-2,"wxSYS_FRAMESIZE_X");
	lua_pushnumber(L,wxSYS_FRAMESIZE_Y); lua_setfield(L,-2,"wxSYS_FRAMESIZE_Y");
	lua_pushnumber(L,wxSYS_SMALLICON_X); lua_setfield(L,-2,"wxSYS_SMALLICON_X");
	lua_pushnumber(L,wxSYS_SMALLICON_Y); lua_setfield(L,-2,"wxSYS_SMALLICON_Y");
	lua_pushnumber(L,wxSYS_HSCROLL_Y); lua_setfield(L,-2,"wxSYS_HSCROLL_Y");
	lua_pushnumber(L,wxSYS_VSCROLL_X); lua_setfield(L,-2,"wxSYS_VSCROLL_X");
	lua_pushnumber(L,wxSYS_VSCROLL_ARROW_X); lua_setfield(L,-2,"wxSYS_VSCROLL_ARROW_X");
	lua_pushnumber(L,wxSYS_VSCROLL_ARROW_Y); lua_setfield(L,-2,"wxSYS_VSCROLL_ARROW_Y");
	lua_pushnumber(L,wxSYS_VTHUMB_Y); lua_setfield(L,-2,"wxSYS_VTHUMB_Y");
	lua_pushnumber(L,wxSYS_CAPTION_Y); lua_setfield(L,-2,"wxSYS_CAPTION_Y");
	lua_pushnumber(L,wxSYS_MENU_Y); lua_setfield(L,-2,"wxSYS_MENU_Y");
	lua_pushnumber(L,wxSYS_NETWORK_PRESENT); lua_setfield(L,-2,"wxSYS_NETWORK_PRESENT");
	lua_pushnumber(L,wxSYS_PENWINDOWS_PRESENT); lua_setfield(L,-2,"wxSYS_PENWINDOWS_PRESENT");
	lua_pushnumber(L,wxSYS_SHOW_SOUNDS); lua_setfield(L,-2,"wxSYS_SHOW_SOUNDS");
	lua_pushnumber(L,wxSYS_SWAP_BUTTONS); lua_setfield(L,-2,"wxSYS_SWAP_BUTTONS");

	lua_setfield(L,-2,"wxSystemMetric");

	lua_pushnumber(L,wxSYS_MOUSE_BUTTONS); lua_setfield(L,-2,"wxSYS_MOUSE_BUTTONS");
	lua_pushnumber(L,wxSYS_BORDER_X); lua_setfield(L,-2,"wxSYS_BORDER_X");
	lua_pushnumber(L,wxSYS_BORDER_Y); lua_setfield(L,-2,"wxSYS_BORDER_Y");
	lua_pushnumber(L,wxSYS_CURSOR_X); lua_setfield(L,-2,"wxSYS_CURSOR_X");
	lua_pushnumber(L,wxSYS_CURSOR_Y); lua_setfield(L,-2,"wxSYS_CURSOR_Y");
	lua_pushnumber(L,wxSYS_DCLICK_X); lua_setfield(L,-2,"wxSYS_DCLICK_X");
	lua_pushnumber(L,wxSYS_DCLICK_Y); lua_setfield(L,-2,"wxSYS_DCLICK_Y");
	lua_pushnumber(L,wxSYS_DCLICK_MSEC); lua_setfield(L,-2,"wxSYS_DCLICK_MSEC");
	lua_pushnumber(L,wxSYS_DRAG_X); lua_setfield(L,-2,"wxSYS_DRAG_X");
	lua_pushnumber(L,wxSYS_DRAG_Y); lua_setfield(L,-2,"wxSYS_DRAG_Y");
	lua_pushnumber(L,wxSYS_EDGE_X); lua_setfield(L,-2,"wxSYS_EDGE_X");
	lua_pushnumber(L,wxSYS_EDGE_Y); lua_setfield(L,-2,"wxSYS_EDGE_Y");
	lua_pushnumber(L,wxSYS_HSCROLL_ARROW_X); lua_setfield(L,-2,"wxSYS_HSCROLL_ARROW_X");
	lua_pushnumber(L,wxSYS_HSCROLL_ARROW_Y); lua_setfield(L,-2,"wxSYS_HSCROLL_ARROW_Y");
	lua_pushnumber(L,wxSYS_HTHUMB_X); lua_setfield(L,-2,"wxSYS_HTHUMB_X");
	lua_pushnumber(L,wxSYS_ICON_X); lua_setfield(L,-2,"wxSYS_ICON_X");
	lua_pushnumber(L,wxSYS_ICON_Y); lua_setfield(L,-2,"wxSYS_ICON_Y");
	lua_pushnumber(L,wxSYS_ICONSPACING_X); lua_setfield(L,-2,"wxSYS_ICONSPACING_X");
	lua_pushnumber(L,wxSYS_ICONSPACING_Y); lua_setfield(L,-2,"wxSYS_ICONSPACING_Y");
	lua_pushnumber(L,wxSYS_WINDOWMIN_X); lua_setfield(L,-2,"wxSYS_WINDOWMIN_X");
	lua_pushnumber(L,wxSYS_WINDOWMIN_Y); lua_setfield(L,-2,"wxSYS_WINDOWMIN_Y");
	lua_pushnumber(L,wxSYS_SCREEN_X); lua_setfield(L,-2,"wxSYS_SCREEN_X");
	lua_pushnumber(L,wxSYS_SCREEN_Y); lua_setfield(L,-2,"wxSYS_SCREEN_Y");
	lua_pushnumber(L,wxSYS_FRAMESIZE_X); lua_setfield(L,-2,"wxSYS_FRAMESIZE_X");
	lua_pushnumber(L,wxSYS_FRAMESIZE_Y); lua_setfield(L,-2,"wxSYS_FRAMESIZE_Y");
	lua_pushnumber(L,wxSYS_SMALLICON_X); lua_setfield(L,-2,"wxSYS_SMALLICON_X");
	lua_pushnumber(L,wxSYS_SMALLICON_Y); lua_setfield(L,-2,"wxSYS_SMALLICON_Y");
	lua_pushnumber(L,wxSYS_HSCROLL_Y); lua_setfield(L,-2,"wxSYS_HSCROLL_Y");
	lua_pushnumber(L,wxSYS_VSCROLL_X); lua_setfield(L,-2,"wxSYS_VSCROLL_X");
	lua_pushnumber(L,wxSYS_VSCROLL_ARROW_X); lua_setfield(L,-2,"wxSYS_VSCROLL_ARROW_X");
	lua_pushnumber(L,wxSYS_VSCROLL_ARROW_Y); lua_setfield(L,-2,"wxSYS_VSCROLL_ARROW_Y");
	lua_pushnumber(L,wxSYS_VTHUMB_Y); lua_setfield(L,-2,"wxSYS_VTHUMB_Y");
	lua_pushnumber(L,wxSYS_CAPTION_Y); lua_setfield(L,-2,"wxSYS_CAPTION_Y");
	lua_pushnumber(L,wxSYS_MENU_Y); lua_setfield(L,-2,"wxSYS_MENU_Y");
	lua_pushnumber(L,wxSYS_NETWORK_PRESENT); lua_setfield(L,-2,"wxSYS_NETWORK_PRESENT");
	lua_pushnumber(L,wxSYS_PENWINDOWS_PRESENT); lua_setfield(L,-2,"wxSYS_PENWINDOWS_PRESENT");
	lua_pushnumber(L,wxSYS_SHOW_SOUNDS); lua_setfield(L,-2,"wxSYS_SHOW_SOUNDS");
	lua_pushnumber(L,wxSYS_SWAP_BUTTONS); lua_setfield(L,-2,"wxSYS_SWAP_BUTTONS");


	lua_newtable(L); // enum wxSystemFeature

	lua_pushnumber(L,wxSYS_CAN_DRAW_FRAME_DECORATIONS); lua_setfield(L,-2,"wxSYS_CAN_DRAW_FRAME_DECORATIONS");
	lua_pushnumber(L,wxSYS_CAN_ICONIZE_FRAME); lua_setfield(L,-2,"wxSYS_CAN_ICONIZE_FRAME");
	lua_pushnumber(L,wxSYS_TABLET_PRESENT); lua_setfield(L,-2,"wxSYS_TABLET_PRESENT");

	lua_setfield(L,-2,"wxSystemFeature");

	lua_pushnumber(L,wxSYS_CAN_DRAW_FRAME_DECORATIONS); lua_setfield(L,-2,"wxSYS_CAN_DRAW_FRAME_DECORATIONS");
	lua_pushnumber(L,wxSYS_CAN_ICONIZE_FRAME); lua_setfield(L,-2,"wxSYS_CAN_ICONIZE_FRAME");
	lua_pushnumber(L,wxSYS_TABLET_PRESENT); lua_setfield(L,-2,"wxSYS_TABLET_PRESENT");


	lua_newtable(L); // enum wxSystemScreenType

	lua_pushnumber(L,wxSYS_SCREEN_NONE); lua_setfield(L,-2,"wxSYS_SCREEN_NONE");
	lua_pushnumber(L,wxSYS_SCREEN_TINY); lua_setfield(L,-2,"wxSYS_SCREEN_TINY");
	lua_pushnumber(L,wxSYS_SCREEN_PDA); lua_setfield(L,-2,"wxSYS_SCREEN_PDA");
	lua_pushnumber(L,wxSYS_SCREEN_SMALL); lua_setfield(L,-2,"wxSYS_SCREEN_SMALL");
	lua_pushnumber(L,wxSYS_SCREEN_DESKTOP); lua_setfield(L,-2,"wxSYS_SCREEN_DESKTOP");

	lua_setfield(L,-2,"wxSystemScreenType");

	lua_pushnumber(L,wxSYS_SCREEN_NONE); lua_setfield(L,-2,"wxSYS_SCREEN_NONE");
	lua_pushnumber(L,wxSYS_SCREEN_TINY); lua_setfield(L,-2,"wxSYS_SCREEN_TINY");
	lua_pushnumber(L,wxSYS_SCREEN_PDA); lua_setfield(L,-2,"wxSYS_SCREEN_PDA");
	lua_pushnumber(L,wxSYS_SCREEN_SMALL); lua_setfield(L,-2,"wxSYS_SCREEN_SMALL");
	lua_pushnumber(L,wxSYS_SCREEN_DESKTOP); lua_setfield(L,-2,"wxSYS_SCREEN_DESKTOP");


	lua_newtable(L); // enum wxFlexSizerGrowMode

	lua_pushnumber(L,wxFLEX_GROWMODE_NONE); lua_setfield(L,-2,"wxFLEX_GROWMODE_NONE");
	lua_pushnumber(L,wxFLEX_GROWMODE_SPECIFIED); lua_setfield(L,-2,"wxFLEX_GROWMODE_SPECIFIED");
	lua_pushnumber(L,wxFLEX_GROWMODE_ALL); lua_setfield(L,-2,"wxFLEX_GROWMODE_ALL");

	lua_setfield(L,-2,"wxFlexSizerGrowMode");

	lua_pushnumber(L,wxFLEX_GROWMODE_NONE); lua_setfield(L,-2,"wxFLEX_GROWMODE_NONE");
	lua_pushnumber(L,wxFLEX_GROWMODE_SPECIFIED); lua_setfield(L,-2,"wxFLEX_GROWMODE_SPECIFIED");
	lua_pushnumber(L,wxFLEX_GROWMODE_ALL); lua_setfield(L,-2,"wxFLEX_GROWMODE_ALL");


	lua_newtable(L); // enum wxSocketError

	lua_pushnumber(L,wxSOCKET_NOERROR); lua_setfield(L,-2,"wxSOCKET_NOERROR");
	lua_pushnumber(L,wxSOCKET_INVOP); lua_setfield(L,-2,"wxSOCKET_INVOP");
	lua_pushnumber(L,wxSOCKET_IOERR); lua_setfield(L,-2,"wxSOCKET_IOERR");
	lua_pushnumber(L,wxSOCKET_INVADDR); lua_setfield(L,-2,"wxSOCKET_INVADDR");
	lua_pushnumber(L,wxSOCKET_INVSOCK); lua_setfield(L,-2,"wxSOCKET_INVSOCK");
	lua_pushnumber(L,wxSOCKET_NOHOST); lua_setfield(L,-2,"wxSOCKET_NOHOST");
	lua_pushnumber(L,wxSOCKET_INVPORT); lua_setfield(L,-2,"wxSOCKET_INVPORT");
	lua_pushnumber(L,wxSOCKET_WOULDBLOCK); lua_setfield(L,-2,"wxSOCKET_WOULDBLOCK");
	lua_pushnumber(L,wxSOCKET_TIMEDOUT); lua_setfield(L,-2,"wxSOCKET_TIMEDOUT");
	lua_pushnumber(L,wxSOCKET_MEMERR); lua_setfield(L,-2,"wxSOCKET_MEMERR");

	lua_setfield(L,-2,"wxSocketError");

	lua_pushnumber(L,wxSOCKET_NOERROR); lua_setfield(L,-2,"wxSOCKET_NOERROR");
	lua_pushnumber(L,wxSOCKET_INVOP); lua_setfield(L,-2,"wxSOCKET_INVOP");
	lua_pushnumber(L,wxSOCKET_IOERR); lua_setfield(L,-2,"wxSOCKET_IOERR");
	lua_pushnumber(L,wxSOCKET_INVADDR); lua_setfield(L,-2,"wxSOCKET_INVADDR");
	lua_pushnumber(L,wxSOCKET_INVSOCK); lua_setfield(L,-2,"wxSOCKET_INVSOCK");
	lua_pushnumber(L,wxSOCKET_NOHOST); lua_setfield(L,-2,"wxSOCKET_NOHOST");
	lua_pushnumber(L,wxSOCKET_INVPORT); lua_setfield(L,-2,"wxSOCKET_INVPORT");
	lua_pushnumber(L,wxSOCKET_WOULDBLOCK); lua_setfield(L,-2,"wxSOCKET_WOULDBLOCK");
	lua_pushnumber(L,wxSOCKET_TIMEDOUT); lua_setfield(L,-2,"wxSOCKET_TIMEDOUT");
	lua_pushnumber(L,wxSOCKET_MEMERR); lua_setfield(L,-2,"wxSOCKET_MEMERR");


	lua_newtable(L); // enum wxSocketEventFlags

	lua_pushnumber(L,wxSOCKET_INPUT); lua_setfield(L,-2,"wxSOCKET_INPUT");
	lua_pushnumber(L,wxSOCKET_OUTPUT); lua_setfield(L,-2,"wxSOCKET_OUTPUT");
	lua_pushnumber(L,wxSOCKET_CONNECTION); lua_setfield(L,-2,"wxSOCKET_CONNECTION");
	lua_pushnumber(L,wxSOCKET_LOST); lua_setfield(L,-2,"wxSOCKET_LOST");

	lua_setfield(L,-2,"wxSocketEventFlags");

	lua_pushnumber(L,wxSOCKET_INPUT); lua_setfield(L,-2,"wxSOCKET_INPUT");
	lua_pushnumber(L,wxSOCKET_OUTPUT); lua_setfield(L,-2,"wxSOCKET_OUTPUT");
	lua_pushnumber(L,wxSOCKET_CONNECTION); lua_setfield(L,-2,"wxSOCKET_CONNECTION");
	lua_pushnumber(L,wxSOCKET_LOST); lua_setfield(L,-2,"wxSOCKET_LOST");


	lua_newtable(L); // enum unnamed_17

	lua_pushnumber(L,wxSOCKET_NONE); lua_setfield(L,-2,"wxSOCKET_NONE");
	lua_pushnumber(L,wxSOCKET_NOWAIT); lua_setfield(L,-2,"wxSOCKET_NOWAIT");
	lua_pushnumber(L,wxSOCKET_WAITALL); lua_setfield(L,-2,"wxSOCKET_WAITALL");
	lua_pushnumber(L,wxSOCKET_BLOCK); lua_setfield(L,-2,"wxSOCKET_BLOCK");
	lua_pushnumber(L,wxSOCKET_REUSEADDR); lua_setfield(L,-2,"wxSOCKET_REUSEADDR");
	lua_pushnumber(L,wxSOCKET_BROADCAST); lua_setfield(L,-2,"wxSOCKET_BROADCAST");
	lua_pushnumber(L,wxSOCKET_NOBIND); lua_setfield(L,-2,"wxSOCKET_NOBIND");

	lua_setfield(L,-2,"unnamed_17");

	lua_pushnumber(L,wxSOCKET_NONE); lua_setfield(L,-2,"wxSOCKET_NONE");
	lua_pushnumber(L,wxSOCKET_NOWAIT); lua_setfield(L,-2,"wxSOCKET_NOWAIT");
	lua_pushnumber(L,wxSOCKET_WAITALL); lua_setfield(L,-2,"wxSOCKET_WAITALL");
	lua_pushnumber(L,wxSOCKET_BLOCK); lua_setfield(L,-2,"wxSOCKET_BLOCK");
	lua_pushnumber(L,wxSOCKET_REUSEADDR); lua_setfield(L,-2,"wxSOCKET_REUSEADDR");
	lua_pushnumber(L,wxSOCKET_BROADCAST); lua_setfield(L,-2,"wxSOCKET_BROADCAST");
	lua_pushnumber(L,wxSOCKET_NOBIND); lua_setfield(L,-2,"wxSOCKET_NOBIND");


	lua_newtable(L); // enum wxSplitMode

	lua_pushnumber(L,wxSPLIT_HORIZONTAL); lua_setfield(L,-2,"wxSPLIT_HORIZONTAL");
	lua_pushnumber(L,wxSPLIT_VERTICAL); lua_setfield(L,-2,"wxSPLIT_VERTICAL");

	lua_setfield(L,-2,"wxSplitMode");

	lua_pushnumber(L,wxSPLIT_HORIZONTAL); lua_setfield(L,-2,"wxSPLIT_HORIZONTAL");
	lua_pushnumber(L,wxSPLIT_VERTICAL); lua_setfield(L,-2,"wxSPLIT_VERTICAL");


	lua_newtable(L); // enum unnamed_18

	lua_pushnumber(L,wxSPLIT_DRAG_NONE); lua_setfield(L,-2,"wxSPLIT_DRAG_NONE");
	lua_pushnumber(L,wxSPLIT_DRAG_DRAGGING); lua_setfield(L,-2,"wxSPLIT_DRAG_DRAGGING");
	lua_pushnumber(L,wxSPLIT_DRAG_LEFT_DOWN); lua_setfield(L,-2,"wxSPLIT_DRAG_LEFT_DOWN");

	lua_setfield(L,-2,"unnamed_18");

	lua_pushnumber(L,wxSPLIT_DRAG_NONE); lua_setfield(L,-2,"wxSPLIT_DRAG_NONE");
	lua_pushnumber(L,wxSPLIT_DRAG_DRAGGING); lua_setfield(L,-2,"wxSPLIT_DRAG_DRAGGING");
	lua_pushnumber(L,wxSPLIT_DRAG_LEFT_DOWN); lua_setfield(L,-2,"wxSPLIT_DRAG_LEFT_DOWN");


	lua_newtable(L); // enum wxStockLabelQueryFlag

	lua_pushnumber(L,wxSTOCK_NOFLAGS); lua_setfield(L,-2,"wxSTOCK_NOFLAGS");
	lua_pushnumber(L,wxSTOCK_WITH_MNEMONIC); lua_setfield(L,-2,"wxSTOCK_WITH_MNEMONIC");
	lua_pushnumber(L,wxSTOCK_WITH_ACCELERATOR); lua_setfield(L,-2,"wxSTOCK_WITH_ACCELERATOR");
	lua_pushnumber(L,wxSTOCK_WITHOUT_ELLIPSIS); lua_setfield(L,-2,"wxSTOCK_WITHOUT_ELLIPSIS");
	lua_pushnumber(L,wxSTOCK_FOR_BUTTON); lua_setfield(L,-2,"wxSTOCK_FOR_BUTTON");

	lua_setfield(L,-2,"wxStockLabelQueryFlag");

	lua_pushnumber(L,wxSTOCK_NOFLAGS); lua_setfield(L,-2,"wxSTOCK_NOFLAGS");
	lua_pushnumber(L,wxSTOCK_WITH_MNEMONIC); lua_setfield(L,-2,"wxSTOCK_WITH_MNEMONIC");
	lua_pushnumber(L,wxSTOCK_WITH_ACCELERATOR); lua_setfield(L,-2,"wxSTOCK_WITH_ACCELERATOR");
	lua_pushnumber(L,wxSTOCK_WITHOUT_ELLIPSIS); lua_setfield(L,-2,"wxSTOCK_WITHOUT_ELLIPSIS");
	lua_pushnumber(L,wxSTOCK_FOR_BUTTON); lua_setfield(L,-2,"wxSTOCK_FOR_BUTTON");


	lua_newtable(L); // enum wxStreamError

	lua_pushnumber(L,wxSTREAM_NO_ERROR); lua_setfield(L,-2,"wxSTREAM_NO_ERROR");
	lua_pushnumber(L,wxSTREAM_EOF); lua_setfield(L,-2,"wxSTREAM_EOF");
	lua_pushnumber(L,wxSTREAM_WRITE_ERROR); lua_setfield(L,-2,"wxSTREAM_WRITE_ERROR");
	lua_pushnumber(L,wxSTREAM_READ_ERROR); lua_setfield(L,-2,"wxSTREAM_READ_ERROR");

	lua_setfield(L,-2,"wxStreamError");

	lua_pushnumber(L,wxSTREAM_NO_ERROR); lua_setfield(L,-2,"wxSTREAM_NO_ERROR");
	lua_pushnumber(L,wxSTREAM_EOF); lua_setfield(L,-2,"wxSTREAM_EOF");
	lua_pushnumber(L,wxSTREAM_WRITE_ERROR); lua_setfield(L,-2,"wxSTREAM_WRITE_ERROR");
	lua_pushnumber(L,wxSTREAM_READ_ERROR); lua_setfield(L,-2,"wxSTREAM_READ_ERROR");


	lua_newtable(L); // enum wxStreamProtocolType

	lua_pushnumber(L,wxSTREAM_PROTOCOL); lua_setfield(L,-2,"wxSTREAM_PROTOCOL");
	lua_pushnumber(L,wxSTREAM_MIMETYPE); lua_setfield(L,-2,"wxSTREAM_MIMETYPE");
	lua_pushnumber(L,wxSTREAM_ENCODING); lua_setfield(L,-2,"wxSTREAM_ENCODING");
	lua_pushnumber(L,wxSTREAM_FILEEXT); lua_setfield(L,-2,"wxSTREAM_FILEEXT");

	lua_setfield(L,-2,"wxStreamProtocolType");

	lua_pushnumber(L,wxSTREAM_PROTOCOL); lua_setfield(L,-2,"wxSTREAM_PROTOCOL");
	lua_pushnumber(L,wxSTREAM_MIMETYPE); lua_setfield(L,-2,"wxSTREAM_MIMETYPE");
	lua_pushnumber(L,wxSTREAM_ENCODING); lua_setfield(L,-2,"wxSTREAM_ENCODING");
	lua_pushnumber(L,wxSTREAM_FILEEXT); lua_setfield(L,-2,"wxSTREAM_FILEEXT");


	lua_newtable(L); // enum wxTarType

	lua_pushnumber(L,wxTAR_REGTYPE); lua_setfield(L,-2,"wxTAR_REGTYPE");
	lua_pushnumber(L,wxTAR_LNKTYPE); lua_setfield(L,-2,"wxTAR_LNKTYPE");
	lua_pushnumber(L,wxTAR_SYMTYPE); lua_setfield(L,-2,"wxTAR_SYMTYPE");
	lua_pushnumber(L,wxTAR_CHRTYPE); lua_setfield(L,-2,"wxTAR_CHRTYPE");
	lua_pushnumber(L,wxTAR_BLKTYPE); lua_setfield(L,-2,"wxTAR_BLKTYPE");
	lua_pushnumber(L,wxTAR_DIRTYPE); lua_setfield(L,-2,"wxTAR_DIRTYPE");
	lua_pushnumber(L,wxTAR_FIFOTYPE); lua_setfield(L,-2,"wxTAR_FIFOTYPE");
	lua_pushnumber(L,wxTAR_CONTTYPE); lua_setfield(L,-2,"wxTAR_CONTTYPE");

	lua_setfield(L,-2,"wxTarType");

	lua_pushnumber(L,wxTAR_REGTYPE); lua_setfield(L,-2,"wxTAR_REGTYPE");
	lua_pushnumber(L,wxTAR_LNKTYPE); lua_setfield(L,-2,"wxTAR_LNKTYPE");
	lua_pushnumber(L,wxTAR_SYMTYPE); lua_setfield(L,-2,"wxTAR_SYMTYPE");
	lua_pushnumber(L,wxTAR_CHRTYPE); lua_setfield(L,-2,"wxTAR_CHRTYPE");
	lua_pushnumber(L,wxTAR_BLKTYPE); lua_setfield(L,-2,"wxTAR_BLKTYPE");
	lua_pushnumber(L,wxTAR_DIRTYPE); lua_setfield(L,-2,"wxTAR_DIRTYPE");
	lua_pushnumber(L,wxTAR_FIFOTYPE); lua_setfield(L,-2,"wxTAR_FIFOTYPE");
	lua_pushnumber(L,wxTAR_CONTTYPE); lua_setfield(L,-2,"wxTAR_CONTTYPE");


	lua_newtable(L); // enum wxTarFormat

	lua_pushnumber(L,wxTAR_USTAR); lua_setfield(L,-2,"wxTAR_USTAR");
	lua_pushnumber(L,wxTAR_PAX); lua_setfield(L,-2,"wxTAR_PAX");

	lua_setfield(L,-2,"wxTarFormat");

	lua_pushnumber(L,wxTAR_USTAR); lua_setfield(L,-2,"wxTAR_USTAR");
	lua_pushnumber(L,wxTAR_PAX); lua_setfield(L,-2,"wxTAR_PAX");


	lua_newtable(L); // enum wxTextAttrAlignment

	lua_pushnumber(L,wxTEXT_ALIGNMENT_DEFAULT); lua_setfield(L,-2,"wxTEXT_ALIGNMENT_DEFAULT");
	lua_pushnumber(L,wxTEXT_ALIGNMENT_LEFT); lua_setfield(L,-2,"wxTEXT_ALIGNMENT_LEFT");
	lua_pushnumber(L,wxTEXT_ALIGNMENT_CENTRE); lua_setfield(L,-2,"wxTEXT_ALIGNMENT_CENTRE");
	lua_pushnumber(L,wxTEXT_ALIGNMENT_CENTER); lua_setfield(L,-2,"wxTEXT_ALIGNMENT_CENTER");
	lua_pushnumber(L,wxTEXT_ALIGNMENT_RIGHT); lua_setfield(L,-2,"wxTEXT_ALIGNMENT_RIGHT");
	lua_pushnumber(L,wxTEXT_ALIGNMENT_JUSTIFIED); lua_setfield(L,-2,"wxTEXT_ALIGNMENT_JUSTIFIED");

	lua_setfield(L,-2,"wxTextAttrAlignment");

	lua_pushnumber(L,wxTEXT_ALIGNMENT_DEFAULT); lua_setfield(L,-2,"wxTEXT_ALIGNMENT_DEFAULT");
	lua_pushnumber(L,wxTEXT_ALIGNMENT_LEFT); lua_setfield(L,-2,"wxTEXT_ALIGNMENT_LEFT");
	lua_pushnumber(L,wxTEXT_ALIGNMENT_CENTRE); lua_setfield(L,-2,"wxTEXT_ALIGNMENT_CENTRE");
	lua_pushnumber(L,wxTEXT_ALIGNMENT_CENTER); lua_setfield(L,-2,"wxTEXT_ALIGNMENT_CENTER");
	lua_pushnumber(L,wxTEXT_ALIGNMENT_RIGHT); lua_setfield(L,-2,"wxTEXT_ALIGNMENT_RIGHT");
	lua_pushnumber(L,wxTEXT_ALIGNMENT_JUSTIFIED); lua_setfield(L,-2,"wxTEXT_ALIGNMENT_JUSTIFIED");


	lua_newtable(L); // enum wxTextAttrFlags

	lua_pushnumber(L,wxTEXT_ATTR_TEXT_COLOUR); lua_setfield(L,-2,"wxTEXT_ATTR_TEXT_COLOUR");
	lua_pushnumber(L,wxTEXT_ATTR_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxTEXT_ATTR_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxTEXT_ATTR_FONT_FACE); lua_setfield(L,-2,"wxTEXT_ATTR_FONT_FACE");
	lua_pushnumber(L,wxTEXT_ATTR_FONT_SIZE); lua_setfield(L,-2,"wxTEXT_ATTR_FONT_SIZE");
	lua_pushnumber(L,wxTEXT_ATTR_FONT_WEIGHT); lua_setfield(L,-2,"wxTEXT_ATTR_FONT_WEIGHT");
	lua_pushnumber(L,wxTEXT_ATTR_FONT_ITALIC); lua_setfield(L,-2,"wxTEXT_ATTR_FONT_ITALIC");
	lua_pushnumber(L,wxTEXT_ATTR_FONT_UNDERLINE); lua_setfield(L,-2,"wxTEXT_ATTR_FONT_UNDERLINE");
	lua_pushnumber(L,wxTEXT_ATTR_FONT_ENCODING); lua_setfield(L,-2,"wxTEXT_ATTR_FONT_ENCODING");
	lua_pushnumber(L,wxTEXT_ATTR_FONT_FAMILY); lua_setfield(L,-2,"wxTEXT_ATTR_FONT_FAMILY");
	lua_pushnumber(L,wxTEXT_ATTR_FONT); lua_setfield(L,-2,"wxTEXT_ATTR_FONT");
	lua_pushnumber(L,wxTEXT_ATTR_ALIGNMENT); lua_setfield(L,-2,"wxTEXT_ATTR_ALIGNMENT");
	lua_pushnumber(L,wxTEXT_ATTR_LEFT_INDENT); lua_setfield(L,-2,"wxTEXT_ATTR_LEFT_INDENT");
	lua_pushnumber(L,wxTEXT_ATTR_RIGHT_INDENT); lua_setfield(L,-2,"wxTEXT_ATTR_RIGHT_INDENT");
	lua_pushnumber(L,wxTEXT_ATTR_TABS); lua_setfield(L,-2,"wxTEXT_ATTR_TABS");
	lua_pushnumber(L,wxTEXT_ATTR_PARA_SPACING_AFTER); lua_setfield(L,-2,"wxTEXT_ATTR_PARA_SPACING_AFTER");
	lua_pushnumber(L,wxTEXT_ATTR_PARA_SPACING_BEFORE); lua_setfield(L,-2,"wxTEXT_ATTR_PARA_SPACING_BEFORE");
	lua_pushnumber(L,wxTEXT_ATTR_LINE_SPACING); lua_setfield(L,-2,"wxTEXT_ATTR_LINE_SPACING");
	lua_pushnumber(L,wxTEXT_ATTR_CHARACTER_STYLE_NAME); lua_setfield(L,-2,"wxTEXT_ATTR_CHARACTER_STYLE_NAME");
	lua_pushnumber(L,wxTEXT_ATTR_PARAGRAPH_STYLE_NAME); lua_setfield(L,-2,"wxTEXT_ATTR_PARAGRAPH_STYLE_NAME");
	lua_pushnumber(L,wxTEXT_ATTR_LIST_STYLE_NAME); lua_setfield(L,-2,"wxTEXT_ATTR_LIST_STYLE_NAME");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_NUMBER); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_NUMBER");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_TEXT); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_TEXT");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_NAME); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_NAME");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET");
	lua_pushnumber(L,wxTEXT_ATTR_URL); lua_setfield(L,-2,"wxTEXT_ATTR_URL");
	lua_pushnumber(L,wxTEXT_ATTR_PAGE_BREAK); lua_setfield(L,-2,"wxTEXT_ATTR_PAGE_BREAK");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECTS); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECTS");
	lua_pushnumber(L,wxTEXT_ATTR_OUTLINE_LEVEL); lua_setfield(L,-2,"wxTEXT_ATTR_OUTLINE_LEVEL");
	lua_pushnumber(L,wxTEXT_ATTR_CHARACTER); lua_setfield(L,-2,"wxTEXT_ATTR_CHARACTER");
	lua_pushnumber(L,wxTEXT_ATTR_PARAGRAPH); lua_setfield(L,-2,"wxTEXT_ATTR_PARAGRAPH");
	lua_pushnumber(L,wxTEXT_ATTR_ALL); lua_setfield(L,-2,"wxTEXT_ATTR_ALL");

	lua_setfield(L,-2,"wxTextAttrFlags");

	lua_pushnumber(L,wxTEXT_ATTR_TEXT_COLOUR); lua_setfield(L,-2,"wxTEXT_ATTR_TEXT_COLOUR");
	lua_pushnumber(L,wxTEXT_ATTR_BACKGROUND_COLOUR); lua_setfield(L,-2,"wxTEXT_ATTR_BACKGROUND_COLOUR");
	lua_pushnumber(L,wxTEXT_ATTR_FONT_FACE); lua_setfield(L,-2,"wxTEXT_ATTR_FONT_FACE");
	lua_pushnumber(L,wxTEXT_ATTR_FONT_SIZE); lua_setfield(L,-2,"wxTEXT_ATTR_FONT_SIZE");
	lua_pushnumber(L,wxTEXT_ATTR_FONT_WEIGHT); lua_setfield(L,-2,"wxTEXT_ATTR_FONT_WEIGHT");
	lua_pushnumber(L,wxTEXT_ATTR_FONT_ITALIC); lua_setfield(L,-2,"wxTEXT_ATTR_FONT_ITALIC");
	lua_pushnumber(L,wxTEXT_ATTR_FONT_UNDERLINE); lua_setfield(L,-2,"wxTEXT_ATTR_FONT_UNDERLINE");
	lua_pushnumber(L,wxTEXT_ATTR_FONT_ENCODING); lua_setfield(L,-2,"wxTEXT_ATTR_FONT_ENCODING");
	lua_pushnumber(L,wxTEXT_ATTR_FONT_FAMILY); lua_setfield(L,-2,"wxTEXT_ATTR_FONT_FAMILY");
	lua_pushnumber(L,wxTEXT_ATTR_FONT); lua_setfield(L,-2,"wxTEXT_ATTR_FONT");
	lua_pushnumber(L,wxTEXT_ATTR_ALIGNMENT); lua_setfield(L,-2,"wxTEXT_ATTR_ALIGNMENT");
	lua_pushnumber(L,wxTEXT_ATTR_LEFT_INDENT); lua_setfield(L,-2,"wxTEXT_ATTR_LEFT_INDENT");
	lua_pushnumber(L,wxTEXT_ATTR_RIGHT_INDENT); lua_setfield(L,-2,"wxTEXT_ATTR_RIGHT_INDENT");
	lua_pushnumber(L,wxTEXT_ATTR_TABS); lua_setfield(L,-2,"wxTEXT_ATTR_TABS");
	lua_pushnumber(L,wxTEXT_ATTR_PARA_SPACING_AFTER); lua_setfield(L,-2,"wxTEXT_ATTR_PARA_SPACING_AFTER");
	lua_pushnumber(L,wxTEXT_ATTR_PARA_SPACING_BEFORE); lua_setfield(L,-2,"wxTEXT_ATTR_PARA_SPACING_BEFORE");
	lua_pushnumber(L,wxTEXT_ATTR_LINE_SPACING); lua_setfield(L,-2,"wxTEXT_ATTR_LINE_SPACING");
	lua_pushnumber(L,wxTEXT_ATTR_CHARACTER_STYLE_NAME); lua_setfield(L,-2,"wxTEXT_ATTR_CHARACTER_STYLE_NAME");
	lua_pushnumber(L,wxTEXT_ATTR_PARAGRAPH_STYLE_NAME); lua_setfield(L,-2,"wxTEXT_ATTR_PARAGRAPH_STYLE_NAME");
	lua_pushnumber(L,wxTEXT_ATTR_LIST_STYLE_NAME); lua_setfield(L,-2,"wxTEXT_ATTR_LIST_STYLE_NAME");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_NUMBER); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_NUMBER");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_TEXT); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_TEXT");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_NAME); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_NAME");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET");
	lua_pushnumber(L,wxTEXT_ATTR_URL); lua_setfield(L,-2,"wxTEXT_ATTR_URL");
	lua_pushnumber(L,wxTEXT_ATTR_PAGE_BREAK); lua_setfield(L,-2,"wxTEXT_ATTR_PAGE_BREAK");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECTS); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECTS");
	lua_pushnumber(L,wxTEXT_ATTR_OUTLINE_LEVEL); lua_setfield(L,-2,"wxTEXT_ATTR_OUTLINE_LEVEL");
	lua_pushnumber(L,wxTEXT_ATTR_CHARACTER); lua_setfield(L,-2,"wxTEXT_ATTR_CHARACTER");
	lua_pushnumber(L,wxTEXT_ATTR_PARAGRAPH); lua_setfield(L,-2,"wxTEXT_ATTR_PARAGRAPH");
	lua_pushnumber(L,wxTEXT_ATTR_ALL); lua_setfield(L,-2,"wxTEXT_ATTR_ALL");


	lua_newtable(L); // enum wxTextAttrBulletStyle

	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_NONE); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_NONE");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_ARABIC); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_ARABIC");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_LETTERS_UPPER); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_LETTERS_UPPER");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_LETTERS_LOWER); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_LETTERS_LOWER");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_ROMAN_UPPER); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_ROMAN_UPPER");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_ROMAN_LOWER); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_ROMAN_LOWER");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_SYMBOL); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_SYMBOL");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_BITMAP); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_BITMAP");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_PARENTHESES); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_PARENTHESES");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_PERIOD); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_PERIOD");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_STANDARD); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_STANDARD");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_RIGHT_PARENTHESIS); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_RIGHT_PARENTHESIS");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_OUTLINE); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_OUTLINE");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_ALIGN_LEFT); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_ALIGN_LEFT");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_ALIGN_RIGHT); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_ALIGN_RIGHT");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_ALIGN_CENTRE); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_ALIGN_CENTRE");

	lua_setfield(L,-2,"wxTextAttrBulletStyle");

	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_NONE); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_NONE");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_ARABIC); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_ARABIC");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_LETTERS_UPPER); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_LETTERS_UPPER");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_LETTERS_LOWER); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_LETTERS_LOWER");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_ROMAN_UPPER); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_ROMAN_UPPER");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_ROMAN_LOWER); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_ROMAN_LOWER");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_SYMBOL); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_SYMBOL");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_BITMAP); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_BITMAP");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_PARENTHESES); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_PARENTHESES");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_PERIOD); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_PERIOD");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_STANDARD); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_STANDARD");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_RIGHT_PARENTHESIS); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_RIGHT_PARENTHESIS");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_OUTLINE); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_OUTLINE");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_ALIGN_LEFT); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_ALIGN_LEFT");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_ALIGN_RIGHT); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_ALIGN_RIGHT");
	lua_pushnumber(L,wxTEXT_ATTR_BULLET_STYLE_ALIGN_CENTRE); lua_setfield(L,-2,"wxTEXT_ATTR_BULLET_STYLE_ALIGN_CENTRE");


	lua_newtable(L); // enum wxTextAttrEffects

	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_NONE); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_NONE");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_CAPITALS); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_CAPITALS");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_SMALL_CAPITALS); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_SMALL_CAPITALS");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_STRIKETHROUGH); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_STRIKETHROUGH");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_DOUBLE_STRIKETHROUGH); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_DOUBLE_STRIKETHROUGH");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_SHADOW); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_SHADOW");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_EMBOSS); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_EMBOSS");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_OUTLINE); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_OUTLINE");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_ENGRAVE); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_ENGRAVE");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_SUPERSCRIPT); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_SUPERSCRIPT");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_SUBSCRIPT); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_SUBSCRIPT");

	lua_setfield(L,-2,"wxTextAttrEffects");

	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_NONE); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_NONE");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_CAPITALS); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_CAPITALS");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_SMALL_CAPITALS); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_SMALL_CAPITALS");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_STRIKETHROUGH); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_STRIKETHROUGH");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_DOUBLE_STRIKETHROUGH); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_DOUBLE_STRIKETHROUGH");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_SHADOW); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_SHADOW");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_EMBOSS); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_EMBOSS");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_OUTLINE); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_OUTLINE");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_ENGRAVE); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_ENGRAVE");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_SUPERSCRIPT); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_SUPERSCRIPT");
	lua_pushnumber(L,wxTEXT_ATTR_EFFECT_SUBSCRIPT); lua_setfield(L,-2,"wxTEXT_ATTR_EFFECT_SUBSCRIPT");


	lua_newtable(L); // enum wxTextAttrLineSpacing

	lua_pushnumber(L,wxTEXT_ATTR_LINE_SPACING_NORMAL); lua_setfield(L,-2,"wxTEXT_ATTR_LINE_SPACING_NORMAL");
	lua_pushnumber(L,wxTEXT_ATTR_LINE_SPACING_HALF); lua_setfield(L,-2,"wxTEXT_ATTR_LINE_SPACING_HALF");
	lua_pushnumber(L,wxTEXT_ATTR_LINE_SPACING_TWICE); lua_setfield(L,-2,"wxTEXT_ATTR_LINE_SPACING_TWICE");

	lua_setfield(L,-2,"wxTextAttrLineSpacing");

	lua_pushnumber(L,wxTEXT_ATTR_LINE_SPACING_NORMAL); lua_setfield(L,-2,"wxTEXT_ATTR_LINE_SPACING_NORMAL");
	lua_pushnumber(L,wxTEXT_ATTR_LINE_SPACING_HALF); lua_setfield(L,-2,"wxTEXT_ATTR_LINE_SPACING_HALF");
	lua_pushnumber(L,wxTEXT_ATTR_LINE_SPACING_TWICE); lua_setfield(L,-2,"wxTEXT_ATTR_LINE_SPACING_TWICE");


	lua_newtable(L); // enum wxTextCtrlHitTestResult

	lua_pushnumber(L,wxTE_HT_UNKNOWN); lua_setfield(L,-2,"wxTE_HT_UNKNOWN");
	lua_pushnumber(L,wxTE_HT_BEFORE); lua_setfield(L,-2,"wxTE_HT_BEFORE");
	lua_pushnumber(L,wxTE_HT_ON_TEXT); lua_setfield(L,-2,"wxTE_HT_ON_TEXT");
	lua_pushnumber(L,wxTE_HT_BELOW); lua_setfield(L,-2,"wxTE_HT_BELOW");
	lua_pushnumber(L,wxTE_HT_BEYOND); lua_setfield(L,-2,"wxTE_HT_BEYOND");

	lua_setfield(L,-2,"wxTextCtrlHitTestResult");

	lua_pushnumber(L,wxTE_HT_UNKNOWN); lua_setfield(L,-2,"wxTE_HT_UNKNOWN");
	lua_pushnumber(L,wxTE_HT_BEFORE); lua_setfield(L,-2,"wxTE_HT_BEFORE");
	lua_pushnumber(L,wxTE_HT_ON_TEXT); lua_setfield(L,-2,"wxTE_HT_ON_TEXT");
	lua_pushnumber(L,wxTE_HT_BELOW); lua_setfield(L,-2,"wxTE_HT_BELOW");
	lua_pushnumber(L,wxTE_HT_BEYOND); lua_setfield(L,-2,"wxTE_HT_BEYOND");


	lua_newtable(L); // enum wxTextFileType

	lua_pushnumber(L,wxTextFileType_None); lua_setfield(L,-2,"wxTextFileType_None");
	lua_pushnumber(L,wxTextFileType_Unix); lua_setfield(L,-2,"wxTextFileType_Unix");
	lua_pushnumber(L,wxTextFileType_Dos); lua_setfield(L,-2,"wxTextFileType_Dos");
	lua_pushnumber(L,wxTextFileType_Mac); lua_setfield(L,-2,"wxTextFileType_Mac");
	lua_pushnumber(L,wxTextFileType_Os2); lua_setfield(L,-2,"wxTextFileType_Os2");

	lua_setfield(L,-2,"wxTextFileType");

	lua_pushnumber(L,wxTextFileType_None); lua_setfield(L,-2,"wxTextFileType_None");
	lua_pushnumber(L,wxTextFileType_Unix); lua_setfield(L,-2,"wxTextFileType_Unix");
	lua_pushnumber(L,wxTextFileType_Dos); lua_setfield(L,-2,"wxTextFileType_Dos");
	lua_pushnumber(L,wxTextFileType_Mac); lua_setfield(L,-2,"wxTextFileType_Mac");
	lua_pushnumber(L,wxTextFileType_Os2); lua_setfield(L,-2,"wxTextFileType_Os2");


	lua_newtable(L); // enum wxCondError

	lua_pushnumber(L,wxCOND_NO_ERROR); lua_setfield(L,-2,"wxCOND_NO_ERROR");
	lua_pushnumber(L,wxCOND_INVALID); lua_setfield(L,-2,"wxCOND_INVALID");
	lua_pushnumber(L,wxCOND_TIMEOUT); lua_setfield(L,-2,"wxCOND_TIMEOUT");
	lua_pushnumber(L,wxCOND_MISC_ERROR); lua_setfield(L,-2,"wxCOND_MISC_ERROR");

	lua_setfield(L,-2,"wxCondError");

	lua_pushnumber(L,wxCOND_NO_ERROR); lua_setfield(L,-2,"wxCOND_NO_ERROR");
	lua_pushnumber(L,wxCOND_INVALID); lua_setfield(L,-2,"wxCOND_INVALID");
	lua_pushnumber(L,wxCOND_TIMEOUT); lua_setfield(L,-2,"wxCOND_TIMEOUT");
	lua_pushnumber(L,wxCOND_MISC_ERROR); lua_setfield(L,-2,"wxCOND_MISC_ERROR");


	lua_newtable(L); // enum wxCriticalSectionType

	lua_pushnumber(L,wxCRITSEC_DEFAULT); lua_setfield(L,-2,"wxCRITSEC_DEFAULT");
	lua_pushnumber(L,wxCRITSEC_NON_RECURSIVE); lua_setfield(L,-2,"wxCRITSEC_NON_RECURSIVE");

	lua_setfield(L,-2,"wxCriticalSectionType");

	lua_pushnumber(L,wxCRITSEC_DEFAULT); lua_setfield(L,-2,"wxCRITSEC_DEFAULT");
	lua_pushnumber(L,wxCRITSEC_NON_RECURSIVE); lua_setfield(L,-2,"wxCRITSEC_NON_RECURSIVE");


	lua_newtable(L); // enum wxThreadWait

	lua_pushnumber(L,wxTHREAD_WAIT_BLOCK); lua_setfield(L,-2,"wxTHREAD_WAIT_BLOCK");
	lua_pushnumber(L,wxTHREAD_WAIT_YIELD); lua_setfield(L,-2,"wxTHREAD_WAIT_YIELD");
	lua_pushnumber(L,wxTHREAD_WAIT_DEFAULT); lua_setfield(L,-2,"wxTHREAD_WAIT_DEFAULT");

	lua_setfield(L,-2,"wxThreadWait");

	lua_pushnumber(L,wxTHREAD_WAIT_BLOCK); lua_setfield(L,-2,"wxTHREAD_WAIT_BLOCK");
	lua_pushnumber(L,wxTHREAD_WAIT_YIELD); lua_setfield(L,-2,"wxTHREAD_WAIT_YIELD");
	lua_pushnumber(L,wxTHREAD_WAIT_DEFAULT); lua_setfield(L,-2,"wxTHREAD_WAIT_DEFAULT");


	lua_newtable(L); // enum wxThreadKind

	lua_pushnumber(L,wxTHREAD_DETACHED); lua_setfield(L,-2,"wxTHREAD_DETACHED");
	lua_pushnumber(L,wxTHREAD_JOINABLE); lua_setfield(L,-2,"wxTHREAD_JOINABLE");

	lua_setfield(L,-2,"wxThreadKind");

	lua_pushnumber(L,wxTHREAD_DETACHED); lua_setfield(L,-2,"wxTHREAD_DETACHED");
	lua_pushnumber(L,wxTHREAD_JOINABLE); lua_setfield(L,-2,"wxTHREAD_JOINABLE");


	lua_newtable(L); // enum wxThreadError

	lua_pushnumber(L,wxTHREAD_NO_ERROR); lua_setfield(L,-2,"wxTHREAD_NO_ERROR");
	lua_pushnumber(L,wxTHREAD_NO_RESOURCE); lua_setfield(L,-2,"wxTHREAD_NO_RESOURCE");
	lua_pushnumber(L,wxTHREAD_RUNNING); lua_setfield(L,-2,"wxTHREAD_RUNNING");
	lua_pushnumber(L,wxTHREAD_NOT_RUNNING); lua_setfield(L,-2,"wxTHREAD_NOT_RUNNING");
	lua_pushnumber(L,wxTHREAD_KILLED); lua_setfield(L,-2,"wxTHREAD_KILLED");
	lua_pushnumber(L,wxTHREAD_MISC_ERROR); lua_setfield(L,-2,"wxTHREAD_MISC_ERROR");

	lua_setfield(L,-2,"wxThreadError");

	lua_pushnumber(L,wxTHREAD_NO_ERROR); lua_setfield(L,-2,"wxTHREAD_NO_ERROR");
	lua_pushnumber(L,wxTHREAD_NO_RESOURCE); lua_setfield(L,-2,"wxTHREAD_NO_RESOURCE");
	lua_pushnumber(L,wxTHREAD_RUNNING); lua_setfield(L,-2,"wxTHREAD_RUNNING");
	lua_pushnumber(L,wxTHREAD_NOT_RUNNING); lua_setfield(L,-2,"wxTHREAD_NOT_RUNNING");
	lua_pushnumber(L,wxTHREAD_KILLED); lua_setfield(L,-2,"wxTHREAD_KILLED");
	lua_pushnumber(L,wxTHREAD_MISC_ERROR); lua_setfield(L,-2,"wxTHREAD_MISC_ERROR");


	lua_newtable(L); // enum unnamed_19

	lua_pushnumber(L,WXTHREAD_MIN_PRIORITY); lua_setfield(L,-2,"WXTHREAD_MIN_PRIORITY");
	lua_pushnumber(L,WXTHREAD_DEFAULT_PRIORITY); lua_setfield(L,-2,"WXTHREAD_DEFAULT_PRIORITY");
	lua_pushnumber(L,WXTHREAD_MAX_PRIORITY); lua_setfield(L,-2,"WXTHREAD_MAX_PRIORITY");

	lua_setfield(L,-2,"unnamed_19");

	lua_pushnumber(L,WXTHREAD_MIN_PRIORITY); lua_setfield(L,-2,"WXTHREAD_MIN_PRIORITY");
	lua_pushnumber(L,WXTHREAD_DEFAULT_PRIORITY); lua_setfield(L,-2,"WXTHREAD_DEFAULT_PRIORITY");
	lua_pushnumber(L,WXTHREAD_MAX_PRIORITY); lua_setfield(L,-2,"WXTHREAD_MAX_PRIORITY");


	lua_newtable(L); // enum wxSemaError

	lua_pushnumber(L,wxSEMA_NO_ERROR); lua_setfield(L,-2,"wxSEMA_NO_ERROR");
	lua_pushnumber(L,wxSEMA_INVALID); lua_setfield(L,-2,"wxSEMA_INVALID");
	lua_pushnumber(L,wxSEMA_BUSY); lua_setfield(L,-2,"wxSEMA_BUSY");
	lua_pushnumber(L,wxSEMA_TIMEOUT); lua_setfield(L,-2,"wxSEMA_TIMEOUT");
	lua_pushnumber(L,wxSEMA_OVERFLOW); lua_setfield(L,-2,"wxSEMA_OVERFLOW");
	lua_pushnumber(L,wxSEMA_MISC_ERROR); lua_setfield(L,-2,"wxSEMA_MISC_ERROR");

	lua_setfield(L,-2,"wxSemaError");

	lua_pushnumber(L,wxSEMA_NO_ERROR); lua_setfield(L,-2,"wxSEMA_NO_ERROR");
	lua_pushnumber(L,wxSEMA_INVALID); lua_setfield(L,-2,"wxSEMA_INVALID");
	lua_pushnumber(L,wxSEMA_BUSY); lua_setfield(L,-2,"wxSEMA_BUSY");
	lua_pushnumber(L,wxSEMA_TIMEOUT); lua_setfield(L,-2,"wxSEMA_TIMEOUT");
	lua_pushnumber(L,wxSEMA_OVERFLOW); lua_setfield(L,-2,"wxSEMA_OVERFLOW");
	lua_pushnumber(L,wxSEMA_MISC_ERROR); lua_setfield(L,-2,"wxSEMA_MISC_ERROR");


	lua_newtable(L); // enum wxMutexType

	lua_pushnumber(L,wxMUTEX_DEFAULT); lua_setfield(L,-2,"wxMUTEX_DEFAULT");
	lua_pushnumber(L,wxMUTEX_RECURSIVE); lua_setfield(L,-2,"wxMUTEX_RECURSIVE");

	lua_setfield(L,-2,"wxMutexType");

	lua_pushnumber(L,wxMUTEX_DEFAULT); lua_setfield(L,-2,"wxMUTEX_DEFAULT");
	lua_pushnumber(L,wxMUTEX_RECURSIVE); lua_setfield(L,-2,"wxMUTEX_RECURSIVE");


	lua_newtable(L); // enum wxMutexError

	lua_pushnumber(L,wxMUTEX_NO_ERROR); lua_setfield(L,-2,"wxMUTEX_NO_ERROR");
	lua_pushnumber(L,wxMUTEX_INVALID); lua_setfield(L,-2,"wxMUTEX_INVALID");
	lua_pushnumber(L,wxMUTEX_DEAD_LOCK); lua_setfield(L,-2,"wxMUTEX_DEAD_LOCK");
	lua_pushnumber(L,wxMUTEX_BUSY); lua_setfield(L,-2,"wxMUTEX_BUSY");
	lua_pushnumber(L,wxMUTEX_UNLOCKED); lua_setfield(L,-2,"wxMUTEX_UNLOCKED");
	lua_pushnumber(L,wxMUTEX_TIMEOUT); lua_setfield(L,-2,"wxMUTEX_TIMEOUT");
	lua_pushnumber(L,wxMUTEX_MISC_ERROR); lua_setfield(L,-2,"wxMUTEX_MISC_ERROR");

	lua_setfield(L,-2,"wxMutexError");

	lua_pushnumber(L,wxMUTEX_NO_ERROR); lua_setfield(L,-2,"wxMUTEX_NO_ERROR");
	lua_pushnumber(L,wxMUTEX_INVALID); lua_setfield(L,-2,"wxMUTEX_INVALID");
	lua_pushnumber(L,wxMUTEX_DEAD_LOCK); lua_setfield(L,-2,"wxMUTEX_DEAD_LOCK");
	lua_pushnumber(L,wxMUTEX_BUSY); lua_setfield(L,-2,"wxMUTEX_BUSY");
	lua_pushnumber(L,wxMUTEX_UNLOCKED); lua_setfield(L,-2,"wxMUTEX_UNLOCKED");
	lua_pushnumber(L,wxMUTEX_TIMEOUT); lua_setfield(L,-2,"wxMUTEX_TIMEOUT");
	lua_pushnumber(L,wxMUTEX_MISC_ERROR); lua_setfield(L,-2,"wxMUTEX_MISC_ERROR");


	lua_newtable(L); // enum wxStringTokenizerMode

	lua_pushnumber(L,wxTOKEN_INVALID); lua_setfield(L,-2,"wxTOKEN_INVALID");
	lua_pushnumber(L,wxTOKEN_DEFAULT); lua_setfield(L,-2,"wxTOKEN_DEFAULT");
	lua_pushnumber(L,wxTOKEN_RET_EMPTY); lua_setfield(L,-2,"wxTOKEN_RET_EMPTY");
	lua_pushnumber(L,wxTOKEN_RET_EMPTY_ALL); lua_setfield(L,-2,"wxTOKEN_RET_EMPTY_ALL");
	lua_pushnumber(L,wxTOKEN_RET_DELIMS); lua_setfield(L,-2,"wxTOKEN_RET_DELIMS");
	lua_pushnumber(L,wxTOKEN_STRTOK); lua_setfield(L,-2,"wxTOKEN_STRTOK");

	lua_setfield(L,-2,"wxStringTokenizerMode");

	lua_pushnumber(L,wxTOKEN_INVALID); lua_setfield(L,-2,"wxTOKEN_INVALID");
	lua_pushnumber(L,wxTOKEN_DEFAULT); lua_setfield(L,-2,"wxTOKEN_DEFAULT");
	lua_pushnumber(L,wxTOKEN_RET_EMPTY); lua_setfield(L,-2,"wxTOKEN_RET_EMPTY");
	lua_pushnumber(L,wxTOKEN_RET_EMPTY_ALL); lua_setfield(L,-2,"wxTOKEN_RET_EMPTY_ALL");
	lua_pushnumber(L,wxTOKEN_RET_DELIMS); lua_setfield(L,-2,"wxTOKEN_RET_DELIMS");
	lua_pushnumber(L,wxTOKEN_STRTOK); lua_setfield(L,-2,"wxTOKEN_STRTOK");


	lua_newtable(L); // enum unnamed_20

	lua_pushnumber(L,wxUSER_ATTENTION_INFO); lua_setfield(L,-2,"wxUSER_ATTENTION_INFO");
	lua_pushnumber(L,wxUSER_ATTENTION_ERROR); lua_setfield(L,-2,"wxUSER_ATTENTION_ERROR");

	lua_setfield(L,-2,"unnamed_20");

	lua_pushnumber(L,wxUSER_ATTENTION_INFO); lua_setfield(L,-2,"wxUSER_ATTENTION_INFO");
	lua_pushnumber(L,wxUSER_ATTENTION_ERROR); lua_setfield(L,-2,"wxUSER_ATTENTION_ERROR");


	lua_newtable(L); // enum unnamed_21

	lua_pushnumber(L,wxFULLSCREEN_NOMENUBAR); lua_setfield(L,-2,"wxFULLSCREEN_NOMENUBAR");
	lua_pushnumber(L,wxFULLSCREEN_NOTOOLBAR); lua_setfield(L,-2,"wxFULLSCREEN_NOTOOLBAR");
	lua_pushnumber(L,wxFULLSCREEN_NOSTATUSBAR); lua_setfield(L,-2,"wxFULLSCREEN_NOSTATUSBAR");
	lua_pushnumber(L,wxFULLSCREEN_NOBORDER); lua_setfield(L,-2,"wxFULLSCREEN_NOBORDER");
	lua_pushnumber(L,wxFULLSCREEN_NOCAPTION); lua_setfield(L,-2,"wxFULLSCREEN_NOCAPTION");
	lua_pushnumber(L,wxFULLSCREEN_ALL); lua_setfield(L,-2,"wxFULLSCREEN_ALL");

	lua_setfield(L,-2,"unnamed_21");

	lua_pushnumber(L,wxFULLSCREEN_NOMENUBAR); lua_setfield(L,-2,"wxFULLSCREEN_NOMENUBAR");
	lua_pushnumber(L,wxFULLSCREEN_NOTOOLBAR); lua_setfield(L,-2,"wxFULLSCREEN_NOTOOLBAR");
	lua_pushnumber(L,wxFULLSCREEN_NOSTATUSBAR); lua_setfield(L,-2,"wxFULLSCREEN_NOSTATUSBAR");
	lua_pushnumber(L,wxFULLSCREEN_NOBORDER); lua_setfield(L,-2,"wxFULLSCREEN_NOBORDER");
	lua_pushnumber(L,wxFULLSCREEN_NOCAPTION); lua_setfield(L,-2,"wxFULLSCREEN_NOCAPTION");
	lua_pushnumber(L,wxFULLSCREEN_ALL); lua_setfield(L,-2,"wxFULLSCREEN_ALL");


	lua_newtable(L); // enum wxTreeItemIcon

	lua_pushnumber(L,wxTreeItemIcon_Normal); lua_setfield(L,-2,"wxTreeItemIcon_Normal");
	lua_pushnumber(L,wxTreeItemIcon_Selected); lua_setfield(L,-2,"wxTreeItemIcon_Selected");
	lua_pushnumber(L,wxTreeItemIcon_Expanded); lua_setfield(L,-2,"wxTreeItemIcon_Expanded");
	lua_pushnumber(L,wxTreeItemIcon_SelectedExpanded); lua_setfield(L,-2,"wxTreeItemIcon_SelectedExpanded");
	lua_pushnumber(L,wxTreeItemIcon_Max); lua_setfield(L,-2,"wxTreeItemIcon_Max");

	lua_setfield(L,-2,"wxTreeItemIcon");

	lua_pushnumber(L,wxTreeItemIcon_Normal); lua_setfield(L,-2,"wxTreeItemIcon_Normal");
	lua_pushnumber(L,wxTreeItemIcon_Selected); lua_setfield(L,-2,"wxTreeItemIcon_Selected");
	lua_pushnumber(L,wxTreeItemIcon_Expanded); lua_setfield(L,-2,"wxTreeItemIcon_Expanded");
	lua_pushnumber(L,wxTreeItemIcon_SelectedExpanded); lua_setfield(L,-2,"wxTreeItemIcon_SelectedExpanded");
	lua_pushnumber(L,wxTreeItemIcon_Max); lua_setfield(L,-2,"wxTreeItemIcon_Max");


	lua_newtable(L); // enum wxEOL

	lua_pushnumber(L,wxEOL_NATIVE); lua_setfield(L,-2,"wxEOL_NATIVE");
	lua_pushnumber(L,wxEOL_UNIX); lua_setfield(L,-2,"wxEOL_UNIX");
	lua_pushnumber(L,wxEOL_MAC); lua_setfield(L,-2,"wxEOL_MAC");
	lua_pushnumber(L,wxEOL_DOS); lua_setfield(L,-2,"wxEOL_DOS");

	lua_setfield(L,-2,"wxEOL");

	lua_pushnumber(L,wxEOL_NATIVE); lua_setfield(L,-2,"wxEOL_NATIVE");
	lua_pushnumber(L,wxEOL_UNIX); lua_setfield(L,-2,"wxEOL_UNIX");
	lua_pushnumber(L,wxEOL_MAC); lua_setfield(L,-2,"wxEOL_MAC");
	lua_pushnumber(L,wxEOL_DOS); lua_setfield(L,-2,"wxEOL_DOS");


	lua_newtable(L); // enum wxURIHostType

	lua_pushnumber(L,wxURI_REGNAME); lua_setfield(L,-2,"wxURI_REGNAME");
	lua_pushnumber(L,wxURI_IPV4ADDRESS); lua_setfield(L,-2,"wxURI_IPV4ADDRESS");
	lua_pushnumber(L,wxURI_IPV6ADDRESS); lua_setfield(L,-2,"wxURI_IPV6ADDRESS");
	lua_pushnumber(L,wxURI_IPVFUTURE); lua_setfield(L,-2,"wxURI_IPVFUTURE");

	lua_setfield(L,-2,"wxURIHostType");

	lua_pushnumber(L,wxURI_REGNAME); lua_setfield(L,-2,"wxURI_REGNAME");
	lua_pushnumber(L,wxURI_IPV4ADDRESS); lua_setfield(L,-2,"wxURI_IPV4ADDRESS");
	lua_pushnumber(L,wxURI_IPV6ADDRESS); lua_setfield(L,-2,"wxURI_IPV6ADDRESS");
	lua_pushnumber(L,wxURI_IPVFUTURE); lua_setfield(L,-2,"wxURI_IPVFUTURE");


	lua_newtable(L); // enum wxURLError

	lua_pushnumber(L,wxURL_NOERR); lua_setfield(L,-2,"wxURL_NOERR");
	lua_pushnumber(L,wxURL_SNTXERR); lua_setfield(L,-2,"wxURL_SNTXERR");
	lua_pushnumber(L,wxURL_NOPROTO); lua_setfield(L,-2,"wxURL_NOPROTO");
	lua_pushnumber(L,wxURL_NOHOST); lua_setfield(L,-2,"wxURL_NOHOST");
	lua_pushnumber(L,wxURL_NOPATH); lua_setfield(L,-2,"wxURL_NOPATH");
	lua_pushnumber(L,wxURL_CONNERR); lua_setfield(L,-2,"wxURL_CONNERR");
	lua_pushnumber(L,wxURL_PROTOERR); lua_setfield(L,-2,"wxURL_PROTOERR");

	lua_setfield(L,-2,"wxURLError");

	lua_pushnumber(L,wxURL_NOERR); lua_setfield(L,-2,"wxURL_NOERR");
	lua_pushnumber(L,wxURL_SNTXERR); lua_setfield(L,-2,"wxURL_SNTXERR");
	lua_pushnumber(L,wxURL_NOPROTO); lua_setfield(L,-2,"wxURL_NOPROTO");
	lua_pushnumber(L,wxURL_NOHOST); lua_setfield(L,-2,"wxURL_NOHOST");
	lua_pushnumber(L,wxURL_NOPATH); lua_setfield(L,-2,"wxURL_NOPATH");
	lua_pushnumber(L,wxURL_CONNERR); lua_setfield(L,-2,"wxURL_CONNERR");
	lua_pushnumber(L,wxURL_PROTOERR); lua_setfield(L,-2,"wxURL_PROTOERR");


	lua_newtable(L); // enum unnamed_22

	lua_pushnumber(L,wxEXEC_ASYNC); lua_setfield(L,-2,"wxEXEC_ASYNC");
	lua_pushnumber(L,wxEXEC_SYNC); lua_setfield(L,-2,"wxEXEC_SYNC");
	lua_pushnumber(L,wxEXEC_SHOW_CONSOLE); lua_setfield(L,-2,"wxEXEC_SHOW_CONSOLE");
	lua_pushnumber(L,wxEXEC_MAKE_GROUP_LEADER); lua_setfield(L,-2,"wxEXEC_MAKE_GROUP_LEADER");
	lua_pushnumber(L,wxEXEC_NODISABLE); lua_setfield(L,-2,"wxEXEC_NODISABLE");
	lua_pushnumber(L,wxEXEC_NOEVENTS); lua_setfield(L,-2,"wxEXEC_NOEVENTS");
	lua_pushnumber(L,wxEXEC_HIDE_CONSOLE); lua_setfield(L,-2,"wxEXEC_HIDE_CONSOLE");
	lua_pushnumber(L,wxEXEC_BLOCK); lua_setfield(L,-2,"wxEXEC_BLOCK");

	lua_setfield(L,-2,"unnamed_22");

	lua_pushnumber(L,wxEXEC_ASYNC); lua_setfield(L,-2,"wxEXEC_ASYNC");
	lua_pushnumber(L,wxEXEC_SYNC); lua_setfield(L,-2,"wxEXEC_SYNC");
	lua_pushnumber(L,wxEXEC_SHOW_CONSOLE); lua_setfield(L,-2,"wxEXEC_SHOW_CONSOLE");
	lua_pushnumber(L,wxEXEC_MAKE_GROUP_LEADER); lua_setfield(L,-2,"wxEXEC_MAKE_GROUP_LEADER");
	lua_pushnumber(L,wxEXEC_NODISABLE); lua_setfield(L,-2,"wxEXEC_NODISABLE");
	lua_pushnumber(L,wxEXEC_NOEVENTS); lua_setfield(L,-2,"wxEXEC_NOEVENTS");
	lua_pushnumber(L,wxEXEC_HIDE_CONSOLE); lua_setfield(L,-2,"wxEXEC_HIDE_CONSOLE");
	lua_pushnumber(L,wxEXEC_BLOCK); lua_setfield(L,-2,"wxEXEC_BLOCK");


	lua_newtable(L); // enum wxNumValidatorStyle

	lua_pushnumber(L,wxNUM_VAL_DEFAULT); lua_setfield(L,-2,"wxNUM_VAL_DEFAULT");
	lua_pushnumber(L,wxNUM_VAL_THOUSANDS_SEPARATOR); lua_setfield(L,-2,"wxNUM_VAL_THOUSANDS_SEPARATOR");
	lua_pushnumber(L,wxNUM_VAL_ZERO_AS_BLANK); lua_setfield(L,-2,"wxNUM_VAL_ZERO_AS_BLANK");
	lua_pushnumber(L,wxNUM_VAL_NO_TRAILING_ZEROES); lua_setfield(L,-2,"wxNUM_VAL_NO_TRAILING_ZEROES");

	lua_setfield(L,-2,"wxNumValidatorStyle");

	lua_pushnumber(L,wxNUM_VAL_DEFAULT); lua_setfield(L,-2,"wxNUM_VAL_DEFAULT");
	lua_pushnumber(L,wxNUM_VAL_THOUSANDS_SEPARATOR); lua_setfield(L,-2,"wxNUM_VAL_THOUSANDS_SEPARATOR");
	lua_pushnumber(L,wxNUM_VAL_ZERO_AS_BLANK); lua_setfield(L,-2,"wxNUM_VAL_ZERO_AS_BLANK");
	lua_pushnumber(L,wxNUM_VAL_NO_TRAILING_ZEROES); lua_setfield(L,-2,"wxNUM_VAL_NO_TRAILING_ZEROES");


	lua_newtable(L); // enum wxTextValidatorStyle

	lua_pushnumber(L,wxFILTER_NONE); lua_setfield(L,-2,"wxFILTER_NONE");
	lua_pushnumber(L,wxFILTER_EMPTY); lua_setfield(L,-2,"wxFILTER_EMPTY");
	lua_pushnumber(L,wxFILTER_ASCII); lua_setfield(L,-2,"wxFILTER_ASCII");
	lua_pushnumber(L,wxFILTER_ALPHA); lua_setfield(L,-2,"wxFILTER_ALPHA");
	lua_pushnumber(L,wxFILTER_ALPHANUMERIC); lua_setfield(L,-2,"wxFILTER_ALPHANUMERIC");
	lua_pushnumber(L,wxFILTER_DIGITS); lua_setfield(L,-2,"wxFILTER_DIGITS");
	lua_pushnumber(L,wxFILTER_NUMERIC); lua_setfield(L,-2,"wxFILTER_NUMERIC");
	lua_pushnumber(L,wxFILTER_INCLUDE_LIST); lua_setfield(L,-2,"wxFILTER_INCLUDE_LIST");
	lua_pushnumber(L,wxFILTER_INCLUDE_CHAR_LIST); lua_setfield(L,-2,"wxFILTER_INCLUDE_CHAR_LIST");
	lua_pushnumber(L,wxFILTER_EXCLUDE_LIST); lua_setfield(L,-2,"wxFILTER_EXCLUDE_LIST");
	lua_pushnumber(L,wxFILTER_EXCLUDE_CHAR_LIST); lua_setfield(L,-2,"wxFILTER_EXCLUDE_CHAR_LIST");

	lua_setfield(L,-2,"wxTextValidatorStyle");

	lua_pushnumber(L,wxFILTER_NONE); lua_setfield(L,-2,"wxFILTER_NONE");
	lua_pushnumber(L,wxFILTER_EMPTY); lua_setfield(L,-2,"wxFILTER_EMPTY");
	lua_pushnumber(L,wxFILTER_ASCII); lua_setfield(L,-2,"wxFILTER_ASCII");
	lua_pushnumber(L,wxFILTER_ALPHA); lua_setfield(L,-2,"wxFILTER_ALPHA");
	lua_pushnumber(L,wxFILTER_ALPHANUMERIC); lua_setfield(L,-2,"wxFILTER_ALPHANUMERIC");
	lua_pushnumber(L,wxFILTER_DIGITS); lua_setfield(L,-2,"wxFILTER_DIGITS");
	lua_pushnumber(L,wxFILTER_NUMERIC); lua_setfield(L,-2,"wxFILTER_NUMERIC");
	lua_pushnumber(L,wxFILTER_INCLUDE_LIST); lua_setfield(L,-2,"wxFILTER_INCLUDE_LIST");
	lua_pushnumber(L,wxFILTER_INCLUDE_CHAR_LIST); lua_setfield(L,-2,"wxFILTER_INCLUDE_CHAR_LIST");
	lua_pushnumber(L,wxFILTER_EXCLUDE_LIST); lua_setfield(L,-2,"wxFILTER_EXCLUDE_LIST");
	lua_pushnumber(L,wxFILTER_EXCLUDE_CHAR_LIST); lua_setfield(L,-2,"wxFILTER_EXCLUDE_CHAR_LIST");


	lua_newtable(L); // enum wxFSVolumeFlags

	lua_pushnumber(L,wxFS_VOL_MOUNTED); lua_setfield(L,-2,"wxFS_VOL_MOUNTED");
	lua_pushnumber(L,wxFS_VOL_REMOVABLE); lua_setfield(L,-2,"wxFS_VOL_REMOVABLE");
	lua_pushnumber(L,wxFS_VOL_READONLY); lua_setfield(L,-2,"wxFS_VOL_READONLY");
	lua_pushnumber(L,wxFS_VOL_REMOTE); lua_setfield(L,-2,"wxFS_VOL_REMOTE");

	lua_setfield(L,-2,"wxFSVolumeFlags");

	lua_pushnumber(L,wxFS_VOL_MOUNTED); lua_setfield(L,-2,"wxFS_VOL_MOUNTED");
	lua_pushnumber(L,wxFS_VOL_REMOVABLE); lua_setfield(L,-2,"wxFS_VOL_REMOVABLE");
	lua_pushnumber(L,wxFS_VOL_READONLY); lua_setfield(L,-2,"wxFS_VOL_READONLY");
	lua_pushnumber(L,wxFS_VOL_REMOTE); lua_setfield(L,-2,"wxFS_VOL_REMOTE");


	lua_newtable(L); // enum wxFSVolumeKind

	lua_pushnumber(L,wxFS_VOL_FLOPPY); lua_setfield(L,-2,"wxFS_VOL_FLOPPY");
	lua_pushnumber(L,wxFS_VOL_DISK); lua_setfield(L,-2,"wxFS_VOL_DISK");
	lua_pushnumber(L,wxFS_VOL_CDROM); lua_setfield(L,-2,"wxFS_VOL_CDROM");
	lua_pushnumber(L,wxFS_VOL_DVDROM); lua_setfield(L,-2,"wxFS_VOL_DVDROM");
	lua_pushnumber(L,wxFS_VOL_NETWORK); lua_setfield(L,-2,"wxFS_VOL_NETWORK");
	lua_pushnumber(L,wxFS_VOL_OTHER); lua_setfield(L,-2,"wxFS_VOL_OTHER");
	lua_pushnumber(L,wxFS_VOL_MAX); lua_setfield(L,-2,"wxFS_VOL_MAX");

	lua_setfield(L,-2,"wxFSVolumeKind");

	lua_pushnumber(L,wxFS_VOL_FLOPPY); lua_setfield(L,-2,"wxFS_VOL_FLOPPY");
	lua_pushnumber(L,wxFS_VOL_DISK); lua_setfield(L,-2,"wxFS_VOL_DISK");
	lua_pushnumber(L,wxFS_VOL_CDROM); lua_setfield(L,-2,"wxFS_VOL_CDROM");
	lua_pushnumber(L,wxFS_VOL_DVDROM); lua_setfield(L,-2,"wxFS_VOL_DVDROM");
	lua_pushnumber(L,wxFS_VOL_NETWORK); lua_setfield(L,-2,"wxFS_VOL_NETWORK");
	lua_pushnumber(L,wxFS_VOL_OTHER); lua_setfield(L,-2,"wxFS_VOL_OTHER");
	lua_pushnumber(L,wxFS_VOL_MAX); lua_setfield(L,-2,"wxFS_VOL_MAX");


	lua_newtable(L); // enum wxFSIconType

	lua_pushnumber(L,wxFS_VOL_ICO_SMALL); lua_setfield(L,-2,"wxFS_VOL_ICO_SMALL");
	lua_pushnumber(L,wxFS_VOL_ICO_LARGE); lua_setfield(L,-2,"wxFS_VOL_ICO_LARGE");
	lua_pushnumber(L,wxFS_VOL_ICO_SEL_SMALL); lua_setfield(L,-2,"wxFS_VOL_ICO_SEL_SMALL");
	lua_pushnumber(L,wxFS_VOL_ICO_SEL_LARGE); lua_setfield(L,-2,"wxFS_VOL_ICO_SEL_LARGE");
	lua_pushnumber(L,wxFS_VOL_ICO_MAX); lua_setfield(L,-2,"wxFS_VOL_ICO_MAX");

	lua_setfield(L,-2,"wxFSIconType");

	lua_pushnumber(L,wxFS_VOL_ICO_SMALL); lua_setfield(L,-2,"wxFS_VOL_ICO_SMALL");
	lua_pushnumber(L,wxFS_VOL_ICO_LARGE); lua_setfield(L,-2,"wxFS_VOL_ICO_LARGE");
	lua_pushnumber(L,wxFS_VOL_ICO_SEL_SMALL); lua_setfield(L,-2,"wxFS_VOL_ICO_SEL_SMALL");
	lua_pushnumber(L,wxFS_VOL_ICO_SEL_LARGE); lua_setfield(L,-2,"wxFS_VOL_ICO_SEL_LARGE");
	lua_pushnumber(L,wxFS_VOL_ICO_MAX); lua_setfield(L,-2,"wxFS_VOL_ICO_MAX");


	lua_newtable(L); // enum wxWebViewZoom


	lua_setfield(L,-2,"wxWebViewZoom");



	lua_newtable(L); // enum wxWebViewZoomType


	lua_setfield(L,-2,"wxWebViewZoomType");



	lua_newtable(L); // enum wxWebViewNavigationError


	lua_setfield(L,-2,"wxWebViewNavigationError");



	lua_newtable(L); // enum wxWebViewReloadFlags


	lua_setfield(L,-2,"wxWebViewReloadFlags");



	lua_newtable(L); // enum wxWebViewBackend


	lua_setfield(L,-2,"wxWebViewBackend");



	lua_newtable(L); // enum wxShowEffect

	lua_pushnumber(L,wxSHOW_EFFECT_NONE); lua_setfield(L,-2,"wxSHOW_EFFECT_NONE");
	lua_pushnumber(L,wxSHOW_EFFECT_ROLL_TO_LEFT); lua_setfield(L,-2,"wxSHOW_EFFECT_ROLL_TO_LEFT");
	lua_pushnumber(L,wxSHOW_EFFECT_ROLL_TO_RIGHT); lua_setfield(L,-2,"wxSHOW_EFFECT_ROLL_TO_RIGHT");
	lua_pushnumber(L,wxSHOW_EFFECT_ROLL_TO_TOP); lua_setfield(L,-2,"wxSHOW_EFFECT_ROLL_TO_TOP");
	lua_pushnumber(L,wxSHOW_EFFECT_ROLL_TO_BOTTOM); lua_setfield(L,-2,"wxSHOW_EFFECT_ROLL_TO_BOTTOM");
	lua_pushnumber(L,wxSHOW_EFFECT_SLIDE_TO_LEFT); lua_setfield(L,-2,"wxSHOW_EFFECT_SLIDE_TO_LEFT");
	lua_pushnumber(L,wxSHOW_EFFECT_SLIDE_TO_RIGHT); lua_setfield(L,-2,"wxSHOW_EFFECT_SLIDE_TO_RIGHT");
	lua_pushnumber(L,wxSHOW_EFFECT_SLIDE_TO_TOP); lua_setfield(L,-2,"wxSHOW_EFFECT_SLIDE_TO_TOP");
	lua_pushnumber(L,wxSHOW_EFFECT_SLIDE_TO_BOTTOM); lua_setfield(L,-2,"wxSHOW_EFFECT_SLIDE_TO_BOTTOM");
	lua_pushnumber(L,wxSHOW_EFFECT_BLEND); lua_setfield(L,-2,"wxSHOW_EFFECT_BLEND");
	lua_pushnumber(L,wxSHOW_EFFECT_EXPAND); lua_setfield(L,-2,"wxSHOW_EFFECT_EXPAND");

	lua_setfield(L,-2,"wxShowEffect");

	lua_pushnumber(L,wxSHOW_EFFECT_NONE); lua_setfield(L,-2,"wxSHOW_EFFECT_NONE");
	lua_pushnumber(L,wxSHOW_EFFECT_ROLL_TO_LEFT); lua_setfield(L,-2,"wxSHOW_EFFECT_ROLL_TO_LEFT");
	lua_pushnumber(L,wxSHOW_EFFECT_ROLL_TO_RIGHT); lua_setfield(L,-2,"wxSHOW_EFFECT_ROLL_TO_RIGHT");
	lua_pushnumber(L,wxSHOW_EFFECT_ROLL_TO_TOP); lua_setfield(L,-2,"wxSHOW_EFFECT_ROLL_TO_TOP");
	lua_pushnumber(L,wxSHOW_EFFECT_ROLL_TO_BOTTOM); lua_setfield(L,-2,"wxSHOW_EFFECT_ROLL_TO_BOTTOM");
	lua_pushnumber(L,wxSHOW_EFFECT_SLIDE_TO_LEFT); lua_setfield(L,-2,"wxSHOW_EFFECT_SLIDE_TO_LEFT");
	lua_pushnumber(L,wxSHOW_EFFECT_SLIDE_TO_RIGHT); lua_setfield(L,-2,"wxSHOW_EFFECT_SLIDE_TO_RIGHT");
	lua_pushnumber(L,wxSHOW_EFFECT_SLIDE_TO_TOP); lua_setfield(L,-2,"wxSHOW_EFFECT_SLIDE_TO_TOP");
	lua_pushnumber(L,wxSHOW_EFFECT_SLIDE_TO_BOTTOM); lua_setfield(L,-2,"wxSHOW_EFFECT_SLIDE_TO_BOTTOM");
	lua_pushnumber(L,wxSHOW_EFFECT_BLEND); lua_setfield(L,-2,"wxSHOW_EFFECT_BLEND");
	lua_pushnumber(L,wxSHOW_EFFECT_EXPAND); lua_setfield(L,-2,"wxSHOW_EFFECT_EXPAND");


	lua_newtable(L); // enum wxWindowVariant

	lua_pushnumber(L,wxWINDOW_VARIANT_NORMAL); lua_setfield(L,-2,"wxWINDOW_VARIANT_NORMAL");
	lua_pushnumber(L,wxWINDOW_VARIANT_SMALL); lua_setfield(L,-2,"wxWINDOW_VARIANT_SMALL");
	lua_pushnumber(L,wxWINDOW_VARIANT_MINI); lua_setfield(L,-2,"wxWINDOW_VARIANT_MINI");
	lua_pushnumber(L,wxWINDOW_VARIANT_LARGE); lua_setfield(L,-2,"wxWINDOW_VARIANT_LARGE");
	lua_pushnumber(L,wxWINDOW_VARIANT_MAX); lua_setfield(L,-2,"wxWINDOW_VARIANT_MAX");

	lua_setfield(L,-2,"wxWindowVariant");

	lua_pushnumber(L,wxWINDOW_VARIANT_NORMAL); lua_setfield(L,-2,"wxWINDOW_VARIANT_NORMAL");
	lua_pushnumber(L,wxWINDOW_VARIANT_SMALL); lua_setfield(L,-2,"wxWINDOW_VARIANT_SMALL");
	lua_pushnumber(L,wxWINDOW_VARIANT_MINI); lua_setfield(L,-2,"wxWINDOW_VARIANT_MINI");
	lua_pushnumber(L,wxWINDOW_VARIANT_LARGE); lua_setfield(L,-2,"wxWINDOW_VARIANT_LARGE");
	lua_pushnumber(L,wxWINDOW_VARIANT_MAX); lua_setfield(L,-2,"wxWINDOW_VARIANT_MAX");


	lua_newtable(L); // enum wxXmlNodeType

	lua_pushnumber(L,wxXML_ELEMENT_NODE); lua_setfield(L,-2,"wxXML_ELEMENT_NODE");
	lua_pushnumber(L,wxXML_ATTRIBUTE_NODE); lua_setfield(L,-2,"wxXML_ATTRIBUTE_NODE");
	lua_pushnumber(L,wxXML_TEXT_NODE); lua_setfield(L,-2,"wxXML_TEXT_NODE");
	lua_pushnumber(L,wxXML_CDATA_SECTION_NODE); lua_setfield(L,-2,"wxXML_CDATA_SECTION_NODE");
	lua_pushnumber(L,wxXML_ENTITY_REF_NODE); lua_setfield(L,-2,"wxXML_ENTITY_REF_NODE");
	lua_pushnumber(L,wxXML_ENTITY_NODE); lua_setfield(L,-2,"wxXML_ENTITY_NODE");
	lua_pushnumber(L,wxXML_PI_NODE); lua_setfield(L,-2,"wxXML_PI_NODE");
	lua_pushnumber(L,wxXML_COMMENT_NODE); lua_setfield(L,-2,"wxXML_COMMENT_NODE");
	lua_pushnumber(L,wxXML_DOCUMENT_NODE); lua_setfield(L,-2,"wxXML_DOCUMENT_NODE");
	lua_pushnumber(L,wxXML_DOCUMENT_TYPE_NODE); lua_setfield(L,-2,"wxXML_DOCUMENT_TYPE_NODE");
	lua_pushnumber(L,wxXML_DOCUMENT_FRAG_NODE); lua_setfield(L,-2,"wxXML_DOCUMENT_FRAG_NODE");
	lua_pushnumber(L,wxXML_NOTATION_NODE); lua_setfield(L,-2,"wxXML_NOTATION_NODE");
	lua_pushnumber(L,wxXML_HTML_DOCUMENT_NODE); lua_setfield(L,-2,"wxXML_HTML_DOCUMENT_NODE");

	lua_setfield(L,-2,"wxXmlNodeType");

	lua_pushnumber(L,wxXML_ELEMENT_NODE); lua_setfield(L,-2,"wxXML_ELEMENT_NODE");
	lua_pushnumber(L,wxXML_ATTRIBUTE_NODE); lua_setfield(L,-2,"wxXML_ATTRIBUTE_NODE");
	lua_pushnumber(L,wxXML_TEXT_NODE); lua_setfield(L,-2,"wxXML_TEXT_NODE");
	lua_pushnumber(L,wxXML_CDATA_SECTION_NODE); lua_setfield(L,-2,"wxXML_CDATA_SECTION_NODE");
	lua_pushnumber(L,wxXML_ENTITY_REF_NODE); lua_setfield(L,-2,"wxXML_ENTITY_REF_NODE");
	lua_pushnumber(L,wxXML_ENTITY_NODE); lua_setfield(L,-2,"wxXML_ENTITY_NODE");
	lua_pushnumber(L,wxXML_PI_NODE); lua_setfield(L,-2,"wxXML_PI_NODE");
	lua_pushnumber(L,wxXML_COMMENT_NODE); lua_setfield(L,-2,"wxXML_COMMENT_NODE");
	lua_pushnumber(L,wxXML_DOCUMENT_NODE); lua_setfield(L,-2,"wxXML_DOCUMENT_NODE");
	lua_pushnumber(L,wxXML_DOCUMENT_TYPE_NODE); lua_setfield(L,-2,"wxXML_DOCUMENT_TYPE_NODE");
	lua_pushnumber(L,wxXML_DOCUMENT_FRAG_NODE); lua_setfield(L,-2,"wxXML_DOCUMENT_FRAG_NODE");
	lua_pushnumber(L,wxXML_NOTATION_NODE); lua_setfield(L,-2,"wxXML_NOTATION_NODE");
	lua_pushnumber(L,wxXML_HTML_DOCUMENT_NODE); lua_setfield(L,-2,"wxXML_HTML_DOCUMENT_NODE");


	lua_newtable(L); // enum wxXmlResourceFlags

	lua_pushnumber(L,wxXRC_USE_LOCALE); lua_setfield(L,-2,"wxXRC_USE_LOCALE");
	lua_pushnumber(L,wxXRC_NO_SUBCLASSING); lua_setfield(L,-2,"wxXRC_NO_SUBCLASSING");
	lua_pushnumber(L,wxXRC_NO_RELOADING); lua_setfield(L,-2,"wxXRC_NO_RELOADING");

	lua_setfield(L,-2,"wxXmlResourceFlags");

	lua_pushnumber(L,wxXRC_USE_LOCALE); lua_setfield(L,-2,"wxXRC_USE_LOCALE");
	lua_pushnumber(L,wxXRC_NO_SUBCLASSING); lua_setfield(L,-2,"wxXRC_NO_SUBCLASSING");
	lua_pushnumber(L,wxXRC_NO_RELOADING); lua_setfield(L,-2,"wxXRC_NO_RELOADING");


	lua_newtable(L); // enum wxZipMethod

	lua_pushnumber(L,wxZIP_METHOD_STORE); lua_setfield(L,-2,"wxZIP_METHOD_STORE");
	lua_pushnumber(L,wxZIP_METHOD_SHRINK); lua_setfield(L,-2,"wxZIP_METHOD_SHRINK");
	lua_pushnumber(L,wxZIP_METHOD_REDUCE1); lua_setfield(L,-2,"wxZIP_METHOD_REDUCE1");
	lua_pushnumber(L,wxZIP_METHOD_REDUCE2); lua_setfield(L,-2,"wxZIP_METHOD_REDUCE2");
	lua_pushnumber(L,wxZIP_METHOD_REDUCE3); lua_setfield(L,-2,"wxZIP_METHOD_REDUCE3");
	lua_pushnumber(L,wxZIP_METHOD_REDUCE4); lua_setfield(L,-2,"wxZIP_METHOD_REDUCE4");
	lua_pushnumber(L,wxZIP_METHOD_IMPLODE); lua_setfield(L,-2,"wxZIP_METHOD_IMPLODE");
	lua_pushnumber(L,wxZIP_METHOD_TOKENIZE); lua_setfield(L,-2,"wxZIP_METHOD_TOKENIZE");
	lua_pushnumber(L,wxZIP_METHOD_DEFLATE); lua_setfield(L,-2,"wxZIP_METHOD_DEFLATE");
	lua_pushnumber(L,wxZIP_METHOD_DEFLATE64); lua_setfield(L,-2,"wxZIP_METHOD_DEFLATE64");
	lua_pushnumber(L,wxZIP_METHOD_BZIP2); lua_setfield(L,-2,"wxZIP_METHOD_BZIP2");
	lua_pushnumber(L,wxZIP_METHOD_DEFAULT); lua_setfield(L,-2,"wxZIP_METHOD_DEFAULT");

	lua_setfield(L,-2,"wxZipMethod");

	lua_pushnumber(L,wxZIP_METHOD_STORE); lua_setfield(L,-2,"wxZIP_METHOD_STORE");
	lua_pushnumber(L,wxZIP_METHOD_SHRINK); lua_setfield(L,-2,"wxZIP_METHOD_SHRINK");
	lua_pushnumber(L,wxZIP_METHOD_REDUCE1); lua_setfield(L,-2,"wxZIP_METHOD_REDUCE1");
	lua_pushnumber(L,wxZIP_METHOD_REDUCE2); lua_setfield(L,-2,"wxZIP_METHOD_REDUCE2");
	lua_pushnumber(L,wxZIP_METHOD_REDUCE3); lua_setfield(L,-2,"wxZIP_METHOD_REDUCE3");
	lua_pushnumber(L,wxZIP_METHOD_REDUCE4); lua_setfield(L,-2,"wxZIP_METHOD_REDUCE4");
	lua_pushnumber(L,wxZIP_METHOD_IMPLODE); lua_setfield(L,-2,"wxZIP_METHOD_IMPLODE");
	lua_pushnumber(L,wxZIP_METHOD_TOKENIZE); lua_setfield(L,-2,"wxZIP_METHOD_TOKENIZE");
	lua_pushnumber(L,wxZIP_METHOD_DEFLATE); lua_setfield(L,-2,"wxZIP_METHOD_DEFLATE");
	lua_pushnumber(L,wxZIP_METHOD_DEFLATE64); lua_setfield(L,-2,"wxZIP_METHOD_DEFLATE64");
	lua_pushnumber(L,wxZIP_METHOD_BZIP2); lua_setfield(L,-2,"wxZIP_METHOD_BZIP2");
	lua_pushnumber(L,wxZIP_METHOD_DEFAULT); lua_setfield(L,-2,"wxZIP_METHOD_DEFAULT");


	lua_newtable(L); // enum wxZipSystem

	lua_pushnumber(L,wxZIP_SYSTEM_MSDOS); lua_setfield(L,-2,"wxZIP_SYSTEM_MSDOS");
	lua_pushnumber(L,wxZIP_SYSTEM_AMIGA); lua_setfield(L,-2,"wxZIP_SYSTEM_AMIGA");
	lua_pushnumber(L,wxZIP_SYSTEM_OPENVMS); lua_setfield(L,-2,"wxZIP_SYSTEM_OPENVMS");
	lua_pushnumber(L,wxZIP_SYSTEM_UNIX); lua_setfield(L,-2,"wxZIP_SYSTEM_UNIX");
	lua_pushnumber(L,wxZIP_SYSTEM_VM_CMS); lua_setfield(L,-2,"wxZIP_SYSTEM_VM_CMS");
	lua_pushnumber(L,wxZIP_SYSTEM_ATARI_ST); lua_setfield(L,-2,"wxZIP_SYSTEM_ATARI_ST");
	lua_pushnumber(L,wxZIP_SYSTEM_OS2_HPFS); lua_setfield(L,-2,"wxZIP_SYSTEM_OS2_HPFS");
	lua_pushnumber(L,wxZIP_SYSTEM_MACINTOSH); lua_setfield(L,-2,"wxZIP_SYSTEM_MACINTOSH");
	lua_pushnumber(L,wxZIP_SYSTEM_Z_SYSTEM); lua_setfield(L,-2,"wxZIP_SYSTEM_Z_SYSTEM");
	lua_pushnumber(L,wxZIP_SYSTEM_CPM); lua_setfield(L,-2,"wxZIP_SYSTEM_CPM");
	lua_pushnumber(L,wxZIP_SYSTEM_WINDOWS_NTFS); lua_setfield(L,-2,"wxZIP_SYSTEM_WINDOWS_NTFS");
	lua_pushnumber(L,wxZIP_SYSTEM_MVS); lua_setfield(L,-2,"wxZIP_SYSTEM_MVS");
	lua_pushnumber(L,wxZIP_SYSTEM_VSE); lua_setfield(L,-2,"wxZIP_SYSTEM_VSE");
	lua_pushnumber(L,wxZIP_SYSTEM_ACORN_RISC); lua_setfield(L,-2,"wxZIP_SYSTEM_ACORN_RISC");
	lua_pushnumber(L,wxZIP_SYSTEM_VFAT); lua_setfield(L,-2,"wxZIP_SYSTEM_VFAT");
	lua_pushnumber(L,wxZIP_SYSTEM_ALTERNATE_MVS); lua_setfield(L,-2,"wxZIP_SYSTEM_ALTERNATE_MVS");
	lua_pushnumber(L,wxZIP_SYSTEM_BEOS); lua_setfield(L,-2,"wxZIP_SYSTEM_BEOS");
	lua_pushnumber(L,wxZIP_SYSTEM_TANDEM); lua_setfield(L,-2,"wxZIP_SYSTEM_TANDEM");
	lua_pushnumber(L,wxZIP_SYSTEM_OS_400); lua_setfield(L,-2,"wxZIP_SYSTEM_OS_400");

	lua_setfield(L,-2,"wxZipSystem");

	lua_pushnumber(L,wxZIP_SYSTEM_MSDOS); lua_setfield(L,-2,"wxZIP_SYSTEM_MSDOS");
	lua_pushnumber(L,wxZIP_SYSTEM_AMIGA); lua_setfield(L,-2,"wxZIP_SYSTEM_AMIGA");
	lua_pushnumber(L,wxZIP_SYSTEM_OPENVMS); lua_setfield(L,-2,"wxZIP_SYSTEM_OPENVMS");
	lua_pushnumber(L,wxZIP_SYSTEM_UNIX); lua_setfield(L,-2,"wxZIP_SYSTEM_UNIX");
	lua_pushnumber(L,wxZIP_SYSTEM_VM_CMS); lua_setfield(L,-2,"wxZIP_SYSTEM_VM_CMS");
	lua_pushnumber(L,wxZIP_SYSTEM_ATARI_ST); lua_setfield(L,-2,"wxZIP_SYSTEM_ATARI_ST");
	lua_pushnumber(L,wxZIP_SYSTEM_OS2_HPFS); lua_setfield(L,-2,"wxZIP_SYSTEM_OS2_HPFS");
	lua_pushnumber(L,wxZIP_SYSTEM_MACINTOSH); lua_setfield(L,-2,"wxZIP_SYSTEM_MACINTOSH");
	lua_pushnumber(L,wxZIP_SYSTEM_Z_SYSTEM); lua_setfield(L,-2,"wxZIP_SYSTEM_Z_SYSTEM");
	lua_pushnumber(L,wxZIP_SYSTEM_CPM); lua_setfield(L,-2,"wxZIP_SYSTEM_CPM");
	lua_pushnumber(L,wxZIP_SYSTEM_WINDOWS_NTFS); lua_setfield(L,-2,"wxZIP_SYSTEM_WINDOWS_NTFS");
	lua_pushnumber(L,wxZIP_SYSTEM_MVS); lua_setfield(L,-2,"wxZIP_SYSTEM_MVS");
	lua_pushnumber(L,wxZIP_SYSTEM_VSE); lua_setfield(L,-2,"wxZIP_SYSTEM_VSE");
	lua_pushnumber(L,wxZIP_SYSTEM_ACORN_RISC); lua_setfield(L,-2,"wxZIP_SYSTEM_ACORN_RISC");
	lua_pushnumber(L,wxZIP_SYSTEM_VFAT); lua_setfield(L,-2,"wxZIP_SYSTEM_VFAT");
	lua_pushnumber(L,wxZIP_SYSTEM_ALTERNATE_MVS); lua_setfield(L,-2,"wxZIP_SYSTEM_ALTERNATE_MVS");
	lua_pushnumber(L,wxZIP_SYSTEM_BEOS); lua_setfield(L,-2,"wxZIP_SYSTEM_BEOS");
	lua_pushnumber(L,wxZIP_SYSTEM_TANDEM); lua_setfield(L,-2,"wxZIP_SYSTEM_TANDEM");
	lua_pushnumber(L,wxZIP_SYSTEM_OS_400); lua_setfield(L,-2,"wxZIP_SYSTEM_OS_400");


	lua_newtable(L); // enum wxZipAttributes

	lua_pushnumber(L,wxZIP_A_RDONLY); lua_setfield(L,-2,"wxZIP_A_RDONLY");
	lua_pushnumber(L,wxZIP_A_HIDDEN); lua_setfield(L,-2,"wxZIP_A_HIDDEN");
	lua_pushnumber(L,wxZIP_A_SYSTEM); lua_setfield(L,-2,"wxZIP_A_SYSTEM");
	lua_pushnumber(L,wxZIP_A_SUBDIR); lua_setfield(L,-2,"wxZIP_A_SUBDIR");
	lua_pushnumber(L,wxZIP_A_ARCH); lua_setfield(L,-2,"wxZIP_A_ARCH");
	lua_pushnumber(L,wxZIP_A_MASK); lua_setfield(L,-2,"wxZIP_A_MASK");

	lua_setfield(L,-2,"wxZipAttributes");

	lua_pushnumber(L,wxZIP_A_RDONLY); lua_setfield(L,-2,"wxZIP_A_RDONLY");
	lua_pushnumber(L,wxZIP_A_HIDDEN); lua_setfield(L,-2,"wxZIP_A_HIDDEN");
	lua_pushnumber(L,wxZIP_A_SYSTEM); lua_setfield(L,-2,"wxZIP_A_SYSTEM");
	lua_pushnumber(L,wxZIP_A_SUBDIR); lua_setfield(L,-2,"wxZIP_A_SUBDIR");
	lua_pushnumber(L,wxZIP_A_ARCH); lua_setfield(L,-2,"wxZIP_A_ARCH");
	lua_pushnumber(L,wxZIP_A_MASK); lua_setfield(L,-2,"wxZIP_A_MASK");


	lua_newtable(L); // enum wxZipFlags

	lua_pushnumber(L,wxZIP_ENCRYPTED); lua_setfield(L,-2,"wxZIP_ENCRYPTED");
	lua_pushnumber(L,wxZIP_DEFLATE_NORMAL); lua_setfield(L,-2,"wxZIP_DEFLATE_NORMAL");
	lua_pushnumber(L,wxZIP_DEFLATE_EXTRA); lua_setfield(L,-2,"wxZIP_DEFLATE_EXTRA");
	lua_pushnumber(L,wxZIP_DEFLATE_FAST); lua_setfield(L,-2,"wxZIP_DEFLATE_FAST");
	lua_pushnumber(L,wxZIP_DEFLATE_SUPERFAST); lua_setfield(L,-2,"wxZIP_DEFLATE_SUPERFAST");
	lua_pushnumber(L,wxZIP_DEFLATE_MASK); lua_setfield(L,-2,"wxZIP_DEFLATE_MASK");
	lua_pushnumber(L,wxZIP_SUMS_FOLLOW); lua_setfield(L,-2,"wxZIP_SUMS_FOLLOW");
	lua_pushnumber(L,wxZIP_ENHANCED); lua_setfield(L,-2,"wxZIP_ENHANCED");
	lua_pushnumber(L,wxZIP_PATCH); lua_setfield(L,-2,"wxZIP_PATCH");
	lua_pushnumber(L,wxZIP_STRONG_ENC); lua_setfield(L,-2,"wxZIP_STRONG_ENC");
	lua_pushnumber(L,wxZIP_UNUSED); lua_setfield(L,-2,"wxZIP_UNUSED");
	lua_pushnumber(L,wxZIP_RESERVED); lua_setfield(L,-2,"wxZIP_RESERVED");

	lua_setfield(L,-2,"wxZipFlags");

	lua_pushnumber(L,wxZIP_ENCRYPTED); lua_setfield(L,-2,"wxZIP_ENCRYPTED");
	lua_pushnumber(L,wxZIP_DEFLATE_NORMAL); lua_setfield(L,-2,"wxZIP_DEFLATE_NORMAL");
	lua_pushnumber(L,wxZIP_DEFLATE_EXTRA); lua_setfield(L,-2,"wxZIP_DEFLATE_EXTRA");
	lua_pushnumber(L,wxZIP_DEFLATE_FAST); lua_setfield(L,-2,"wxZIP_DEFLATE_FAST");
	lua_pushnumber(L,wxZIP_DEFLATE_SUPERFAST); lua_setfield(L,-2,"wxZIP_DEFLATE_SUPERFAST");
	lua_pushnumber(L,wxZIP_DEFLATE_MASK); lua_setfield(L,-2,"wxZIP_DEFLATE_MASK");
	lua_pushnumber(L,wxZIP_SUMS_FOLLOW); lua_setfield(L,-2,"wxZIP_SUMS_FOLLOW");
	lua_pushnumber(L,wxZIP_ENHANCED); lua_setfield(L,-2,"wxZIP_ENHANCED");
	lua_pushnumber(L,wxZIP_PATCH); lua_setfield(L,-2,"wxZIP_PATCH");
	lua_pushnumber(L,wxZIP_STRONG_ENC); lua_setfield(L,-2,"wxZIP_STRONG_ENC");
	lua_pushnumber(L,wxZIP_UNUSED); lua_setfield(L,-2,"wxZIP_UNUSED");
	lua_pushnumber(L,wxZIP_RESERVED); lua_setfield(L,-2,"wxZIP_RESERVED");


	lua_newtable(L); // enum wxZlibCompressionLevels

	lua_pushnumber(L,wxZ_DEFAULT_COMPRESSION); lua_setfield(L,-2,"wxZ_DEFAULT_COMPRESSION");
	lua_pushnumber(L,wxZ_NO_COMPRESSION); lua_setfield(L,-2,"wxZ_NO_COMPRESSION");
	lua_pushnumber(L,wxZ_BEST_SPEED); lua_setfield(L,-2,"wxZ_BEST_SPEED");
	lua_pushnumber(L,wxZ_BEST_COMPRESSION); lua_setfield(L,-2,"wxZ_BEST_COMPRESSION");

	lua_setfield(L,-2,"wxZlibCompressionLevels");

	lua_pushnumber(L,wxZ_DEFAULT_COMPRESSION); lua_setfield(L,-2,"wxZ_DEFAULT_COMPRESSION");
	lua_pushnumber(L,wxZ_NO_COMPRESSION); lua_setfield(L,-2,"wxZ_NO_COMPRESSION");
	lua_pushnumber(L,wxZ_BEST_SPEED); lua_setfield(L,-2,"wxZ_BEST_SPEED");
	lua_pushnumber(L,wxZ_BEST_COMPRESSION); lua_setfield(L,-2,"wxZ_BEST_COMPRESSION");


	lua_newtable(L); // enum wxZLibFlags

	lua_pushnumber(L,wxZLIB_NO_HEADER); lua_setfield(L,-2,"wxZLIB_NO_HEADER");
	lua_pushnumber(L,wxZLIB_ZLIB); lua_setfield(L,-2,"wxZLIB_ZLIB");
	lua_pushnumber(L,wxZLIB_GZIP); lua_setfield(L,-2,"wxZLIB_GZIP");
	lua_pushnumber(L,wxZLIB_AUTO); lua_setfield(L,-2,"wxZLIB_AUTO");

	lua_setfield(L,-2,"wxZLibFlags");

	lua_pushnumber(L,wxZLIB_NO_HEADER); lua_setfield(L,-2,"wxZLIB_NO_HEADER");
	lua_pushnumber(L,wxZLIB_ZLIB); lua_setfield(L,-2,"wxZLIB_ZLIB");
	lua_pushnumber(L,wxZLIB_GZIP); lua_setfield(L,-2,"wxZLIB_GZIP");
	lua_pushnumber(L,wxZLIB_AUTO); lua_setfield(L,-2,"wxZLIB_AUTO");


	lua_newtable(L); // enum unnamed_1

	lua_pushnumber(L,wxBookCtrlBase::NO_IMAGE); lua_setfield(L,-2,"NO_IMAGE");

	lua_setfield(L,-2,"unnamed_1");

	lua_pushnumber(L,wxBookCtrlBase::NO_IMAGE); lua_setfield(L,-2,"NO_IMAGE");


	lua_newtable(L); // enum unnamed_3

	lua_pushnumber(L,wxComboCtrlFeatures::MovableButton); lua_setfield(L,-2,"MovableButton");
	lua_pushnumber(L,wxComboCtrlFeatures::BitmapButton); lua_setfield(L,-2,"BitmapButton");
	lua_pushnumber(L,wxComboCtrlFeatures::ButtonSpacing); lua_setfield(L,-2,"ButtonSpacing");
	lua_pushnumber(L,wxComboCtrlFeatures::TextIndent); lua_setfield(L,-2,"TextIndent");
	lua_pushnumber(L,wxComboCtrlFeatures::PaintControl); lua_setfield(L,-2,"PaintControl");
	lua_pushnumber(L,wxComboCtrlFeatures::PaintWritable); lua_setfield(L,-2,"PaintWritable");
	lua_pushnumber(L,wxComboCtrlFeatures::Borderless); lua_setfield(L,-2,"Borderless");
	lua_pushnumber(L,wxComboCtrlFeatures::All); lua_setfield(L,-2,"All");

	lua_setfield(L,-2,"unnamed_3");

	lua_pushnumber(L,wxComboCtrlFeatures::MovableButton); lua_setfield(L,-2,"MovableButton");
	lua_pushnumber(L,wxComboCtrlFeatures::BitmapButton); lua_setfield(L,-2,"BitmapButton");
	lua_pushnumber(L,wxComboCtrlFeatures::ButtonSpacing); lua_setfield(L,-2,"ButtonSpacing");
	lua_pushnumber(L,wxComboCtrlFeatures::TextIndent); lua_setfield(L,-2,"TextIndent");
	lua_pushnumber(L,wxComboCtrlFeatures::PaintControl); lua_setfield(L,-2,"PaintControl");
	lua_pushnumber(L,wxComboCtrlFeatures::PaintWritable); lua_setfield(L,-2,"PaintWritable");
	lua_pushnumber(L,wxComboCtrlFeatures::Borderless); lua_setfield(L,-2,"Borderless");
	lua_pushnumber(L,wxComboCtrlFeatures::All); lua_setfield(L,-2,"All");


	lua_newtable(L); // enum EntryType

	lua_pushnumber(L,wxConfigBase::Type_Unknown); lua_setfield(L,-2,"Type_Unknown");
	lua_pushnumber(L,wxConfigBase::Type_String); lua_setfield(L,-2,"Type_String");
	lua_pushnumber(L,wxConfigBase::Type_Boolean); lua_setfield(L,-2,"Type_Boolean");
	lua_pushnumber(L,wxConfigBase::Type_Integer); lua_setfield(L,-2,"Type_Integer");
	lua_pushnumber(L,wxConfigBase::Type_Float); lua_setfield(L,-2,"Type_Float");

	lua_setfield(L,-2,"EntryType");

	lua_pushnumber(L,wxConfigBase::Type_Unknown); lua_setfield(L,-2,"Type_Unknown");
	lua_pushnumber(L,wxConfigBase::Type_String); lua_setfield(L,-2,"Type_String");
	lua_pushnumber(L,wxConfigBase::Type_Boolean); lua_setfield(L,-2,"Type_Boolean");
	lua_pushnumber(L,wxConfigBase::Type_Integer); lua_setfield(L,-2,"Type_Integer");
	lua_pushnumber(L,wxConfigBase::Type_Float); lua_setfield(L,-2,"Type_Float");


	lua_newtable(L); // enum Direction

	lua_pushnumber(L,wxDataObject::Get); lua_setfield(L,-2,"Get");
	lua_pushnumber(L,wxDataObject::Set); lua_setfield(L,-2,"Set");
	lua_pushnumber(L,wxDataObject::Both); lua_setfield(L,-2,"Both");

	lua_setfield(L,-2,"Direction");

	lua_pushnumber(L,wxDataObject::Get); lua_setfield(L,-2,"Get");
	lua_pushnumber(L,wxDataObject::Set); lua_setfield(L,-2,"Set");
	lua_pushnumber(L,wxDataObject::Both); lua_setfield(L,-2,"Both");


	lua_newtable(L); // enum Direction

	lua_pushnumber(L,wxDataObjectBase::Get); lua_setfield(L,-2,"Get");
	lua_pushnumber(L,wxDataObjectBase::Set); lua_setfield(L,-2,"Set");
	lua_pushnumber(L,wxDataObjectBase::Both); lua_setfield(L,-2,"Both");

	lua_setfield(L,-2,"Direction");

	lua_pushnumber(L,wxDataObjectBase::Get); lua_setfield(L,-2,"Get");
	lua_pushnumber(L,wxDataObjectBase::Set); lua_setfield(L,-2,"Set");
	lua_pushnumber(L,wxDataObjectBase::Both); lua_setfield(L,-2,"Both");


	lua_newtable(L); // enum TimeZone

	lua_pushnumber(L,wxDateTime::Local); lua_setfield(L,-2,"Local");
	lua_pushnumber(L,wxDateTime::GMT_12); lua_setfield(L,-2,"GMT_12");
	lua_pushnumber(L,wxDateTime::GMT_11); lua_setfield(L,-2,"GMT_11");
	lua_pushnumber(L,wxDateTime::GMT_10); lua_setfield(L,-2,"GMT_10");
	lua_pushnumber(L,wxDateTime::GMT_9); lua_setfield(L,-2,"GMT_9");
	lua_pushnumber(L,wxDateTime::GMT_8); lua_setfield(L,-2,"GMT_8");
	lua_pushnumber(L,wxDateTime::GMT_7); lua_setfield(L,-2,"GMT_7");
	lua_pushnumber(L,wxDateTime::GMT_6); lua_setfield(L,-2,"GMT_6");
	lua_pushnumber(L,wxDateTime::GMT_5); lua_setfield(L,-2,"GMT_5");
	lua_pushnumber(L,wxDateTime::GMT_4); lua_setfield(L,-2,"GMT_4");
	lua_pushnumber(L,wxDateTime::GMT_3); lua_setfield(L,-2,"GMT_3");
	lua_pushnumber(L,wxDateTime::GMT_2); lua_setfield(L,-2,"GMT_2");
	lua_pushnumber(L,wxDateTime::GMT_1); lua_setfield(L,-2,"GMT_1");
	lua_pushnumber(L,wxDateTime::GMT0); lua_setfield(L,-2,"GMT0");
	lua_pushnumber(L,wxDateTime::GMT1); lua_setfield(L,-2,"GMT1");
	lua_pushnumber(L,wxDateTime::GMT2); lua_setfield(L,-2,"GMT2");
	lua_pushnumber(L,wxDateTime::GMT3); lua_setfield(L,-2,"GMT3");
	lua_pushnumber(L,wxDateTime::GMT4); lua_setfield(L,-2,"GMT4");
	lua_pushnumber(L,wxDateTime::GMT5); lua_setfield(L,-2,"GMT5");
	lua_pushnumber(L,wxDateTime::GMT6); lua_setfield(L,-2,"GMT6");
	lua_pushnumber(L,wxDateTime::GMT7); lua_setfield(L,-2,"GMT7");
	lua_pushnumber(L,wxDateTime::GMT8); lua_setfield(L,-2,"GMT8");
	lua_pushnumber(L,wxDateTime::GMT9); lua_setfield(L,-2,"GMT9");
	lua_pushnumber(L,wxDateTime::GMT10); lua_setfield(L,-2,"GMT10");
	lua_pushnumber(L,wxDateTime::GMT11); lua_setfield(L,-2,"GMT11");
	lua_pushnumber(L,wxDateTime::GMT12); lua_setfield(L,-2,"GMT12");
	lua_pushnumber(L,wxDateTime::GMT13); lua_setfield(L,-2,"GMT13");
	lua_pushnumber(L,wxDateTime::WET); lua_setfield(L,-2,"WET");
	lua_pushnumber(L,wxDateTime::WEST); lua_setfield(L,-2,"WEST");
	lua_pushnumber(L,wxDateTime::CET); lua_setfield(L,-2,"CET");
	lua_pushnumber(L,wxDateTime::CEST); lua_setfield(L,-2,"CEST");
	lua_pushnumber(L,wxDateTime::EET); lua_setfield(L,-2,"EET");
	lua_pushnumber(L,wxDateTime::EEST); lua_setfield(L,-2,"EEST");
	lua_pushnumber(L,wxDateTime::MSK); lua_setfield(L,-2,"MSK");
	lua_pushnumber(L,wxDateTime::MSD); lua_setfield(L,-2,"MSD");
	lua_pushnumber(L,wxDateTime::AST); lua_setfield(L,-2,"AST");
	lua_pushnumber(L,wxDateTime::ADT); lua_setfield(L,-2,"ADT");
	lua_pushnumber(L,wxDateTime::EST); lua_setfield(L,-2,"EST");
	lua_pushnumber(L,wxDateTime::EDT); lua_setfield(L,-2,"EDT");
	lua_pushnumber(L,wxDateTime::CST); lua_setfield(L,-2,"CST");
	lua_pushnumber(L,wxDateTime::CDT); lua_setfield(L,-2,"CDT");
	lua_pushnumber(L,wxDateTime::MST); lua_setfield(L,-2,"MST");
	lua_pushnumber(L,wxDateTime::MDT); lua_setfield(L,-2,"MDT");
	lua_pushnumber(L,wxDateTime::PST); lua_setfield(L,-2,"PST");
	lua_pushnumber(L,wxDateTime::PDT); lua_setfield(L,-2,"PDT");
	lua_pushnumber(L,wxDateTime::HST); lua_setfield(L,-2,"HST");
	lua_pushnumber(L,wxDateTime::AKST); lua_setfield(L,-2,"AKST");
	lua_pushnumber(L,wxDateTime::AKDT); lua_setfield(L,-2,"AKDT");
	lua_pushnumber(L,wxDateTime::A_WST); lua_setfield(L,-2,"A_WST");
	lua_pushnumber(L,wxDateTime::A_CST); lua_setfield(L,-2,"A_CST");
	lua_pushnumber(L,wxDateTime::A_EST); lua_setfield(L,-2,"A_EST");
	lua_pushnumber(L,wxDateTime::A_ESST); lua_setfield(L,-2,"A_ESST");
	lua_pushnumber(L,wxDateTime::NZST); lua_setfield(L,-2,"NZST");
	lua_pushnumber(L,wxDateTime::NZDT); lua_setfield(L,-2,"NZDT");
	lua_pushnumber(L,wxDateTime::UTC); lua_setfield(L,-2,"UTC");

	lua_setfield(L,-2,"TimeZone");

	lua_pushnumber(L,wxDateTime::Local); lua_setfield(L,-2,"Local");
	lua_pushnumber(L,wxDateTime::GMT_12); lua_setfield(L,-2,"GMT_12");
	lua_pushnumber(L,wxDateTime::GMT_11); lua_setfield(L,-2,"GMT_11");
	lua_pushnumber(L,wxDateTime::GMT_10); lua_setfield(L,-2,"GMT_10");
	lua_pushnumber(L,wxDateTime::GMT_9); lua_setfield(L,-2,"GMT_9");
	lua_pushnumber(L,wxDateTime::GMT_8); lua_setfield(L,-2,"GMT_8");
	lua_pushnumber(L,wxDateTime::GMT_7); lua_setfield(L,-2,"GMT_7");
	lua_pushnumber(L,wxDateTime::GMT_6); lua_setfield(L,-2,"GMT_6");
	lua_pushnumber(L,wxDateTime::GMT_5); lua_setfield(L,-2,"GMT_5");
	lua_pushnumber(L,wxDateTime::GMT_4); lua_setfield(L,-2,"GMT_4");
	lua_pushnumber(L,wxDateTime::GMT_3); lua_setfield(L,-2,"GMT_3");
	lua_pushnumber(L,wxDateTime::GMT_2); lua_setfield(L,-2,"GMT_2");
	lua_pushnumber(L,wxDateTime::GMT_1); lua_setfield(L,-2,"GMT_1");
	lua_pushnumber(L,wxDateTime::GMT0); lua_setfield(L,-2,"GMT0");
	lua_pushnumber(L,wxDateTime::GMT1); lua_setfield(L,-2,"GMT1");
	lua_pushnumber(L,wxDateTime::GMT2); lua_setfield(L,-2,"GMT2");
	lua_pushnumber(L,wxDateTime::GMT3); lua_setfield(L,-2,"GMT3");
	lua_pushnumber(L,wxDateTime::GMT4); lua_setfield(L,-2,"GMT4");
	lua_pushnumber(L,wxDateTime::GMT5); lua_setfield(L,-2,"GMT5");
	lua_pushnumber(L,wxDateTime::GMT6); lua_setfield(L,-2,"GMT6");
	lua_pushnumber(L,wxDateTime::GMT7); lua_setfield(L,-2,"GMT7");
	lua_pushnumber(L,wxDateTime::GMT8); lua_setfield(L,-2,"GMT8");
	lua_pushnumber(L,wxDateTime::GMT9); lua_setfield(L,-2,"GMT9");
	lua_pushnumber(L,wxDateTime::GMT10); lua_setfield(L,-2,"GMT10");
	lua_pushnumber(L,wxDateTime::GMT11); lua_setfield(L,-2,"GMT11");
	lua_pushnumber(L,wxDateTime::GMT12); lua_setfield(L,-2,"GMT12");
	lua_pushnumber(L,wxDateTime::GMT13); lua_setfield(L,-2,"GMT13");
	lua_pushnumber(L,wxDateTime::WET); lua_setfield(L,-2,"WET");
	lua_pushnumber(L,wxDateTime::WEST); lua_setfield(L,-2,"WEST");
	lua_pushnumber(L,wxDateTime::CET); lua_setfield(L,-2,"CET");
	lua_pushnumber(L,wxDateTime::CEST); lua_setfield(L,-2,"CEST");
	lua_pushnumber(L,wxDateTime::EET); lua_setfield(L,-2,"EET");
	lua_pushnumber(L,wxDateTime::EEST); lua_setfield(L,-2,"EEST");
	lua_pushnumber(L,wxDateTime::MSK); lua_setfield(L,-2,"MSK");
	lua_pushnumber(L,wxDateTime::MSD); lua_setfield(L,-2,"MSD");
	lua_pushnumber(L,wxDateTime::AST); lua_setfield(L,-2,"AST");
	lua_pushnumber(L,wxDateTime::ADT); lua_setfield(L,-2,"ADT");
	lua_pushnumber(L,wxDateTime::EST); lua_setfield(L,-2,"EST");
	lua_pushnumber(L,wxDateTime::EDT); lua_setfield(L,-2,"EDT");
	lua_pushnumber(L,wxDateTime::CST); lua_setfield(L,-2,"CST");
	lua_pushnumber(L,wxDateTime::CDT); lua_setfield(L,-2,"CDT");
	lua_pushnumber(L,wxDateTime::MST); lua_setfield(L,-2,"MST");
	lua_pushnumber(L,wxDateTime::MDT); lua_setfield(L,-2,"MDT");
	lua_pushnumber(L,wxDateTime::PST); lua_setfield(L,-2,"PST");
	lua_pushnumber(L,wxDateTime::PDT); lua_setfield(L,-2,"PDT");
	lua_pushnumber(L,wxDateTime::HST); lua_setfield(L,-2,"HST");
	lua_pushnumber(L,wxDateTime::AKST); lua_setfield(L,-2,"AKST");
	lua_pushnumber(L,wxDateTime::AKDT); lua_setfield(L,-2,"AKDT");
	lua_pushnumber(L,wxDateTime::A_WST); lua_setfield(L,-2,"A_WST");
	lua_pushnumber(L,wxDateTime::A_CST); lua_setfield(L,-2,"A_CST");
	lua_pushnumber(L,wxDateTime::A_EST); lua_setfield(L,-2,"A_EST");
	lua_pushnumber(L,wxDateTime::A_ESST); lua_setfield(L,-2,"A_ESST");
	lua_pushnumber(L,wxDateTime::NZST); lua_setfield(L,-2,"NZST");
	lua_pushnumber(L,wxDateTime::NZDT); lua_setfield(L,-2,"NZDT");
	lua_pushnumber(L,wxDateTime::UTC); lua_setfield(L,-2,"UTC");


	lua_newtable(L); // enum Calendar

	lua_pushnumber(L,wxDateTime::Gregorian); lua_setfield(L,-2,"Gregorian");
	lua_pushnumber(L,wxDateTime::Julian); lua_setfield(L,-2,"Julian");

	lua_setfield(L,-2,"Calendar");

	lua_pushnumber(L,wxDateTime::Gregorian); lua_setfield(L,-2,"Gregorian");
	lua_pushnumber(L,wxDateTime::Julian); lua_setfield(L,-2,"Julian");


	lua_newtable(L); // enum GregorianAdoption

	lua_pushnumber(L,wxDateTime::Gr_Unknown); lua_setfield(L,-2,"Gr_Unknown");
	lua_pushnumber(L,wxDateTime::Gr_Standard); lua_setfield(L,-2,"Gr_Standard");
	lua_pushnumber(L,wxDateTime::Gr_Alaska); lua_setfield(L,-2,"Gr_Alaska");
	lua_pushnumber(L,wxDateTime::Gr_Albania); lua_setfield(L,-2,"Gr_Albania");
	lua_pushnumber(L,wxDateTime::Gr_Austria); lua_setfield(L,-2,"Gr_Austria");
	lua_pushnumber(L,wxDateTime::Gr_Austria_Brixen); lua_setfield(L,-2,"Gr_Austria_Brixen");
	lua_pushnumber(L,wxDateTime::Gr_Austria_Salzburg); lua_setfield(L,-2,"Gr_Austria_Salzburg");
	lua_pushnumber(L,wxDateTime::Gr_Austria_Tyrol); lua_setfield(L,-2,"Gr_Austria_Tyrol");
	lua_pushnumber(L,wxDateTime::Gr_Austria_Carinthia); lua_setfield(L,-2,"Gr_Austria_Carinthia");
	lua_pushnumber(L,wxDateTime::Gr_Austria_Styria); lua_setfield(L,-2,"Gr_Austria_Styria");
	lua_pushnumber(L,wxDateTime::Gr_Belgium); lua_setfield(L,-2,"Gr_Belgium");
	lua_pushnumber(L,wxDateTime::Gr_Bulgaria); lua_setfield(L,-2,"Gr_Bulgaria");
	lua_pushnumber(L,wxDateTime::Gr_Bulgaria_1); lua_setfield(L,-2,"Gr_Bulgaria_1");
	lua_pushnumber(L,wxDateTime::Gr_Bulgaria_2); lua_setfield(L,-2,"Gr_Bulgaria_2");
	lua_pushnumber(L,wxDateTime::Gr_Bulgaria_3); lua_setfield(L,-2,"Gr_Bulgaria_3");
	lua_pushnumber(L,wxDateTime::Gr_Canada); lua_setfield(L,-2,"Gr_Canada");
	lua_pushnumber(L,wxDateTime::Gr_China); lua_setfield(L,-2,"Gr_China");
	lua_pushnumber(L,wxDateTime::Gr_China_1); lua_setfield(L,-2,"Gr_China_1");
	lua_pushnumber(L,wxDateTime::Gr_China_2); lua_setfield(L,-2,"Gr_China_2");
	lua_pushnumber(L,wxDateTime::Gr_Czechoslovakia); lua_setfield(L,-2,"Gr_Czechoslovakia");
	lua_pushnumber(L,wxDateTime::Gr_Denmark); lua_setfield(L,-2,"Gr_Denmark");
	lua_pushnumber(L,wxDateTime::Gr_Egypt); lua_setfield(L,-2,"Gr_Egypt");
	lua_pushnumber(L,wxDateTime::Gr_Estonia); lua_setfield(L,-2,"Gr_Estonia");
	lua_pushnumber(L,wxDateTime::Gr_Finland); lua_setfield(L,-2,"Gr_Finland");
	lua_pushnumber(L,wxDateTime::Gr_France); lua_setfield(L,-2,"Gr_France");
	lua_pushnumber(L,wxDateTime::Gr_France_Alsace); lua_setfield(L,-2,"Gr_France_Alsace");
	lua_pushnumber(L,wxDateTime::Gr_France_Lorraine); lua_setfield(L,-2,"Gr_France_Lorraine");
	lua_pushnumber(L,wxDateTime::Gr_France_Strasbourg); lua_setfield(L,-2,"Gr_France_Strasbourg");
	lua_pushnumber(L,wxDateTime::Gr_Germany); lua_setfield(L,-2,"Gr_Germany");
	lua_pushnumber(L,wxDateTime::Gr_Germany_Catholic); lua_setfield(L,-2,"Gr_Germany_Catholic");
	lua_pushnumber(L,wxDateTime::Gr_Germany_Prussia); lua_setfield(L,-2,"Gr_Germany_Prussia");
	lua_pushnumber(L,wxDateTime::Gr_Germany_Protestant); lua_setfield(L,-2,"Gr_Germany_Protestant");
	lua_pushnumber(L,wxDateTime::Gr_GreatBritain); lua_setfield(L,-2,"Gr_GreatBritain");
	lua_pushnumber(L,wxDateTime::Gr_Greece); lua_setfield(L,-2,"Gr_Greece");
	lua_pushnumber(L,wxDateTime::Gr_Hungary); lua_setfield(L,-2,"Gr_Hungary");
	lua_pushnumber(L,wxDateTime::Gr_Ireland); lua_setfield(L,-2,"Gr_Ireland");
	lua_pushnumber(L,wxDateTime::Gr_Italy); lua_setfield(L,-2,"Gr_Italy");
	lua_pushnumber(L,wxDateTime::Gr_Japan); lua_setfield(L,-2,"Gr_Japan");
	lua_pushnumber(L,wxDateTime::Gr_Japan_1); lua_setfield(L,-2,"Gr_Japan_1");
	lua_pushnumber(L,wxDateTime::Gr_Japan_2); lua_setfield(L,-2,"Gr_Japan_2");
	lua_pushnumber(L,wxDateTime::Gr_Japan_3); lua_setfield(L,-2,"Gr_Japan_3");
	lua_pushnumber(L,wxDateTime::Gr_Latvia); lua_setfield(L,-2,"Gr_Latvia");
	lua_pushnumber(L,wxDateTime::Gr_Lithuania); lua_setfield(L,-2,"Gr_Lithuania");
	lua_pushnumber(L,wxDateTime::Gr_Luxemburg); lua_setfield(L,-2,"Gr_Luxemburg");
	lua_pushnumber(L,wxDateTime::Gr_Netherlands); lua_setfield(L,-2,"Gr_Netherlands");
	lua_pushnumber(L,wxDateTime::Gr_Netherlands_Groningen); lua_setfield(L,-2,"Gr_Netherlands_Groningen");
	lua_pushnumber(L,wxDateTime::Gr_Netherlands_Gelderland); lua_setfield(L,-2,"Gr_Netherlands_Gelderland");
	lua_pushnumber(L,wxDateTime::Gr_Netherlands_Utrecht); lua_setfield(L,-2,"Gr_Netherlands_Utrecht");
	lua_pushnumber(L,wxDateTime::Gr_Netherlands_Friesland); lua_setfield(L,-2,"Gr_Netherlands_Friesland");
	lua_pushnumber(L,wxDateTime::Gr_Norway); lua_setfield(L,-2,"Gr_Norway");
	lua_pushnumber(L,wxDateTime::Gr_Poland); lua_setfield(L,-2,"Gr_Poland");
	lua_pushnumber(L,wxDateTime::Gr_Portugal); lua_setfield(L,-2,"Gr_Portugal");
	lua_pushnumber(L,wxDateTime::Gr_Romania); lua_setfield(L,-2,"Gr_Romania");
	lua_pushnumber(L,wxDateTime::Gr_Russia); lua_setfield(L,-2,"Gr_Russia");
	lua_pushnumber(L,wxDateTime::Gr_Scotland); lua_setfield(L,-2,"Gr_Scotland");
	lua_pushnumber(L,wxDateTime::Gr_Spain); lua_setfield(L,-2,"Gr_Spain");
	lua_pushnumber(L,wxDateTime::Gr_Sweden); lua_setfield(L,-2,"Gr_Sweden");
	lua_pushnumber(L,wxDateTime::Gr_Switzerland); lua_setfield(L,-2,"Gr_Switzerland");
	lua_pushnumber(L,wxDateTime::Gr_Switzerland_Catholic); lua_setfield(L,-2,"Gr_Switzerland_Catholic");
	lua_pushnumber(L,wxDateTime::Gr_Switzerland_Protestant); lua_setfield(L,-2,"Gr_Switzerland_Protestant");
	lua_pushnumber(L,wxDateTime::Gr_Turkey); lua_setfield(L,-2,"Gr_Turkey");
	lua_pushnumber(L,wxDateTime::Gr_USA); lua_setfield(L,-2,"Gr_USA");
	lua_pushnumber(L,wxDateTime::Gr_Wales); lua_setfield(L,-2,"Gr_Wales");
	lua_pushnumber(L,wxDateTime::Gr_Yugoslavia); lua_setfield(L,-2,"Gr_Yugoslavia");

	lua_setfield(L,-2,"GregorianAdoption");

	lua_pushnumber(L,wxDateTime::Gr_Unknown); lua_setfield(L,-2,"Gr_Unknown");
	lua_pushnumber(L,wxDateTime::Gr_Standard); lua_setfield(L,-2,"Gr_Standard");
	lua_pushnumber(L,wxDateTime::Gr_Alaska); lua_setfield(L,-2,"Gr_Alaska");
	lua_pushnumber(L,wxDateTime::Gr_Albania); lua_setfield(L,-2,"Gr_Albania");
	lua_pushnumber(L,wxDateTime::Gr_Austria); lua_setfield(L,-2,"Gr_Austria");
	lua_pushnumber(L,wxDateTime::Gr_Austria_Brixen); lua_setfield(L,-2,"Gr_Austria_Brixen");
	lua_pushnumber(L,wxDateTime::Gr_Austria_Salzburg); lua_setfield(L,-2,"Gr_Austria_Salzburg");
	lua_pushnumber(L,wxDateTime::Gr_Austria_Tyrol); lua_setfield(L,-2,"Gr_Austria_Tyrol");
	lua_pushnumber(L,wxDateTime::Gr_Austria_Carinthia); lua_setfield(L,-2,"Gr_Austria_Carinthia");
	lua_pushnumber(L,wxDateTime::Gr_Austria_Styria); lua_setfield(L,-2,"Gr_Austria_Styria");
	lua_pushnumber(L,wxDateTime::Gr_Belgium); lua_setfield(L,-2,"Gr_Belgium");
	lua_pushnumber(L,wxDateTime::Gr_Bulgaria); lua_setfield(L,-2,"Gr_Bulgaria");
	lua_pushnumber(L,wxDateTime::Gr_Bulgaria_1); lua_setfield(L,-2,"Gr_Bulgaria_1");
	lua_pushnumber(L,wxDateTime::Gr_Bulgaria_2); lua_setfield(L,-2,"Gr_Bulgaria_2");
	lua_pushnumber(L,wxDateTime::Gr_Bulgaria_3); lua_setfield(L,-2,"Gr_Bulgaria_3");
	lua_pushnumber(L,wxDateTime::Gr_Canada); lua_setfield(L,-2,"Gr_Canada");
	lua_pushnumber(L,wxDateTime::Gr_China); lua_setfield(L,-2,"Gr_China");
	lua_pushnumber(L,wxDateTime::Gr_China_1); lua_setfield(L,-2,"Gr_China_1");
	lua_pushnumber(L,wxDateTime::Gr_China_2); lua_setfield(L,-2,"Gr_China_2");
	lua_pushnumber(L,wxDateTime::Gr_Czechoslovakia); lua_setfield(L,-2,"Gr_Czechoslovakia");
	lua_pushnumber(L,wxDateTime::Gr_Denmark); lua_setfield(L,-2,"Gr_Denmark");
	lua_pushnumber(L,wxDateTime::Gr_Egypt); lua_setfield(L,-2,"Gr_Egypt");
	lua_pushnumber(L,wxDateTime::Gr_Estonia); lua_setfield(L,-2,"Gr_Estonia");
	lua_pushnumber(L,wxDateTime::Gr_Finland); lua_setfield(L,-2,"Gr_Finland");
	lua_pushnumber(L,wxDateTime::Gr_France); lua_setfield(L,-2,"Gr_France");
	lua_pushnumber(L,wxDateTime::Gr_France_Alsace); lua_setfield(L,-2,"Gr_France_Alsace");
	lua_pushnumber(L,wxDateTime::Gr_France_Lorraine); lua_setfield(L,-2,"Gr_France_Lorraine");
	lua_pushnumber(L,wxDateTime::Gr_France_Strasbourg); lua_setfield(L,-2,"Gr_France_Strasbourg");
	lua_pushnumber(L,wxDateTime::Gr_Germany); lua_setfield(L,-2,"Gr_Germany");
	lua_pushnumber(L,wxDateTime::Gr_Germany_Catholic); lua_setfield(L,-2,"Gr_Germany_Catholic");
	lua_pushnumber(L,wxDateTime::Gr_Germany_Prussia); lua_setfield(L,-2,"Gr_Germany_Prussia");
	lua_pushnumber(L,wxDateTime::Gr_Germany_Protestant); lua_setfield(L,-2,"Gr_Germany_Protestant");
	lua_pushnumber(L,wxDateTime::Gr_GreatBritain); lua_setfield(L,-2,"Gr_GreatBritain");
	lua_pushnumber(L,wxDateTime::Gr_Greece); lua_setfield(L,-2,"Gr_Greece");
	lua_pushnumber(L,wxDateTime::Gr_Hungary); lua_setfield(L,-2,"Gr_Hungary");
	lua_pushnumber(L,wxDateTime::Gr_Ireland); lua_setfield(L,-2,"Gr_Ireland");
	lua_pushnumber(L,wxDateTime::Gr_Italy); lua_setfield(L,-2,"Gr_Italy");
	lua_pushnumber(L,wxDateTime::Gr_Japan); lua_setfield(L,-2,"Gr_Japan");
	lua_pushnumber(L,wxDateTime::Gr_Japan_1); lua_setfield(L,-2,"Gr_Japan_1");
	lua_pushnumber(L,wxDateTime::Gr_Japan_2); lua_setfield(L,-2,"Gr_Japan_2");
	lua_pushnumber(L,wxDateTime::Gr_Japan_3); lua_setfield(L,-2,"Gr_Japan_3");
	lua_pushnumber(L,wxDateTime::Gr_Latvia); lua_setfield(L,-2,"Gr_Latvia");
	lua_pushnumber(L,wxDateTime::Gr_Lithuania); lua_setfield(L,-2,"Gr_Lithuania");
	lua_pushnumber(L,wxDateTime::Gr_Luxemburg); lua_setfield(L,-2,"Gr_Luxemburg");
	lua_pushnumber(L,wxDateTime::Gr_Netherlands); lua_setfield(L,-2,"Gr_Netherlands");
	lua_pushnumber(L,wxDateTime::Gr_Netherlands_Groningen); lua_setfield(L,-2,"Gr_Netherlands_Groningen");
	lua_pushnumber(L,wxDateTime::Gr_Netherlands_Gelderland); lua_setfield(L,-2,"Gr_Netherlands_Gelderland");
	lua_pushnumber(L,wxDateTime::Gr_Netherlands_Utrecht); lua_setfield(L,-2,"Gr_Netherlands_Utrecht");
	lua_pushnumber(L,wxDateTime::Gr_Netherlands_Friesland); lua_setfield(L,-2,"Gr_Netherlands_Friesland");
	lua_pushnumber(L,wxDateTime::Gr_Norway); lua_setfield(L,-2,"Gr_Norway");
	lua_pushnumber(L,wxDateTime::Gr_Poland); lua_setfield(L,-2,"Gr_Poland");
	lua_pushnumber(L,wxDateTime::Gr_Portugal); lua_setfield(L,-2,"Gr_Portugal");
	lua_pushnumber(L,wxDateTime::Gr_Romania); lua_setfield(L,-2,"Gr_Romania");
	lua_pushnumber(L,wxDateTime::Gr_Russia); lua_setfield(L,-2,"Gr_Russia");
	lua_pushnumber(L,wxDateTime::Gr_Scotland); lua_setfield(L,-2,"Gr_Scotland");
	lua_pushnumber(L,wxDateTime::Gr_Spain); lua_setfield(L,-2,"Gr_Spain");
	lua_pushnumber(L,wxDateTime::Gr_Sweden); lua_setfield(L,-2,"Gr_Sweden");
	lua_pushnumber(L,wxDateTime::Gr_Switzerland); lua_setfield(L,-2,"Gr_Switzerland");
	lua_pushnumber(L,wxDateTime::Gr_Switzerland_Catholic); lua_setfield(L,-2,"Gr_Switzerland_Catholic");
	lua_pushnumber(L,wxDateTime::Gr_Switzerland_Protestant); lua_setfield(L,-2,"Gr_Switzerland_Protestant");
	lua_pushnumber(L,wxDateTime::Gr_Turkey); lua_setfield(L,-2,"Gr_Turkey");
	lua_pushnumber(L,wxDateTime::Gr_USA); lua_setfield(L,-2,"Gr_USA");
	lua_pushnumber(L,wxDateTime::Gr_Wales); lua_setfield(L,-2,"Gr_Wales");
	lua_pushnumber(L,wxDateTime::Gr_Yugoslavia); lua_setfield(L,-2,"Gr_Yugoslavia");


	lua_newtable(L); // enum Country

	lua_pushnumber(L,wxDateTime::Country_Unknown); lua_setfield(L,-2,"Country_Unknown");
	lua_pushnumber(L,wxDateTime::Country_Default); lua_setfield(L,-2,"Country_Default");
	lua_pushnumber(L,wxDateTime::Country_WesternEurope_Start); lua_setfield(L,-2,"Country_WesternEurope_Start");
	lua_pushnumber(L,wxDateTime::Country_EEC); lua_setfield(L,-2,"Country_EEC");
	lua_pushnumber(L,wxDateTime::France); lua_setfield(L,-2,"France");
	lua_pushnumber(L,wxDateTime::Germany); lua_setfield(L,-2,"Germany");
	lua_pushnumber(L,wxDateTime::UK); lua_setfield(L,-2,"UK");
	lua_pushnumber(L,wxDateTime::Country_WesternEurope_End); lua_setfield(L,-2,"Country_WesternEurope_End");
	lua_pushnumber(L,wxDateTime::Russia); lua_setfield(L,-2,"Russia");
	lua_pushnumber(L,wxDateTime::USA); lua_setfield(L,-2,"USA");

	lua_setfield(L,-2,"Country");

	lua_pushnumber(L,wxDateTime::Country_Unknown); lua_setfield(L,-2,"Country_Unknown");
	lua_pushnumber(L,wxDateTime::Country_Default); lua_setfield(L,-2,"Country_Default");
	lua_pushnumber(L,wxDateTime::Country_WesternEurope_Start); lua_setfield(L,-2,"Country_WesternEurope_Start");
	lua_pushnumber(L,wxDateTime::Country_EEC); lua_setfield(L,-2,"Country_EEC");
	lua_pushnumber(L,wxDateTime::France); lua_setfield(L,-2,"France");
	lua_pushnumber(L,wxDateTime::Germany); lua_setfield(L,-2,"Germany");
	lua_pushnumber(L,wxDateTime::UK); lua_setfield(L,-2,"UK");
	lua_pushnumber(L,wxDateTime::Country_WesternEurope_End); lua_setfield(L,-2,"Country_WesternEurope_End");
	lua_pushnumber(L,wxDateTime::Russia); lua_setfield(L,-2,"Russia");
	lua_pushnumber(L,wxDateTime::USA); lua_setfield(L,-2,"USA");


	lua_newtable(L); // enum Month

	lua_pushnumber(L,wxDateTime::Jan); lua_setfield(L,-2,"Jan");
	lua_pushnumber(L,wxDateTime::Feb); lua_setfield(L,-2,"Feb");
	lua_pushnumber(L,wxDateTime::Mar); lua_setfield(L,-2,"Mar");
	lua_pushnumber(L,wxDateTime::Apr); lua_setfield(L,-2,"Apr");
	lua_pushnumber(L,wxDateTime::May); lua_setfield(L,-2,"May");
	lua_pushnumber(L,wxDateTime::Jun); lua_setfield(L,-2,"Jun");
	lua_pushnumber(L,wxDateTime::Jul); lua_setfield(L,-2,"Jul");
	lua_pushnumber(L,wxDateTime::Aug); lua_setfield(L,-2,"Aug");
	lua_pushnumber(L,wxDateTime::Sep); lua_setfield(L,-2,"Sep");
	lua_pushnumber(L,wxDateTime::Oct); lua_setfield(L,-2,"Oct");
	lua_pushnumber(L,wxDateTime::Nov); lua_setfield(L,-2,"Nov");
	lua_pushnumber(L,wxDateTime::Dec); lua_setfield(L,-2,"Dec");
	lua_pushnumber(L,wxDateTime::Inv_Month); lua_setfield(L,-2,"Inv_Month");

	lua_setfield(L,-2,"Month");

	lua_pushnumber(L,wxDateTime::Jan); lua_setfield(L,-2,"Jan");
	lua_pushnumber(L,wxDateTime::Feb); lua_setfield(L,-2,"Feb");
	lua_pushnumber(L,wxDateTime::Mar); lua_setfield(L,-2,"Mar");
	lua_pushnumber(L,wxDateTime::Apr); lua_setfield(L,-2,"Apr");
	lua_pushnumber(L,wxDateTime::May); lua_setfield(L,-2,"May");
	lua_pushnumber(L,wxDateTime::Jun); lua_setfield(L,-2,"Jun");
	lua_pushnumber(L,wxDateTime::Jul); lua_setfield(L,-2,"Jul");
	lua_pushnumber(L,wxDateTime::Aug); lua_setfield(L,-2,"Aug");
	lua_pushnumber(L,wxDateTime::Sep); lua_setfield(L,-2,"Sep");
	lua_pushnumber(L,wxDateTime::Oct); lua_setfield(L,-2,"Oct");
	lua_pushnumber(L,wxDateTime::Nov); lua_setfield(L,-2,"Nov");
	lua_pushnumber(L,wxDateTime::Dec); lua_setfield(L,-2,"Dec");
	lua_pushnumber(L,wxDateTime::Inv_Month); lua_setfield(L,-2,"Inv_Month");


	lua_newtable(L); // enum WeekDay

	lua_pushnumber(L,wxDateTime::Sun); lua_setfield(L,-2,"Sun");
	lua_pushnumber(L,wxDateTime::Mon); lua_setfield(L,-2,"Mon");
	lua_pushnumber(L,wxDateTime::Tue); lua_setfield(L,-2,"Tue");
	lua_pushnumber(L,wxDateTime::Wed); lua_setfield(L,-2,"Wed");
	lua_pushnumber(L,wxDateTime::Thu); lua_setfield(L,-2,"Thu");
	lua_pushnumber(L,wxDateTime::Fri); lua_setfield(L,-2,"Fri");
	lua_pushnumber(L,wxDateTime::Sat); lua_setfield(L,-2,"Sat");
	lua_pushnumber(L,wxDateTime::Inv_WeekDay); lua_setfield(L,-2,"Inv_WeekDay");

	lua_setfield(L,-2,"WeekDay");

	lua_pushnumber(L,wxDateTime::Sun); lua_setfield(L,-2,"Sun");
	lua_pushnumber(L,wxDateTime::Mon); lua_setfield(L,-2,"Mon");
	lua_pushnumber(L,wxDateTime::Tue); lua_setfield(L,-2,"Tue");
	lua_pushnumber(L,wxDateTime::Wed); lua_setfield(L,-2,"Wed");
	lua_pushnumber(L,wxDateTime::Thu); lua_setfield(L,-2,"Thu");
	lua_pushnumber(L,wxDateTime::Fri); lua_setfield(L,-2,"Fri");
	lua_pushnumber(L,wxDateTime::Sat); lua_setfield(L,-2,"Sat");
	lua_pushnumber(L,wxDateTime::Inv_WeekDay); lua_setfield(L,-2,"Inv_WeekDay");


	lua_newtable(L); // enum Year

	lua_pushnumber(L,wxDateTime::Inv_Year); lua_setfield(L,-2,"Inv_Year");

	lua_setfield(L,-2,"Year");

	lua_pushnumber(L,wxDateTime::Inv_Year); lua_setfield(L,-2,"Inv_Year");


	lua_newtable(L); // enum NameFlags

	lua_pushnumber(L,wxDateTime::Name_Full); lua_setfield(L,-2,"Name_Full");
	lua_pushnumber(L,wxDateTime::Name_Abbr); lua_setfield(L,-2,"Name_Abbr");

	lua_setfield(L,-2,"NameFlags");

	lua_pushnumber(L,wxDateTime::Name_Full); lua_setfield(L,-2,"Name_Full");
	lua_pushnumber(L,wxDateTime::Name_Abbr); lua_setfield(L,-2,"Name_Abbr");


	lua_newtable(L); // enum WeekFlags

	lua_pushnumber(L,wxDateTime::Default_First); lua_setfield(L,-2,"Default_First");
	lua_pushnumber(L,wxDateTime::Monday_First); lua_setfield(L,-2,"Monday_First");
	lua_pushnumber(L,wxDateTime::Sunday_First); lua_setfield(L,-2,"Sunday_First");

	lua_setfield(L,-2,"WeekFlags");

	lua_pushnumber(L,wxDateTime::Default_First); lua_setfield(L,-2,"Default_First");
	lua_pushnumber(L,wxDateTime::Monday_First); lua_setfield(L,-2,"Monday_First");
	lua_pushnumber(L,wxDateTime::Sunday_First); lua_setfield(L,-2,"Sunday_First");


	lua_newtable(L); // enum unnamed_4

	lua_pushnumber(L,wxEventFilter::Event_Skip); lua_setfield(L,-2,"Event_Skip");
	lua_pushnumber(L,wxEventFilter::Event_Ignore); lua_setfield(L,-2,"Event_Ignore");
	lua_pushnumber(L,wxEventFilter::Event_Processed); lua_setfield(L,-2,"Event_Processed");

	lua_setfield(L,-2,"unnamed_4");

	lua_pushnumber(L,wxEventFilter::Event_Skip); lua_setfield(L,-2,"Event_Skip");
	lua_pushnumber(L,wxEventFilter::Event_Ignore); lua_setfield(L,-2,"Event_Ignore");
	lua_pushnumber(L,wxEventFilter::Event_Processed); lua_setfield(L,-2,"Event_Processed");


	lua_newtable(L); // enum OpenMode

	lua_pushnumber(L,wxFile::read); lua_setfield(L,-2,"read");
	lua_pushnumber(L,wxFile::write); lua_setfield(L,-2,"write");
	lua_pushnumber(L,wxFile::read_write); lua_setfield(L,-2,"read_write");
	lua_pushnumber(L,wxFile::write_append); lua_setfield(L,-2,"write_append");
	lua_pushnumber(L,wxFile::write_excl); lua_setfield(L,-2,"write_excl");

	lua_setfield(L,-2,"OpenMode");

	lua_pushnumber(L,wxFile::read); lua_setfield(L,-2,"read");
	lua_pushnumber(L,wxFile::write); lua_setfield(L,-2,"write");
	lua_pushnumber(L,wxFile::read_write); lua_setfield(L,-2,"read_write");
	lua_pushnumber(L,wxFile::write_append); lua_setfield(L,-2,"write_append");
	lua_pushnumber(L,wxFile::write_excl); lua_setfield(L,-2,"write_excl");


	lua_newtable(L); // enum unnamed_5

	lua_pushnumber(L,wxFile::fd_invalid); lua_setfield(L,-2,"fd_invalid");
	lua_pushnumber(L,wxFile::fd_stdin); lua_setfield(L,-2,"fd_stdin");
	lua_pushnumber(L,wxFile::fd_stdout); lua_setfield(L,-2,"fd_stdout");
	lua_pushnumber(L,wxFile::fd_stderr); lua_setfield(L,-2,"fd_stderr");

	lua_setfield(L,-2,"unnamed_5");

	lua_pushnumber(L,wxFile::fd_invalid); lua_setfield(L,-2,"fd_invalid");
	lua_pushnumber(L,wxFile::fd_stdin); lua_setfield(L,-2,"fd_stdin");
	lua_pushnumber(L,wxFile::fd_stdout); lua_setfield(L,-2,"fd_stdout");
	lua_pushnumber(L,wxFile::fd_stderr); lua_setfield(L,-2,"fd_stderr");


	lua_newtable(L); // enum TransferMode

	lua_pushnumber(L,wxFTP::NONE); lua_setfield(L,-2,"NONE");
	lua_pushnumber(L,wxFTP::ASCII); lua_setfield(L,-2,"ASCII");
	lua_pushnumber(L,wxFTP::BINARY); lua_setfield(L,-2,"BINARY");

	lua_setfield(L,-2,"TransferMode");

	lua_pushnumber(L,wxFTP::NONE); lua_setfield(L,-2,"NONE");
	lua_pushnumber(L,wxFTP::ASCII); lua_setfield(L,-2,"ASCII");
	lua_pushnumber(L,wxFTP::BINARY); lua_setfield(L,-2,"BINARY");


	lua_newtable(L); // enum wxGridSelectionModes

	lua_pushnumber(L,wxGrid::wxGridSelectCells); lua_setfield(L,-2,"wxGridSelectCells");
	lua_pushnumber(L,wxGrid::wxGridSelectRows); lua_setfield(L,-2,"wxGridSelectRows");
	lua_pushnumber(L,wxGrid::wxGridSelectColumns); lua_setfield(L,-2,"wxGridSelectColumns");
	lua_pushnumber(L,wxGrid::wxGridSelectRowsOrColumns); lua_setfield(L,-2,"wxGridSelectRowsOrColumns");

	lua_setfield(L,-2,"wxGridSelectionModes");

	lua_pushnumber(L,wxGrid::wxGridSelectCells); lua_setfield(L,-2,"wxGridSelectCells");
	lua_pushnumber(L,wxGrid::wxGridSelectRows); lua_setfield(L,-2,"wxGridSelectRows");
	lua_pushnumber(L,wxGrid::wxGridSelectColumns); lua_setfield(L,-2,"wxGridSelectColumns");
	lua_pushnumber(L,wxGrid::wxGridSelectRowsOrColumns); lua_setfield(L,-2,"wxGridSelectRowsOrColumns");


	lua_newtable(L); // enum CellSpan

	lua_pushnumber(L,wxGrid::CellSpan_Inside); lua_setfield(L,-2,"CellSpan_Inside");
	lua_pushnumber(L,wxGrid::CellSpan_None); lua_setfield(L,-2,"CellSpan_None");
	lua_pushnumber(L,wxGrid::CellSpan_Main); lua_setfield(L,-2,"CellSpan_Main");

	lua_setfield(L,-2,"CellSpan");

	lua_pushnumber(L,wxGrid::CellSpan_Inside); lua_setfield(L,-2,"CellSpan_Inside");
	lua_pushnumber(L,wxGrid::CellSpan_None); lua_setfield(L,-2,"CellSpan_None");
	lua_pushnumber(L,wxGrid::CellSpan_Main); lua_setfield(L,-2,"CellSpan_Main");


	lua_newtable(L); // enum wxAttrKind

	lua_pushnumber(L,wxGridCellAttr::Any); lua_setfield(L,-2,"Any");
	lua_pushnumber(L,wxGridCellAttr::Cell); lua_setfield(L,-2,"Cell");
	lua_pushnumber(L,wxGridCellAttr::Row); lua_setfield(L,-2,"Row");
	lua_pushnumber(L,wxGridCellAttr::Col); lua_setfield(L,-2,"Col");

	lua_setfield(L,-2,"wxAttrKind");

	lua_pushnumber(L,wxGridCellAttr::Any); lua_setfield(L,-2,"Any");
	lua_pushnumber(L,wxGridCellAttr::Cell); lua_setfield(L,-2,"Cell");
	lua_pushnumber(L,wxGridCellAttr::Row); lua_setfield(L,-2,"Row");
	lua_pushnumber(L,wxGridCellAttr::Col); lua_setfield(L,-2,"Col");


	lua_newtable(L); // enum Origin

	lua_pushnumber(L,wxHelpEvent::Origin_Unknown); lua_setfield(L,-2,"Origin_Unknown");
	lua_pushnumber(L,wxHelpEvent::Origin_Keyboard); lua_setfield(L,-2,"Origin_Keyboard");
	lua_pushnumber(L,wxHelpEvent::Origin_HelpButton); lua_setfield(L,-2,"Origin_HelpButton");

	lua_setfield(L,-2,"Origin");

	lua_pushnumber(L,wxHelpEvent::Origin_Unknown); lua_setfield(L,-2,"Origin_Unknown");
	lua_pushnumber(L,wxHelpEvent::Origin_Keyboard); lua_setfield(L,-2,"Origin_Keyboard");
	lua_pushnumber(L,wxHelpEvent::Origin_HelpButton); lua_setfield(L,-2,"Origin_HelpButton");


	lua_newtable(L); // enum wxNavigationKeyEventFlags

	lua_pushnumber(L,wxNavigationKeyEvent::IsBackward); lua_setfield(L,-2,"IsBackward");
	lua_pushnumber(L,wxNavigationKeyEvent::IsForward); lua_setfield(L,-2,"IsForward");
	lua_pushnumber(L,wxNavigationKeyEvent::WinChange); lua_setfield(L,-2,"WinChange");
	lua_pushnumber(L,wxNavigationKeyEvent::FromTab); lua_setfield(L,-2,"FromTab");

	lua_setfield(L,-2,"wxNavigationKeyEventFlags");

	lua_pushnumber(L,wxNavigationKeyEvent::IsBackward); lua_setfield(L,-2,"IsBackward");
	lua_pushnumber(L,wxNavigationKeyEvent::IsForward); lua_setfield(L,-2,"IsForward");
	lua_pushnumber(L,wxNavigationKeyEvent::WinChange); lua_setfield(L,-2,"WinChange");
	lua_pushnumber(L,wxNavigationKeyEvent::FromTab); lua_setfield(L,-2,"FromTab");


	lua_newtable(L); // enum Style

	lua_pushnumber(L,wxNumberFormatter::Style_None); lua_setfield(L,-2,"Style_None");
	lua_pushnumber(L,wxNumberFormatter::Style_WithThousandsSep); lua_setfield(L,-2,"Style_WithThousandsSep");
	lua_pushnumber(L,wxNumberFormatter::Style_NoTrailingZeroes); lua_setfield(L,-2,"Style_NoTrailingZeroes");

	lua_setfield(L,-2,"Style");

	lua_pushnumber(L,wxNumberFormatter::Style_None); lua_setfield(L,-2,"Style_None");
	lua_pushnumber(L,wxNumberFormatter::Style_WithThousandsSep); lua_setfield(L,-2,"Style_WithThousandsSep");
	lua_pushnumber(L,wxNumberFormatter::Style_NoTrailingZeroes); lua_setfield(L,-2,"Style_NoTrailingZeroes");


	lua_newtable(L); // enum EditableStateFlags

	lua_pushnumber(L,wxPropertyGridInterface::SelectionState); lua_setfield(L,-2,"SelectionState");
	lua_pushnumber(L,wxPropertyGridInterface::ExpandedState); lua_setfield(L,-2,"ExpandedState");
	lua_pushnumber(L,wxPropertyGridInterface::ScrollPosState); lua_setfield(L,-2,"ScrollPosState");
	lua_pushnumber(L,wxPropertyGridInterface::PageState); lua_setfield(L,-2,"PageState");
	lua_pushnumber(L,wxPropertyGridInterface::SplitterPosState); lua_setfield(L,-2,"SplitterPosState");
	lua_pushnumber(L,wxPropertyGridInterface::DescBoxState); lua_setfield(L,-2,"DescBoxState");
	lua_pushnumber(L,wxPropertyGridInterface::AllStates); lua_setfield(L,-2,"AllStates");

	lua_setfield(L,-2,"EditableStateFlags");

	lua_pushnumber(L,wxPropertyGridInterface::SelectionState); lua_setfield(L,-2,"SelectionState");
	lua_pushnumber(L,wxPropertyGridInterface::ExpandedState); lua_setfield(L,-2,"ExpandedState");
	lua_pushnumber(L,wxPropertyGridInterface::ScrollPosState); lua_setfield(L,-2,"ScrollPosState");
	lua_pushnumber(L,wxPropertyGridInterface::PageState); lua_setfield(L,-2,"PageState");
	lua_pushnumber(L,wxPropertyGridInterface::SplitterPosState); lua_setfield(L,-2,"SplitterPosState");
	lua_pushnumber(L,wxPropertyGridInterface::DescBoxState); lua_setfield(L,-2,"DescBoxState");
	lua_pushnumber(L,wxPropertyGridInterface::AllStates); lua_setfield(L,-2,"AllStates");


	lua_newtable(L); // enum AccessMode

	lua_pushnumber(L,wxRegKey::Read); lua_setfield(L,-2,"Read");
	lua_pushnumber(L,wxRegKey::Write); lua_setfield(L,-2,"Write");

	lua_setfield(L,-2,"AccessMode");

	lua_pushnumber(L,wxRegKey::Read); lua_setfield(L,-2,"Read");
	lua_pushnumber(L,wxRegKey::Write); lua_setfield(L,-2,"Write");


	lua_newtable(L); // enum StdKey

	lua_pushnumber(L,wxRegKey::HKCR); lua_setfield(L,-2,"HKCR");
	lua_pushnumber(L,wxRegKey::HKCU); lua_setfield(L,-2,"HKCU");
	lua_pushnumber(L,wxRegKey::HKLM); lua_setfield(L,-2,"HKLM");
	lua_pushnumber(L,wxRegKey::HKUSR); lua_setfield(L,-2,"HKUSR");
	lua_pushnumber(L,wxRegKey::HKPD); lua_setfield(L,-2,"HKPD");
	lua_pushnumber(L,wxRegKey::HKCC); lua_setfield(L,-2,"HKCC");
	lua_pushnumber(L,wxRegKey::HKDD); lua_setfield(L,-2,"HKDD");
	lua_pushnumber(L,wxRegKey::HKMAX); lua_setfield(L,-2,"HKMAX");

	lua_setfield(L,-2,"StdKey");

	lua_pushnumber(L,wxRegKey::HKCR); lua_setfield(L,-2,"HKCR");
	lua_pushnumber(L,wxRegKey::HKCU); lua_setfield(L,-2,"HKCU");
	lua_pushnumber(L,wxRegKey::HKLM); lua_setfield(L,-2,"HKLM");
	lua_pushnumber(L,wxRegKey::HKUSR); lua_setfield(L,-2,"HKUSR");
	lua_pushnumber(L,wxRegKey::HKPD); lua_setfield(L,-2,"HKPD");
	lua_pushnumber(L,wxRegKey::HKCC); lua_setfield(L,-2,"HKCC");
	lua_pushnumber(L,wxRegKey::HKDD); lua_setfield(L,-2,"HKDD");
	lua_pushnumber(L,wxRegKey::HKMAX); lua_setfield(L,-2,"HKMAX");


	lua_newtable(L); // enum ValueType

	lua_pushnumber(L,wxRegKey::Type_None); lua_setfield(L,-2,"Type_None");
	lua_pushnumber(L,wxRegKey::Type_String); lua_setfield(L,-2,"Type_String");
	lua_pushnumber(L,wxRegKey::Type_Expand_String); lua_setfield(L,-2,"Type_Expand_String");
	lua_pushnumber(L,wxRegKey::Type_Binary); lua_setfield(L,-2,"Type_Binary");
	lua_pushnumber(L,wxRegKey::Type_Dword); lua_setfield(L,-2,"Type_Dword");
	lua_pushnumber(L,wxRegKey::Type_Dword_little_endian); lua_setfield(L,-2,"Type_Dword_little_endian");
	lua_pushnumber(L,wxRegKey::Type_Dword_big_endian); lua_setfield(L,-2,"Type_Dword_big_endian");
	lua_pushnumber(L,wxRegKey::Type_Link); lua_setfield(L,-2,"Type_Link");
	lua_pushnumber(L,wxRegKey::Type_Multi_String); lua_setfield(L,-2,"Type_Multi_String");
	lua_pushnumber(L,wxRegKey::Type_Resource_list); lua_setfield(L,-2,"Type_Resource_list");
	lua_pushnumber(L,wxRegKey::Type_Full_resource_descriptor); lua_setfield(L,-2,"Type_Full_resource_descriptor");
	lua_pushnumber(L,wxRegKey::Type_Resource_requirements_list); lua_setfield(L,-2,"Type_Resource_requirements_list");

	lua_setfield(L,-2,"ValueType");

	lua_pushnumber(L,wxRegKey::Type_None); lua_setfield(L,-2,"Type_None");
	lua_pushnumber(L,wxRegKey::Type_String); lua_setfield(L,-2,"Type_String");
	lua_pushnumber(L,wxRegKey::Type_Expand_String); lua_setfield(L,-2,"Type_Expand_String");
	lua_pushnumber(L,wxRegKey::Type_Binary); lua_setfield(L,-2,"Type_Binary");
	lua_pushnumber(L,wxRegKey::Type_Dword); lua_setfield(L,-2,"Type_Dword");
	lua_pushnumber(L,wxRegKey::Type_Dword_little_endian); lua_setfield(L,-2,"Type_Dword_little_endian");
	lua_pushnumber(L,wxRegKey::Type_Dword_big_endian); lua_setfield(L,-2,"Type_Dword_big_endian");
	lua_pushnumber(L,wxRegKey::Type_Link); lua_setfield(L,-2,"Type_Link");
	lua_pushnumber(L,wxRegKey::Type_Multi_String); lua_setfield(L,-2,"Type_Multi_String");
	lua_pushnumber(L,wxRegKey::Type_Resource_list); lua_setfield(L,-2,"Type_Resource_list");
	lua_pushnumber(L,wxRegKey::Type_Full_resource_descriptor); lua_setfield(L,-2,"Type_Full_resource_descriptor");
	lua_pushnumber(L,wxRegKey::Type_Resource_requirements_list); lua_setfield(L,-2,"Type_Resource_requirements_list");


	lua_newtable(L); // enum WOW64ViewMode

	lua_pushnumber(L,wxRegKey::WOW64ViewMode_Default); lua_setfield(L,-2,"WOW64ViewMode_Default");
	lua_pushnumber(L,wxRegKey::WOW64ViewMode_32); lua_setfield(L,-2,"WOW64ViewMode_32");
	lua_pushnumber(L,wxRegKey::WOW64ViewMode_64); lua_setfield(L,-2,"WOW64ViewMode_64");

	lua_setfield(L,-2,"WOW64ViewMode");

	lua_pushnumber(L,wxRegKey::WOW64ViewMode_Default); lua_setfield(L,-2,"WOW64ViewMode_Default");
	lua_pushnumber(L,wxRegKey::WOW64ViewMode_32); lua_setfield(L,-2,"WOW64ViewMode_32");
	lua_pushnumber(L,wxRegKey::WOW64ViewMode_64); lua_setfield(L,-2,"WOW64ViewMode_64");


	lua_newtable(L); // enum ResourceCat

	lua_pushnumber(L,wxStandardPaths::ResourceCat_None); lua_setfield(L,-2,"ResourceCat_None");
	lua_pushnumber(L,wxStandardPaths::ResourceCat_Messages); lua_setfield(L,-2,"ResourceCat_Messages");

	lua_setfield(L,-2,"ResourceCat");

	lua_pushnumber(L,wxStandardPaths::ResourceCat_None); lua_setfield(L,-2,"ResourceCat_None");
	lua_pushnumber(L,wxStandardPaths::ResourceCat_Messages); lua_setfield(L,-2,"ResourceCat_Messages");


	lua_newtable(L); // enum unnamed_23

	lua_pushnumber(L,wxWithImages::NO_IMAGE); lua_setfield(L,-2,"NO_IMAGE");

	lua_setfield(L,-2,"unnamed_23");

	lua_pushnumber(L,wxWithImages::NO_IMAGE); lua_setfield(L,-2,"NO_IMAGE");


}

#ifdef __cplusplus
}
#endif

