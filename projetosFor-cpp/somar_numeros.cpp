#include <iostream>
using namespace std;

int main() {
    int soma = 0;
    int num;
    cout << "Insira um numero: ";
    cin >> num;

    for (int x = 1; x <= num; x++) {
        soma += x;
    }
      cout << "A soma e " << soma << endl;

    return 0;
}
