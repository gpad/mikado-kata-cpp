#include "pch.h"
#include "pch.h"
#include "MasterCrupt.h"
#include "UI.h"

TEST(MasterCruptAT, testSecret)
{
	auto ui = new UI();
	EXPECT_EQ("Leeted: S3cr3t", ui->LeetMessage("Secret"));
}
