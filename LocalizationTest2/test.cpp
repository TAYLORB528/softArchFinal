#include "pch.h"
#include "..\Localization\Localization.h"

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
