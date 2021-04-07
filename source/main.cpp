#include <iostream>
#include <string>

#include "../libraries/internal/ANSI_functions.hpp"

#include "commands.hpp"

int main() {
  std::string cmdInput = "";

  // escape sequences for commandline setup

  while (1) {
    std::cout << " > ";
    std::cin >> cmdInput;

    if (CheckCmds(cmdInput, cmdHelp)) {
      ANSIPrint(
          "calc:  Shoehjshfush ihsdhudh.\n"
          "math:  Sjdfhjdf hshfduh jijfsh shfh\n"
          "other: siho fshash fsahsa aiuhshsahfishaf iuhs aigfs afihfd si uhza",
          "info");
    } else if (CheckCmds(cmdInput, cmdExit)) {
      /* std::cout << "\x1B[31mGoodbye\033[0m"; */
      ANSIPrint("Goodbye", "error");
      break;
    } else if (CheckCmds(cmdInput, "print")) {
      ANSIPrint("$redThis prints really anything in RED!!!$clear", "warn");
    } else {
      ANSIPrint("There is no command called " + cmdInput, "warn");
    }

    cmdInput.clear();
  }

  return 0;
}