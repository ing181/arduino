#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"swedish");
    
    // j�mf�relseoperatorerna
    // == Lika med
    // != Ej lika med
    // < Mindre �n
    // > St�rre �n
    // "User input"
    // Inmatning fr�n tangentbordet cin
    // med inmatningsoperatorn >>
    // EX:
    string s;
    cin >> s;
    cout << s << endl;
    int in; // Antag 0
    cin >> in;
    cout << "bool 1 " << (in > 1) << endl; // F�rsta g�ngen
    // bool
    // Kan hantera tv� v�rden sant/falskt
    bool b = (in > 1);
    int tal = 6;
    cout << "bool 2 " << b << endl; // Identisk utskrift som rad 13
    
    

	
	return 0;
}


