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

std::string ANSIPrint(std::string print, std::string level = "text") {
  if (level == "text") {
    std::cout << "\033[38;2;245;245;245m" + print + "\033[0m" << std::endl;
  } else if (level == "info") {
    std::cout << "\033[38;2;161;214;255;48;2;38;50;60m" + print + "\033[0m"
              << std::endl;
  } else if (level == "warn") {
    std::cout << "\033[38;2;255;230;161;48;2;60;54;38m" + print + "\033[0m"
              << std::endl;
  } else if (level == "error") {
    std::cout << "\033[38;2;241;76;76;48;2;52;38;38m" + print + "\033[0m"
              << std::endl;
  } else {
    std::cout << "\033[38;2;255;0;255;48;2;0;0;0m" + print + "\033[0m"
              << std::endl;
  }

  /* std::cout << ANSIFormat(print) << std::endl; */
  return "";
}