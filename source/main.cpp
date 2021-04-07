#include <iostream>
#include <string>

#include <get_terminal_info.hpp>

std::string print(std::string text, std::string textColor,
                  std::string bgColor = "black") {

  std::string ANSIClear = "\033[0m";

  std::string ANSICol("\x1B[31m" + text + ANSIClear);

  /* size_t index = 0;

  while ((index = text.find(textColor, index)) != std::string::npos) {
    text.replace(index, textColor.length(), ANSICol);
    index += ANSICol.length();
  } */
  return (ANSICol);
}

std::string cmdExit = "exit";
std::string cmdHelp = "help";

std::string exitMsgs[6] = {
    "Goodbye", "Bye", "Cya", "Take care", "Have a nice day"
    /* "Take a cookie or two" */
};

class cmd {
private:
  std::string Name;
  std::string helpMsg;

public:
  cmd(/* args */);
};

int main() {
  int width = 0, height = 0;
  GetTerminalSize(width, height);
  std::cout << "width=" << width << ", height=" << height << std::endl;

  std::string cmdInput = "";
  bool Run = true;

  do {
    std::cin >> cmdInput;

    if (cmdInput == cmdHelp) {
      std::cout << "calc:  Shoehjshfush ihsdhudh.\n"
                << "math:  Sjdfhjdf hshfduh jijfsh shfh\n"
                << "other: siho fshash fsahsa aiuhshsahfishaf iuhs aigfs "
                   "afihfd si uhza\n";
    } else if (cmdInput == cmdExit) {
      std::cout << "\x1B[31mGoodbye\033[0m";
      Run = false;
    } else if (cmdInput == "print") {
      std::cout << print("This prints really anything in many colors!!!", "red")
                << std::endl;
    } else {
      std::cout << "There is no command called " << cmdInput << std::endl;
    }

    cmdInput.clear();
  } while (Run == true);

  return 0;
}