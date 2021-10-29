#pragma once

#include <string>

class EncryptAlgorithm
{
public:
  virtual ~EncryptAlgorithm() {}
  virtual std::string Leet(std::string message) = 0;
};

class Leeter : public EncryptAlgorithm
{
public:
  std::string Leet(std::string message);
};

class Underscore : public EncryptAlgorithm
{
public:
  std::string Leet(std::string message);
};
