
#include "..\Localization\Localization.h"
#define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING
#include "gtest/gtest.h"

TEST(GetCorrectLocale, returnGerman)
{

	std::string str = "";
	Localization* loc = new Localization();
	str = loc->getCurrentLocale();

	EXPECT_EQ(str, "DE");

}

TEST(TranslateString, returnAGermanString)
{
	std::string str = "Hello";
	Localization* loc = new Localization();
	str = loc->translateString(str);

	EXPECT_EQ(str, "Hello ,but now in German");
}
