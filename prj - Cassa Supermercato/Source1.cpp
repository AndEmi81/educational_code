/*Utilizzo tre librerie*/
#include<iostream>
#include<string>
#include<cmath>


using namespace std;

/*Local Prototypes*/
int Somma(int num_1, int num_2);

/*
* Function: Main
*/
int main ()
{
	double numeri=0;
	double totale=0;
	double fattore=0;
	double Nradice=0;
	double radice=0;
	double percentuale=0;
	double minuendo=0;
	double LG=0;
	double VA=0;

	string lettera="";
	string risposta="";

	int Nnumeri=0;
	int i=0;

	cout << "CALCOLATRICE" << endl;

	do
	{
		cout << "Premi A per eseguire l'addizione" << endl;
		cout << "Premi S per eseguire la sottrazione" << endl;
		cout << "Premi M per eseguire la moltiplicazione" << endl;
		cout << "Premi D per eseguire la divisione" << endl;
		cout << "Premi R per calcolare la radice quadrata" << endl;
		cout << "Premi P per calcolare la percentuale" << endl;
		cout << "Scrivi LG per calcolare il logaritmo" << endl;
		cout << "Scrivi VA per calcolare il valore assoluto" << endl;

		do
		{
			cout << "Inserisci la lettera corretta in maiuscolo" << endl;
			cin >> lettera;

		} while (lettera != "A" && lettera != "S" && lettera != "M" && lettera != "D" && lettera != "R" && lettera != "P" && lettera != "LG" && lettera != "VA");

		if ((lettera == "A") || (lettera == "S") || (lettera == "M") || (lettera == "D"))
		{
			cout << "Quanti numeri vuoi inserire?" << endl;
			cin >> Nnumeri;
			do
			{
				if (Nnumeri < 0)
				{
					cout << "Reinserisci il numero corretto dei numeri da inserire" << endl;
					cin >> Nnumeri;
				}
			} while (Nnumeri < 0);

		} /*end if di verifica della selezione funzione*/

		if (lettera == "A")
		{/*Somma*/
			for (i; i < Nnumeri; i++)
			{
				cout << "Inserisci il " << i << "°" << " numero" << endl;
				cin >> numeri;
				totale = Somma(totale, numeri);
			}
		}
		else if (lettera == "S")
		{/*Sottrazione*/
			cout << "Inserisci il 1° numero della sottrazione" << endl;
			cin >> minuendo;
			totale = minuendo;
			for (i + 1; i < Nnumeri; i++)
			{
				cout << "Inserisci il " << i << "°" << " numero" << endl;
				cin >> numeri;
				if (numeri > totale)
				{
					do
					{
						cout << "La sottrazione non può avere risultato inferiore a 0, reinserisci il numero da sottrarre al minuendo" << endl;
					} while (numeri > totale);
				}
				totale = totale - numeri;
			}
		}

		cout << "Il risultato e' " << totale << endl;

		/*Richiesta di nuova esecuzione o terminazione*/
		cout << "Vuoi utilizzare di nuovo la calcolatrice?" << endl;
		cout << "si: continua / no: termina" << endl;
		cin >> risposta;
		do
		{
			if ((risposta != "si") && (risposta != "no"))
			{
				cout << "Rispondi alla domanda con si o no" << endl;
				cin >> risposta;
			}
		} while ((risposta != "si") && (risposta != "no"));

		numeri = 0;
		totale = 0;
		fattore = 0;
		Nradice = 0;
		radice = 0;
		percentuale = 0;
		minuendo = 0;
		LG = 0;
		VA = 0;

		numeri = 0;
		i = 0;
	} while (risposta == "si");
	

	return 0;
}



/* Function: Somma
 * Input: Due numeri interi (num_1 e num_2)
 * Output: Restituisce un intero
*/

int Somma(int num_1, int num_2)
{
	return(num_1 + num_2);
}/*end Somma*/