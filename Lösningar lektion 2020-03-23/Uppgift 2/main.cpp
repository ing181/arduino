/*
Uppgift 2
Vidareutveckla ditt program så att användaren har möjlighet att välja räknesätt. Programmet
visar alltid det korrekta värdet. Så du kan behöva kolla på modulusoperatorn %..
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
	// En int variabel för att välja räknesätt
	int val;
	
	cout << "Mata in första talet ";
	cin >> tal1;
	cout << "Mata in andra talet ";
	cin >> tal2;
	cout << "Vill du addera, välj 1" << endl;
	cout << "Vill du subtrahera, välj 2" << endl;
	cout << "Vill du multiplicera, välj 3" << endl;
	cout << "Vill du dividera, välj 4" << endl;
	
	// Välj räknesätt
	cin >> val;
	
	if (val == 1) // Om pluss
	{
		summa = tal1 + tal2;
		// Vi skriver ut på skärmen
		cout << tal1 << " + " << tal2 << " = " << summa << endl;
	}
	if (val == 2) // Om minus
	{
		summa = tal1 - tal2;
		// Vi skriver ut på skärmen
		cout << tal1 << " - " << tal2 << " = " << summa << endl;
	}
	if (val == 3) // Om gånger
	{
		summa = tal1 * tal2;
		// Vi skriver ut på skärmen
		cout << tal1 << " * " << tal2 << " = " << summa << endl;
	}
	if (val == 4) // Om delat med
	{
		// Vi behöver en variabel till, för resten
		int rest;
		summa = tal1 / tal2;
		rest = tal1 % tal2;
		// Vi skriver ut på 
		// EXempel: 8/7 = 1+1/7 "7 går en hel gång och resten blir 1/7"
		cout << tal1 << " / " << tal2 << " = " << summa << "+" << rest << "/" << tal2 << endl;
	}

}
