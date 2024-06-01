#include "App.h"
#include "cMain.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(App);

bool App::OnInit() 
{
	cMain* mainFrame = new cMain("Ollama GUI");
	mainFrame->Show();
	mainFrame->Center();
	return true;
}