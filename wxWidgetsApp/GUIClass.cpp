///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 30 2011)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUIClass.h"

///////////////////////////////////////////////////////////////////////////

GUIClass::GUIClass( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	menuBar = new wxMenuBar( 0 );
	fileMenu = new wxMenu();
	wxMenuItem* exitOption;
	exitOption = new wxMenuItem( fileMenu, wxID_ANY, wxString( wxT("Exit") ) + wxT('\t') + wxT("Alt-F4"), wxEmptyString, wxITEM_NORMAL );
	fileMenu->Append( exitOption );
	
	menuBar->Append( fileMenu, wxT("File") ); 
	
	this->SetMenuBar( menuBar );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("BUY"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer1->Add( m_staticText1, 0, wxALL, 5 );
	
	wxGridSizer* gSizer21;
	gSizer21 = new wxGridSizer( 2, 4, 0, 0 );
	
	m_staticText71 = new wxStaticText( this, wxID_ANY, wxT("$$$"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	gSizer21->Add( m_staticText71, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText81 = new wxStaticText( this, wxID_ANY, wxT("PRICE"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText81->Wrap( -1 );
	gSizer21->Add( m_staticText81, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText91 = new wxStaticText( this, wxID_ANY, wxT("FEE %"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText91->Wrap( -1 );
	gSizer21->Add( m_staticText91, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText101 = new wxStaticText( this, wxID_ANY, wxT("BTC BOUGHT"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText101->Wrap( -1 );
	gSizer21->Add( m_staticText101, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boughtBox = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer21->Add( boughtBox, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	buyPrice = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer21->Add( buyPrice, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	buyFee = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer21->Add( buyFee, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	btcBought = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer21->Add( btcBought, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	bSizer1->Add( gSizer21, 1, wxEXPAND, 5 );
	
	
	bSizer1->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("SELL"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer1->Add( m_staticText2, 0, wxALL, 5 );
	
	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 2, 4, 0, 0 );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("BTC SELLING"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	gSizer2->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("PRICE"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	gSizer2->Add( m_staticText8, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("FEE %"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	gSizer2->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("$$$"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	gSizer2->Add( m_staticText10, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	btcSelling = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( btcSelling, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	sellPrice = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( sellPrice, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	sellFee = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( sellFee, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	sellBox = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( sellBox, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	bSizer1->Add( gSizer2, 1, wxEXPAND, 5 );
	
	
	bSizer1->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText19 = new wxStaticText( this, wxID_ANY, wxT("Profit:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	bSizer12->Add( m_staticText19, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	profit = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( profit, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	bSizer1->Add( bSizer12, 1, wxEXPAND, 5 );
	
	
	bSizer1->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxHORIZONTAL );
	
	resetButton = new wxButton( this, wxID_ANY, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer23->Add( resetButton, 0, wxALL, 5 );
	
	exitButton = new wxButton( this, wxID_ANY, wxT("Exit"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer23->Add( exitButton, 0, wxALL, 5 );
	
	bSizer1->Add( bSizer23, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	statusBar = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( exitOption->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIClass::onExitSelected ) );
	resetButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::onResetSelected ), NULL, this );
	exitButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::onExitSelected ), NULL, this );
	statusBar->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( GUIClass::displayStartUp ), NULL, this );
}

GUIClass::~GUIClass()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIClass::onExitSelected ) );
	resetButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::onResetSelected ), NULL, this );
	exitButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIClass::onExitSelected ), NULL, this );
	statusBar->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( GUIClass::displayStartUp ), NULL, this );
	
}
