
#ifndef _WX_OBJECTH__
#define _WX_OBJECTH__

// ----------------------------------------------------------------------------
// wxRefCounter: ref counted data "manager"
// ----------------------------------------------------------------------------

class wxRefCounter
{
public:
    wxRefCounter();

    int GetRefCount() const;

    void IncRef();
    void DecRef();

protected:
    // this object should never be destroyed directly but only as a
    // result of a DecRef() call:
    virtual ~wxRefCounter();
};

// ----------------------------------------------------------------------------
// wxObjectRefData: ref counted data meant to be stored in wxObject
// ----------------------------------------------------------------------------

typedef wxRefCounter wxObjectRefData;

// ----------------------------------------------------------------------------
// wxObject: the root class of wxWidgets object hierarchy
// ----------------------------------------------------------------------------

class wxObject
{
public:
    wxObject();
    virtual ~wxObject() { UnRef(); }

    wxObject(const wxObject& other);

    wxObject& operator=(const wxObject& other);

    bool IsKindOf(const wxClassInfo *info) const;

    // ref counted data handling methods

    // get/set
    wxObjectRefData *GetRefData() const;
    void SetRefData(wxObjectRefData *data);

    // make a 'clone' of the object
    void Ref(const wxObject& clone);

    // destroy a reference
    void UnRef();

    // Make sure this object has only one reference
    void UnShare();

    // check if this object references the same data as the other one
    bool IsSameAs(const wxObject& o) const;
};

wxObject *wxCheckDynamicCast(wxObject *obj, wxClassInfo *classInfo);

#endif // _WX_OBJECTH__
