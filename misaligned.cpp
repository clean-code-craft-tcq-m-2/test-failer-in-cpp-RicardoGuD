#include <iostream>
#include <assert.h>
#include <string>

int getColoPairNumber(int& majorColor, int& minorColor) {
    return (majorColor * 5) + minorColor;
}

std::string formColorMapString(int& colorNumber, const char* majorColor, const char* minorColor)
{
    std::string completeRowString = std::to_string(colorNumber) + " | " + majorColor +" | " + minorColor +"\n";
    return completeRowString;
}

int printColorMap() {
    const char* majorColor[] = { "White", "Red", "Black", "Yellow", "Violet" };
    const char* minorColor[] = { "Blue", "Orange", "Green", "Brown", "Slate" };
    int colorNumber = 0;
    int i = 0, j = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            colorNumber = getColoPairNumber(i, j);
            std::cout << formColorMapString(colorNumber, majorColor[i], minorColor[i]);
        }
    }
    return i * j;
}

void test_colorPairNumber()
{
    enum class majorColor {white = 1,red=2,black=3,yellow=4,violet=5};
    enum class minorColor {blue = 1,orange=2,green=3,brown=4,slate=5};

    int expectedColoPairNumber = 1;
    for (int i = static_cast<int>(majorColor::white);
             i < static_cast<int>(majorColor::violet);
             i++)
    {
        for (int j = static_cast<int>(minorColor::blue);
                 j < static_cast<int>(minorColor::slate);
                 j++)
        {
            assert(getColoPairNumber(i, j) == expectedColoPairNumber);
            expectedColoPairNumber++;
        }
        expectedColoPairNumber++;
    }
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    test_colorPairNumber();
    std::cout << "All is well (maybe!)\n";
    return 0;
}
