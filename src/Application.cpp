#include "stdafx.h"

#include "Application.h"
#include "UI.h"
#include "Leeter.h"

void Application::Leet(std::string message, UI *ui)
{
  ui->SetLeeted(Leeter::Leet(message));
}

void Application::Run(int argc, char *argv[])
{
  auto ui = new UI();
  std::cout << ui->LeetMessage(argv[1]);
  delete ui;
}
