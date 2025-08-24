#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Insira um numero: ";
    cin >> num;

    for (int x = 1; x <= 10; x++) {
        cout << num << " x " << x << " = " << num * x << endl;
    }

    return 0;
}
