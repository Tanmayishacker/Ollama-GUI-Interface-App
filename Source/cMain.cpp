#include <cMain.h>
#include <wx/wx.h>
#include <wx/splitter.h>
#include <wx/gbsizer.h>
#include <MethodsDeclared.h>
#include <nlohmann/json.hpp>

using namespace std;
cMain::cMain(const wxString& title) :wxFrame(nullptr,wxID_ANY,title)
{
#pragma region Main_Panel 
	wxSplitterWindow* c_MainPanelSplitter = new wxSplitterWindow(this, wxID_ANY,wxDefaultPosition,wxDefaultSize,wxSP_BORDER | wxSP_LIVE_UPDATE);

	wxPanel* c_ChatPanel = new wxPanel(c_MainPanelSplitter);
	wxPanel* c_ChatHistoryPanel = new wxPanel(c_MainPanelSplitter);

	c_ChatPanel->SetBackgroundColour(wxColor(48, 48, 48));
	c_ChatHistoryPanel->SetBackgroundColour(wxColor(24, 24, 24));

	c_MainPanelSplitter->SetSashGravity(0);
	c_MainPanelSplitter->SetMinimumPaneSize(FromDIP(300));

	c_MainPanelSplitter->SplitVertically(c_ChatHistoryPanel, c_ChatPanel);
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

	//wxButton* c_SendButton = new wxButton(this,wxID_ANY,"Send",wxDefaultPosition,wxSize(100,50));
	//wxChoice* c_modelList = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxSize(300, 100), ModelChoices);

}