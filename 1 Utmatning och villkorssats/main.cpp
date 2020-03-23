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
		cout << "Min ålder är lägre än din" << endl;
	}
	else
	{
		cout << "Min ålder är högre än din" << endl;
	}

	return 0;
}
