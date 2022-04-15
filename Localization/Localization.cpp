#include "pch.h"
#include "Localization.h"

string Localization::getCurrentLocale() {
	return "DE";
}

void Localization::setCurrentLocale(string newLocale) {
	locale = newLocale;
}

string Localization::translateString(string strToTranslate) {
	strToTranslate = strToTranslate + " ,but now in German";
	return strToTranslate;
}

Localization::Localization() {

}