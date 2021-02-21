#include "pch.h"
#include "pch.h"
#include "../MasterCrupt/MasterCrupt.h"
#include "../MasterCrupt/ui.h"


TEST(MasterCruptAT, testSecret) {
	auto ui = new UI();
	EXPECT_EQ("Leeted: S3cr3t", ui->EncryptMessage("Secret"));
}
