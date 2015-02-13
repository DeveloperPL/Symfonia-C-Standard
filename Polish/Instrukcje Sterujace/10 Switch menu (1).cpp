// 10 Switch menu (1).cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int ktory;
	double cale;
	double centymetry;
	double przelicznik2 = 2.54;
	int stopy;		//do przechowywania danej wejsciowej (DEFINICJA zmiennej)
	double metry;	//do przypisywania wyniku (DEFINICJA zmiennej)
	double przelicznik = 0.3; //przelicznik stop na metry
	int x;//wiek do progremu sprawdzajacego pelnoletnosc
	bool pelnoletni;
	int wysokosc, punkty_karne; //to samo co int wysokosc; int punkty_karene;
	int wiek;
	int obliczanie_wieku;
	int ile;
	char litera;
	int ile_pasazerow; //liczba pasazerow
	int y; //liczba obiegow petli
	cout << "\nKtory program chcesz wywolac?" << endl << "nr 1 (Witaj Swiecie)\nnr 2(Przeliczanie stop na metry)\nnr 3(Przeliczanie cali na centymetry)\nnr 4 (Pelnoletni czy nie)\nnr 5 (Punkty karne i wysokosc lotu) \nnr 6 (Sprawczamy wiek else if)\nnr 7 ( Gwiazdki kapitana (Petla while)\nnr 8 Petla do while \nnr 9 (liczba pasazerow - petla for)" << endl << "Podaj numer: ";
	cin >> ktory;


	switch (ktory)
	{
		case 1:
			cout << "Hello World";
			cout << "\nNowa linia\n";
			cout << "\nSposob 2:\n";
			cout << "Hello World" << "\nNowa Linia\n"; //zlozylismy instrukcje i zapisalismy krocej
			break;
		case 2:
			//----------PAMIETAJ!!!! w tym przypadku deinicja jest rownoczesnie deklaracja ale nie odwrotnie--------//
			

			cout << "Podaj wysokosc w stopach: ";
			cin >> stopy;					//przyjecie danej z klawiatury
			metry = stopy  * przelicznik;	//wlasciwe przeliczenie

			cout << "\n";	//to samo co cout << end;


			//----------WYPISYWANIE WYNIKOW--------------------//

			cout << stopy << " stop to jest: " << metry << " metrow\n";
				break;
		case 3:
			//DEKLARACJA MOWI O TYM JAKIEGO TYPU JEST OBIEKT

			
			cout << "Podaj wartosc w calach: ";
			cin >> cale; //wpisujemy cale

			//-------liczymy-------/
			centymetry = cale * przelicznik2;

			//------wypisujemy wynik ----/
			cout << cale << " cali to: " << centymetry << " centrymetrow" << endl;

				break;

		case 4:
		

			cout << "Podaj swoj wiek: ";
			cin >> x;

			cout << "\nPodano wiek: " << x << endl;

			if (x >= 18)
				cout << "\nTa osoba jest pelnoletnia\n";
			else
				cout << "\nTa osoba jest niepelnoletnia\n";


			break;
		case 5:
			
			cout << "Na jakiej wysokosci lecimy (podaj w metrach): ";
			cin >> wysokosc;

			/*-------Rozwazamy sytuacje-----------*/
			if (wysokosc < 500)
			{
				cout << endl << wysokosc << " metrow to za nisko!!!!\n";
				punkty_karne = 1;

			}

			else
			{
				cout << endl << "Na wysokosci " << wysokosc << " metrow jestes juz bezpieczny\n";
				punkty_karne = 0;

			}

			//-----------Ocena wynikow------------//
			cout << "\nMasz " << punkty_karne << " Punktow karnych\n";
			if (punkty_karne) cout << "\nPopraw sie!!!!\n";
			break;

		case 6:
			
			cout << endl << "Podaj w jakim wieku jestes: ";
			cin >> wiek;
			if (wiek <= 10)
				cout << endl << wiek << " lat Jestes jeszcze dzieckiem!";
			else if (wiek > 10 & wiek < 20)
				cout << endl << wiek << " lat Jestes nastolatkiem!";
			else if (wiek >= 20 & wiek < 150)
				cout << wiek << " lat Jestes juz dorosly!";
			else if (wiek >= 150)
				cout << wiek << " lat Nie masz prawa zyc!!!!";
			break;

		case 7:
			
			cout << "Ile gwiazdek ma miec kapitan? :";
			cin >> ile;
			cout << "\nNo to narysuje wszystkie" << ile << " : ";

			//-----------Petla while rysujaca gwiazdki------------///
			while (ile)
			{
				cout << "*";
				ile = ile - 1;
			}

			cout << "\n Teraz zmienna ile ma wartosc" << ile << endl;
			break;
		case 8:

			do
			{
				cout << "Napisz jakas litere";
				cin >> litera;
				cout << "\nNapislaes litere:" << litera << endl;
			} while (litera != 'K');
			cout << "\nSkoro napisales K to konczymy!" << endl;
			break;
		case 9:
			

			cout << "Ilu leci pasazero? ";
			cin >> ile_pasazerow;
			for (y = 1; y <= ile_pasazerow; y = y + 1)
			{
				cout << endl << "Pasazer nr " << y << " prosze zapiac pasy!\n";
			}
			cout << "Skoro wszyscy juz sie zapieli, to ladujemy!!!!";
			break;
		
		default:
			cout << "Zadales nr " << ktory << " - nie ma takiego programu!!!!\n";
			break;

	}



	return main();
	system("pause");
	return 0;
}


