#include <wx/wx.h>
#include "cMain.h"

cMain::cMain(const wxString& title) :wxFrame(nullptr,wxID_ANY,title)
{
	wxPanel* panel = new wxPanel(this);


	wxButton* button = new wxButton(panel,wxID_ANY,"Button",wxPoint(150,50),wxSize(100,35));
}