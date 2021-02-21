#include "pch.h"
#include "pch.h"
#include "../MasterCrupt/MasterCrupt.h"
#include "../MasterCrupt/ui.h"


TEST(MasterCruptAT, testSecret) {
	Application app;
	auto ui = new UI(&app);
	EXPECT_EQ("Leeted: S3cr3t", ui->EncryptMessage("Secret"));
}
