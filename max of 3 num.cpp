#include <iostream>
using namespace std;
int main() {
    double num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    double max;

    if (num1 >= num2 && num1 >= num3) {
        max = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        max = num2;
    } else {
        max = num3;
    }
    cout << "The maximum of " << num1 << ", " << num2 << ", and " << num3 << " is: " << max << endl;

    return 0;
}
