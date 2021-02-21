#include "pch.h"
#include "../StrangerEons/StrangerEons.h"
#include "../StrangerEons/ui.h"


TEST(MasterCruptAT, testSecret) {
	auto ui = new UI();
	EXPECT_EQ("Leeted: S5cr5t", ui->EncryptMessage("Secret"));
}
