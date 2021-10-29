#pragma once

#include <string>

class EncryptAlgorithm
{
public:
  virtual ~EncryptAlgorithm() {}
  virtual std::string Leet(std::string message) = 0;
};

class Leeter
{
public:
  static std::string Leet(std::string message);
};

class Underscore
{
public:
  std::string Encrypt(std::string message);
};
