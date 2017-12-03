#include "SubGUIClass.h"

SubGUIClass::SubGUIClass( wxWindow* parent )
:
GUIClass( parent )
{

}

void SubGUIClass::onExitSelected( wxCommandEvent& event )
{
	//event that controls exit button
	int answer = wxMessageBox("Quit program?", "Confirm", wxYES_NO, this);
	if (answer == wxYES)
	{
		Close();
	}
}

void SubGUIClass::onResetSelected( wxCommandEvent& event )
{
	//event that controls the reset button

}

void SubGUIClass::displayStartUp( wxUpdateUIEvent& event )
{
	//controls the status bar with which turn it is

}
