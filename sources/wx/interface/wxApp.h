#ifndef _WX_APP_H_BASE_
#define _WX_APP_H_BASE_

enum
{
    wxPRINT_WINDOWS = 1,
    wxPRINT_POSTSCRIPT = 2
};

class wxAppConsole : public wxEvtHandler, public wxEventFilter
{
public:
    // ctor and dtor
    //wxAppConsole();
    //virtual ~wxAppConsole();

    // the virtual functions which may/must be overridden in the derived class
    // -----------------------------------------------------------------------

    // This is the very first function called for a newly created wxApp object,
    // it is used by the library to do the global initialization. If, for some
    // reason, you must override it (instead of just overriding OnInit(), as
    // usual, for app-specific initializations), do not forget to call the base
    // class version!
    //virtual bool Initialize(int& argc, wxChar **argv);

    // This gives wxCocoa a chance to call OnInit() with a memory pool in place
    virtual bool CallOnInit() { return OnInit(); }

    // Called before OnRun(), this is a good place to do initialization -- if
    // anything fails, return false from here to prevent the program from
    // continuing. The command line is normally parsed here, call the base
    // class OnInit() to do it.
    virtual bool OnInit();

    // This is the replacement for the normal main(): all program work should
    // be done here. When OnRun() returns, the programs starts shutting down.
    virtual int OnRun();

    // This is called by wxEventLoopBase::SetActive(): you should put the code
    // which needs an active event loop here.
    // Note that this function is called whenever an event loop is activated;
    // you may want to use wxEventLoopBase::IsMain() to perform initialization
    // specific for the app's main event loop.
    //virtual void OnEventLoopEnter(wxEventLoopBase* loop) {}

    // This is only called if OnInit() returned true so it's a good place to do
    // any cleanup matching the initializations done there.
    virtual int OnExit();

    // This is called by wxEventLoopBase::OnExit() for each event loop which
    // is exited.
    //virtual void OnEventLoopExit(wxEventLoopBase* loop) {}

    // This is the very last function called on wxApp object before it is
    // destroyed. If you override it (instead of overriding OnExit() as usual)
    // do not forget to call the base class version!
    virtual void CleanUp();

    // Called when a fatal exception occurs, this function should take care not
    // to do anything which might provoke a nested exception! It may be
    // overridden if you wish to react somehow in non-default way (core dump
    // under Unix, application crash under Windows) to fatal program errors,
    // however extreme care should be taken if you don't want this function to
    // crash.
    virtual void OnFatalException() { }

    // Called from wxExit() function, should terminate the application a.s.a.p.
    virtual void Exit();


    // application info: name, description, vendor
    // -------------------------------------------

    // NB: all these should be set by the application itself, there are no
    //     reasonable default except for the application name which is taken to
    //     be argv[0]

        // set/get the application name
    wxString GetAppName() const;
    void SetAppName(const wxString& name) { m_appName = name; }

        // set/get the application display name: the display name is the name
        // shown to the user in titles, reports, etc while the app name is
        // used for paths, config, and other places the user doesn't see
        //
        // by default the display name is the same as app name or a capitalized
        // version of the program if app name was not set neither but it's
        // usually better to set it explicitly to something nicer
    wxString GetAppDisplayName() const;

    void SetAppDisplayName(const wxString& name) { m_appDisplayName = name; }

        // set/get the app class name
    wxString GetClassName() const { return m_className; }
    void SetClassName(const wxString& name) { m_className = name; }

        // set/get the vendor name
    const wxString& GetVendorName() const { return m_vendorName; }
    void SetVendorName(const wxString& name) { m_vendorName = name; }

        // set/get the vendor display name:  the display name is shown
        // in titles/reports/dialogs to the user, while the vendor name
        // is used in some areas such as wxConfig, wxStandardPaths, etc
    const wxString& GetVendorDisplayName() const
    {
        return m_vendorDisplayName.empty() ? GetVendorName()
                                           : m_vendorDisplayName;
    }
    void SetVendorDisplayName(const wxString& name)
    {
        m_vendorDisplayName = name;
    }


    // cmd line parsing stuff
    // ----------------------

    // all of these methods may be overridden in the derived class to
    // customize the command line parsing (by default only a few standard
    // options are handled)
    //
    // you also need to call wxApp::OnInit() from YourApp::OnInit() for all
    // this to work

    // miscellaneous customization functions
    // -------------------------------------

    // create the app traits object to which we delegate for everything which
    // either should be configurable by the user (then he can change the
    // default behaviour simply by overriding CreateTraits() and returning his
    // own traits object) or which is GUI/console dependent as then wxAppTraits
    // allows us to abstract the differences behind the common facade
    //wxAppTraits *GetTraits();

    // this function provides safer access to traits object than
    // wxTheApp->GetTraits() during startup or termination when the global
    // application object itself may be unavailable
    //
    // of course, it still returns NULL in this case and the caller must check
    // for it
    //static wxAppTraits *GetTraitsIfExists();

    // returns the main event loop instance, i.e. the event loop which is started
    // by OnRun() and which dispatches all events sent from the native toolkit
    // to the application (except when new event loops are temporarily set-up).
    // The returned value maybe NULL. Put initialization code which needs a
    // non-NULL main event loop into OnEventLoopEnter().
    //wxEventLoopBase* GetMainLoop() const
    //    { return m_mainLoop; }


    // event processing functions
    // --------------------------

    // Implement the inherited wxEventFilter method but just return -1 from it
    // to indicate that default processing should take place.
    virtual int FilterEvent(wxEvent& event);

    // return true if we're running event loop, i.e. if the events can
    // (already) be dispatched
    static bool IsMainLoopRunning();

    // execute the functor to handle the given event
    //
    // this is a generalization of HandleEvent() below and the base class
    // implementation of CallEventHandler() still calls HandleEvent() for
    // compatibility for functors which are just wxEventFunctions (i.e. methods
    // of wxEvtHandler)
//    virtual void CallEventHandler(wxEvtHandler *handler,
//                                  wxEventFunctor& functor,
//                                  wxEvent& event) const;

    // call the specified handler on the given object with the given event
    //
    // this method only exists to allow catching the exceptions thrown by any
    // event handler, it would lead to an extra (useless) virtual function call
    // if the exceptions were not used, so it doesn't even exist in that case
//    virtual void HandleEvent(wxEvtHandler *handler,
//                             wxEventFunction func,
//                             wxEvent& event) const;

    // Called when an unhandled C++ exception occurs inside OnRun(): note that
    // the main event loop has already terminated by now and the program will
    // exit, if you need to really handle the exceptions you need to override
    // OnExceptionInMainLoop()
    virtual void OnUnhandledException();

    // Function called if an uncaught exception is caught inside the main
    // event loop: it may return true to continue running the event loop or
    // false to stop it (in the latter case it may rethrow the exception as
    // well)
    virtual bool OnExceptionInMainLoop();


    // pending events
    // --------------

    // IMPORTANT: all these methods conceptually belong to wxEventLoopBase
    //            but for many reasons we need to allow queuing of events
    //            even when there's no event loop (e.g. in wxApp::OnInit);
    //            this feature is used e.g. to queue events on secondary threads
    //            or in wxPython to use wx.CallAfter before the GUI is initialized

    // process all events in the m_handlersWithPendingEvents list -- it is necessary
    // to call this function to process posted events. This happens during each
    // event loop iteration in GUI mode but if there is no main loop, it may be
    // also called directly.
    virtual void ProcessPendingEvents();

    // check if there are pending events on global pending event list
    bool HasPendingEvents() const;

    // temporary suspends processing of the pending events
    void SuspendProcessingOfPendingEvents();

    // resume processing of the pending events previously stopped because of a
    // call to SuspendProcessingOfPendingEvents()
    void ResumeProcessingOfPendingEvents();

    // called by ~wxEvtHandler to (eventually) remove the handler from the list of
    // the handlers with pending events
    void RemovePendingEventHandler(wxEvtHandler* toRemove);

    // adds an event handler to the list of the handlers with pending events
    void AppendPendingEventHandler(wxEvtHandler* toAppend);

    // moves the event handler from the list of the handlers with pending events
    //to the list of the handlers with _delayed_ pending events
    void DelayPendingEventHandler(wxEvtHandler* toDelay);

    // deletes the current pending events
    void DeletePendingEvents();


    // delayed destruction
    // -------------------

    // If an object may have pending events for it, it shouldn't be deleted
    // immediately as this would result in a crash when trying to handle these
    // events: instead, it should be scheduled for destruction and really
    // destroyed only after processing all pending events.
    //
    // Notice that this is only possible if we have a running event loop,
    // otherwise the object is just deleted directly by ScheduleForDestruction()
    // and IsScheduledForDestruction() always returns false.

    // schedule the object for destruction in the near future
    void ScheduleForDestruction(wxObject *object);

    // return true if the object is scheduled for destruction
    bool IsScheduledForDestruction(wxObject *object) const;


    // wxEventLoop-related methods
    // ---------------------------

    // all these functions are forwarded to the corresponding methods of the
    // currently active event loop -- and do nothing if there is none
    virtual bool Pending();
    virtual bool Dispatch();

    virtual int MainLoop();
    virtual void ExitMainLoop();

    bool Yield(bool onlyIfNeeded = false);

    virtual void WakeUpIdle();

    // this method is called by the active event loop when there are no events
    // to process
    //
    // by default it generates the idle events and if you override it in your
    // derived class you should call the base class version to ensure that idle
    // events are still sent out
    virtual bool ProcessIdle();

    // this virtual function is overridden in GUI wxApp to always return true
    // as GUI applications always have an event loop -- but console ones may
    // have it or not, so it simply returns true if already have an event loop
    // running but false otherwise
    virtual bool UsesEventLoop() const;


    // debugging support
    // -----------------

    // this function is called when an assert failure occurs, the base class
    // version does the normal processing (i.e. shows the usual assert failure
    // dialog box)
    //
    // the arguments are the location of the failed assert (func may be empty
    // if the compiler doesn't support C99 __FUNCTION__), the text of the
    // assert itself and the user-specified message
    virtual void OnAssertFailure(const wxChar *file,
                                 int line,
                                 const wxChar *func,
                                 const wxChar *cond,
                                 const wxChar *msg);

    // old version of the function without func parameter, for compatibility
    // only, override OnAssertFailure() in the new code
    virtual void OnAssert(const wxChar *file,
                          int line,
                          const wxChar *cond,
                          const wxChar *msg);

    // check that the wxBuildOptions object (constructed in the application
    // itself, usually the one from wxIMPLEMENT_APP() macro) matches the build
    // options of the library and abort if it doesn't
    static bool CheckBuildOptions(const char *optionsSignature,
                                  const char *componentName);

    // implementation only from now on
    // -------------------------------

    // helpers for dynamic wxApp construction
    //static void SetInitializerFunction(wxAppInitializerFunction fn) { ms_appInitFn = fn; }
    //static wxAppInitializerFunction GetInitializerFunction() { return ms_appInitFn; }

    // accessors for ms_appInstance field (external code might wish to modify
    // it, this is why we provide a setter here as well, but you should really
    // know what you're doing if you call it), wxTheApp is usually used instead
    // of GetInstance()
    static wxAppConsole *GetInstance() { return ms_appInstance; }
    static void SetInstance(wxAppConsole *app) { ms_appInstance = app; }
};


class wxApp : public wxAppConsole
{
public:
    //wxApp();
    //virtual ~wxApp();

    // the virtual functions which may/must be overridden in the derived class
    // -----------------------------------------------------------------------

        // very first initialization function
        //
        // Override: very rarely
    //virtual bool Initialize(int& argc, wxChar **argv);

        // a platform-dependent version of OnInit(): the code here is likely to
        // depend on the toolkit. default version does nothing.
        //
        // Override: rarely.
    virtual bool OnInitGui();

        // called to start program execution - the default version just enters
        // the main GUI loop in which events are received and processed until
        // the last window is not deleted (if GetExitOnFrameDelete) or
        // ExitMainLoop() is called. In console mode programs, the execution
        // of the program really starts here
        //
        // Override: rarely in GUI applications, always in console ones.
    virtual int OnRun();

        // a matching function for OnInit()
    virtual int OnExit();

        // very last clean up function
        //
        // Override: very rarely
    virtual void CleanUp();


    // the worker functions - usually not used directly by the user code
    // -----------------------------------------------------------------

        // safer alternatives to Yield(), using wxWindowDisabler
    virtual bool SafeYield(wxWindow *win, bool onlyIfNeeded);
    virtual bool SafeYieldFor(wxWindow *win, long eventsToProcess);

        // this virtual function is called in the GUI mode when the application
        // becomes idle and normally just sends wxIdleEvent to all interested
        // parties
        //
        // it should return true if more idle events are needed, false if not
    virtual bool ProcessIdle();

        // override base class version: GUI apps always use an event loop
    virtual bool UsesEventLoop() const { return true; }


    // top level window functions
    // --------------------------

        // return true if our app has focus
    virtual bool IsActive() const { return m_isActive; }

        // set the "main" top level window
    void SetTopWindow(wxWindow *win) { m_topWindow = win; }

        // return the "main" top level window (if it hadn't been set previously
        // with SetTopWindow(), will return just some top level window and, if
        // there are none, will return NULL)
    virtual wxWindow *GetTopWindow() const;

        // control the exit behaviour: by default, the program will exit the
        // main loop (and so, usually, terminate) when the last top-level
        // program window is deleted. Beware that if you disable this behaviour
        // (with SetExitOnFrameDelete(false)), you'll have to call
        // ExitMainLoop() explicitly from somewhere.
    void SetExitOnFrameDelete(bool flag)
        { m_exitOnFrameDelete = flag ? Yes : No; }
    bool GetExitOnFrameDelete() const
        { return m_exitOnFrameDelete == Yes; }


    // display mode, visual, printing mode, ...
    // ------------------------------------------------------------------------

        // Get display mode that is used use. This is only used in framebuffer
        // wxWin ports (such as wxMGL or wxDFB).
    //virtual wxVideoMode GetDisplayMode() const;
        // Set display mode to use. This is only used in framebuffer wxWin
        // ports (such as wxMGL or wxDFB). This method should be called from
        // wxApp::OnInitGui
    //virtual bool SetDisplayMode(const wxVideoMode& WXUNUSED(info)) { return true; }

        // set use of best visual flag (see below)
    void SetUseBestVisual( bool flag, bool forceTrueColour = false )
        { m_useBestVisual = flag; m_forceTrueColour = forceTrueColour; }
    bool GetUseBestVisual() const { return m_useBestVisual; }

        // set/get printing mode: see wxPRINT_XXX constants.
        //
        // default behaviour is the normal one for Unix: always use PostScript
        // printing.
    //virtual void SetPrintMode(int WXUNUSED(mode)) { }
    //int GetPrintMode() const { return wxPRINT_POSTSCRIPT; }

    // Return the layout direction for the current locale or wxLayout_Default
    // if it's unknown
    virtual wxLayoutDirection GetLayoutDirection() const;

    // Change the theme used by the application, return true on success.
    virtual bool SetNativeTheme(const wxString& theme) { return false; }


    // command line parsing (GUI-specific)
    // ------------------------------------------------------------------------

    // virtual bool OnCmdLineParsed(wxCmdLineParser& parser);
    // virtual void OnInitCmdLine(wxCmdLineParser& parser);

    // miscellaneous other stuff
    // ------------------------------------------------------------------------

    // called by toolkit-specific code to set the app status: active (we have
    // focus) or not and also the last window which had focus before we were
    // deactivated
    virtual void SetActive(bool isActive, wxWindow *lastFocus);
};

// Force an exit from main loop
void wxExit();

// Yield to other apps/messages
bool wxYield();

// Yield to other apps/messages
void wxWakeUpIdle();

#endif // _WX_APP_H_BASE_
