#include "iostream"
using namespace std;

int k; // Vid. dydzio karosu
int e; // Vid. dydzio eseriu
int a; // Vid. dydzio auksliu

double kk; // Karoso vid. svoris
double ek; // Eserio vid. svoris
double ak; // Auksles vid. svoris

double z; // Bendras svoris

int main() {
  std::cout << "Karosu kiekis: ";
  std::cin >> k;
  std::cout << "Vid. karoso svoris: ";
  std::cin >> kk;
  std::cout << "Eseriu kiekis: ";
  std::cin >> e;
  std::cout << "Vid. eserio svoris: ";
  std::cin >> ek;
  std::cout << "Auksliu kiekis: ";
  std::cin >> a;
  std::cout << "Vid. auksles svoris: ";
  std::cin >> ak;

  z = (k * kk) + (e * ek) + (a * ak);

  std::cout << "Zvejys isviso pagavo: " << z << "Kg";
  return 0;
}
