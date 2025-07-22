#include <assert.h>
#include <iostream>
using namespace std;

bool allParamsAreOk(float temperature, float soc, float chargeRate) {
  return (temperature >= 0 && temperature <= 45)
      && (soc >= 20 && soc <= 80)
      && (chargeRate <= 0.8);
}
bool batteryIsOk(float temperature, float soc, float chargeRate) {
  return allParamsAreOk(temperature, soc, chargeRate);
}

int main() {
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
