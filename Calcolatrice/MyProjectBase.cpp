///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "MyProjectBase.h"

///////////////////////////////////////////////////////////////////////////

calcolatrice::calcolatrice( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxWrapSizer* wSizer2;
	wSizer2 = new wxWrapSizer( wxHORIZONTAL, wxWRAPSIZER_DEFAULT_FLAGS );

	schermetto = new wxStaticText( this, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	schermetto->Wrap( -1 );
	wSizer2->Add( schermetto, 0, wxALL, 5 );


	wSizer2->Add( 1000, 0, 1, wxEXPAND, 5 );

	cancella = new wxToggleButton( this, wxID_ANY, _("C"), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( cancella, 0, wxALL, 5 );

	m_toggleBtn2 = new wxToggleButton( this, wxID_ANY, _("()"), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( m_toggleBtn2, 0, wxALL, 5 );

	percentuale = new wxToggleButton( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( percentuale, 0, wxALL, 5 );

	obelo = new wxToggleButton( this, wxID_ANY, _("/"), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( obelo, 0, wxALL, 5 );

	sette = new wxToggleButton( this, wxID_ANY, _("7"), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( sette, 0, wxALL, 5 );

	otto = new wxToggleButton( this, wxID_ANY, _("8"), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( otto, 0, wxALL, 5 );

	nove = new wxToggleButton( this, wxID_ANY, _("9"), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( nove, 0, wxALL, 5 );

	croce = new wxToggleButton( this, wxID_ANY, _("x"), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( croce, 0, wxALL, 5 );

	quattro = new wxToggleButton( this, wxID_ANY, _("4"), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( quattro, 0, wxALL, 5 );

	cinque = new wxToggleButton( this, wxID_ANY, _("5"), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( cinque, 0, wxALL, 5 );

	sei = new wxToggleButton( this, wxID_ANY, _("6"), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( sei, 0, wxALL, 5 );

	meno = new wxToggleButton( this, wxID_ANY, _("-"), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( meno, 0, wxALL, 5 );

	uno = new wxToggleButton( this, wxID_ANY, _("1"), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( uno, 0, wxALL, 5 );

	due = new wxToggleButton( this, wxID_ANY, _("2"), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( due, 0, wxALL, 5 );

	tre = new wxToggleButton( this, wxID_ANY, _("3"), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( tre, 0, wxALL, 5 );

	più = new wxToggleButton( this, wxID_ANY, _("+"), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( più, 0, wxALL, 5 );

	piumeno = new wxToggleButton( this, wxID_ANY, _("+/-"), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( piumeno, 0, wxALL, 5 );

	zero = new wxToggleButton( this, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( zero, 0, wxALL, 5 );

	punto = new wxToggleButton( this, wxID_ANY, _("."), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( punto, 0, wxALL, 5 );

	uguale = new wxToggleButton( this, wxID_ANY, _("="), wxDefaultPosition, wxDefaultSize, 0 );
	wSizer2->Add( uguale, 0, wxALL, 5 );


	this->SetSizer( wSizer2 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	cancella->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::C ), NULL, this );
	percentuale->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::percento ), NULL, this );
	obelo->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::divisione ), NULL, this );
	sette->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::numero7 ), NULL, this );
	otto->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::numero8 ), NULL, this );
	nove->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::numero9 ), NULL, this );
	croce->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::moltiplicazione ), NULL, this );
	quattro->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::numero4 ), NULL, this );
	cinque->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::numero5 ), NULL, this );
	sei->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::numero6 ), NULL, this );
	meno->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::sottrazione ), NULL, this );
	uno->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::numero1 ), NULL, this );
	due->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::numero2 ), NULL, this );
	tre->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::numero3 ), NULL, this );
	più->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::addizione ), NULL, this );
	piumeno->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::piuomeno ), NULL, this );
	zero->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::numero0 ), NULL, this );
	punto->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::puntoo ), NULL, this );
	uguale->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( calcolatrice::risultato ), NULL, this );
}

calcolatrice::~calcolatrice()
{
}
