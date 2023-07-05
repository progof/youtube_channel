/* Youtube Channel: PROGOF */

#include <iostream>
#include <string>
using namespace std;

/*
int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "My name is Progof". String values are surrounded by double quotes
bool - stores values with two states: true or false
*/

int main()
{
    // type variableName = value;
    int myInteger = 10;
    double myDouble = 3.14;
    char myCharacter = 'A';
    string myString = "My name is Progof";
    bool myBoolean = true; // true = 1 and false = 0

    cout << "myInteger: " << myInteger << endl;
    cout << "myDouble: " << myDouble << endl;
    cout << "myCharacter: " << myCharacter << endl;
    cout << "myString: " << myString << endl;
    cout << "myBoolean: " << myBoolean << endl;

    return EXIT_SUCCESS; // #define EXIT_SUCCESS 0
}