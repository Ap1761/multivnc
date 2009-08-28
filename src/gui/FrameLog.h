// -*- C++ -*- generated by wxGlade 0.6.3 on Fri Aug 28 15:33:48 2009

#include <wx/wx.h>
#include <wx/image.h>

#ifndef FRAMELOG_H
#define FRAMELOG_H

// begin wxGlade: ::dependencies
// end wxGlade

// begin wxGlade: ::extracode

// end wxGlade


class FrameLog: public wxFrame {
public:
    // begin wxGlade: FrameLog::ids
    // end wxGlade

    FrameLog(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_FRAME_STYLE);

private:
    // begin wxGlade: FrameLog::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: FrameLog::attributes
    wxTextCtrl* text_ctrl_log;
    wxButton* button_save;
    wxButton* button_close;
    wxPanel* panel_top;
    // end wxGlade

    DECLARE_EVENT_TABLE();

public:
    virtual void log_saveas(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void log_close(wxCommandEvent &event); // wxGlade: <event_handler>
}; // wxGlade: end class


#endif // FRAMELOG_H
