#include <iostream>  // Vi anv�nder oss av iostream
                     // f�r bl. a. inmatning och utmatning (cin, cout)
#include <string>    // Nu kan vi anv�nda textstr�ngar

using namespace std;   // Talar om att det vi anv�nder
					   // tillh�r std
int main() {      // "int" (heltal)
                  // talar om att programmet kommer att
				  // skicka ett heltal till operativsystemet
				  // n�r programmet �r klart
	string s;
	s = "HEJ"; // textstr�ngen "HEJ" hamnar i variabeln s
	// eller, p� en rad string s = "HEJ";
	// Utmatning
	cout << s << endl; // Utskrift
    // Inmatning
    int tal1; // int heltal
    cin >> tal1;  // Inmatning fr�n tangentbordet, m�ste vara ett heltal
    cout << tal1 << endl;  // Utskrift
    int tal2 = tal1 + 1; // tal1 adderas med 1, summan kamnar i
                         // tal2
    cout << tal2 << endl;  // Utskrift

	return 0;  // Programmet slut, skickar 0 till OS
}

