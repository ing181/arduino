/*
J�mf�r vad som h�nder om du anv�nder v�rdeparamterar
(tar bort &-tecknet framf�r a)
*/
#include <iostream>
using namespace std;
// Funktionsdeklaration
void minFunktion(int &a); // Referens x och a �r samma variabel
int main() {
	setlocale(LC_ALL,"swedish");
	int x = 8;
	cout << "Fr main 1 " << x << endl; // 8
    minFunktion(x);
    cout << "Fr main 2 " << x << endl;  // -8

	
	return 0;
}
// Funktionsdefinition
void minFunktion(int &a) // Referens, x och a �r samma variabel
{
	    cout << "Fr funktionen 1 " << a << endl;
		a = a * (-1);
		cout << "Fr funktionen 2 " << a << endl;
	
}

