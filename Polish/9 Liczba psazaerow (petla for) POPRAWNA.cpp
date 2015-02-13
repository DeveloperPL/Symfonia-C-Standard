// 9 Liczba psazaerow (petla for) POPRAWNA.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	int ile; //liczba pasazerow
	int x; //liczba obiegow petli

	cout << "Ilu leci pasazero? ";
	cin >> ile;
	for (x = 1; x <= ile; x=x + 1)
	{
		cout << endl << "Pasazer nr " << x << " prosze zapiac pasy!\n";
	}
	cout << "Skoro wszyscy juz sie zapieli, to ladujemy!!!!";


	return main();
	system("pause");
	return 0;
}


