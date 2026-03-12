#include <wx/wx.h>
#include <wx/tglbtn.h>
#include "MyProjectBase.h"
#include <string>
#include <cstdio>

using namespace std;

class finestra : public calcolatrice
{
public:
    finestra(wxWindow* parent) : calcolatrice(parent)
    {
        uno->Bind(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, &finestra::onDigit, this);
        due->Bind(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, &finestra::onDigit, this);
        tre->Bind(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, &finestra::onDigit, this);
        quattro->Bind(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, &finestra::onDigit, this);
        cinque->Bind(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, &finestra::onDigit, this);
        sei->Bind(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, &finestra::onDigit, this);
        sette->Bind(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, &finestra::onDigit, this);
        otto->Bind(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, &finestra::onDigit, this);
        nove->Bind(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, &finestra::onDigit, this);
        zero->Bind(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, &finestra::onDigit, this);

        punto->Bind(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, &finestra::puntoo, this);
        
        più->Bind(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, &finestra::piu, this);
        meno->Bind(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, &finestra::sottrazione, this);
        croce->Bind(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, &finestra::per, this);
        obelo->Bind(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, &finestra::diviso, this);
        uguale->Bind(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, &finestra::risultato, this);
        cancella->Bind(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, &finestra::C, this);
        percentuale->Bind(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, &finestra::percento, this);
    }

protected:

    bool guardia = true;
    string testoa = "";
    string testob = "";
    double res = 0;
    int segno = 0;
    double a = 0, b = 0;
    void C(wxCommandEvent& event) override
    {
        testoa = "";
        testob = "";
        guardia = true;
        schermetto->SetLabel(testoa);
    }

    void puntoo(wxCommandEvent& event) {
        if (guardia) {
            testoa += '.';
            schermetto->SetLabel(testoa);
            }
        else {
            testob += '.';
            schermetto->SetLabel(testob);
            
        }
    }

    void onDigit(wxCommandEvent& event)
    {
        wxToggleButton* btn = (wxToggleButton*)event.GetEventObject();
        string s = string(btn->GetLabel().mb_str());
        
        if (guardia == true) {
            testoa += s;
            schermetto->SetLabel(testoa);
        } else {
            testob += s;
            schermetto->SetLabel(testob);
        }
    }

    void piu(wxCommandEvent& event){ guardia = false; segno = 1; schermetto->SetLabel(""); }
    void sottrazione(wxCommandEvent& event) { guardia = false; segno = 2; schermetto->SetLabel(""); }
    void per(wxCommandEvent& event) { guardia = false; segno = 3; schermetto->SetLabel(""); }
    void diviso(wxCommandEvent& event){ guardia = false; segno = 4; schermetto->SetLabel(""); }
    void percento(wxCommandEvent& event) { guardia = false; segno = 5; schermetto->SetLabel(""); }

    void risultato(wxCommandEvent& event) override
    {   
        a = testoa.empty() ? 0 : stod(testoa);
        b = testob.empty() ? 0 : stod(testob);

        if (segno == 1)      res = a + b;
        else if (segno == 2) res = a - b;
        else if (segno == 3) res = a * b;
        else if (segno == 4) {
            if (b != 0) res = a / b;
            else {schermetto->SetLabel("Errore: divisione per zero"); return;} }
        else if (segno == 5) {
            res = (a * b) / 100; 
        }
        else if (segno == 0) {schermetto->SetLabel("ERRORE"); return;}
        // Formatta il risultato per evitare troppi decimali
        char buffer[100];
        snprintf(buffer, sizeof(buffer), "%.10g", res);
        string risultato_str(buffer);
        schermetto->SetLabel(risultato_str);
        
        a = 0; b = 0; res = 0;
        testoa = "";
        testob = "";
        segno = 0;
        guardia = true;
    }
};

class AppSomma : public wxApp
{
public:
    bool OnInit() override
    {
        finestra* frame = new finestra(nullptr);
        frame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(AppSomma);
