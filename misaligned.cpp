#include <iostream>
#include "misalignedTest.h"

int main() {
    printColorMap();
    test_stringAlignment(formColorMapString(1,"white", "blue"));
    test_stringAlignment(formColorMapString(7,"red", "orange"));
    test_stringAlignment(formColorMapString(13,"black", "green"));
    test_stringAlignment(formColorMapString(19,"yellow", "brown"));
    test_stringAlignment(formColorMapString(25,"violet", "slate"));
    test_colorPairNumbers();
    std::cout << "All is well\n";
    return 0;
}