// 20 Wyrazenie warunkowe.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	cout << "Musimy odpowiedziec tak lub nie \n"
		<< "Jesli Tak to napisz 1\n"
		<< "Jesli Nie to napisz 0 \n"
		<< "Rozumiesz? Odpowiedz: ";

	cin >> a;

	cout << "Odpowiedziales: " << (a ? "TAK" : "NIE") << ", prawda?\n";

	system("pause");
	return 0;
}


