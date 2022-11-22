#ifndef printColorMap_h
#define printColorMap_h
#include <string>
#include <iostream>

const int columnSize = 14;
const int firstTwoChars = 2;
const int firstSeparatorPosition = 13;
const int secondSeparatorPosition = 26;
const int thirdSeparatorPosition = 39;

/******************************************************************************************
@Name: fillAligmentSpaces
@Description: add the neccesary blank space to align the columns
@parameter: int
@return value: std::string
*******************************************************************************************/
std::string fillAligmentSpaces(int numberofSpaces);

/******************************************************************************************
@Name: formCellString
@Description: this function forms the cell that contains the text for the pair number, major and minor colors 
@parameter: std::string
@return value: std::string
*******************************************************************************************/
std::string formCellString(std::string cellTextValue);

/******************************************************************************************
@Name: getColoPairNumber
@Description: returns the color pair number according to the colors passed as parameter 
@parameter: int&, int&
@return value: int
*******************************************************************************************/
int getColoPairNumber(int& majorColor, int& minorColor);

/******************************************************************************************
@Name: formColorMapString
@Description: This function create the complete row string, appending the columms formed by formCellString() function
@parameter: int&, char*, char*
@return value: std::string
*******************************************************************************************/
std::string formColorMapString(const int& colorNumber, const char* majorColor, const char* minorColor);

void printColorMap();

#endif