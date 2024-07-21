#pragma once

#include <curl/curl.h>

int OllamaLibraryResultBack(CURLcode res) 
{
	CURL* curl;
	

	curl = curl_easy_init();

	return res;
}