#pragma once

#include "Application.h"

class DLL_EXPORT UI {
private:
	Application *_application;
	std::string leeted;

public:
	UI(Application *application);
	std::string EncryptMessage(std::string unLeeted);

	void SetLeeted(std::string leeted);
};


