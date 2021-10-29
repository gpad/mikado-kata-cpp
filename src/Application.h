#pragma once

#include "Leeter.h"

class UI;

class DLL_EXPORT Application
{
	EncryptAlgorithm *_leeter;

public:
	Application(EncryptAlgorithm *leeter) : _leeter(leeter) {}
	void Leet(std::string message, UI *ui);
	static void Run(int argc, char *argv[]);
};
