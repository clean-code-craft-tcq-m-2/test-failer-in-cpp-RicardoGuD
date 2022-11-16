#include "alertInCelcius.h"

void alertInCelcius(float farenheit, int& failureCount, std::function<int(float)>& networkAlertFunc){
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
