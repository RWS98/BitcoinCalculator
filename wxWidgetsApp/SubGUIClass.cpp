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
	int answer = wxMessageBox("Reset?", "Confirm", wxYES_NO, this);
	if (answer == wxYES)
	{
		boughtBox->Clear();
		buyPrice->Clear();
		buyFee->Clear();
		btcBought->Clear();
		btcSelling->Clear();
		sellPrice->Clear();
		sellFee->Clear();
		sellBox->Clear();
		profit->Clear();
	}
}

void SubGUIClass::displayStartUp( wxUpdateUIEvent& event )
{
	//controls the status bar with which turn it is

}
