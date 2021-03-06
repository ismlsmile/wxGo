WXGO_DECL_TYPECONV(ToggleButton)
WXGO_DECL_TYPECONV(BitmapToggleButton)
%constant wxEventType wxEVT_TOGGLEBUTTON;
class wxToggleButton : public wxAnyButton
{
public:
    wxToggleButton();
    wxToggleButton(wxWindow* parent, wxWindowID id,
                   const wxString& label,
                   const wxPoint& pos = wxDefaultPosition,
                   const wxSize& size = wxDefaultSize,
                   long style = 0,
                   const wxValidator& val = wxDefaultValidator,
                   const wxString& name = wxCheckBoxNameStr);
    virtual ~wxToggleButton();
    bool Create(wxWindow* parent, wxWindowID id,
                const wxString& label,
                const wxPoint& pos = wxDefaultPosition,
                const wxSize& size = wxDefaultSize,
                long style = 0,
                const wxValidator& val = wxDefaultValidator,
                const wxString& name = wxCheckBoxNameStr);
    virtual bool GetValue() const;
    virtual void SetValue(bool state);
};
class wxBitmapToggleButton : public wxToggleButton
{
public:
    wxBitmapToggleButton();
    wxBitmapToggleButton(wxWindow* parent, wxWindowID id,
                         const wxBitmap& label,
                         const wxPoint& pos = wxDefaultPosition,
                         const wxSize& size = wxDefaultSize,
                         long style = 0,
                         const wxValidator& val = wxDefaultValidator,
                         const wxString& name = wxCheckBoxNameStr);
    bool Create(wxWindow* parent, wxWindowID id,
                const wxBitmap& label,
                const wxPoint& pos = wxDefaultPosition,
                const wxSize& size = wxDefaultSize,
                long style = 0,
                const wxValidator& val = wxDefaultValidator,
                const wxString& name = wxCheckBoxNameStr);
    virtual bool GetValue() const;
    virtual void SetValue(bool state);
};