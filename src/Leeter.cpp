#include "Leeter.h"

std::string Leeter::Leet(std::string message)
{
  std::replace(begin(message), end(message), 'e', '3');
  return message;
}
