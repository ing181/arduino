/*
Uppgift 1
Skapa ett program som låter användaren mata in två tal och låt programmet räkna ut
summan.
*/
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	// för att kunna använda ÅÄÖ...
	setlocale(LC_ALL,"swedish");
	
	// Två variabler för heltal deklareras (skapas)
	int tal1;
	int tal2;
	// en variabel för summan av de två talen
	int summa;
	cout << "Mata in första talet ";
	cin >> tal1;
	cout << "Mata in andra talet ";
	cin >> tal2;
	/*
	summa tilldelas värdet av tal1 + tal2.
	Man kan tänka så här:
	"tal1 och tal2 läggs ihop, sen tilldelas variabeln summa det
	det sammanlagda (adderade) värdet"
	*/
	summa = tal1 + tal2;
	// Vi skriver ut på skärmen
	cout << tal1 << " + " << tal2 << " = " << summa << endl;
	return 0;
}
