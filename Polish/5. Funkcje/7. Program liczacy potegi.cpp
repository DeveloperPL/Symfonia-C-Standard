// Program liczacy potegi.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


long potega(int stopien, long liczba);
/**********************************************************/
int main()
{
	int pocz, koniec;
	cout << "Program na obliczanie poteg liczb clakowitych z zadanego przedzialu \n"
		<< "Podaj poczatek przedzialu: ";
	cin >> pocz;
	cout << endl << "Podaj koniec przedzialu: ";
	cin >> koniec;
	
	//Petla drukujaca wyniki z zadanego przedzialu
	for (int i = pocz; i <= koniec; i++)
	{
		cout << i
			<< " do kwadratu = "
			<< potega(2, i)
			<< " a do szecianu = "
			<< potega(3, i) << endl;
	}
	system("pause");
	return 0;
}
/**************************************************************/

long potega(int stopien, long liczba)
{
	long wynik = liczba;
	for (int i = 1; i < stopien; i++)
	{
		wynik = wynik * liczba;
		//mozna tez zapisac to samo jako: wynik *= liczba;
	}
	return wynik;
}
