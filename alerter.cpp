#include <iostream>
#include "test_alerter.h"

int alertFailureCount = 0;

int main() {
    testFailureCount(400.5, alertFailureCount);
    testFailureCount(303.5, alertFailureCount);
    assert(alertFailureCount == 1);

    std::cout << alertFailureCount << " alerts failed.\n";
    std::cout << "All is well (maybe!)\n";

    return 0;
}
