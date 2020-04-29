#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

	string x;
	cout << "Hi what is your name? ";
	cin >> x;
	
	string y;
	cout << x << " what is your phone number? ";
	cin >> y;
	
	if (y< "0" || y> "9"){
		cout << "That is not a valid number, please restart the app";
		return 0; 
	}
	
	cout << "I'm going to call you on this number " << y;
	return 0;
}
