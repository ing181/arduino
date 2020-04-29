#include <iostream>
using namespace std;
// Funktionsdeklaration
// ett utvärde (det som funktionen returnerar)
// ett namn på funktionen och
// hur många invärden (parametrar) du vill 
// Pröva att ändra till referensparametrar
int minfunktion(int a, int b);
// Utvärdet kan vara void (tomt) 
// då returneras inget värde
void stort(int x);
int main() {
	setlocale(LC_ALL,"swedish");

	cout << "i main 1" << endl;
	// Funktionen används
	int x = 4;
	int y = 8;
    int frFunktionen = minfunktion(x,y); // frFunktionen tilldelas returvärdet från funktionen
    cout << "Returvärdet från funktionen " << frFunktionen << endl;
    cout << x << " " << y << endl;
	cout << "i main 2" << endl;
	
	stort(101); // Funktionen anropas (används) Pröva ett mindre tal!
	
	return 0;
}
int minfunktion(int a, int b)
{
	cout << "i funktionen" << endl;
	a=a+100;
	b=b+100;
	return (a+b);
	cout << "BLA BLA" << endl; // kommer aldrig att hända
	
}
void stort(int x)
{
	if ( x <= 100 )
		return;
	cout << "Talet " << x << " som skickat till funktionen är större än 100" << endl;
	
}
