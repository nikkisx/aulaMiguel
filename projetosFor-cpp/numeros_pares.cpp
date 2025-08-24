#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Insira um numero positivo: ";
    cin >> num;

    for (int x = 2; x <= num; x += 2) {
        cout << x << " ";
    }

    return 0;
}
