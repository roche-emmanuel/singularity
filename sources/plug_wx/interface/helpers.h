
// missing classes:
class wxAuiToolBarItemArray {
};

class wxAuiNotebookPageArray {
};

class wxAuiPaneInfoArray {
};

class wxDataViewItemArray {
};

class wxAuiNotebookPage {
};

class wxSizerItem {
};

class wxAffineMatrix2DBase {
};

class wxRibbonPageTabInfoArray {
};

class wxRibbonGalleryItem {
};

class wxRibbonPageTabInfo {
};

class wxToolBarToolBase {
};

class wxArrayTreeItemIds {};
class wxTreeItemIdValue {};
class wxRichTextFloatCollector {};
class wxRichTextVariantArray {};
class wxRichTextRangeArray {};

class wxList {};
class wxArrayInt {};
class wxArrayLong {};
class wxArrayShort {};
class wxArrayDouble {};
class wxArrayPtrVoid {};

class wxGridCellCoords
{
public:
    wxGridCellCoords() { m_row = m_col = -1; }
    wxGridCellCoords( int r, int c ) { m_row = r; m_col = c; }

    // default copy ctor is ok

    int GetRow() const { return m_row; }
    void SetRow( int n ) { m_row = n; }
    int GetCol() const { return m_col; }
    void SetCol( int n ) { m_col = n; }
    void Set( int row, int col ) { m_row = row; m_col = col; }

    wxGridCellCoords& operator=( const wxGridCellCoords& other );
    bool operator==( const wxGridCellCoords& other ) const;
    bool operator!=( const wxGridCellCoords& other ) const;
    bool operator!() const;
};

class wxDataObjectBase
{
public:
    enum Direction
    {
        Get  = 0x01,    // format is supported by GetDataHere()
        Set  = 0x02,    // format is supported by SetData()
        Both = 0x03     // format is supported by both (unused currently)
    };
};

class wxObjectRefData {
protected:
    ~wxObjectRefData();
};

enum wxHelpSearchMode
{
    wxHELP_SEARCH_INDEX,
    wxHELP_SEARCH_ALL
};
    
typedef double wxDouble;
typedef int wxCoord;
typedef int wxEventType;
typedef wxWindow wxWindowBase;
typedef unsigned char wxByte;
typedef int wxSocketFlags;
typedef long off_t;
//typedef wchar_t wxChar;
typedef wxInt8 wxDash;
typedef wxColour wxColor;

typedef wxHelpController wxHelpControllerBase;

class wxRibbonButtonBarButtonBase {};

class wxPGCell : public wxObject
{
public:
    wxPGCell();
    wxPGCell(const wxPGCell& other)
        : wxObject(other)
    {
    }

    wxPGCell( const wxString& text,
              const wxBitmap& bitmap = wxNullBitmap,
              const wxColour& fgCol = wxNullColour,
              const wxColour& bgCol = wxNullColour );

    virtual ~wxPGCell() { }

    wxPGCellData* GetData()
    {
        return (wxPGCellData*) m_refData;
    }

    const wxPGCellData* GetData() const
    {
        return (const wxPGCellData*) m_refData;
    }

    bool HasText() const;
    
    /**
        Sets empty but valid data to this cell object.
    */
    void SetEmptyData();

    /**
        Merges valid data from srcCell into this.
    */
    void MergeFrom( const wxPGCell& srcCell );

    void SetText( const wxString& text );
    void SetBitmap( const wxBitmap& bitmap );
    void SetFgCol( const wxColour& col );

    /**
        Sets font of the cell.

        @remarks Because wxPropertyGrid does not support rows of
                 different height, it makes little sense to change
                 size of the font. Therefore it is recommended
                 to use return value of wxPropertyGrid::GetFont()
                 or wxPropertyGrid::GetCaptionFont() as a basis
                 for the font that, after modifications, is passed
                 to this member function.
    */
    void SetFont( const wxFont& font );
    void SetBgCol( const wxColour& col );

    const wxString& GetText() const { return GetData()->m_text; }
    const wxBitmap& GetBitmap() const { return GetData()->m_bitmap; }
    const wxColour& GetFgCol() const { return GetData()->m_fgCol; }

    /**
        Returns font of the cell. If no specific font is set for this
        cell, then the font will be invalid.
    */
    const wxFont& GetFont() const { return GetData()->m_font; }
    const wxColour& GetBgCol() const { return GetData()->m_bgCol; }

    // Used mostly internally to figure out if this cell is supposed
    // to have default values when attached to a grid.
    bool IsInvalid() const;
};

class wxPGChoicesData : public wxObjectRefData
{
public:
    // Constructor sets m_refCount to 1.
    wxPGChoicesData();

    void CopyDataFrom( wxPGChoicesData* data );

    wxPGChoiceEntry& Insert( int index, const wxPGChoiceEntry& item );

    // Delete all entries
    void Clear();

    unsigned int GetCount() const
    {
        return (unsigned int) m_items.size();
    }

    const wxPGChoiceEntry& Item( unsigned int i ) const
    {
        wxASSERT_MSG( i < GetCount(), "invalid index" );
        return m_items[i];
    }

    wxPGChoiceEntry& Item( unsigned int i )
    {
        wxASSERT_MSG( i < GetCount(), "invalid index" );
        return m_items[i];
    }

private:
    virtual ~wxPGChoicesData();
};

class wxPGChoiceEntry : public wxPGCell
{
public:
    wxPGChoiceEntry();
    wxPGChoiceEntry(const wxPGChoiceEntry& other):
    wxPGChoiceEntry( const wxString& label,int value = wxPG_INVALID_VALUE );
    virtual ~wxPGChoiceEntry() { };

    void SetValue( int value ) { m_value = value; }
    int GetValue() const { return m_value; }
};


class sgtApp : public wxApp {};
sgtApp& wxGetApp();

// Dummy defines:
#define wxDEFAULT_FRAME_STYLE 0


#define wxEVT_COMMAND_BUTTON_CLICKED 0
#define wxEVT_COMMAND_CHECKBOX_CLICKED 0
#define wxEVT_COMMAND_CHOICE_SELECTED 0
#define wxEVT_COMMAND_LISTBOX_SELECTED 0
#define wxEVT_COMMAND_LISTBOX_DOUBLECLICKED 0
#define wxEVT_COMMAND_CHECKLISTBOX_TOGGLED 0
#define wxEVT_COMMAND_MENU_SELECTED 0
#define wxEVT_COMMAND_SLIDER_UPDATED 0
#define wxEVT_COMMAND_RADIOBOX_SELECTED 0
#define wxEVT_COMMAND_RADIOBUTTON_SELECTED 0
#define wxEVT_COMMAND_SCROLLBAR_UPDATED 0
#define wxEVT_COMMAND_VLBOX_SELECTED 0
#define wxEVT_COMMAND_COMBOBOX_SELECTED 0
#define wxEVT_COMMAND_TOOL_RCLICKED 0
#define wxEVT_COMMAND_TOOL_DROPDOWN_CLICKED 0
#define wxEVT_COMMAND_TOOL_ENTER 0
#define wxEVT_COMMAND_COMBOBOX_DROPDOWN 0
#define wxEVT_COMMAND_COMBOBOX_CLOSEUP 0
#define wxEVT_THREAD 0
#define wxEVT_LEFT_DOWN 0
#define wxEVT_LEFT_UP 0
#define wxEVT_MIDDLE_DOWN 0
#define wxEVT_MIDDLE_UP 0
#define wxEVT_RIGHT_DOWN 0
#define wxEVT_RIGHT_UP 0
#define wxEVT_MOTION 0
#define wxEVT_ENTER_WINDOW 0
#define wxEVT_LEAVE_WINDOW 0
#define wxEVT_LEFT_DCLICK 0
#define wxEVT_MIDDLE_DCLICK 0
#define wxEVT_RIGHT_DCLICK 0
#define wxEVT_SET_FOCUS 0
#define wxEVT_KILL_FOCUS 0
#define wxEVT_CHILD_FOCUS 0
#define wxEVT_MOUSEWHEEL 0
#define wxEVT_AUX1_DOWN 0
#define wxEVT_AUX1_UP 0
#define wxEVT_AUX1_DCLICK 0
#define wxEVT_AUX2_DOWN 0
#define wxEVT_AUX2_UP 0
#define wxEVT_AUX2_DCLICK 0
#define wxEVT_CHAR 0
#define wxEVT_CHAR_HOOK 0
#define wxEVT_NAVIGATION_KEY 0
#define wxEVT_KEY_DOWN 0
#define wxEVT_KEY_UP 0
#define wxEVT_HOTKEY 0
#define wxEVT_SET_CURSOR 0
#define wxEVT_SCROLL_TOP 0
#define wxEVT_SCROLL_BOTTOM 0
#define wxEVT_SCROLL_LINEUP 0
#define wxEVT_SCROLL_LINEDOWN 0
#define wxEVT_SCROLL_PAGEUP 0
#define wxEVT_SCROLL_PAGEDOWN 0
#define wxEVT_SCROLL_THUMBTRACK 0
#define wxEVT_SCROLL_THUMBRELEASE 0
#define wxEVT_SCROLL_CHANGED 0
#define wxEVT_SPIN_UP 0
#define wxEVT_SPIN_DOWN 0
#define wxEVT_SPIN 0
#define wxEVT_SCROLLWIN_TOP 0
#define wxEVT_SCROLLWIN_BOTTOM 0
#define wxEVT_SCROLLWIN_LINEUP 0
#define wxEVT_SCROLLWIN_LINEDOWN 0
#define wxEVT_SCROLLWIN_PAGEUP 0
#define wxEVT_SCROLLWIN_PAGEDOWN 0
#define wxEVT_SCROLLWIN_THUMBTRACK 0
#define wxEVT_SCROLLWIN_THUMBRELEASE 0
#define wxEVT_SIZE 0
#define wxEVT_MOVE 0
#define wxEVT_CLOSE_WINDOW 0
#define wxEVT_END_SESSION 0
#define wxEVT_QUERY_END_SESSION 0
#define wxEVT_ACTIVATE_APP 0
#define wxEVT_ACTIVATE 0
#define wxEVT_CREATE 0
#define wxEVT_DESTROY 0
#define wxEVT_SHOW 0
#define wxEVT_ICONIZE 0
#define wxEVT_MAXIMIZE 0
#define wxEVT_MOUSE_CAPTURE_CHANGED 0
#define wxEVT_MOUSE_CAPTURE_LOST 0
#define wxEVT_PAINT 0
#define wxEVT_ERASE_BACKGROUND 0
#define wxEVT_NC_PAINT 0
#define wxEVT_MENU_OPEN 0
#define wxEVT_MENU_CLOSE 0
#define wxEVT_MENU_HIGHLIGHT 0
#define wxEVT_CONTEXT_MENU 0
#define wxEVT_SYS_COLOUR_CHANGED 0
#define wxEVT_DISPLAY_CHANGED 0
#define wxEVT_QUERY_NEW_PALETTE 0
#define wxEVT_PALETTE_CHANGED 0
#define wxEVT_JOY_BUTTON_DOWN 0
#define wxEVT_JOY_BUTTON_UP 0
#define wxEVT_JOY_MOVE 0
#define wxEVT_JOY_ZMOVE 0
#define wxEVT_DROP_FILES 0
#define wxEVT_INIT_DIALOG 0
#define wxEVT_IDLE 0
#define wxEVT_UPDATE_UI 0
#define wxEVT_SIZING 0
#define wxEVT_MOVING 0
#define wxEVT_MOVE_START 0
#define wxEVT_MOVE_END 0
#define wxEVT_HIBERNATE 0
#define wxEVT_COMMAND_TEXT_COPY 0
#define wxEVT_COMMAND_TEXT_CUT 0
#define wxEVT_COMMAND_TEXT_PASTE 0
#define wxEVT_COMMAND_LEFT_CLICK 0
#define wxEVT_COMMAND_LEFT_DCLICK 0
#define wxEVT_COMMAND_RIGHT_CLICK 0
#define wxEVT_COMMAND_RIGHT_DCLICK 0
#define wxEVT_COMMAND_SET_FOCUS 0
#define wxEVT_COMMAND_KILL_FOCUS 0
#define wxEVT_COMMAND_ENTER 0
#define wxEVT_HELP 0
#define wxEVT_DETAILED_HELP 0
#define wxEVT_COMMAND_TEXT_UPDATED 0
#define wxEVT_COMMAND_TOOL_CLICKED 0
#define wxEVT_WINDOW_MODAL_DIALOG_CLOSED 0
