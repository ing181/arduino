#include <iostream>
#include <cmath>
using namespace std;
/* Beräkna bas upphöjt till exponent */
// Returnerar bas upphöjt till exponent.
double power(double bas, double exponent); 

int main(int argc, char** argv) {
	setlocale(LC_ALL, "swedish");
	
	double bas;
	bas = 2;
	double exponent;
	exponent = 3;
	double svar;
	svar = bas;
	
//	double ut = power(bas, exponent);
    double ut = pow(bas, exponent);
	
	cout << bas << " upphöjt till " << exponent << " = " << ut << endl;
	
	
	
	return 0;
}
double power(double bas, double exponent)
{
	double svar;
	svar = bas;
	for (int i=1; i < exponent; i++)  // Körs 2 gånger
	{
		svar = (svar * bas); // Först gången: svar får värdet 4
							 // Andra gången: svar får värdet 8
	}
	
	return svar;
}
