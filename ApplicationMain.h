/***************************************************************
 * Name:      ApplicationMain.h
 * Purpose:   Defines Application Frame
 * Author:    gstar ()
 * Created:   2022-02-17
 * Copyright: gstar ()
 * License:
 **************************************************************/

#ifndef APPLICATIONMAIN_H
#define APPLICATIONMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "ApplicationApp.h"

class ApplicationFrame: public wxFrame
{
    public:
        ApplicationFrame(wxFrame *frame, const wxString& title);
        ~ApplicationFrame();
    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout
        };
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};


#endif // APPLICATIONMAIN_H
