#ifndef __SubGUIClass__
#define __SubGUIClass__

/**
@file
Subclass of GUIClass, which is generated by wxFormBuilder.
*/

#include "GUIClass.h"
#include <string>

//// end generated include

/** Implementing GUIClass */
class SubGUIClass : public GUIClass
{
	protected:
		// Handlers for GUIClass events.
		void performCalculation( wxIdleEvent& event );
		void onExitSelected( wxCommandEvent& event );
		void onResetSelected( wxCommandEvent& event );
		void displayStartUp( wxUpdateUIEvent& event );
	public:
		/** Constructor */
		SubGUIClass( wxWindow* parent );
	//// end generated class members
	private:
		double amount = 0;
		double finalAmount = 0;
		double buyingPrice = 0;
		double sellingPrice = 0;
		double buyingFee = 0;
		double sellingFee = 0;
		double bought = 0;
		double sold = 0;
		double all = 0;
		std::string output, total, profits;
};

#endif // __SubGUIClass__
