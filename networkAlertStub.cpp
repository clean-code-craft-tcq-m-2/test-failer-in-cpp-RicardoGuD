#include "networkAlertStub.h"

int networkAlertStub(float celcius) {
    std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
    int errorCode = 200;
    if (celcius >= 200) {
        errorCode = 500;
    }
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    return errorCode;
}
