/* Youtube Channel: PROGOF */

#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Type your name: ";
    getline(cin, name);
    std::cout << "Hi, " << name << "!" << std::endl;
    return 0;
}