#include <iostream>
#include <string>

std::string ANSI(std::string txt, std::string Color = "white",
                 std::string bgColor = "black") {

  std::string ANSIClear = "\033[0m";
  std::string ANSIDefaultCol = "\x1B[91m";
  std::string ANSIDefaultBgCol = "\x1B[31m";

  std::string outputText(ANSIDefaultCol + txt + ANSIClear);

  /* size_t index = 0;

  while ((index = text.find(textColor, index)) != std::string::npos) {
    text.replace(index, textColor.length(), ANSICol);
    index += ANSICol.length();
  } */
  return (outputText);
}