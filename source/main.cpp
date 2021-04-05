#include <iostream>

std::string cmdExit = "exit";
std::string cmdHelp = "help";

std::string exitMsgs[6] = {
  "Goodbye",
  "Bye",
  "Cya",
  "Take care",
  "Have a nice day"
  /* "Take a cookie or two" */
};

class cmd
{
private:
  std::string Name;
  std::string helpMsg;

public:
  cmd(/* args */);
};

int main() {
  std::string cmdInput = "";
  bool Run = true;

  do {
    std::cin >> cmdInput;

    if (cmdInput == cmdHelp) {
      std::cout 
      << "calc:  Shoehjshfush ihsdhudh.\n"
      << "math:  Sjdfhjdf hshfduh jijfsh shfh\n"
      << "other: siho fshash fsahsa aiuhshsahfishaf iuhs aigfs afihfd si uhza\n";
    } else if (cmdInput == cmdExit) {
      std::cout << "\x1B[31mGoodbye\033[0m";
      Run = false;
    } else {
      std::cout << "There is no command called" << cmdInput << std::endl;
    }
    
    cmdInput = "";
  } while (Run == true);

  return 0;
}