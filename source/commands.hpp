#pragma once

/* class Cmd {
public:
  Cmd(std::string name, std::string help){};
}; */

// define command functions
bool CheckCmds(std::string cmdInput, std::string cmdCheck);

std::string cmdExit = "exit";

std::string cmdHelp = "help";

std::string exitMsgs[6] = {"Goodbye",
                           "Bye",
                           "Cya",
                           "Take care",
                           "Have a nice day",
                           "Take a cookie or two"};