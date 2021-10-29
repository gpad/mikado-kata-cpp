#include "stdafx.h"

#include "Application.h"
#include "UI.h"
#include "Leeter.h"

void Application::Leet(std::string message, UI *ui)
{
  ui->SetLeeted(_leeter->Leet(message));
}

bool isUnder(int argc, char *argv[])
{
  return (argc == 3 && argv[2] == std::string("Under"));
}

void Application::Run(int argc, char *argv[])
{
  std::unique_ptr<EncryptAlgorithm> algo = isUnder(argc, argv) ? std::unique_ptr<EncryptAlgorithm>{std::make_unique<Underscore>()} : std::unique_ptr<EncryptAlgorithm>{std::make_unique<Leeter>()};

  auto ui = new UI(new Application(algo.get()));
  std::cout << ui->LeetMessage(argv[1]);
  delete ui;
}
