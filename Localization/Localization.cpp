#include "Localization.h"
#include "..\boost_1_78_0\boost\locale.hpp"
#include <boost\locale.hpp>
#include <iostream>

using namespace boost::locale;

string Localization::getCurrentLocale() {
	return "DE";
}

void Localization::setCurrentLocale(string newLocale) {
	locale = newLocale;
}

string Localization::translateString(string context, string strToTranslate) {

	generator gen;

	gen.add_messages_path("C:\\Users\\jeffr\\source\\repos\\ActualFinalProject\\Localization");
	gen.add_messages_domain("messages");

	locale::global(gen("de_DE.UTF-8"));
	cout.imbue(std::locale());


	cout << translate("test", "working") << endl;
	strToTranslate = translate(context, strToTranslate);

	return strToTranslate;
}

Localization::Localization() {

}