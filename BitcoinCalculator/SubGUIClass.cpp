#include "SubGUIClass.h"

SubGUIClass::SubGUIClass( wxWindow* parent )
:
GUIClass( parent )
{

}

void SubGUIClass::performCalculation( wxIdleEvent& event )
{
	amount = atof(boughtBox->GetValue());
	buyingPrice = atof(buyPrice->GetValue());
	buyingFee = atof(buyFee->GetValue())/100;

	bought = amount / buyingPrice;
	bought = bought - (bought * buyingFee);

	if (boughtBox->GetValue() == "" || buyPrice->GetValue() == "")
		output = "";
	else
		output = std::to_string(bought);

	btcBought->SetValue(output);
	btcSelling->SetValue(output);

	sellingPrice = atof(sellPrice->GetValue());
	sellingFee = atof(sellFee->GetValue()) / 100;

	sold = bought * sellingPrice;
	sold = sold - (sold * sellingFee);

	if (btcSelling->GetValue() == "" || sellPrice->GetValue() == "")
		total = "";
	else
		total = std::to_string(sold);

	sellBox->SetValue(total);

	all = sold - amount;

	if (btcBought->GetValue() == "" || sellBox->GetValue() == "")
		profits = "";
	else
		profits = std::to_string(all);

	profit->SetValue(profits);
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
