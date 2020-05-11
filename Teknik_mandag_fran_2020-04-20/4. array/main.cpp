#include <iostream>
using namespace std;
int main() {
	
	// variabler
	int i; // heltal Undvik svenska tecken, siffror i början och mellanslag.
	double d; // flyttal (decimaltal)
	string s; // Text
	
    // Arryer (Fält)
    
    int falt[1000]; // Deklaration
    falt[1] = 7; // Tilldelning
    cout << falt[1] << endl; // Utskrift
    
    i = 0;
    while ( i < 1000 )
    {
    	falt[i] = i;
    	i = i + 1; 	// 1 2 3 4
    }
    cout << "Klart" << endl;
    
    i = 0;
    while ( i < 1000 )
    {
    	cout << falt[i] << endl;
    	i = i + 1; 	// 1 2 3 4
    }
    cout << "Klart utskrift" << endl;
    
    tal1 = 0;
    tal2 = 1;
    // och så vidare
	
	return 0;
}
