#include <iostream>
// Funktion med v�rdeparameter
void test(int a, int &b);
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "swedish");
	
   int x = 4;
   int y = 5;
   cout << "F�re funktionen " << x << " " << y << endl;
   test(x,y);
   cout << "Efter funktionen " << x << " " << y << endl;
	
	return 0;
}

void test(int a, int &b)
{
	a = 99;
	b = 88;
	cout << a << endl;
}
