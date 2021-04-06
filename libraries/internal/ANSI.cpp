#include <iostream>
#include <string>

std::string ANSI(std::string inputText, std::string txtColor,
                 std::string bgColor = "black") {

  std::string ANSIClear = "\033[0m";
  std::string ANSIDefaultTxtCol = "\x1B[91m";
  std::string ANSIDefaultBgCol = "\x1B[31m";

  std::string outputText(ANSIDefaultTxtCol + inputText + ANSIClear);

  /* size_t index = 0;

  while ((index = text.find(textColor, index)) != std::string::npos) {
    text.replace(index, textColor.length(), ANSICol);
    index += ANSICol.length();
  } */
  return (outputText);
}