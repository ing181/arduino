#include <iostream>
#include <cmath>
using namespace std;
/* Ber�kna bas upph�jt till exponent */
// Returnerar bas upph�jt till exponent.
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
	
	cout << bas << " upph�jt till " << exponent << " = " << ut << endl;
	
	
	
	return 0;
}
double power(double bas, double exponent)
{
	double svar;
	svar = bas;
	for (int i=1; i < exponent; i++)  // K�rs 2 g�nger
	{
		svar = (svar * bas); // F�rst g�ngen: svar f�r v�rdet 4
							 // Andra g�ngen: svar f�r v�rdet 8
	}
	
	return svar;
}
