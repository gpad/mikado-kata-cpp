#pragma once

#include "Application.h"

class DLL_EXPORT UI
{
private:
	Application *_application;
	std::string leeted;

public:
	UI(Application *application) : _application(application) {}
	std::string LeetMessage(std::string unLeeted);

	void SetLeeted(std::string leeted);
};
