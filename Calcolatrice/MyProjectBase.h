///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/tglbtn.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/wrapsizer.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class calcolatrice
///////////////////////////////////////////////////////////////////////////////
class calcolatrice : public wxFrame
{
	private:

	protected:
		wxStaticText* schermetto;
		wxToggleButton* cancella;
		wxToggleButton* m_toggleBtn2;
		wxToggleButton* percentuale;
		wxToggleButton* obelo;
		wxToggleButton* sette;
		wxToggleButton* otto;
		wxToggleButton* nove;
		wxToggleButton* croce;
		wxToggleButton* quattro;
		wxToggleButton* cinque;
		wxToggleButton* sei;
		wxToggleButton* meno;
		wxToggleButton* uno;
		wxToggleButton* due;
		wxToggleButton* tre;
		wxToggleButton* più;
		wxToggleButton* piumeno;
		wxToggleButton* zero;
		wxToggleButton* punto;
		wxToggleButton* uguale;

		// Virtual event handlers, override them in your derived class
		virtual void C( wxCommandEvent& event ) { event.Skip(); }
		virtual void percento( wxCommandEvent& event ) { event.Skip(); }
		virtual void divisione( wxCommandEvent& event ) { event.Skip(); }
		virtual void numero7( wxCommandEvent& event ) { event.Skip(); }
		virtual void numero8( wxCommandEvent& event ) { event.Skip(); }
		virtual void numero9( wxCommandEvent& event ) { event.Skip(); }
		virtual void moltiplicazione( wxCommandEvent& event ) { event.Skip(); }
		virtual void numero4( wxCommandEvent& event ) { event.Skip(); }
		virtual void numero5( wxCommandEvent& event ) { event.Skip(); }
		virtual void numero6( wxCommandEvent& event ) { event.Skip(); }
		virtual void sottrazione( wxCommandEvent& event ) { event.Skip(); }
		virtual void numero1( wxCommandEvent& event ) { event.Skip(); }
		virtual void numero2( wxCommandEvent& event ) { event.Skip(); }
		virtual void numero3( wxCommandEvent& event ) { event.Skip(); }
		virtual void addizione( wxCommandEvent& event ) { event.Skip(); }
		virtual void piuomeno( wxCommandEvent& event ) { event.Skip(); }
		virtual void numero0( wxCommandEvent& event ) { event.Skip(); }
		virtual void puntoo( wxCommandEvent& event ) { event.Skip(); }
		virtual void risultato( wxCommandEvent& event ) { event.Skip(); }


	public:

		calcolatrice( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 351,229 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~calcolatrice();

};

