#include <iostream>
using namespace std;
double g;
double gm;


 int main() {
   cout << "Geopardo greitis km/h : ";
   cin >> g;
   gm = g * (1/60.0);
   cout.precision(2);
   cout << "Geopardo greitis km/min : " << gm << '\n';
   return 0;
 }
