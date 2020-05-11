#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"swedish");
	// if-sats
	if ( 1 > 6 )
	{
		cout << "Sant 1" << endl;
	
    }
	else if ( 1 < 6 )
	{
		cout << "Sant 2" << endl;
		
	}
	
	cout << "Hur många varv?";
	int varv;
	cin >> varv;
	int i = 0;
	
	while ( i < varv )
	{
		cout << "while-sats nr. 1" << endl;
		cout << "while-sats nr. 2" << endl;
		cout << "while-sats nr. 3" << endl;
		i = i + 1;
	}
	
	
	
	
	return 0;
}
