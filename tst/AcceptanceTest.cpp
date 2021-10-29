#include "pch.h"
#include "pch.h"
#include "MasterCrupt.h"
#include "UI.h"
#include "Leeter.h"

Leeter l;
Application a(&l);

class CaptureCout
{
	std::stringstream buffer;
	std::streambuf *prevcoutbuf;

public:
	CaptureCout()
	{
		prevcoutbuf = std::cout.rdbuf(buffer.rdbuf());
	}

	~CaptureCout()
	{
		std::cout.rdbuf(prevcoutbuf);
	}

	std::string getCout() { return buffer.str(); }
};

TEST(MasterCruptAT, testSecret)
{
	UI ui(&a);
	EXPECT_EQ("Leeted: S3cr3t", ui.LeetMessage("Secret"));
}

TEST(MasterCruptAT, SelectAlgoSpeak)
{
	CaptureCout c;
	char *dummy_args[] = {const_cast<char *>("MasterCrupt"), const_cast<char *>("Secret"), NULL};
	Application::Run(2, dummy_args);
	EXPECT_EQ(c.getCout(), "Leeted: S3cr3t");
}

TEST(MasterCruptAT, SelectAlgoUnder)
{
	CaptureCout c;
	char *dummy_args[] = {const_cast<char *>("MasterCrupt"), const_cast<char *>("Secret"), const_cast<char *>("Under"), NULL};
	Application::Run(3, dummy_args);
	EXPECT_EQ(c.getCout(), "Leeted: S_cr_t");
}

TEST(UnderscoreTest, encryptMessage)
{
	Underscore u;
	EXPECT_EQ(u.Encrypt("Secret"), "S_cr_t");
}