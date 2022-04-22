#pragma once


#ifdef LOCALIZATION_EXPORTS
#define LOCALIZATION_API __declspec(dllexport)
#else
#define LOCALIZATION_API __declspec(dllimport)
#endif

#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

class LOCALIZATION_API Localization
{
public:
	string locale;


	Localization();

	string getCurrentLocale();
	void setCurrentLocale(string);

	string translateString(string, string);

};
