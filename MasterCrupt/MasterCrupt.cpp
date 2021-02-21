// LoadingDockPlanner.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <string>
#include <algorithm>

#include "UI.h"
#include "Application.h"


class Leeter {
public:
	static std::string Leet(std::string message);
};


UI::UI(Application * application) : _application(application)
{
}

inline std::string UI::EncryptMessage(std::string unLeeted)
{
	_application->Leet(unLeeted, this);
	return "Leeted: " + leeted;
}

inline void UI::SetLeeted(std::string leeted)
{
	this->leeted = leeted;
}

inline std::string Leeter::Leet(std::string message)
{
	std::replace(begin(message), end(message), 'e', '3');
	return message;
}

inline void Application::Leet(std::string message, UI * ui)
{
	ui->SetLeeted(Leeter::Leet(message));
}

inline void Application::Run(int argc, char * argv[])
{
	Application app;
	auto ui = new UI(&app);
	delete ui;
}
