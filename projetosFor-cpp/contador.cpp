#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Inisira um numero positivo: ";
    cin >> num;

    for(int x = 1; x <= num; x++) { 
        cout << x << " ";
    }
    return 0;
}
