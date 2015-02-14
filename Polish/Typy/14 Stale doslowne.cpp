// 14 Stale Doslowne.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int i;
	int k, n, m, j;

	i = 5;
	k = i + 010;
	cout << "k= " << k << endl;

	m = 100;
	n = 0x100;
	j = 0100;
	cout << "Wypisz m: " << m << " n: " << n << " j: " << j <<endl;

	cout << "m + n+ j = " << (m + n + j) << endl;
	cout << "Wypisujemy: " << 0x22 << " " << 022 << " " << 22 << endl;



	
	system("pause");
	return 0;
}


