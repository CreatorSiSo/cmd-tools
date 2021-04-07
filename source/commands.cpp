#include <iostream>

bool CheckCmds(std::string cmdInput, std::string cmdCheck) {
  if (cmdInput == cmdCheck) {
    return true;
  } else {
    return false;
  }
}