#pragma once

#include "Application.h"

class DLL_EXPORT UI {
private:
	Application application;
	std::string leeted;

public:
	std::string EncryptMessage(std::string unLeeted);

	void SetLeeted(std::string leeted);
};


