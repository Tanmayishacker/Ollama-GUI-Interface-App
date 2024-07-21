#include <cMain.h>
#include <wx/wx.h>
#include <wx/dir.h>
#include <curl/curl.h>
#include <nlohmann/json.hpp>
#include "MethodsDeclared.h"

cMain::cMain(const wxString& title) :wxFrame(nullptr,wxID_ANY,title)
{
	// Initialising a panel.
	wxPanel* panel = new wxPanel(this);

	// The button
	wxButton* button = new wxButton(panel,wxID_ANY,"Button",wxPoint(150,50),wxSize(100,35));

	



	//TODO: To add the ability to create a button which leads to create a wxdialog box for taking input the IP for ollama.

	//auto* TakeIP = new wxButton(panel, wxID_ANY,"IP", wxPoint(150, 50), wxSize(100, 35));
	//auto* textView = new wxStaticText(this,wxID_ANY,"Show Dialog", wxPoint(200, 50), wxSize(100, 35));



	/*TakeIP->Bind(wxEVT_BUTTON, [this, textView](wxCommandEvent& event)
			{
				auto result = wxGetTextFromUser("Enter The IP");
				textView->SetLabel(result);
			}

		);*/






	//TODO: The Below method reads the file which stores the info about the models downloaded by the user using ollama.
	
	

}


void ModelSelector(wxPanel* panel_0,const wxString& folderPath)
{
	wxArrayString* ModelChoices = new wxArrayString();


	wxChoice* modelChoice = new wxChoice(panel_0, wxID_ANY, wxPoint(450, 450), wxSize(200, 100), *ModelChoices);

	
	// ModelChoices;
	modelChoice->Append("Sis");
	modelChoice->Append("Marry");
	modelChoice->Append("Me");

	//TODO: Add the ability to get the list of models present in the Ollama models Directory;

	

}

