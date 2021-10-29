#include "pch.h"
#include "pch.h"
#include "MasterCrupt.h"
#include "UI.h"
#include "Leeter.h"

Leeter l;
Application a(&l);

TEST(MasterCruptAT, testSecret)
{
	UI ui(&a);
	EXPECT_EQ("Leeted: S3cr3t", ui.LeetMessage("Secret"));
}

TEST(MasterCruptAT, SelectAlgoSpeak)
{
	UI ui(&a);
	char *dummy_args[] = {const_cast<char *>("Secret"), const_cast<char *>("speak"), NULL};
	Application::Run(2, dummy_args);
	EXPECT_EQ("Leeted: S3cr3t", ui.LeetMessage("Secret"));
}

// TEST(MasterCruptAT, SelectAlgoUnder)
// {
// 	UI ui;
// 	char *dummy_args[] = {const_cast<char *>("MasterCrupt"), const_cast<char *>("Secret"), const_cast<char *>("Under"), NULL};
// 	Application::Run(2, dummy_args);
// 	EXPECT_EQ("Leeted: S_cr_t", ui.LeetMessage("Secret"));
// }

TEST(UnderscoreTest, encryptMessage)
{
	Underscore u;
	EXPECT_EQ(u.Encrypt("Secret"), "S_cr_t");
}