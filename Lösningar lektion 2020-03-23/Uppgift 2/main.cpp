/*
Uppgift 2
Vidareutveckla ditt program s� att anv�ndaren har m�jlighet att v�lja r�knes�tt. Programmet
visar alltid det korrekta v�rdet. S� du kan beh�va kolla p� modulusoperatorn %..
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
	// En int variabel f�r att v�lja r�knes�tt
	int val;
	
	cout << "Mata in f�rsta talet ";
	cin >> tal1;
	cout << "Mata in andra talet ";
	cin >> tal2;
	cout << "Vill du addera, v�lj 1" << endl;
	cout << "Vill du subtrahera, v�lj 2" << endl;
	cout << "Vill du multiplicera, v�lj 3" << endl;
	cout << "Vill du dividera, v�lj 4" << endl;
	
	// V�lj r�knes�tt
	cin >> val;
	
	if (val == 1) // Om pluss
	{
		summa = tal1 + tal2;
		// Vi skriver ut p� sk�rmen
		cout << tal1 << " + " << tal2 << " = " << summa << endl;
	}
	if (val == 2) // Om minus
	{
		summa = tal1 - tal2;
		// Vi skriver ut p� sk�rmen
		cout << tal1 << " - " << tal2 << " = " << summa << endl;
	}
	if (val == 3) // Om g�nger
	{
		summa = tal1 * tal2;
		// Vi skriver ut p� sk�rmen
		cout << tal1 << " * " << tal2 << " = " << summa << endl;
	}
	if (val == 4) // Om delat med
	{
		// Vi beh�ver en variabel till, f�r resten
		int rest;
		summa = tal1 / tal2;
		rest = tal1 % tal2;
		// Vi skriver ut p� 
		// EXempel: 8/7 = 1+1/7 "7 g�r en hel g�ng och resten blir 1/7"
		cout << tal1 << " / " << tal2 << " = " << summa << "+" << rest << "/" << tal2 << endl;
	}

}
