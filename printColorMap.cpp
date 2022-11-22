#include "printColorMap.h"

std::string headerString = "| Pair Number | Major Color | Minor Color |";
std::string separatorString = "-------------------------------------------";

std::string fillAligmentSpaces(int numberofSpaces)
{
    std::string aligmentSpaces;
    for (int i = 0; i < numberofSpaces; i++)
    {
        aligmentSpaces.append(" ");
    }
    return aligmentSpaces;
}

std::string formCellString(std::string cellTextValue)
{
    std::string cellString;
    cellString = "| " + cellTextValue + fillAligmentSpaces(columnSize - cellTextValue.size()- firstTwoChars);
    return cellString;
}

int getColoPairNumber(int& majorColor, int& minorColor) {
    return ((majorColor) * 5) + minorColor + 1;
}

std::string formColorMapString(const int& colorNumber, const char* majorColor, const char* minorColor)
{
    std::string colorNumberStr = std::to_string(colorNumber);
    std::string majorColorStr = majorColor;
    std::string minorColorStr = minorColor;
   
    std::string completeRowString = formCellString(colorNumberStr) + formCellString(majorColorStr) + formCellString(minorColorStr) + "|" + "\n";
    
    return completeRowString;
}

void printColorMap() {
    const char* majorColor[] = { "White", "Red", "Black", "Yellow", "Violet" };
    const char* minorColor[] = { "Blue", "Orange", "Green", "Brown", "Slate" };
    int colorNumber = 0;
    int i = 0, j = 0;
    std::cout << separatorString << std::endl;
    std::cout << headerString << std::endl;
    std::cout << separatorString << std::endl;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            colorNumber = getColoPairNumber(i, j);
            std::cout << formColorMapString(colorNumber, majorColor[i], minorColor[j]);
            std::cout << separatorString << std::endl;
        }
    }
}