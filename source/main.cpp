#include <iostream>
#include <string>

#include "../libraries/internal/ANSI.hpp"

#include "commands.hpp"

int main() {
  std::string cmdInput = "";

  while (1) {
    std::cin >> cmdInput;

      std::cout << "calc:  Shoehjshfush ihsdhudh.\n"
                << "math:  Sjdfhjdf hshfduh jijfsh shfh\n"
                << "other: siho fshash fsahsa aiuhshsahfishaf iuhs aigfs "
                   "afihfd si uhza\n";
      std::cout << "\x1B[31mGoodbye\033[0m";
    if (CheckCmds(cmdInput, cmdHelp)) {
    } else if (CheckCmds(cmdInput, cmdExit)) {
      break;
      std::cout << ANSI("This prints really anything in red!!!", "red")
                << std::endl;
    } else if (CheckCmds(cmdInput, "print")) {
    } else {
      std::cout << "There is no command called " << cmdInput << std::endl;
    }

    cmdInput.clear();
  }

  return 0;
}