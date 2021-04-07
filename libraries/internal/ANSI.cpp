#include <iostream>
#include <string>

#include "ANSI.hpp"

std::string ANSIFormat(std::string txt) {
  std::string ANSIInit = "\033[";
  std::string ANSIClear = "\033[0m";

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
}