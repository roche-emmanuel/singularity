enum wxHelpSearchMode
{
    wxHELP_SEARCH_INDEX,
    wxHELP_SEARCH_ALL
};

// wxDatePickerCtrl styles
enum
{
    // default style on this platform, either wxDP_SPIN or wxDP_DROPDOWN
    wxDP_DEFAULT = 0,

    // a spin control-like date picker (not supported in generic version)
    wxDP_SPIN = 1,

    // a combobox-like date picker (not supported in mac version)
    wxDP_DROPDOWN = 2,

    // always show century in the default date display (otherwise it depends on
    // the system date format which may include the century or not)
    wxDP_SHOWCENTURY = 4,

    // allow not having any valid date in the control (by default it always has
    // some date, today initially if no valid date specified in ctor)
    wxDP_ALLOWNONE = 8
};
