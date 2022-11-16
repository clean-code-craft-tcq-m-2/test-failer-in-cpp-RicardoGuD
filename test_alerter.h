#ifndef test_alerter_h
#define test_alerter_h

#include <assert.h>
#include "alertInCelcius.h"
#include "networkAlertStub.h"

void testFailureCount(float temperatureValues, int& alertFailureCount);

#endif
