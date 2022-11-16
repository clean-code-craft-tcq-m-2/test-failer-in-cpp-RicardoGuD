#ifndef alerterTest_h
#define alerterTest_h

#include <assert.h>
#include "alertInCelcius.h"
#include "networkAlertStub.h"

void testFailureCount(float temperatureValues, int& alertFailureCount);

#endif
