#pragma once

#include <string>

class EncryptAlgorithm
{
public:
  virtual ~EncryptAlgorithm() {}
  virtual std::string Encrypt(std::string message) = 0;
};

class Leeter : public EncryptAlgorithm
{
public:
  std::string Encrypt(std::string message);
};

class Underscore : public EncryptAlgorithm
{
public:
  std::string Encrypt(std::string message);
};
