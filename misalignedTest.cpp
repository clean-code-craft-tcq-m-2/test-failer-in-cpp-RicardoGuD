#include "misalignedTest.h"

void test_colorPairNumbers()
{
    enum class majorColor {white,red,black,yellow,violet};
    enum class minorColor {blue,orange,green,brown,slate};

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

void test_stringAlignment(std::string rowString)
{
    rowString.erase(rowString.begin());

    assert(rowString.find("|") == firstSeparatorPosition);
    rowString.erase(rowString.begin()+rowString.find("|"));

    assert(rowString.find("|") == secondSeparatorPosition);
    rowString.erase(rowString.begin()+rowString.find("|"));

    assert(rowString.find("|") == thirdSeparatorPosition);
}