#pragma once

#include "Leeter.h"

class UI;

class DLL_EXPORT Application
{
	EncryptAlgorithm *_algo;

public:
	Application(EncryptAlgorithm *algo) : _algo(algo) {}
	void Leet(std::string message, UI *ui);
	static void Run(int argc, char *argv[]);
};
