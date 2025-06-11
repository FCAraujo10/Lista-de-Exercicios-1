#include <iostream>
using namespace std;

int main() {
    float milhas;
    cout << "Digite as milhas maritimas: ";
    cin >> milhas;
    cout << "Quilometros: " << (milhas * 1852) / 1000 << endl;
    return 0;
}
