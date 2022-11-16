#include <iostream>
#include <assert.h>
#include <functional>
//#include "alerterTest.h"

/*Condition added to be able to control the type of error code by changing the temperature*/
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

/*networkAlertStub passed as parameter so we can change it for the real function without change the production code*/
void alertInCelcius(float farenheit, int& failureCount, std::function<int(float)>& networkAlertFunc) {
    float celcius = (farenheit - 32) * 5 / 9;
    int returnCode = networkAlertFunc(celcius);
    if (returnCode != 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        failureCount += 0;
    }
}

/*testing function added to test properly the production code*/
void testFailureCount(float temperatureValueFarenheit, int& alertFailureCount) {
    std::function<int(float tempValFarenheit)> lNetworkAlertStub = nullptr;
    lNetworkAlertStub = std::bind(networkAlertStub, std::placeholders::_1);
    alertInCelcius(temperatureValueFarenheit, alertFailureCount, lNetworkAlertStub);
}

int main() {
    int alertFailureCount = 0;
    testFailureCount(400.5, alertFailureCount); //error code 500
    testFailureCount(303.5, alertFailureCount); //error code 200
    assert(alertFailureCount == 1); //one failure should be counted 

    std::cout << alertFailureCount << " alerts failed.\n";
    std::cout << "All is well (maybe!)\n";

    return 0;
}
