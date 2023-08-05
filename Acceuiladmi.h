#ifndef ACCEUILADMI_H_INCLUDED
#define ACCEUILADMI_H_INCLUDED

// le header wxwidgets de base

#include<wx/wx.h>

enum{
ID_BTN_VALIDER =wxID_HIGHEST +1,
ID_AJOUT_CAND,
ID_SUPP_CAND,
ID_AJOUT_ELEC,
ID_SUPP_ELEC,
ID_RESULT,
ID_QUIT,
ID_DEMARRE,
ID_TXT_DUREE,
ID_TXT_TYPE,
ID_TXT_PAYS


};

class Acceuiladmi : public wxFrame
{
    public:
        Acceuiladmi( const wxString &);
        virtual ~Acceuiladmi();

        // methodes evenementielles
    private :

        void validerclicked(wxCommandEvent &event);
        void ajoutercandclicked(wxCommandEvent &event);
        void suppcandclicked(wxCommandEvent &event);
        void ajouterelecclicked(wxCommandEvent &event);
        void suppelecclicked(wxCommandEvent &event);
        void demarrerclicked(wxCommandEvent &event);
        void quitclicked(wxCommandEvent &event);
        void resultclicked(wxCommandEvent &event);
};

#endif // ACCEUILADMI_H
