#include "stdafx.h"
#include "UI.h"

std::string UI::LeetMessage(std::string unLeeted)
{
  application.Leet(unLeeted, this);
  return "Leeted: " + leeted;
}

void UI::SetLeeted(std::string leeted)
{
  this->leeted = leeted;
}
