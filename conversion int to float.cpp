#include <iostream>
using namespace std;
int main() {
    
    int integerValue = 10;
    float floatValue;
    floatValue = integerValue;
    std::cout << "Integer Value: " << integerValue << std::endl;
    std::cout << "Float Value (after implicit conversion from integer): " << floatValue << std::endl;

    return 0;
}
