#include <cMain.h>
#include <wx/wx.h>
#include <wx/dir.h>
#include <wx/textfile.h>
#include "MethodsDeclared.h"

cMain::cMain(const wxString& title) :wxFrame(nullptr,wxID_ANY,title)
{
	// Initialising a panel.
	wxPanel* panel = new wxPanel(this);

	// The button
	wxButton* button = new wxButton(panel,wxID_ANY,"Button",wxPoint(150,50),wxSize(100,35));

	wxTextCtrl* FolderPath = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(500, 150), wxSize(200,-1));

	wxDir* directoryPathSpecifier = new wxDir(FolderPath->GetValue());


	//TODO: The Below method reads the file which stores the info about the models downloaded by the user using ollama.
	ModelSelector(panel,directoryPathSpecifier, FolderPath->GetValue());

	

}


void ModelSelector(wxPanel* panel_0, wxDir* dirPath,const wxString& folderPath)
{
	wxArrayString* ModelChoices = new wxArrayString();


	if (dirPath->HasSubDirs())
	{
		dirPath->GetAllFiles(folderPath,ModelChoices);

		for (size_t i = 0; i < ModelChoices->GetCount(); i++)
		{

		}
	}

	else
	{
		wxMessageBox("Oops! there's no Model files in this directory \n Please Make sure u have given the right path.");
	}

	wxChoice* modelChoice = new wxChoice(panel_0, wxID_ANY, wxPoint(450, 450), wxSize(200, 100), *ModelChoices);
	
	// ModelChoices;
	modelChoice->Append("Sis");
	modelChoice->Append("Marry");
	modelChoice->Append("Me");

	//TODO: Add the ability to get the list of models present in the Ollama models Directory;

}