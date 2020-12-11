#include<iostream>//Que lea dos números A y B y nos indique si A es múltiplo de B.
#include<conio.h>

using namespace std;

int main()
{
	int A;
	int B;
	char resultado;

	cout << "ingrese el valor de A: ";
	cin >> A;
	cout << "ingrese el valor de B: ";
	cin >> B;
	
	
	resultado = (A % B==0) ? 'v' : 'f';

	cout << "A es multipo de B: " << resultado << endl;
	
	_getch();











}