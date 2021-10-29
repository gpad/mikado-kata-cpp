#include "Leeter.h"

std::string Leeter::Leet(std::string message)
{
  std::replace(begin(message), end(message), 'e', '3');
  return message;
}

std::string Underscore::Leet(std::string message)
{
  std::replace(begin(message), end(message), 'e', '_');
  return message;
}
