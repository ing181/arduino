#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    setlocale(LC_ALL,"swedish");
	// heltal 
	int minAlder;
	int dinAlder;
	/*
	int minAlder=12;
	*/
	
	minAlder = 14;

	dinAlder = 13;

	cout << "Hej!" << endl;
	
	// if-sats, kontrollstruktur.
	if (minAlder < dinAlder)
	{
		cout << "Min �lder �r l�gre �n din" << endl;
	}
	else
	{
		cout << "Min �lder �r h�gre �n din" << endl;
	}

	return 0;
}
