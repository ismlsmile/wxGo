WXGO_DECL_TYPECONV(SpinEvent)
WXGO_DECL_TYPECONV(SpinButton)
class wxSpinEvent : public wxNotifyEvent
{
public:
    wxSpinEvent(wxEventType commandType = wxEVT_NULL, int id = 0);
    int GetPosition() const;
    void SetPosition(int pos);
};
class wxSpinButton : public wxControl
{
public:
    wxSpinButton();
    wxSpinButton(wxWindow* parent, wxWindowID id = -1,
                 const wxPoint& pos = wxDefaultPosition,
                 const wxSize& size = wxDefaultSize,
                 long style = wxSP_VERTICAL,
                 const wxString& name = "spinButton");
    virtual ~wxSpinButton();
    bool Create(wxWindow* parent, wxWindowID id = -1,
                const wxPoint& pos = wxDefaultPosition,
                const wxSize& size = wxDefaultSize,
                long style = wxSP_VERTICAL,
                const wxString& name = "wxSpinButton");
    virtual int GetMax() const;
    virtual int GetMin() const;
    virtual int GetValue() const;
    virtual void SetRange(int min, int max);
    virtual void SetValue(int value);
};