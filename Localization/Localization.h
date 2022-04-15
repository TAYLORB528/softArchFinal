#pragma once

#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

class Localization
{
public:
	string locale;


	Localization();

	string getCurrentLocale();
	void setCurrentLocale(string);

	string translateString(string);

};
