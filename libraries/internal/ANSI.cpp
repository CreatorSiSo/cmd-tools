#include <iostream>
#include <string>

#include "ANSI.hpp"

std::string ANSIFormat(std::string txt) {
  std::string ANSIInit = "\x1b[";
  std::string ANSIClear = "\x1b[0m";

  std::string DefaultCol = "38;2;" + ANSIDefaultCol;
  std::string DefaultBgCol = "48;2;" + ANSIDefaultBgCol;

  txt = ANSIInit + DefaultCol + "m" + txt + ANSIClear;

  /* + ";" + ANSIDefaultBgCol */
  /*
  size_t index = 0;

  while ((index = txt.find(Color, index)) != std::string::npos) {
    txt.replace(index, Color.length(), ANSIDefaultCol);
    index += ANSIDefaultCol.length();
  }
  */

  return (txt);
}

std::string ANSIPrint(std::string print, std::string level = "text") {
  if (level == "text") {
    print = "\x1b[38;2;245;245;245m txt   " + print + "\x1b[0m";
  } else if (level == "info") {
    print = "\x1b[38;2;161;214;255;48;2;38;50;60m inf   " + print + "\x1b[0m";
  } else if (level == "warn") {
    print = "\x1b[38;2;255;230;161;48;2;60;54;38m wrn   " + print + "\x1b[0m";
  } else if (level == "error") {
    print = "\x1b[38;2;241;76;76;48;2;52;38;38m err   " + print + "\x1b[0m";
  } else {
    print = "\x1b[38;2;255;0;255;48;2;0;0;0m NaT   " + print + "\x1b[0m";
  }

  std::cout << print /* ANSIFormat(print) */ << std::endl;
  return "";
}