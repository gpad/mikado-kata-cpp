#include "Leeter.h"

std::string Leeter::Encrypt(std::string message)
{
  std::replace(begin(message), end(message), 'e', '3');
  return message;
}

std::string Underscore::Encrypt(std::string message)
{
  std::replace(begin(message), end(message), 'e', '_');
  return message;
}
