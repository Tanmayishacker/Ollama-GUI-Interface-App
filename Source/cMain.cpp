#include "cMain.h"
#include <curl/curl.h>
#include <wx/wx.h>
#include <wx/file.h>
#include <wx/textfile.h>
#include "MethodsDeclared.h"

cMain::cMain(const wxString& title) :wxFrame(nullptr,wxID_ANY,title)
{
	wxPanel* panel = new wxPanel(this);

	// The button
	wxButton* button = new wxButton(panel,wxID_ANY,"Button",wxPoint(150,50),wxSize(100,35));

	wxTextCtrl* fileLocationPath = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(500, 150), wxSize(200,-1));
	ReadFile(fileLocationPath->GetValue());



	//TODO: The Below method reads the file which stores the info about the models downloaded by the user using ollama.
	ModelSelector(panel);

	

}

void ModelSelector(wxPanel* panel_0)
{
	wxArrayString ModelChoices;

	wxChoice* modelchoice = new wxChoice(panel_0, wxID_ANY, wxPoint(450, 450), wxSize(200, 100), ModelChoices);

	// ModelChoices;
	modelchoice->Append("Sis");
	modelchoice->Append("Marry");
	modelchoice->Append("Me");

	//TODO: Add the ability to get the list of models present in the ollama models Directory;

}


void ReadFile(const wxString& filepath)
{
	
}