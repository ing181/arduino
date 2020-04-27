#include <iostream>  // Vi använder oss av iostream
                     // för bl. a. inmatning och utmatning (cin, cout)
#include <string>    // Nu kan vi använda textsträngar

using namespace std;   // Talar om att det vi använder
					   // tillhör std
int main() {      // "int" (heltal)
                  // talar om att programmet kommer att
				  // skicka ett heltal till operativsystemet
				  // när programmet är klart
	string s;
	s = "HEJ"; // textsträngen "HEJ" hamnar i variabeln s
	// eller, på en rad string s = "HEJ";
	// Utmatning
	cout << s << endl; // Utskrift
    // Inmatning
    int tal1; // int heltal
    cin >> tal1;  // Inmatning från tangentbordet, måste vara ett heltal
    cout << tal1 << endl;  // Utskrift
    int tal2 = tal1 + 1; // tal1 adderas med 1, summan kamnar i
                         // tal2
    cout << tal2 << endl;  // Utskrift

	return 0;  // Programmet slut, skickar 0 till OS
}

