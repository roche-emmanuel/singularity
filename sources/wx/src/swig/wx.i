%module wx
%{
#include <plug_common.h>
%}

%naturalvar wxString;
%naturalvar wxString const &;

%typemap(in,checkfn="lua_isstring") wxString
%{$1.assign(lua_tostring(L,$input),lua_strlen(L,$input));%}

%typemap(in,checkfn="lua_isstring") wxString const &
%{$1.assign(lua_tostring(L,$input),lua_strlen(L,$input));%}

%typemap(out) wxString
%{ lua_pushlstring(L,$1.ToStdString().data(),$1.ToStdString().size()); SWIG_arg++;%}


class  wxObject {
public:
	wxObject();
	wxObject(const wxObject& other);
	~wxObject();

	bool IsKindOf(const wxClassInfo* info) const;
	wxObjectRefData* GetRefData() const;
	void SetRefData(wxObjectRefData* data);
	void Ref(const wxObject& clone);
	void UnRef();
	void UnShare();
	bool IsSameAs(const wxObject& o) const;
};

class  wxEvtHandler : public wxObject {
public:
	wxEvtHandler();
	~wxEvtHandler();

	wxEvtHandler* GetNextHandler() const;
	wxEvtHandler* GetPreviousHandler() const;
	void SetNextHandler(wxEvtHandler* handler);
	void SetPreviousHandler(wxEvtHandler* handler);
	void SetEvtHandlerEnabled(bool enabled);
	bool GetEvtHandlerEnabled() const;
	void Unlink();
	bool IsUnlinked() const;
	void DeletePendingEvents();
	void SetClientData(void* data);
	void* GetClientData() const;
};

class  wxAppConsole : public wxEvtHandler {

public:
	bool CallOnInit();
	bool OnInit();
	int OnRun();
	int OnExit();
	void CleanUp();
	void OnFatalException();
	void Exit();
	wxString GetAppName() const;
	void SetAppName(const wxString& name);
	wxString GetAppDisplayName() const;
	void SetAppDisplayName(const wxString& name);
	wxString GetClassName() const;
	void SetClassName(const wxString& name);
	const wxString& GetVendorName() const;
	void SetVendorName(const wxString& name);
	const wxString& GetVendorDisplayName() const;
	void SetVendorDisplayName(const wxString& name);
	int FilterEvent(wxEvent& event);
	void OnUnhandledException();
	bool OnExceptionInMainLoop();
	void ProcessPendingEvents();
	bool HasPendingEvents() const;
	void SuspendProcessingOfPendingEvents();
	void ResumeProcessingOfPendingEvents();
	void RemovePendingEventHandler(wxEvtHandler* toRemove);
	void AppendPendingEventHandler(wxEvtHandler* toAppend);
	void DelayPendingEventHandler(wxEvtHandler* toDelay);
	void DeletePendingEvents();
	void ScheduleForDestruction(wxObject* object);
	bool IsScheduledForDestruction(wxObject* object) const;
	bool Pending();
	bool Dispatch();
	int MainLoop();
	void ExitMainLoop();
	bool Yield(bool onlyIfNeeded =  false);
	void WakeUpIdle();
	bool ProcessIdle();
	bool UsesEventLoop() const;
	void OnAssertFailure(const wxChar* file, int line, const wxChar* func, const wxChar* cond, const wxChar* msg);
	void OnAssert(const wxChar* file, int line, const wxChar* cond, const wxChar* msg);
	static bool IsMainLoopRunning();
	static bool CheckBuildOptions(const char* optionsSignature, const char* componentName);
	static wxAppConsole* GetInstance();
	static void SetInstance(wxAppConsole* app);
};

class  wxApp : public wxAppConsole {

public:
	bool OnInitGui();
	int OnRun();
	int OnExit();
	void CleanUp();
	bool SafeYield(wxWindow* win, bool onlyIfNeeded);
	bool SafeYieldFor(wxWindow* win, long eventsToProcess);
	bool ProcessIdle();
	bool UsesEventLoop() const;
	bool IsActive() const;
	void SetTopWindow(wxWindow* win);
	wxWindow* GetTopWindow() const;
	void SetExitOnFrameDelete(bool flag);
	bool GetExitOnFrameDelete() const;
	void SetUseBestVisual(bool flag, bool forceTrueColour =  false);
	bool GetUseBestVisual() const;
	wxLayoutDirection GetLayoutDirection() const;
	bool SetNativeTheme(const wxString& theme);
	void SetActive(bool isActive, wxWindow* lastFocus);
};

class  wxClassInfo {

public:
};

class  wxEvent {

public:
};

class  wxRefCounter {
public:
	wxRefCounter();
protected:
	~wxRefCounter();

public:
	int GetRefCount() const;
	void IncRef();
	void DecRef();
};

class  wxString {

public:
};

class  wxWindow {

public:
};


int wxMessageBox(const wxString& message, const wxString& caption =  wxMessageBoxCaptionStr, long style =  wxOK|wxCENTRE, wxWindow* parent =  NULL, int x =  wxDefaultCoord, int y =  wxDefaultCoord);
void wxExit();
bool wxYield();
void wxWakeUpIdle();
wxEventType wxNewEventType();
wxObject* wxCheckDynamicCast(wxObject* obj, wxClassInfo* classInfo);
