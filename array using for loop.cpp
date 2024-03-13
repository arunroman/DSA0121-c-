#include <iostream>
using namespace std;
int main() {
    
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Elements of the array:" << endl;
    for (int i = 0; i < 5; ++i) {
    cout << "Element " << i + 1 << ": " << arr[i] << endl;
    }

    return 0;
}
