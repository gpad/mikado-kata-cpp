#pragma once

#include "Leeter.h"

class UI;

class DLL_EXPORT Application
{
	Leeter *_leeter;

public:
	Application(Leeter *leeter) : _leeter(leeter) {}
	void Leet(std::string message, UI *ui);
	static void Run(int argc, char *argv[]);
};
