#include <cMain.h>
#include <wx/wx.h>
#include <curl/curl.h>
#include <CurlFunctions.h>
#include <nlohmann/json.hpp>
#include "MethodsDeclared.h"

using namespace std;
cMain::cMain(const wxString& title) :wxFrame(nullptr,wxID_ANY,title)
{
#pragma region Main_Panel
	wxBoxSizer* c_VPanel = new wxBoxSizer(wxVERTICAL);
	wxBoxSizer* c_HPanel = new wxBoxSizer(wxHORIZONTAL);
#pragma endregion

	wxArrayString ModelChoices;
	RModelListArray(ModelChoices);

#pragma region ErrorFinderCode
//
//	//try {
//	//	RModelListArray(ModelChoices);
//	//}
//	//catch (const std::exception& e) {
//	//	wxLogError("Error in RModelListArray: %s", e.what());
//	//	return;
//	//}
//
//	//if (ModelChoices.IsEmpty()) {
//	//	wxLogError("ModelChoices array is empty");
//	//	return;
//	//}
#pragma endregion

	wxButton* c_SendButton = new wxButton(this,wxID_ANY,"Send",wxDefaultPosition,wxSize(300,100));
	wxChoice* c_modelList = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxSize(300, 100), ModelChoices);


	c_VPanel->Add(c_modelList,0,wxALIGN_RIGHT);
	c_HPanel->Add(c_SendButton, 0, wxALIGN_TOP);
	c_VPanel->SetSizeHints(this);

	SetSizer(c_VPanel);
}