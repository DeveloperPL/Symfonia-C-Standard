// 21 Operator sizeof.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	int mm;
	cout << "Godzina prawdy. W tym pomuterze poszczegolne typy\n"
		<< "maja nastepujace rozmiary w bajtach \n";

	cout << "typ char: \t" << sizeof(char) << endl;
	cout << "typ int: \t" << sizeof(int) << endl;
	cout << "typ short: \t" << sizeof(short) << endl;
	cout << "typ long: \t" << sizeof(long) << endl;
	cout << "typ float: \t" << sizeof(float) << endl;
	cout << "typ double: \t" << sizeof(double) << endl;
	cout << "typ long double: \t" << sizeof(long double) << endl;
	cout << "Nasz obiekt lokalny mm ma rozmiar\t " << sizeof(mm) << endl;
	
	system("pause");
	return 0;
}


