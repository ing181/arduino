#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL,"swedish");
	// utmatning
	//cout << "Hej";
	// int, för heltal
	// string
	/*
	string s = "Hej";
	cout << s << endl;
	string s1 = "Klockan är mycket";
	s = "Det börjar bli sent på söndagskvällen";
	string s2 = s+s1;
	cout << s2 << endl;
	cin >> s2;
	cout << s2;
	*/
	/*
	int alder;
	cout << "Hur gammal är du?";
	cin >> alder;
	// jämfärelseoperator ==, <, >, != 
	if (alder == 23) // alder ska vara lika med 23
	{
		cout << "Du är tjugotre år gammal" << endl;
	}
	if (alder < 23) // alder ska vara mindre än 23 
	{
		cout << "Du är yngre än tjugotre år gammal" << endl;
	}
	if (alder > 23) // alder ska vara större än 23 
	{
		cout << "Du är äldre än tjugotre år gammal" << endl;
	}
	*/
	// Numeriska operatorer
	// +, -, *, /, %
	int a=7;
	int b=4;
//	int c=a+b;
//	cout << c << endl;
	cout << a/b << endl;
	cout << a%b << endl;
	
	
	
	
	return 0;
}
