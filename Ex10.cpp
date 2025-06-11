#include <iostream>
using namespace std;

int main() {
    float cotacao, dolares;
    cout << "Digite a cotacao do dolar e a quantidade: ";
    cin >> cotacao >> dolares;
    cout << "Reais: " << cotacao * dolares << endl;
    return 0;
}
