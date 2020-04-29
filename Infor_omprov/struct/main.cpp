#include <iostream>
using namespace std;

struct Person {
	
	string fnamn;
	string enamn;
	int ar;
	
};

int main() {
	
	Person p;  // En "Person" skapas enligt mall
	Person p1;
	
	// Kan placeras i fält (arrayer)
	// jfr
	// int falt[10];
	// falt[3] = 67;
	
	Person myPerson[10];
	myPerson[3].ar = 67;
	
	for (int i=0; i<10; i++)
	{
		cout << "Ditt förnamn ";
		cin >> myPerson[i].fnamn;
		cout << "Ditt efternamn ";
		cin >> myPerson[i].enamn;
		cout << "Din ålder ";
		cin >> myPerson[i].ar;
	}
	
	
	
	
	p.fnamn = "Marie";
	p1.fnamn = "Kalle";
	
	
	
	return 0;
}
