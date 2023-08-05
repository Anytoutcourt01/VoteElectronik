/***************************************************************
 * Name:      ApplicationApp.h
 * Purpose:   Defines Application Class
 * Author:    gstar ()
 * Created:   2022-02-17
 * Copyright: gstar ()
 * License:
 **************************************************************/

#ifndef APPLICATIONAPP_H
#define APPLICATIONAPP_H
#include "Acceuiladmi.h"

#include <wx/app.h>

class ApplicationApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // APPLICATIONAPP_H
