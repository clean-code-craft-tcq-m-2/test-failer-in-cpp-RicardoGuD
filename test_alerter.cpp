#include "alerterTest.h"

void testFailureCount(float temperatureValueFarenheit, int& alertFailureCount) {

	std::function<int(float tempValFarenheit)> lNetworkAlertStub = nullptr;
	lNetworkAlertStub = std::bind(networkAlertStub, std::placeholders::_1);

	alertInCelcius(temperatureValueFarenheit, alertFailureCount, lNetworkAlertStub);

}
