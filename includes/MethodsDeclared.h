#pragma once
#include <wx/wx.h>
#include <CurlFunctions.h>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

void RModelListArray(wxArrayString& m_modelListArray) 
{
	string modelList;
	OllamaLibraryResultBack(modelList);


	if (modelList.length() !=0) 
	{
		json j = json::parse(modelList);

		auto& models = j["models"];

		for (auto& model : models)
		{
			m_modelListArray.Add(model["name"].get<string>());
		}

	}
	
	else
	{
		wxMessageBox("You Don't have Ollama Installed OR the Ollama is not running in the background", "Error");
		
	}

}

