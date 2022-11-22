#ifndef alertInCelcius_h
#define alertInCelcius_h

#include <functional>

void alertInCelcius(float farenheit, int& failureCount, std::function<int(float)>& networkAlertFunc);

#endif
