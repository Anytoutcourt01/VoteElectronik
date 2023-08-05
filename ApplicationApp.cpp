/***************************************************************
 * Name:      ApplicationApp.cpp
 * Purpose:   Code for Application Class
 * Author:    gstar ()
 * Created:   2022-02-17
 * Copyright: gstar ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "ApplicationApp.h"
#include "ApplicationMain.h"
#include "Acceuiladmi.h"

IMPLEMENT_APP(ApplicationApp);

bool ApplicationApp::OnInit()
{
    Accueiladmi* frame = new Accueiladmi();
    frame->SetIcon(wxICON(aaaa)); // To Set App Icon
    frame->Show();

    return true;
}
