#include "Acceuiladmi.h"
#include<wx/statline.h>
#include<wx/wx.h>

Acceuiladmi::Acceuiladmi(const wxString & title) : wxframe(NULL,wxID_ANY,title)
{
    //  Creation  du wxboxsizer vertical

    wxBoxSizer *size_1_vertical= new  wxBoxSizer(wxVERTICAL);
    SetSizer(size_1_vertical);
    // 1 panel
    wxPanel *zone1 = new wxPanel(this,wxID_ANY,wxDefaultPosition,wxSize(-1,50));
    size_1_vertical ->Add(zone1,0,wxBottom|wxEXPAND,5); // Panel interface principal
    // 2 Panel
    wxBoxSizer *sizer_1_horizontal = new wxBoxSizer(wxHORIZONTAL);
    size_1_vertical ->Add(sizer_1_horizontal,1,wxBottom|wxRight|wxLeft|wxEXPAND,5);

    // creation de la 3 zone "zone du bas "
    wxPanel *zone3 = new wxPanel(this,wxID_ANY,wxDefaultPosition,wxSize(-1,10));

    // Positionnement des controles de la zone centrale


        //  Panel election
        wxPanel *zoneelection = new wxPanel(this);
        sizer_1_horizontal ->Add(zoneelection,1,wxRight|wxEXPAND,5);

        // Static box election
            // Boxsizer intermediaire pour le positionnement
            wxBoxSizer *sizer_intermed =new wxBoxSizer(wxVERTICAL);
            wxStaticBoxSizer * cadre1 =new wxStaticBoxSizer(wxVERTICAL,zoneelection,_T("Statut de l'election:"));
            sizer_intermed ->Add(cadre1,1,wxALL|wxEXPAND,5);
            zoneelection ->SetSizer(sizer_intermed);

             // Controles pour l election
            wxButton *btnvalider =new wxButton(zoneelection,ID_BTN_VALIDER,_T("Valider"));
            btnvalider ->Disable();
            sizer_intermed ->Add(btnvalider,0,wxALIGN_RIGHT|wxRight|wxBottom,5);

               // Creation du flexgridsizer
            wxFlexGridSizer *grilleelection = new wxFlexGridSizer(3,2,5,5);
            wxStaticText *labeltype =new wxStaticText(zoneelection,-1,_T("Contexte:"));
            grilleelection ->Add(labeltype,0,wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT);
             //txt ctrl pour le type
             wxTextCtrl *txttype=new wxTextCtrl(zoneelection,ID_TXT_TYPE,_T(""));
             grilleelection ->Add(txttype,0,wxEXPAND);
             // txt pour la region
             wxStaticText * labelpays= new wxStaticText(zoneelection,-1,_T("Region:"));
             grilleelection ->Add(labelpays,0,wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT);
             // txt pour le pays
             wxTextCtrl *txtpays=new wxTextCtrl(zoneelection,ID_TXT_PAYS,_T(""));
             grilleelection ->Add(txtpays,0,wxEXPAND);

             // static text pour la duree
             wxStaticText *labelduree= new wxStaticText(zoneelection,-1,_T("Durée:"));
             grilleelection->Add(labelduree,0,wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT);

             // wxtext ctrl
             wxTextCtrl *txtduree=new wxTextCtrl(zoneelection,ID_TXT_DUREE,_T(""));
             grilleelection ->Add(txtduree,0,wxEXPAND);
             cadre1->AddGrowableCol(1);
             // fin election

             ///Partie centrale

            wxBoxSizer *sizer_2_vertical = new wxBoxSizer(wxVERTICAL);
            sizer_1_horizontal->Add(sizer_2_vertical,1,wxALL|wxEXPAND,0);
            // Panel candidats
            wxPanel * zonecandidat = new wxPanel(this);
            sizer_2_vertical->Add(zonecandidat,1,wxAll|wxEXPAND);
               // Panel Gestion des ELECTEURS
               wxPanel *zoneelecteur = new wxPanel(this);
               sizer_2_vertical->Add(zoneelecteur,1,wxALL|wxEXPAND,0);
               // Panel commandes
               wxPanel *zonecommande =new wxPanel(this);
               sizer_2_vertical->Add(zonecommande,1,wxALL|wxEXPAND,0);
               // Panel candidats
               wxBoxSizer *sizer_1_intermed = new wxBoxSizer(wxVERTICAL);
               wxStaticBoxSizer *cadre2 = new wxStaticBoxSizer(wxVERTICAL,zonecandidat,_T("Gestion des candidats:"));
               sizer_1_intermed->Add(cadre2,1;wxALL|wxEXPAND,5);
               zonecandidat->SetSizer(sizer_1_intermed);
                // controles pour les candidats
              wxFlexGridSizer *grillecandidat = new wxFlexGridSizer(1,2,5,5);
              // button de candidats

              wxButton *btnajoutcand = new wxButton(zonecandidat,ID_AJOUT_CAND,_T("Ajouter"));
              btnajoutcand->Disable();
              grillecandidat->Add(btnajoutcand,0,wxALIGN_CENTER_VERTICAL|wxALIGN_CENTRE);
              wxButton * btnsuppcand = new wxButton(zonecandidat,ID_SUPP_CAND,_T("Retirer"));
              btnsuppcand->Disable();
              grillecandidat->Add(btnsuppcand,0,wxALIGN_CENTER_VERTICAL|wxALIGN_CENTRE);
              cadre2->Add(grillecandidat,1,wxALL|wxEXPAND,5);
              // panel electeur
              wxBoxSizer * sizer_2_intermed =new wxBoxSizer(wxVERTICAL);
              wxStaticBoxSizer *cadre3 =new wxStaticBoxSizer(wxVERTICAL,zoneelecteur,_T("Gestion des electeurs:"));
              sizer_2_intermed->Add(cadre3,1,wxALL|wxEXPAND,5);
              zoneelecteur->SetSizer(sizer_2_intermed);
               //Controle pour les electeurs
               wxFlexGridSizer *grilleelcteur =new wxFlexGridSizer(1,2,5,5);
               wxButton *btnajoutelec = new wxButton(zoneelecteur,ID_AJOUT_ELEC,_T("Ajouter"));
               btnajoutelec->Disable();
               grilleelcteur->Add(btnajoutelec,0,wxALIGN_CENTRE);
               wxButton *btnsuppelec =new wxbutton(zoneelecteur,ID_SUPP_ELEC,_T("Supprimer"));
               grilleelcteur->Add(btnsuppelec,0,wxALIGN_CENTRE);
               btnsuppelec->Disable();
               cadre3->Add(grilleelcteur,1,wxALIGN|wxEXPAND,5);
                 //panel commande
               wxBoxSizer *sizer_3_intermed =new wxBoxSizer(wxVERTICAL);
              wxStaticBoxSizer *cadre4 =new wxStaticBoxSizer(wxVERTICAL,zonecommande,_T("Commandes:"));
              sizer_3_intermed->Add(cadre4,1,wxALL|wxEXPAND,5);
              zoneelecteur->SetSizer(sizer_3_intermed);
              // button de commande
               wxFlexGridSizer *grillecommande =new wxFlexGridSizer(1,3,5,5);
               wxButton *btnlancer = new wxButton(zonecommande,ID_DEMARRE,_T("Demarrer vote"));
               btnlancer->Disable();
               grillecommande->Add(btnlancer,0,wxALIGN_CENTRE);
               wxButton *btnresul =new wxbutton(zonecommande,ID_RESULT,_T("Resultats"));
               grillecommande->Add(btnresul,0,wxALIGN_CENTRE);
               btnresul->Disable();
               wxButton *btnquit= new wxButton(zonecommande,ID_QUIT,_T("Quitter"));
               grillecommande->Add(btnquit,0;wxALIGN_CENTRE);
               btnquit->Disable();
               cadre4->Add(grillecommande,1,wxALL|wxEXPAND,5);
                  // Zone du bas
                  wxStaticText *labeltitre = new  wxStaticText(zone3,-1,_T("VOTE ELECTRONIQUE Version 1.2"));
                  wxBoxSizer *sizerzone3=new wxBoxSizer(wxHORIZONTAL);
                  sizerzone3->Add(labeltitre,0,wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL|wxALL,1);
                  wxStaticLine *lignverti =new wxStaticLine(zone3,-1);
                  sizerzone3->Add(lignverti,0,wxALIGN_CENTRE|wxEXPAND|wxALL,5);
                  sizerzone3->AddSpacer(5);
                  wxStaticText *labeltitre2 =new wxStaticText(zone3,-1,_T("Fait en wxwidgets par le groupe 1"));
                  sizerzone3->Add(labeltitre2,0,wxALIGN_CENTER_VERTICAL|wxALL,5);
                  // zone 1




                  //
                  }

void Acceuiladmi::validerclicked(wxCommandEvent &event)
{
    bool bok=true;
    if(txttype->IsEmpty()) bok=false;
    if(txtpays->IsEmpty()) bok=false;
    if(txtduree->IsEmpty()) bok=false;
    if(bok==true)
        btnvalider->Enable();
    else
        btnvalider->Disable();
}
Acceuiladmi::~Acceuiladmi()
{

}
