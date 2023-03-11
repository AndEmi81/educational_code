/*
* Data: 2023/03/11
* Oggetto: Moltiplicazione 2 numeri
* Author: Andrea Emili
* Last review: 2023/03/11
* Version: 0.0.1
*/

#include <iostream>
using namespace std;

/*
* Funzione principale
*/
int main()
{
	float a, b, moltiplicazione;
	a = 0;
	b = 0;

	moltiplicazione = 0;

	cout << "Inserisci il primo numero" << endl;
	cin >> a;
	cout << "Inserisci il secondo numero" << endl;
	cin >> b;
	moltiplicazione = a * b;

	cout << "Il risultato della moltiplicazione è " << moltiplicazione;
	while (1);
	return(0);
}/*endmain*/