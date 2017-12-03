#ifndef __SubGUIClass__
#define __SubGUIClass__

/**
@file
Subclass of GUIClass, which is generated by wxFormBuilder.
*/

#include "GUIClass.h"

//// end generated include

/** Implementing GUIClass */
class SubGUIClass : public GUIClass
{
	protected:
		// Handlers for GUIClass events.
		void onExitSelected( wxCommandEvent& event );
		void onResetSelected( wxCommandEvent& event );
		void displayStartUp( wxUpdateUIEvent& event );
	public:
		/** Constructor */
		SubGUIClass( wxWindow* parent );
	//// end generated class members
		
};

#endif // __SubGUIClass__
