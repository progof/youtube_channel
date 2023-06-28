/* Youtube Channel: PROGOF */

#include <iostream>
using namespace std;

int main(){

bool isSunny = true;
bool isWarm = false;

if (isSunny && isWarm) {
    cout << "the weather is fine!" << endl;
} else if (isSunny || isWarm) {
    cout << "The weather is fine!" << endl;
} else {
    cout << "The weather is not good" << endl;
}

return 0;
}