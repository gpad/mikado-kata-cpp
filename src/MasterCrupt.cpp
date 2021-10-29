// LoadingDockPlanner.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <string>
#include <algorithm>

#include "UI.h"
#include "Application.h"

class Leeter
{
public:
	static std::string Leet(std::string message);
};

std::string UI::EncryptMessage(std::string unLeeted)
{
	application.Leet(unLeeted, this);
	return "Leeted: " + leeted;
}

void UI::SetLeeted(std::string leeted)
{
	this->leeted = leeted;
}

std::string Leeter::Leet(std::string message)
{
	std::replace(begin(message), end(message), 'e', '3');
	return message;
}

void Application::Leet(std::string message, UI *ui)
{
	ui->SetLeeted(Leeter::Leet(message));
}

void Application::Run(int argc, char *argv[])
{
	auto ui = new UI();
	delete ui;
}
