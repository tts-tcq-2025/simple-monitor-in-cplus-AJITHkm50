#include <assert.h>
#include <iostream>
using namespace std;

// Function to check temperature condition
bool isTemperatureOk(float temperature) {
    return (temperature >= 0 && temperature <= 45);
}

// Function to check state of charge (SOC) condition
bool isSocOk(float soc) {
    return (soc >= 20 && soc <= 80);
}

// Function to check charge rate condition
bool isChargeRateOk(float chargeRate) {
    return (chargeRate <= 0.8);
}

// Main function to check all parameters
bool allParamsAreOk(float temperature, float soc, float chargeRate) {
    return isTemperatureOk(temperature) && isSocOk(soc) && isChargeRateOk(chargeRate);
}

bool batteryIsOk(float temperature, float soc, float chargeRate) {
    return allParamsAreOk(temperature, soc, chargeRate);
}

int main() {
    assert(batteryIsOk(25, 70, 0.7) == true);
    assert(batteryIsOk(50, 85, 0) == false);
    assert(batteryIsOk(30, 50, 0.9) == false);
    assert(batteryIsOk(-5, 50, 0.5) == false);
}
