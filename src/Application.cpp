#include "stdafx.h"

#include "Application.h"
#include "UI.h"
#include "Leeter.h"

void Application::Leet(std::string message, UI *ui)
{
  ui->SetLeeted(_leeter->Leet(message));
}

void Application::Run(int argc, char *argv[])
{
  auto algo = std::make_unique<Leeter>();
  if (argc == 3 && argv[2] == "Under")
  {
    algo = std::make_unique<Leeter>();
  }

  auto ui = new UI(new Application(algo.get()));
  std::cout << ui->LeetMessage(argv[1]);
  delete ui;
}
