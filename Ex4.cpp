#include <iostream>
using namespace std;

int main()
{
	double base;
	double altura;
	double area;
	
	cout << " informe a base do triangulo: ";
	cin >> base;
	
	cout << "informe a altura do triangulo : ";
	cin >> altura;
	
	area = ( base * altura ) / 2;
	
	cout << " A area calculada do triangulo foi " << area << endl;
	
	return 0;
	
}
