#ifndef _WX_EVENT_H_
#define _WX_EVENT_H_

// ----------------------------------------------------------------------------
// Event types
// ----------------------------------------------------------------------------

typedef int wxEventType;

const wxEventType wxEVT_ANY;

// generate a new unique event type
wxEventType wxNewEventType();


class wxEvtHandler : public wxObject
{
public:
    wxEvtHandler();
    virtual ~wxEvtHandler();


    // Event handler chain
    // -------------------

    wxEvtHandler *GetNextHandler() const;
    wxEvtHandler *GetPreviousHandler() const;
    virtual void SetNextHandler(wxEvtHandler *handler);
    virtual void SetPreviousHandler(wxEvtHandler *handler);

    void SetEvtHandlerEnabled(bool enabled);
    bool GetEvtHandlerEnabled() const;

    void Unlink();
    bool IsUnlinked() const;

    // Global event filters
    // --------------------

    // Add an event filter whose FilterEvent() method will be called for each
    // and every event processed by wxWidgets. The filters are called in LIFO
    // order and wxApp is registered as an event filter by default. The pointer
    // must remain valid until it's removed with RemoveFilter() and is not
    // deleted by wxEvtHandler.
    //static void AddFilter(wxEventFilter* filter);

    // Remove a filter previously installed with AddFilter().
    //static void RemoveFilter(wxEventFilter* filter);


    // Event queuing and processing
    // ----------------------------

    // Process an event right now: this can only be called from the main
    // thread, use QueueEvent() for scheduling the events for
    // processing from other threads.
    //virtual bool ProcessEvent(wxEvent& event);

    // Process an event by calling ProcessEvent and handling any exceptions
    // thrown by event handlers. It's mostly useful when processing wx events
    // when called from C code (e.g. in GTK+ callback) when the exception
    // wouldn't correctly propagate to wxEventLoop.
    //bool SafelyProcessEvent(wxEvent& event);
        // NOTE: uses ProcessEvent()

    // This method tries to process the event in this event handler, including
    // any preprocessing done by TryBefore() and all the handlers chained to
    // it, but excluding the post-processing done in TryAfter().
    //
    // It is meant to be called from ProcessEvent() only and is not virtual,
    // additional event handlers can be hooked into the normal event processing
    // logic using TryBefore() and TryAfter() hooks.
    //
    // You can also call it yourself to forward an event to another handler but
    // without propagating it upwards if it's unhandled (this is usually
    // unwanted when forwarding as the original handler would already do it if
    // needed normally).
    //bool ProcessEventLocally(wxEvent& event);

    // Schedule the given event to be processed later. It takes ownership of
    // the event pointer, i.e. it will be deleted later. This is safe to call
    // from multiple threads although you still need to ensure that wxString
    // fields of the event object are deep copies and not use the same string
    // buffer as other wxString objects in this thread.
    //virtual void QueueEvent(wxEvent *event);

    // Add an event to be processed later: notice that this function is not
    // safe to call from threads other than main, use QueueEvent()
    //virtual void AddPendingEvent(const wxEvent& event);

    //void ProcessPendingEvents();
        // NOTE: uses ProcessEvent()

    void DeletePendingEvents();

    //bool ProcessThreadEvent(const wxEvent& event);

    // Connecting and disconnecting
    // ----------------------------

    // These functions are used for old, untyped, event handlers and don't
    // check that the type of the function passed to them actually matches the
    // type of the event. They also only allow connecting events to methods of
    // wxEvtHandler-derived classes.
    //
    // The template Connect() methods below are safer and allow connecting
    // events to arbitrary functions or functors -- but require compiler
    // support for templates.

    // Dynamic association of a member function handler with the event handler,
    // winid and event type
    /*void Connect(int winid,
                 int lastId,
                 wxEventType eventType,
                 wxObjectEventFunction func,
                 wxObject *userData = NULL,
                 wxEvtHandler *eventSink = NULL);

    // Convenience function: take just one id
    void Connect(int winid,
                 wxEventType eventType,
                 wxObjectEventFunction func,
                 wxObject *userData = NULL,
                 wxEvtHandler *eventSink = NULL);

    // Even more convenient: without id (same as using id of wxID_ANY)
    void Connect(wxEventType eventType,
                 wxObjectEventFunction func,
                 wxObject *userData = NULL,
                 wxEvtHandler *eventSink = NULL);

    bool Disconnect(int winid,
                    int lastId,
                    wxEventType eventType,
                    wxObjectEventFunction func = NULL,
                    wxObject *userData = NULL,
                    wxEvtHandler *eventSink = NULL);

    bool Disconnect(int winid = wxID_ANY,
                    wxEventType eventType = wxEVT_NULL,
                    wxObjectEventFunction func = NULL,
                    wxObject *userData = NULL,
                    wxEvtHandler *eventSink = NULL);

    bool Disconnect(wxEventType eventType,
                    wxObjectEventFunction func,
                    wxObject *userData = NULL,
                    wxEvtHandler *eventSink = NULL);
*/

    // Bind functions to an event:
/*    template <typename EventTag, typename EventArg>
    void Bind(const EventTag& eventType,
              void (*function)(EventArg &),
              int winid = wxID_ANY,
              int lastId = wxID_ANY,
              wxObject *userData = NULL);

    template <typename EventTag, typename EventArg>
    bool Unbind(const EventTag& eventType,
                void (*function)(EventArg &),
                int winid = wxID_ANY,
                int lastId = wxID_ANY,
                wxObject *userData = NULL);

    // Bind functors to an event:
    template <typename EventTag, typename Functor>
    void Bind(const EventTag& eventType,
              const Functor &functor,
              int winid = wxID_ANY,
              int lastId = wxID_ANY,
              wxObject *userData = NULL);

    template <typename EventTag, typename Functor>
    bool Unbind(const EventTag& eventType,
                const Functor &functor,
                int winid = wxID_ANY,
                int lastId = wxID_ANY,
                wxObject *userData = NULL);


    // Bind a method of a class (called on the specified handler which must
    // be convertible to this class) object to an event:

    template <typename EventTag, typename Class, typename EventArg, typename EventHandler>
    void Bind(const EventTag &eventType,
              void (Class::*method)(EventArg &),
              EventHandler *handler,
              int winid = wxID_ANY,
              int lastId = wxID_ANY,
              wxObject *userData = NULL);

    template <typename EventTag, typename Class, typename EventArg, typename EventHandler>
    bool Unbind(const EventTag &eventType,
                void (Class::*method)(EventArg&),
                EventHandler *handler,
                int winid = wxID_ANY,
                int lastId = wxID_ANY,
                wxObject *userData = NULL );
*/

    //wxList* GetDynamicEventTable() const { return m_dynamicEvents ; }

    // User data can be associated with each wxEvtHandler
    //void SetClientObject( wxClientData *data ) { DoSetClientObject(data); }
    //wxClientData *GetClientObject() const { return DoGetClientObject(); }

    void SetClientData( void *data );
    void *GetClientData() const;

    // implementation from now on
    // --------------------------

    // check if the given event table entry matches this event by id (the check
    // for the event type should be done by caller) and call the handler if it
    // does
    //
    // return true if the event was processed, false otherwise (no match or the
    // handler decided to skip the event)
    //static bool ProcessEventIfMatchesId(const wxEventTableEntryBase& tableEntry,
    //                                    wxEvtHandler *handler,
    //                                    wxEvent& event);

    //virtual bool SearchEventTable(wxEventTable& table, wxEvent& event);
    //bool SearchDynamicEventTable( wxEvent& event );

    // Avoid problems at exit by cleaning up static hash table gracefully
    //void ClearEventHashTable();
    //void OnSinkDestroyed( wxEvtHandler *sink );
};

#endif // _WX_EVENT_H_
