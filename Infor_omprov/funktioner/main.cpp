#include <iostream>
using namespace std;
// Funktionsdeklaration
// ett utv�rde (det som funktionen returnerar)
// ett namn p� funktionen och
// hur m�nga inv�rden (parametrar) du vill 
// Pr�va att �ndra till referensparametrar
int minfunktion(int a, int b);
// Utv�rdet kan vara void (tomt) 
// d� returneras inget v�rde
void stort(int x);
int main() {
	setlocale(LC_ALL,"swedish");

	cout << "i main 1" << endl;
	// Funktionen anv�nds
	int x = 4;
	int y = 8;
    int frFunktionen = minfunktion(x,y); // frFunktionen tilldelas returv�rdet fr�n funktionen
    cout << "Returv�rdet fr�n funktionen " << frFunktionen << endl;
    cout << x << " " << y << endl;
	cout << "i main 2" << endl;
	
	stort(101); // Funktionen anropas (anv�nds) Pr�va ett mindre tal!
	
	return 0;
}
int minfunktion(int a, int b)
{
	cout << "i funktionen" << endl;
	a=a+100;
	b=b+100;
	return (a+b);
	cout << "BLA BLA" << endl; // kommer aldrig att h�nda
	
}
void stort(int x)
{
	if ( x <= 100 )
		return;
	cout << "Talet " << x << " som skickat till funktionen �r st�rre �n 100" << endl;
	
}
