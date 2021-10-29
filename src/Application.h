#pragma once

class UI;

class DLL_EXPORT Application
{
public:
	void Leet(std::string message, UI *ui);
	static void Run(int argc, char *argv[]);
};
