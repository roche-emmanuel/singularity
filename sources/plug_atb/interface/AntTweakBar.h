

#define TW_VERSION  115 // Version Mmm : M=Major mm=minor (e.g., 102 is version 1.02)

class TwBar {
protected:
	~TwBar();
};

TwBar *      TwNewBar(const char *barName);
int          TwDeleteBar(TwBar *bar);
int          TwDeleteAllBars();
int          TwSetTopBar(const TwBar *bar);
TwBar *      TwGetTopBar();
int          TwSetBottomBar(const TwBar *bar);
TwBar *      TwGetBottomBar();
// const char * TwGetBarName(TwBar *bar);
int          TwGetBarCount();
TwBar *      TwGetBarByIndex(int barIndex);
TwBar *      TwGetBarByName(const char *barName);
int          TwRefreshBar(TwBar *bar);

// ----------------------------------------------------------------------------
//  Var functions and definitions
// ----------------------------------------------------------------------------

enum TwType
{
    TW_TYPE_UNDEF   = 0,
    TW_TYPE_BOOLCPP = 1,
    TW_TYPE_BOOL8   = 2,
    TW_TYPE_BOOL16,
    TW_TYPE_BOOL32,
    TW_TYPE_CHAR,
    TW_TYPE_INT8,
    TW_TYPE_UINT8,
    TW_TYPE_INT16,
    TW_TYPE_UINT16,
    TW_TYPE_INT32,
    TW_TYPE_UINT32,
    TW_TYPE_FLOAT,
    TW_TYPE_DOUBLE,
    TW_TYPE_COLOR32,    // 32 bits color. Order is RGBA if API is OpenGL or Direct3D10, and inversed if API is Direct3D9 (can be modified by defining 'colorOrder=...', see doc)
    TW_TYPE_COLOR3F,    // 3 floats color. Order is RGB.
    TW_TYPE_COLOR4F,    // 4 floats color. Order is RGBA.
    TW_TYPE_CDSTRING,   // Null-terminated C Dynamic String (pointer to an array of char dynamically allocated with malloc/realloc/strdup)
    TW_TYPE_STDSTRING,  // VS2010 or higher C++ STL string (std::string)
    TW_TYPE_QUAT4F, // 4 floats encoding a quaternion {qx,qy,qz,qs}
    TW_TYPE_QUAT4D,     // 4 doubles encoding a quaternion {qx,qy,qz,qs}
    TW_TYPE_DIR3F,      // direction vector represented by 3 floats
    TW_TYPE_DIR3D       // direction vector represented by 3 doubles
};

/*typedef void (* TwSetVarCallback)(const void *value, void *clientData);
typedef void (* TwGetVarCallback)(void *value, void *clientData);
typedef void (* TwButtonCallback)(void *clientData);
*/

// int      TwAddVarRW(TwBar *bar, const char *name, TwType type, void *var, const char *def);
// int      TwAddVarRO(TwBar *bar, const char *name, TwType type, const void *var, const char *def);
// int      TwAddVarCB(TwBar *bar, const char *name, TwType type, TwSetVarCallback setCallback, TwGetVarCallback getCallback, void *clientData, const char *def);
// int      TwAddButton(TwBar *bar, const char *name, TwButtonCallback callback, void *clientData, const char *def);

int      TwAddSeparator(TwBar *bar, const char *name, const char *def);
int      TwRemoveVar(TwBar *bar, const char *name);
int      TwRemoveAllVars(TwBar *bar);

struct TwEnumVal
{
    int           Value;
    const char *  Label;
};

struct TwStructMember
{
    const char *  Name;
    TwType        Type;
    size_t        Offset;
    const char *  DefString;
};

// typedef void (* TwSummaryCallback)(char *summaryString, size_t summaryMaxLength, const void *value, void *clientData);

int      TwDefine(const char *def);
// TwType   TwDefineEnum(const char *name, const TwEnumVal *enumValues, unsigned int nbValues);

TwType   TwDefineEnumFromString(const char *name, const char *enumString);

// TwType   TwDefineStruct(const char *name, const TwStructMember *structMembers, unsigned int nbMembers, size_t structSize, TwSummaryCallback summaryCallback, void *summaryClientData);

// typedef void (* TwCopyCDStringToClient)(char **destinationClientStringPtr, const char *sourceString);
// void     TwCopyCDStringToClientFunc(TwCopyCDStringToClient copyCDStringFunc);
// void     TwCopyCDStringToLibrary(char **destinationLibraryStringPtr, const char *sourceClientString);

// typedef void (* TwCopyStdStringToClient)(std::string& destinationClientString, const std::string& sourceString);
// void     TwCopyStdStringToClientFunc(TwCopyStdStringToClient copyStdStringToClientFunc);
// void     TwCopyStdStringToLibrary(std::string& destinationLibraryString, const std::string& sourceClientString);

enum TwParamValueType
{
    TW_PARAM_INT32,
    TW_PARAM_FLOAT,
    TW_PARAM_DOUBLE,
    TW_PARAM_CSTRING // Null-terminated array of char (ie, c-string)
} ;

// int      TwGetParam(TwBar *bar, const char *varName, const char *paramName, TwParamValueType paramValueType, unsigned int outValueMaxCount, void *outValues);
// int      TwSetParam(TwBar *bar, const char *varName, const char *paramName, TwParamValueType paramValueType, unsigned int inValueCount, const void *inValues);


// ----------------------------------------------------------------------------
//  Management functions and definitions
// ----------------------------------------------------------------------------

enum TwGraphAPI
{
    TW_OPENGL           = 1,
    TW_DIRECT3D9        = 2,
    TW_DIRECT3D10       = 3,
    TW_DIRECT3D11       = 4,
    TW_OPENGL_CORE      = 5
};

int      TwInit(TwGraphAPI graphAPI, void *device);
int      TwTerminate();

int      TwDraw();
int      TwWindowSize(int width, int height);

int      TwSetCurrentWindow(int windowID); // multi-windows support
int      TwGetCurrentWindow();
int      TwWindowExists(int windowID);

enum TwKeyModifier
{
    TW_KMOD_NONE        = 0x0000,   // same codes as SDL keysym.mod
    TW_KMOD_SHIFT       = 0x0003,
    TW_KMOD_CTRL        = 0x00c0,
    TW_KMOD_ALT         = 0x0100,
    TW_KMOD_META        = 0x0c00
};

enum TwKeySpecial
{
    TW_KEY_BACKSPACE    = '\b',
    TW_KEY_TAB          = '\t',
    TW_KEY_CLEAR        = 0x0c,
    TW_KEY_RETURN       = '\r',
    TW_KEY_PAUSE        = 0x13,
    TW_KEY_ESCAPE       = 0x1b,
    TW_KEY_SPACE        = ' ',
    TW_KEY_DELETE       = 0x7f,
    TW_KEY_UP           = 273,      // same codes and order as SDL 1.2 keysym.sym
    TW_KEY_DOWN,
    TW_KEY_RIGHT,
    TW_KEY_LEFT,
    TW_KEY_INSERT,
    TW_KEY_HOME,
    TW_KEY_END,
    TW_KEY_PAGE_UP,
    TW_KEY_PAGE_DOWN,
    TW_KEY_F1,
    TW_KEY_F2,
    TW_KEY_F3,
    TW_KEY_F4,
    TW_KEY_F5,
    TW_KEY_F6,
    TW_KEY_F7,
    TW_KEY_F8,
    TW_KEY_F9,
    TW_KEY_F10,
    TW_KEY_F11,
    TW_KEY_F12,
    TW_KEY_F13,
    TW_KEY_F14,
    TW_KEY_F15,
    TW_KEY_LAST
};

int      TwKeyPressed(int key, int modifiers);
int      TwKeyTest(int key, int modifiers);

enum TwMouseAction
{
    TW_MOUSE_RELEASED,
    TW_MOUSE_PRESSED  
} ;

enum TwMouseButtonID
{
    TW_MOUSE_LEFT       = 1,    // same code as SDL_BUTTON_LEFT
    TW_MOUSE_MIDDLE     = 2,    // same code as SDL_BUTTON_MIDDLE
    TW_MOUSE_RIGHT      = 3     // same code as SDL_BUTTON_RIGHT
};

int      TwMouseButton(TwMouseAction action, TwMouseButtonID button);
int      TwMouseMotion(int mouseX, int mouseY);
int      TwMouseWheel(int pos);

const char * TwGetLastError();

// typedef void (* TwErrorHandler)(const char *errorMessage);
// void     TwHandleErrors(TwErrorHandler errorHandler);


