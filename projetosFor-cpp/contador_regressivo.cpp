#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Insira um numero positivo: ";
    cin >> num;

    for (int x = num; x >= 0; x--) {
        cout << x << " ";
    }
    return 0;
}

