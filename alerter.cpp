#include <iostream>
#include "alerterTest.h"

int main() {
    int alertFailureCount = 0;
    
    testFailureCount(303.5, alertFailureCount); //error code 200
    assert(alertFailureCount == 0);
    testFailureCount(391.9, alertFailureCount); //error code 200
    assert(alertFailureCount == 0);
    testFailureCount(392, alertFailureCount); //error code 500
    assert(alertFailureCount == 1);
    testFailureCount(392.1, alertFailureCount); //error code 500
    assert(alertFailureCount == 2);  
    testFailureCount(400.5, alertFailureCount); //error code 500
    assert(alertFailureCount == 3); 
    testFailureCount(100.5, alertFailureCount); //error code 200
    assert(alertFailureCount == 3); 
    std::cout << alertFailureCount << " alerts failed.\n";
    std::cout << "All is well\n";

    return 0;
}
