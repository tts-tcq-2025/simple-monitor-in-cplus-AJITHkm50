#include <assert.h>
#include <iostream>
using namespace std;

bool batteryIsOk(float temperature, float soc, float chargeRate) {
  
  const bool isTemperatureOk = (temperature >= 0 && temperature <= 45);
  const bool isSocOk = (soc >= 20 && soc <= 80);
  const bool isChargeRateOk = (chargeRate <= 0.8);

  const bool status = isTemperatureOk && isSocOk && isChargeRateOk;

  cout << (isTemperatureOk ? "" : "Temperature out of range!\n");
  cout << (isSocOk ? "" : "State of Charge out of range!\n");
  cout << (isChargeRateOk ? "" : "Charge Rate out of range!\n");

  return status;
  
}

int main() {
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
