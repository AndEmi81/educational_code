/*
* Oggetto: Somma 2 numeri
* Author: Andrea Emili
* Last review: 2024/01/31
*/

#include <iostream>
using namespace std;

/*
* Funzione principale
*/
int main()
{
	int num1 = 0;
	int num2 = 0;
	int somma = 0;
	

	cout << "Inserisci il primo numero" << endl;
	cin >> num1;
	cout << "Inserisci il secondo numero" << endl;
	cin >> num2;
	somma =num1 + num2;

	cout << "Il risultato della somma dei due numeri e'  " << somma;
	while (1);
	return(0);
}/*endmain*/