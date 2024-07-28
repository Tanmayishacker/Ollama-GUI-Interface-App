#pragma once

#include <curl/curl.h>
#include <wx/wx.h>

using namespace std;

size_t writeFunction(void* ptr, size_t size, size_t nmemb, string* data) {
	data->append((char*)ptr, size * nmemb);
	return size * nmemb;
}

void OllamaLibraryResultBack(string& responseData)
{
	// Main Variables
	CURL* curl = curl_easy_init();
	CURLcode result;
	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, "http://localhost:11434/api/tags");

		/* use a GET to fetch this */
		curl_easy_setopt(curl, CURLOPT_HTTPGET, 1L);

		// Set the callback function to process the received data
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeFunction);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &responseData);

		/* Perform the request */
		result = curl_easy_perform(curl);

		curl_easy_cleanup(curl);
	}

	else
	{
		wxMessageBox("Error","You Don't have Ollama Installed OR the Ollama is not running in the background");
	}
}