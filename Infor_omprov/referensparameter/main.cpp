/*
Jämför vad som händer om du använder värdeparamterar
(tar bort &-tecknet framför a)
*/
#include <iostream>
using namespace std;
// Funktionsdeklaration
void minFunktion(int &a); // Referens x och a är samma variabel
int main() {
	setlocale(LC_ALL,"swedish");
	int x = 8;
	cout << "Fr main 1 " << x << endl; // 8
    minFunktion(x);
    cout << "Fr main 2 " << x << endl;  // -8

	
	return 0;
}
// Funktionsdefinition
void minFunktion(int &a) // Referens, x och a är samma variabel
{
	    cout << "Fr funktionen 1 " << a << endl;
		a = a * (-1);
		cout << "Fr funktionen 2 " << a << endl;
	
}

