#include <iostream>
#include <cmath>
using namespace std;
 
int main () {
int secBetween;
int timeInHours;
int disInMiles;
int SEC_PER_HOUR;
int SOUND_SPEED;
// Get seconds between lightning and thunder
cout << "Enter a number";
cin >> secBetween;
timeInHours = secBetween * SEC_PER_HOUR;
disInMiles = SOUND_SPEED * timeInHours;
cout << "Miles from lightning strike:";
cout << disInMiles;

return 0;
}
