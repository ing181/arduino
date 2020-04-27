#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"swedish");
    
    // jämförelseoperatorerna
    // == Lika med
    // != Ej lika med
    // < Mindre än
    // > Större än
    // "User input"
    // Inmatning från tangentbordet cin
    // med inmatningsoperatorn >>
    // EX:
    string s;
    cin >> s;
    cout << s << endl;
    int in; // Antag 0
    cin >> in;
    cout << "bool 1 " << (in > 1) << endl; // Första gången
    // bool
    // Kan hantera två värden sant/falskt
    bool b = (in > 1);
    int tal = 6;
    cout << "bool 2 " << b << endl; // Identisk utskrift som rad 13
    
    

	
	return 0;
}


