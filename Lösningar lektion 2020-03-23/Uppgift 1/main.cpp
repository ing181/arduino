/*
Uppgift 1
Skapa ett program som l�ter anv�ndaren mata in tv� tal och l�t programmet r�kna ut
summan.
*/
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	// f�r att kunna anv�nda ���...
	setlocale(LC_ALL,"swedish");
	
	// Tv� variabler f�r heltal deklareras (skapas)
	int tal1;
	int tal2;
	// en variabel f�r summan av de tv� talen
	int summa;
	cout << "Mata in f�rsta talet ";
	cin >> tal1;
	cout << "Mata in andra talet ";
	cin >> tal2;
	/*
	summa tilldelas v�rdet av tal1 + tal2.
	Man kan t�nka s� h�r:
	"tal1 och tal2 l�ggs ihop, sen tilldelas variabeln summa det
	det sammanlagda (adderade) v�rdet"
	*/
	summa = tal1 + tal2;
	// Vi skriver ut p� sk�rmen
	cout << tal1 << " + " << tal2 << " = " << summa << endl;
	return 0;
}
